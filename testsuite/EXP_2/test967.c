
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

int16_t x1 = INT16_MIN;
int8_t x6 = 33;
int8_t x7 = -1;
int32_t x8 = 99514;
int32_t x11 = INT32_MIN;
int64_t x14 = -1LL;
int64_t x16 = INT64_MIN;
static int16_t x17 = -322;
int8_t x23 = 6;
int8_t x25 = -1;
volatile int64_t t6 = 254528LL;
static int64_t x33 = 0LL;
int64_t x34 = -1LL;
static volatile uint16_t x36 = UINT16_MAX;
static int64_t x38 = INT64_MIN;
int32_t x45 = INT32_MIN;
uint8_t x50 = 55U;
volatile uint8_t x53 = UINT8_MAX;
uint32_t x55 = 221471U;
int16_t x57 = INT16_MAX;
uint64_t x66 = 3622472845481917074LLU;
int64_t x74 = INT64_MAX;
static int64_t x79 = -1LL;
static int32_t x86 = INT32_MIN;
int32_t x90 = 227797929;
volatile uint64_t t20 = 119380LLU;
volatile uint8_t x99 = 6U;
uint16_t x100 = UINT16_MAX;
static int64_t x104 = INT64_MIN;
int16_t x113 = INT16_MIN;
int8_t x117 = 36;
static int8_t x118 = INT8_MIN;
volatile int8_t x125 = -3;
int16_t x126 = -14;
int32_t x130 = INT32_MIN;
volatile uint32_t t30 = 1017670U;
static uint32_t x140 = UINT32_MAX;
volatile int64_t t32 = -1018461149132214612LL;
uint16_t x146 = UINT16_MAX;
int8_t x150 = -1;
int16_t x155 = -1;
uint64_t x162 = 266817LLU;
int8_t x166 = -1;
int8_t x168 = INT8_MIN;
int32_t t37 = -12958851;
static int8_t x170 = INT8_MIN;
volatile uint8_t x172 = 6U;
uint64_t x175 = 12406673736948966LLU;
volatile uint32_t t40 = 83600674U;
uint32_t x184 = UINT32_MAX;
uint8_t x185 = 30U;
static uint32_t t42 = 51847U;
int8_t x190 = -1;
volatile int16_t x196 = -2;
uint32_t t46 = 326U;
int16_t x207 = INT16_MIN;
int64_t x208 = 209599587674998LL;
int16_t x216 = INT16_MIN;
int8_t x217 = INT8_MAX;
int64_t x218 = INT64_MIN;
volatile int8_t x225 = INT8_MIN;
int8_t x229 = -1;
static int8_t x230 = -1;
uint16_t x255 = 1U;
volatile int32_t t58 = -2485785;
volatile int64_t x261 = 100788611161632LL;
int32_t x262 = 1826;
volatile int64_t x266 = 249378870670020728LL;
volatile int64_t t62 = -194911LL;
volatile uint32_t x280 = 543027877U;
int32_t x288 = INT32_MIN;
static volatile int32_t t66 = -83;
int32_t x290 = INT32_MIN;
uint8_t x295 = UINT8_MAX;
uint32_t x303 = UINT32_MAX;
int8_t x306 = -1;
int32_t x310 = INT32_MAX;
int64_t x312 = INT64_MAX;
uint64_t t74 = 583585392LLU;
static uint16_t x321 = 13U;
static uint32_t x322 = UINT32_MAX;
uint32_t t75 = 12U;
int8_t x326 = -1;
volatile uint16_t x327 = UINT16_MAX;
uint8_t x356 = UINT8_MAX;
volatile uint16_t x363 = 64U;
int32_t x365 = INT32_MIN;
static int64_t x376 = 454851LL;
uint32_t x394 = 11846U;
int64_t x398 = INT64_MIN;
int32_t x404 = INT32_MIN;
int8_t x405 = -1;
int64_t x412 = INT64_MIN;
uint64_t x419 = UINT64_MAX;
int32_t x420 = INT32_MIN;
uint32_t x421 = 16190609U;
int32_t x425 = INT32_MIN;
int16_t x427 = 3911;
int64_t x431 = -1LL;
volatile int64_t t99 = -62960LL;
static int8_t x441 = -1;
uint64_t x442 = UINT64_MAX;
volatile uint64_t t102 = 7867872968700995LLU;
int16_t x445 = -1;
int32_t t103 = -19;
uint16_t x460 = 85U;
volatile uint8_t x462 = 28U;
int16_t x464 = 0;
uint16_t x465 = 299U;
volatile uint64_t t108 = 442088243LLU;
uint32_t t109 = 7070U;
volatile int8_t x473 = 0;
int16_t x483 = INT16_MIN;
static int16_t x486 = 59;
uint32_t x488 = UINT32_MAX;
volatile uint32_t x493 = 30068U;
uint64_t x494 = 147294234159LLU;
static volatile uint16_t x495 = 99U;
int64_t t116 = 17948LL;
static int8_t x504 = INT8_MIN;
volatile uint64_t t117 = 1019916910891512865LLU;
static volatile int8_t x507 = -14;
static int16_t x510 = 49;
volatile int64_t t119 = 2262LL;
static uint64_t x517 = UINT64_MAX;
static uint16_t x519 = 561U;
static volatile uint64_t t120 = 4LLU;
uint16_t x530 = 7967U;
uint8_t x544 = 34U;
int32_t x549 = INT32_MAX;
int16_t x558 = -1;
static int32_t x561 = -980407385;
uint32_t x563 = 4007726U;
int16_t x567 = INT16_MAX;
int8_t x569 = 27;
uint64_t x572 = 15027266221LLU;
volatile uint64_t t133 = 1LLU;
volatile int32_t x580 = -1;
int64_t t135 = 12407834708LL;
int16_t x581 = INT16_MIN;
volatile int16_t x583 = INT16_MAX;
int64_t x584 = INT64_MIN;
int8_t x587 = -1;
static volatile uint64_t t137 = 1720703855404033673LLU;
static int64_t t139 = 93686LL;
volatile uint64_t x603 = 69171478LLU;
int64_t x606 = -1LL;
int32_t x607 = -92243885;
uint8_t x609 = UINT8_MAX;
static int64_t x618 = INT64_MIN;
static volatile int32_t x619 = -41625143;
int16_t x651 = 2034;
volatile uint32_t x654 = 490258896U;
int32_t x657 = -1;
int8_t x661 = -31;
static int64_t x666 = INT64_MAX;
int16_t x668 = INT16_MIN;
int64_t t153 = 16540141048012LL;
int16_t x679 = -1;
int32_t t155 = 14658;
int64_t x681 = INT64_MIN;
int64_t x686 = -1LL;
volatile int64_t t158 = -7809926141405171LL;
int64_t x708 = INT64_MIN;
volatile int8_t x709 = INT8_MAX;
uint64_t x710 = 6850221012379LLU;
static uint64_t t163 = 1428276012054482422LLU;
volatile int64_t x716 = -1LL;
volatile int32_t x717 = INT32_MIN;
static int16_t x718 = INT16_MIN;
static volatile int32_t t165 = -13503;
uint32_t x721 = UINT32_MAX;
volatile int64_t t166 = 191252443939LL;
int64_t x725 = 58184LL;
int32_t x727 = -1;
int8_t x729 = 6;
uint8_t x732 = UINT8_MAX;
int16_t x736 = INT16_MIN;
uint64_t x747 = UINT64_MAX;
volatile uint64_t t172 = 453054754750162LLU;
int32_t x750 = 0;
uint16_t x752 = UINT16_MAX;
int64_t x755 = -494052199912LL;
int8_t x759 = INT8_MIN;
uint8_t x764 = UINT8_MAX;
volatile int16_t x767 = INT16_MAX;
int8_t x773 = -1;
int8_t x793 = -1;
static int64_t x796 = INT64_MIN;
volatile uint64_t t183 = 72222002374632392LLU;
int32_t t186 = -4408;
volatile int8_t x812 = INT8_MIN;
volatile uint64_t t188 = 3874178134LLU;
int16_t x826 = INT16_MIN;
uint8_t x827 = 30U;
uint64_t t193 = 354216822590242318LLU;
static int16_t x837 = 2;
volatile int64_t x839 = INT64_MIN;
static uint64_t t194 = 58695260634LLU;
int8_t x841 = INT8_MAX;
int16_t x844 = 979;
uint16_t x854 = UINT16_MAX;
uint8_t x855 = 116U;
volatile uint64_t x859 = 5299012059597LLU;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	int16_t x3 = 5;
	int32_t x4 = INT32_MAX;
	volatile int64_t t0 = -206016078200767LL;

    t0 = ((x1^(x2%x3))+x4);

    if (t0 != 2147516412LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	int32_t t1 = -25167;

    t1 = ((x5^(x6%x7))+x8);

    if (t1 != 99641) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1631LL;
	int32_t x10 = INT32_MIN;
	int32_t x12 = -1;
	int64_t t2 = -56128937634398LL;

    t2 = ((x9^(x10%x11))+x12);

    if (t2 != -1632LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	volatile int64_t x15 = -28000070407168LL;
	int64_t t3 = -1LL;

    t3 = ((x13^(x14%x15))+x16);

    if (t3 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = INT64_MIN;
	uint16_t x19 = 22325U;
	static volatile int64_t x20 = -1LL;
	volatile int64_t t4 = -22564LL;

    t4 = ((x17^(x18%x19))+x20);

    if (t4 != 10463LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	uint32_t x22 = 914093032U;
	int64_t x24 = -1LL;
	static int64_t t5 = 465132453584939486LL;

    t5 = ((x21^(x22%x23))+x24);

    if (t5 != 32762LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = -1990870;
	int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MIN;

    t6 = ((x25^(x26%x27))+x28);

    if (t6 != 1990741LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = INT32_MAX;
	uint8_t x30 = 48U;
	volatile uint16_t x31 = 34U;
	volatile int32_t x32 = INT32_MIN;
	int32_t t7 = -25;

    t7 = ((x29^(x30%x31))+x32);

    if (t7 != -15) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x35 = -24;
	int64_t t8 = 12453LL;

    t8 = ((x33^(x34%x35))+x36);

    if (t8 != 65534LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 4899692370LLU;
	uint16_t x39 = 2U;
	int32_t x40 = INT32_MIN;
	static uint64_t t9 = 125589016LLU;

    t9 = ((x37^(x38%x39))+x40);

    if (t9 != 2752208722LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x46 = 25U;
	int8_t x47 = 3;
	int32_t x48 = -1;
	volatile uint32_t t10 = 3U;

    t10 = ((x45^(x46%x47))+x48);

    if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = INT32_MIN;
	volatile int8_t x51 = INT8_MIN;
	static int64_t x52 = 281096331471596LL;
	volatile int64_t t11 = -93139LL;

    t11 = ((x49^(x50%x51))+x52);

    if (t11 != 281094183988003LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x54 = 5429U;
	int32_t x56 = -1;
	uint32_t t12 = 15307U;

    t12 = ((x53^(x54%x55))+x56);

    if (t12 != 5577U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MAX;
	static volatile int32_t x60 = -32590;
	static int64_t t13 = -68289109478831517LL;

    t13 = ((x57^(x58%x59))+x60);

    if (t13 != -65358LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	int32_t x62 = 27370322;
	int16_t x63 = INT16_MIN;
	int64_t x64 = 346LL;
	volatile int64_t t14 = -6LL;

    t14 = ((x61^(x62%x63))+x64);

    if (t14 != 56839LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = UINT64_MAX;
	uint16_t x67 = 21818U;
	uint8_t x68 = 1U;
	volatile uint64_t t15 = 717163LLU;

    t15 = ((x65^(x66%x67))+x68);

    if (t15 != 18446744073709537664LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = -1;
	uint8_t x70 = 1U;
	volatile uint32_t x71 = 12806019U;
	static volatile uint8_t x72 = 7U;
	static uint32_t t16 = 46366U;

    t16 = ((x69^(x70%x71))+x72);

    if (t16 != 5U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	volatile int8_t x76 = 1;
	volatile int64_t t17 = -632565813737457210LL;

    t17 = ((x73^(x74%x75))+x76);

    if (t17 != -2147483520LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -1;
	volatile int64_t x78 = INT64_MIN;
	static int16_t x80 = 1;
	int64_t t18 = -1LL;

    t18 = ((x77^(x78%x79))+x80);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x85 = 61U;
	static int8_t x87 = -1;
	volatile uint16_t x88 = UINT16_MAX;
	int32_t t19 = -285671334;

    t19 = ((x85^(x86%x87))+x88);

    if (t19 != 65596) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x89 = 325U;
	static volatile int64_t x91 = -380LL;
	static uint64_t x92 = UINT64_MAX;

    t20 = ((x89^(x90%x91))+x92);

    if (t20 != 283LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MIN;
	volatile uint32_t x94 = UINT32_MAX;
	volatile int32_t x95 = -1;
	int16_t x96 = -10782;
	static volatile uint32_t t21 = 2002691U;

    t21 = ((x93^(x94%x95))+x96);

    if (t21 != 4294923746U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x97 = -1;
	uint64_t x98 = 296514LLU;
	uint64_t t22 = 1201036327LLU;

    t22 = ((x97^(x98%x99))+x100);

    if (t22 != 65534LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x101 = 5746351408838978LLU;
	uint64_t x102 = 8649206LLU;
	int16_t x103 = INT16_MAX;
	uint64_t t23 = 317488032LLU;

    t23 = ((x101^(x102%x103))+x104);

    if (t23 != 9229118388263584703LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = 7658;
	int32_t x110 = INT32_MIN;
	uint8_t x111 = 15U;
	int64_t x112 = 5670876LL;
	static int64_t t24 = 6819907LL;

    t24 = ((x109^(x110%x111))+x112);

    if (t24 != 5663214LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x114 = 18;
	static int64_t x115 = INT64_MAX;
	volatile int32_t x116 = 258;
	volatile int64_t t25 = 363331913LL;

    t25 = ((x113^(x114%x115))+x116);

    if (t25 != -32492LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x119 = -1;
	int64_t x120 = -242LL;
	int64_t t26 = 51165575LL;

    t26 = ((x117^(x118%x119))+x120);

    if (t26 != -206LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = -88250619649695698LL;
	int64_t x122 = INT64_MAX;
	int16_t x123 = -56;
	volatile uint32_t x124 = 28U;
	volatile int64_t t27 = -25313LL;

    t27 = ((x121^(x122%x123))+x124);

    if (t27 != -88250619649695675LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x127 = INT8_MIN;
	uint32_t x128 = 306060U;
	uint32_t t28 = 1948U;

    t28 = ((x125^(x126%x127))+x128);

    if (t28 != 306075U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	volatile uint64_t x131 = UINT64_MAX;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t29 = 86109LLU;

    t29 = ((x129^(x130%x131))+x132);

    if (t29 != 2147418112LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x133 = 507010618U;
	static int8_t x134 = INT8_MIN;
	uint32_t x135 = 563U;
	static uint16_t x136 = 1644U;

    t30 = ((x133^(x134%x135))+x136);

    if (t30 != 507012210U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x137 = 989LLU;
	int16_t x138 = -1;
	int64_t x139 = -1785LL;
	uint64_t t31 = 42205146LLU;

    t31 = ((x137^(x138%x139))+x140);

    if (t31 != 4294966305LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = -1;
	int64_t x142 = 153327766032559LL;
	static int16_t x143 = -1;
	int8_t x144 = INT8_MIN;

    t32 = ((x141^(x142%x143))+x144);

    if (t32 != -129LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x145 = UINT8_MAX;
	uint16_t x147 = UINT16_MAX;
	static int64_t x148 = INT64_MIN;
	int64_t t33 = 16569756708LL;

    t33 = ((x145^(x146%x147))+x148);

    if (t33 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = -572720393LL;
	uint64_t x151 = 9051396227677980LLU;
	int64_t x152 = INT64_MAX;
	uint64_t t34 = 7189911LLU;

    t34 = ((x149^(x150%x151))+x152);

    if (t34 != 9214322078419922115LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = -817;
	int8_t x154 = -29;
	static uint64_t x156 = 69349LLU;
	volatile uint64_t t35 = 490LLU;

    t35 = ((x153^(x154%x155))+x156);

    if (t35 != 68532LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x161 = 0U;
	int8_t x163 = -18;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t36 = 23979168LLU;

    t36 = ((x161^(x162%x163))+x164);

    if (t36 != 234049LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x165 = INT16_MIN;
	static int8_t x167 = -1;

    t37 = ((x165^(x166%x167))+x168);

    if (t37 != -32896) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = INT8_MIN;
	static int16_t x171 = INT16_MIN;
	int32_t t38 = 696;

    t38 = ((x169^(x170%x171))+x172);

    if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = 207;
	uint8_t x174 = 2U;
	int16_t x176 = -52;
	static volatile uint64_t t39 = 4964025LLU;

    t39 = ((x173^(x174%x175))+x176);

    if (t39 != 153LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x177 = UINT8_MAX;
	static int32_t x178 = INT32_MAX;
	uint16_t x179 = 23U;
	uint32_t x180 = 987446222U;

    t40 = ((x177^(x178%x179))+x180);

    if (t40 != 987446472U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x181 = 97362725608LLU;
	static volatile int32_t x182 = INT32_MAX;
	static int8_t x183 = INT8_MIN;
	uint64_t t41 = 2111805006655976442LLU;

    t41 = ((x181^(x182%x183))+x184);

    if (t41 != 101657692822LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x186 = UINT32_MAX;
	static int8_t x187 = INT8_MIN;
	int32_t x188 = -16856;

    t42 = ((x185^(x186%x187))+x188);

    if (t42 != 4294950537U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = 18;
	uint32_t x191 = 58538141U;
	volatile uint64_t x192 = 386626476970095712LLU;
	uint64_t t43 = 504330117LLU;

    t43 = ((x189^(x190%x191))+x192);

    if (t43 != 386626476991778696LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x193 = -1;
	int16_t x194 = -1;
	static int32_t x195 = INT32_MIN;
	volatile int32_t t44 = -63228933;

    t44 = ((x193^(x194%x195))+x196);

    if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x197 = 13U;
	static int64_t x198 = INT64_MIN;
	uint8_t x199 = 51U;
	int8_t x200 = -1;
	int64_t t45 = 8576990805156934LL;

    t45 = ((x197^(x198%x199))+x200);

    if (t45 != -22LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x201 = 18U;
	uint8_t x202 = 2U;
	uint32_t x203 = 1U;
	int32_t x204 = INT32_MAX;

    t46 = ((x201^(x202%x203))+x204);

    if (t46 != 2147483665U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x205 = 39U;
	int16_t x206 = INT16_MAX;
	volatile int64_t t47 = 44255392LL;

    t47 = ((x205^(x206%x207))+x208);

    if (t47 != 209599587707726LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x209 = UINT8_MAX;
	volatile uint16_t x210 = UINT16_MAX;
	int8_t x211 = 7;
	int32_t x212 = INT32_MIN;
	volatile int32_t t48 = -7;

    t48 = ((x209^(x210%x211))+x212);

    if (t48 != -2147483394) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = INT32_MIN;
	int16_t x214 = INT16_MIN;
	volatile uint8_t x215 = UINT8_MAX;
	volatile int32_t t49 = -268113356;

    t49 = ((x213^(x214%x215))+x216);

    if (t49 != 2147450752) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x219 = -43472820054265LL;
	int16_t x220 = INT16_MIN;
	volatile int64_t t50 = -127625386577227476LL;

    t50 = ((x217^(x218%x219))+x220);

    if (t50 != -4642861729061LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x221 = -1;
	int32_t x222 = -14091;
	int64_t x223 = 2261830101792LL;
	static int32_t x224 = INT32_MIN;
	static volatile int64_t t51 = -1034967276LL;

    t51 = ((x221^(x222%x223))+x224);

    if (t51 != -2147469558LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x226 = 118487444LLU;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = INT64_MAX;
	static volatile uint64_t t52 = 31563287135LLU;

    t52 = ((x225^(x226%x227))+x228);

    if (t52 != 9223372036854775587LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x231 = 1;
	uint16_t x232 = 743U;
	int32_t t53 = 7211;

    t53 = ((x229^(x230%x231))+x232);

    if (t53 != 742) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x234 = -4;
	int16_t x235 = -1;
	volatile uint64_t x236 = UINT64_MAX;
	volatile uint64_t t54 = 1LLU;

    t54 = ((x233^(x234%x235))+x236);

    if (t54 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x237 = 1U;
	volatile int8_t x238 = INT8_MIN;
	uint16_t x239 = 408U;
	int32_t x240 = INT32_MAX;
	int32_t t55 = -81;

    t55 = ((x237^(x238%x239))+x240);

    if (t55 != 2147483520) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x241 = 28U;
	int64_t x242 = -8429991097364LL;
	volatile int32_t x243 = 34029636;
	int64_t x244 = INT64_MAX;
	volatile int64_t t56 = 4135158211713426LL;

    t56 = ((x241^(x242%x243))+x244);

    if (t56 != 9223372036821226879LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x249 = -1;
	int8_t x250 = INT8_MIN;
	int32_t x251 = -15717;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t57 = -3;

    t57 = ((x249^(x250%x251))+x252);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x253 = -1;
	volatile int32_t x254 = INT32_MIN;
	volatile uint8_t x256 = UINT8_MAX;

    t58 = ((x253^(x254%x255))+x256);

    if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x257 = 16U;
	uint8_t x258 = UINT8_MAX;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = INT64_MIN;
	volatile int64_t t59 = 113504LL;

    t59 = ((x257^(x258%x259))+x260);

    if (t59 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x263 = -13;
	int8_t x264 = INT8_MAX;
	volatile int64_t t60 = -469073623LL;

    t60 = ((x261^(x262%x263))+x264);

    if (t60 != 100788611161765LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x265 = INT64_MIN;
	int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MAX;
	int64_t t61 = 307025045460998LL;

    t61 = ((x265^(x266%x267))+x268);

    if (t61 != -9223372032681029513LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x269 = -1;
	uint16_t x270 = UINT16_MAX;
	int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MAX;

    t62 = ((x269^(x270%x271))+x272);

    if (t62 != -32769LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x273 = UINT16_MAX;
	static uint64_t x274 = 252LLU;
	int16_t x275 = INT16_MIN;
	int64_t x276 = -3711641LL;
	volatile uint64_t t63 = 219547509580LLU;

    t63 = ((x273^(x274%x275))+x276);

    if (t63 != 18446744073705905258LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = INT32_MAX;
	static uint8_t x278 = 6U;
	int32_t x279 = INT32_MIN;
	static volatile uint32_t t64 = 41977U;

    t64 = ((x277^(x278%x279))+x280);

    if (t64 != 2690511518U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x281 = 25U;
	uint64_t x282 = 3138293984LLU;
	uint16_t x283 = UINT16_MAX;
	uint8_t x284 = UINT8_MAX;
	static uint64_t t65 = 69400344736127039LLU;

    t65 = ((x281^(x282%x283))+x284);

    if (t65 != 19701LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x285 = 445U;
	uint16_t x286 = UINT16_MAX;
	volatile int8_t x287 = INT8_MIN;

    t66 = ((x285^(x286%x287))+x288);

    if (t66 != -2147483198) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x289 = INT16_MAX;
	int32_t x291 = INT32_MAX;
	int16_t x292 = -70;
	int32_t t67 = -10045472;

    t67 = ((x289^(x290%x291))+x292);

    if (t67 != -32838) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x293 = 223;
	uint32_t x294 = 38U;
	static uint8_t x296 = UINT8_MAX;
	uint32_t t68 = 4175U;

    t68 = ((x293^(x294%x295))+x296);

    if (t68 != 504U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x297 = 84020676LLU;
	int8_t x298 = INT8_MAX;
	uint32_t x299 = 2U;
	static int8_t x300 = -1;
	volatile uint64_t t69 = 139LLU;

    t69 = ((x297^(x298%x299))+x300);

    if (t69 != 84020676LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x301 = INT64_MAX;
	int32_t x302 = INT32_MAX;
	uint8_t x304 = 3U;
	int64_t t70 = 34782366LL;

    t70 = ((x301^(x302%x303))+x304);

    if (t70 != 9223372034707292163LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x305 = INT32_MAX;
	static int16_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int64_t t71 = 1217210LL;

    t71 = ((x305^(x306%x307))+x308);

    if (t71 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x309 = -1;
	int64_t x311 = INT64_MIN;
	volatile int64_t t72 = 12194811LL;

    t72 = ((x309^(x310%x311))+x312);

    if (t72 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x313 = UINT8_MAX;
	uint8_t x314 = 13U;
	int8_t x315 = -1;
	uint32_t x316 = UINT32_MAX;
	static uint32_t t73 = 122U;

    t73 = ((x313^(x314%x315))+x316);

    if (t73 != 254U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x317 = 3268657U;
	uint8_t x318 = 26U;
	volatile uint64_t x319 = UINT64_MAX;
	uint32_t x320 = UINT32_MAX;

    t74 = ((x317^(x318%x319))+x320);

    if (t74 != 4298235946LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x323 = 578285;
	uint8_t x324 = UINT8_MAX;

    t75 = ((x321^(x322%x323))+x324);

    if (t75 != 44852U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x325 = 1U;
	static int32_t x328 = INT32_MAX;
	volatile int32_t t76 = -3910;

    t76 = ((x325^(x326%x327))+x328);

    if (t76 != 2147483645) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x329 = 90U;
	static int8_t x330 = 10;
	volatile int32_t x331 = INT32_MIN;
	int16_t x332 = 1;
	static volatile int32_t t77 = 60692;

    t77 = ((x329^(x330%x331))+x332);

    if (t77 != 81) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x333 = 4LLU;
	int16_t x334 = 517;
	int16_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	uint64_t t78 = 71121058185LLU;

    t78 = ((x333^(x334%x335))+x336);

    if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x341 = UINT32_MAX;
	static volatile int32_t x342 = -1;
	int32_t x343 = 1;
	static volatile int32_t x344 = 619686087;
	volatile uint32_t t79 = 334330853U;

    t79 = ((x341^(x342%x343))+x344);

    if (t79 != 619686086U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MIN;
	static int32_t x347 = INT32_MIN;
	int32_t x348 = 15888;
	volatile int32_t t80 = 185;

    t80 = ((x345^(x346%x347))+x348);

    if (t80 != 15888) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x349 = UINT8_MAX;
	int64_t x350 = -1LL;
	uint32_t x351 = 1U;
	static int8_t x352 = INT8_MAX;
	int64_t t81 = -71908433051LL;

    t81 = ((x349^(x350%x351))+x352);

    if (t81 != 382LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MAX;
	int32_t x355 = INT32_MIN;
	int32_t t82 = -1365;

    t82 = ((x353^(x354%x355))+x356);

    if (t82 != -2147483266) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x357 = -1LL;
	int8_t x358 = INT8_MAX;
	uint32_t x359 = 34U;
	int16_t x360 = INT16_MAX;
	volatile int64_t t83 = 1502706544291LL;

    t83 = ((x357^(x358%x359))+x360);

    if (t83 != 32741LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x361 = INT64_MIN;
	static volatile int8_t x362 = -1;
	int32_t x364 = -468460588;
	static volatile int64_t t84 = -2501632251LL;

    t84 = ((x361^(x362%x363))+x364);

    if (t84 != 9223372036386315219LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x366 = 701U;
	static volatile uint64_t x367 = 202LLU;
	int32_t x368 = INT32_MAX;
	volatile uint64_t t85 = 45201526278869LLU;

    t85 = ((x365^(x366%x367))+x368);

    if (t85 != 94LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x373 = INT16_MAX;
	int16_t x374 = 28;
	int8_t x375 = -1;
	volatile int64_t t86 = -1201987490146902311LL;

    t86 = ((x373^(x374%x375))+x376);

    if (t86 != 487618LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x377 = -1;
	uint64_t x378 = UINT64_MAX;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = -1LL;
	uint64_t t87 = 32360789LLU;

    t87 = ((x377^(x378%x379))+x380);

    if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x381 = 1937070518LL;
	uint16_t x382 = 0U;
	volatile int16_t x383 = INT16_MIN;
	static int8_t x384 = INT8_MIN;
	int64_t t88 = 179568235592471614LL;

    t88 = ((x381^(x382%x383))+x384);

    if (t88 != 1937070390LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x389 = 3851769630966911LLU;
	int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MAX;
	uint32_t x392 = 56279U;
	volatile uint64_t t89 = 1367656246418LLU;

    t89 = ((x389^(x390%x391))+x392);

    if (t89 != 18442892304078640983LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x393 = 130357115172667696LL;
	volatile uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MAX;
	volatile int64_t t90 = -46517788531653LL;

    t90 = ((x393^(x394%x395))+x396);

    if (t90 != 130357115172712309LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x397 = INT32_MIN;
	uint8_t x399 = 43U;
	static int8_t x400 = INT8_MIN;
	int64_t t91 = -39905229639315870LL;

    t91 = ((x397^(x398%x399))+x400);

    if (t91 != 2147483478LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x401 = -2;
	volatile int64_t x402 = -1LL;
	int8_t x403 = -1;
	volatile int64_t t92 = 2708674LL;

    t92 = ((x401^(x402%x403))+x404);

    if (t92 != -2147483650LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x406 = 772U;
	int16_t x407 = 3;
	int8_t x408 = 20;
	volatile uint32_t t93 = 1403U;

    t93 = ((x405^(x406%x407))+x408);

    if (t93 != 18U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x409 = 40U;
	uint32_t x410 = UINT32_MAX;
	static int8_t x411 = -1;
	int64_t t94 = -3LL;

    t94 = ((x409^(x410%x411))+x412);

    if (t94 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x413 = INT16_MIN;
	uint32_t x414 = UINT32_MAX;
	int32_t x415 = INT32_MIN;
	int64_t x416 = -1LL;
	volatile int64_t t95 = -3LL;

    t95 = ((x413^(x414%x415))+x416);

    if (t95 != 2147516414LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x417 = INT32_MAX;
	int32_t x418 = INT32_MAX;
	static uint64_t t96 = 637631948598LLU;

    t96 = ((x417^(x418%x419))+x420);

    if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x422 = 305939005667330655LLU;
	int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MIN;
	uint64_t t97 = 1934177795475930314LLU;

    t97 = ((x421^(x422%x423))+x424);

    if (t97 != 305939005659891406LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x426 = INT32_MIN;
	volatile uint64_t x428 = 46341668925LLU;
	volatile uint64_t t98 = 699920530LLU;

    t98 = ((x425^(x426%x427))+x428);

    if (t98 != 48489152093LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x429 = -1;
	int32_t x430 = INT32_MIN;
	int8_t x432 = INT8_MIN;

    t99 = ((x429^(x430%x431))+x432);

    if (t99 != -129LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x433 = -1LL;
	static int32_t x434 = -4256768;
	static int32_t x435 = 3;
	int64_t x436 = 29881LL;
	static volatile int64_t t100 = 27511641545456LL;

    t100 = ((x433^(x434%x435))+x436);

    if (t100 != 29882LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x437 = -387;
	int64_t x438 = -1LL;
	static int8_t x439 = -1;
	static int32_t x440 = INT32_MAX;
	volatile int64_t t101 = -915299447727LL;

    t101 = ((x437^(x438%x439))+x440);

    if (t101 != 2147483260LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x443 = INT16_MAX;
	int64_t x444 = -227498319993733LL;

    t102 = ((x441^(x442%x443))+x444);

    if (t102 != 18446516575389557867LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x446 = INT32_MAX;
	uint16_t x447 = 14U;
	uint16_t x448 = 34U;

    t103 = ((x445^(x446%x447))+x448);

    if (t103 != 32) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x449 = INT8_MIN;
	int32_t x450 = 4066351;
	int8_t x451 = INT8_MIN;
	uint32_t x452 = UINT32_MAX;
	static volatile uint32_t t104 = 112622U;

    t104 = ((x449^(x450%x451))+x452);

    if (t104 != 4294967214U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x453 = 56U;
	static int32_t x454 = INT32_MIN;
	volatile int8_t x455 = -1;
	int16_t x456 = INT16_MIN;
	int32_t t105 = 119;

    t105 = ((x453^(x454%x455))+x456);

    if (t105 != -32712) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x457 = INT32_MAX;
	uint32_t x458 = UINT32_MAX;
	uint32_t x459 = UINT32_MAX;
	uint32_t t106 = 8U;

    t106 = ((x457^(x458%x459))+x460);

    if (t106 != 2147483732U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x461 = UINT16_MAX;
	uint16_t x463 = 10U;
	int32_t t107 = -13;

    t107 = ((x461^(x462%x463))+x464);

    if (t107 != 65527) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x466 = 12;
	static uint64_t x467 = 17267712648LLU;
	static int64_t x468 = -39000744072101675LL;

    t108 = ((x465^(x466%x467))+x468);

    if (t108 != 18407743329637450236LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x469 = INT16_MIN;
	static int32_t x470 = INT32_MAX;
	uint32_t x471 = 3976U;
	int16_t x472 = INT16_MIN;

    t109 = ((x469^(x470%x471))+x472);

    if (t109 != 4294904071U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x474 = UINT32_MAX;
	int32_t x475 = INT32_MAX;
	static int32_t x476 = 35326;
	uint32_t t110 = 43U;

    t110 = ((x473^(x474%x475))+x476);

    if (t110 != 35327U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x477 = UINT16_MAX;
	uint32_t x478 = 1271443008U;
	uint8_t x479 = 1U;
	uint16_t x480 = 9U;
	uint32_t t111 = 1685U;

    t111 = ((x477^(x478%x479))+x480);

    if (t111 != 65544U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x481 = 55U;
	int64_t x482 = INT64_MIN;
	static int32_t x484 = INT32_MIN;
	int64_t t112 = -2LL;

    t112 = ((x481^(x482%x483))+x484);

    if (t112 != -2147483593LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x485 = INT64_MIN;
	static volatile uint16_t x487 = UINT16_MAX;
	int64_t t113 = 2044LL;

    t113 = ((x485^(x486%x487))+x488);

    if (t113 != -9223372032559808454LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x489 = 0LLU;
	uint8_t x490 = 2U;
	volatile int16_t x491 = 2391;
	int64_t x492 = -1LL;
	uint64_t t114 = 792771491308859036LLU;

    t114 = ((x489^(x490%x491))+x492);

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x496 = INT16_MAX;
	uint64_t t115 = 2955365291407848395LLU;

    t115 = ((x493^(x494%x495))+x496);

    if (t115 != 62833LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x497 = INT64_MIN;
	static uint8_t x498 = UINT8_MAX;
	uint16_t x499 = 15472U;
	int32_t x500 = -1;

    t116 = ((x497^(x498%x499))+x500);

    if (t116 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x501 = 1767689669158581LLU;
	int32_t x502 = 2095354;
	static volatile int64_t x503 = INT64_MIN;

    t117 = ((x501^(x502%x503))+x504);

    if (t117 != 1767689669467599LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x505 = -9;
	static int8_t x506 = INT8_MAX;
	uint8_t x508 = 8U;
	int32_t t118 = 298236929;

    t118 = ((x505^(x506%x507))+x508);

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x509 = 254;
	volatile int16_t x511 = 7781;
	int64_t x512 = -102970208343594LL;

    t119 = ((x509^(x510%x511))+x512);

    if (t119 != -102970208343387LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x518 = 314U;
	volatile int64_t x520 = INT64_MAX;

    t120 = ((x517^(x518%x519))+x520);

    if (t120 != 9223372036854775492LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x521 = 111U;
	static int64_t x522 = -175532311125723LL;
	int32_t x523 = -14;
	static volatile uint32_t x524 = 22466U;
	volatile int64_t t121 = 202048LL;

    t121 = ((x521^(x522%x523))+x524);

    if (t121 != 22366LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x525 = INT8_MIN;
	uint8_t x526 = 7U;
	int16_t x527 = INT16_MIN;
	int64_t x528 = 13LL;
	int64_t t122 = 812289670651LL;

    t122 = ((x525^(x526%x527))+x528);

    if (t122 != -108LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x529 = INT16_MIN;
	volatile uint8_t x531 = 100U;
	volatile uint32_t x532 = 200641187U;
	volatile uint32_t t123 = 56U;

    t123 = ((x529^(x530%x531))+x532);

    if (t123 != 200608486U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x533 = 1U;
	int16_t x534 = 534;
	int8_t x535 = 1;
	volatile int32_t x536 = INT32_MAX;
	static uint32_t t124 = 0U;

    t124 = ((x533^(x534%x535))+x536);

    if (t124 != 2147483648U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x537 = -7;
	volatile uint64_t x538 = 53302088542867LLU;
	volatile int64_t x539 = INT64_MIN;
	uint8_t x540 = UINT8_MAX;
	static volatile uint64_t t125 = 83163203584374614LLU;

    t125 = ((x537^(x538%x539))+x540);

    if (t125 != 18446690771621009001LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x541 = INT32_MAX;
	static uint8_t x542 = UINT8_MAX;
	int16_t x543 = INT16_MIN;
	int32_t t126 = 26;

    t126 = ((x541^(x542%x543))+x544);

    if (t126 != 2147483426) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x545 = -1LL;
	int16_t x546 = 10;
	int32_t x547 = INT32_MAX;
	int16_t x548 = INT16_MAX;
	volatile int64_t t127 = -2404LL;

    t127 = ((x545^(x546%x547))+x548);

    if (t127 != 32756LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x550 = -1LL;
	int64_t x551 = INT64_MIN;
	int32_t x552 = -1;
	static volatile int64_t t128 = 121LL;

    t128 = ((x549^(x550%x551))+x552);

    if (t128 != -2147483649LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x553 = -3;
	int16_t x554 = INT16_MIN;
	static uint64_t x555 = UINT64_MAX;
	int16_t x556 = INT16_MIN;
	volatile uint64_t t129 = 473337LLU;

    t129 = ((x553^(x554%x555))+x556);

    if (t129 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x557 = INT32_MIN;
	static uint64_t x559 = 495874LLU;
	int16_t x560 = 23;
	uint64_t t130 = 2LLU;

    t130 = ((x557^(x558%x559))+x560);

    if (t130 != 18446744071562506600LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x562 = UINT16_MAX;
	int16_t x564 = -1;
	uint32_t t131 = 39054766U;

    t131 = ((x561^(x562%x563))+x564);

    if (t131 != 3314603095U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x565 = 3U;
	static int64_t x566 = -4396626873847LL;
	uint8_t x568 = UINT8_MAX;
	volatile int64_t t132 = 13468068893676897LL;

    t132 = ((x565^(x566%x567))+x568);

    if (t132 != -29629LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x570 = 0;
	static int32_t x571 = 1094483;

    t133 = ((x569^(x570%x571))+x572);

    if (t133 != 15027266248LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x573 = UINT32_MAX;
	int32_t x574 = -1;
	static uint16_t x575 = 1251U;
	int8_t x576 = INT8_MIN;
	volatile uint32_t t134 = 31U;

    t134 = ((x573^(x574%x575))+x576);

    if (t134 != 4294967168U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x577 = INT8_MAX;
	int64_t x578 = INT64_MIN;
	int64_t x579 = INT64_MIN;

    t135 = ((x577^(x578%x579))+x580);

    if (t135 != 126LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x582 = -1;
	volatile int64_t t136 = 11728278224LL;

    t136 = ((x581^(x582%x583))+x584);

    if (t136 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x585 = 566084807605LLU;
	uint8_t x586 = UINT8_MAX;
	uint8_t x588 = 1U;

    t137 = ((x585^(x586%x587))+x588);

    if (t137 != 566084807606LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x589 = UINT32_MAX;
	volatile uint64_t x590 = 5382872LLU;
	uint8_t x591 = 1U;
	int8_t x592 = 4;
	uint64_t t138 = 153116915524LLU;

    t138 = ((x589^(x590%x591))+x592);

    if (t138 != 4294967299LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x597 = -1;
	int64_t x598 = -14LL;
	static int16_t x599 = INT16_MIN;
	int64_t x600 = INT64_MIN;

    t139 = ((x597^(x598%x599))+x600);

    if (t139 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x601 = -1;
	static uint32_t x602 = 20397U;
	uint16_t x604 = UINT16_MAX;
	volatile uint64_t t140 = 13LLU;

    t140 = ((x601^(x602%x603))+x604);

    if (t140 != 45137LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x605 = 211LL;
	int8_t x608 = -1;
	static volatile int64_t t141 = -3396388397102634526LL;

    t141 = ((x605^(x606%x607))+x608);

    if (t141 != -213LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x610 = 29449U;
	uint64_t x611 = 12LLU;
	static uint64_t x612 = UINT64_MAX;
	volatile uint64_t t142 = 117217696455840233LLU;

    t142 = ((x609^(x610%x611))+x612);

    if (t142 != 253LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x617 = -1;
	volatile int32_t x620 = INT32_MIN;
	static int64_t t143 = -8684958LL;

    t143 = ((x617^(x618%x619))+x620);

    if (t143 != -2142731579LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x621 = -21;
	volatile uint8_t x622 = 9U;
	int32_t x623 = INT32_MIN;
	uint32_t x624 = 2214513U;
	volatile uint32_t t144 = 220396U;

    t144 = ((x621^(x622%x623))+x624);

    if (t144 != 2214483U) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x625 = INT8_MIN;
	static uint64_t x626 = UINT64_MAX;
	int64_t x627 = -1873311169414LL;
	uint8_t x628 = 2U;
	volatile uint64_t t145 = 5859732170362312LLU;

    t145 = ((x625^(x626%x627))+x628);

    if (t145 != 18446742200398382087LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x629 = -2;
	static volatile int64_t x630 = INT64_MIN;
	int8_t x631 = INT8_MAX;
	int64_t x632 = -68274119744LL;
	int64_t t146 = 43939LL;

    t146 = ((x629^(x630%x631))+x632);

    if (t146 != -68274119743LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x633 = INT8_MIN;
	int32_t x634 = -13329;
	static int32_t x635 = INT32_MAX;
	int64_t x636 = INT64_MIN;
	static int64_t t147 = 400369LL;

    t147 = ((x633^(x634%x635))+x636);

    if (t147 != -9223372036854762385LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x637 = INT8_MIN;
	int64_t x638 = INT64_MAX;
	static int32_t x639 = INT32_MAX;
	int8_t x640 = INT8_MAX;
	int64_t t148 = -3265859508LL;

    t148 = ((x637^(x638%x639))+x640);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x649 = 22524021LLU;
	uint8_t x650 = 90U;
	uint32_t x652 = 1U;
	uint64_t t149 = 1455724286975822LLU;

    t149 = ((x649^(x650%x651))+x652);

    if (t149 != 22523952LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x653 = -1;
	static int8_t x655 = -1;
	int8_t x656 = INT8_MIN;
	volatile uint32_t t150 = 0U;

    t150 = ((x653^(x654%x655))+x656);

    if (t150 != 3804708271U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x658 = INT64_MAX;
	volatile uint64_t x659 = 39762LLU;
	volatile int32_t x660 = -1;
	uint64_t t151 = 3063282795012LLU;

    t151 = ((x657^(x658%x659))+x660);

    if (t151 != 18446744073709518397LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x662 = -383;
	volatile uint8_t x663 = 25U;
	volatile int64_t x664 = -1LL;
	static int64_t t152 = -7LL;

    t152 = ((x661^(x662%x663))+x664);

    if (t152 != 24LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x665 = -1;
	int16_t x667 = -4217;

    t153 = ((x665^(x666%x667))+x668);

    if (t153 != -35478LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x673 = -1;
	int16_t x674 = 2;
	static volatile int8_t x675 = -12;
	int8_t x676 = INT8_MIN;
	int32_t t154 = -108299519;

    t154 = ((x673^(x674%x675))+x676);

    if (t154 != -131) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x677 = -7074199;
	int16_t x678 = INT16_MAX;
	static int16_t x680 = -725;

    t155 = ((x677^(x678%x679))+x680);

    if (t155 != -7074924) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x682 = INT8_MIN;
	static uint16_t x683 = UINT16_MAX;
	static int32_t x684 = INT32_MIN;
	int64_t t156 = -215LL;

    t156 = ((x681^(x682%x683))+x684);

    if (t156 != 9223372034707292032LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x685 = 61U;
	uint64_t x687 = UINT64_MAX;
	static int8_t x688 = 1;
	static uint64_t t157 = 8407306754428LLU;

    t157 = ((x685^(x686%x687))+x688);

    if (t157 != 62LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x689 = INT64_MIN;
	static int32_t x690 = INT32_MAX;
	int64_t x691 = -1LL;
	volatile uint8_t x692 = UINT8_MAX;

    t158 = ((x689^(x690%x691))+x692);

    if (t158 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x693 = INT16_MIN;
	volatile int8_t x694 = 19;
	uint64_t x695 = 210721084570840159LLU;
	volatile int16_t x696 = INT16_MAX;
	volatile uint64_t t159 = 5772592401592572776LLU;

    t159 = ((x693^(x694%x695))+x696);

    if (t159 != 18LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x697 = INT8_MIN;
	int64_t x698 = INT64_MIN;
	int16_t x699 = INT16_MAX;
	static int16_t x700 = -4;
	static volatile int64_t t160 = 7LL;

    t160 = ((x697^(x698%x699))+x700);

    if (t160 != 116LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x701 = UINT16_MAX;
	int16_t x702 = INT16_MAX;
	volatile int8_t x703 = INT8_MIN;
	volatile int16_t x704 = INT16_MAX;
	int32_t t161 = 1;

    t161 = ((x701^(x702%x703))+x704);

    if (t161 != 98175) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x705 = -1;
	volatile int16_t x706 = INT16_MIN;
	int32_t x707 = INT32_MIN;
	volatile int64_t t162 = -8090125678687LL;

    t162 = ((x705^(x706%x707))+x708);

    if (t162 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x711 = INT32_MIN;
	static uint64_t x712 = 1666758483734LLU;

    t163 = ((x709^(x710%x711))+x712);

    if (t163 != 8516979496186LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x713 = 33;
	volatile int64_t x714 = 3179948409306229080LL;
	uint64_t x715 = 95523011LLU;
	volatile uint64_t t164 = 13654380535LLU;

    t164 = ((x713^(x714%x715))+x716);

    if (t164 != 16484103LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x719 = INT32_MIN;
	volatile int8_t x720 = -4;

    t165 = ((x717^(x718%x719))+x720);

    if (t165 != 2147450876) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x722 = 43683377LL;
	volatile int32_t x723 = -129819505;
	int8_t x724 = -19;

    t166 = ((x721^(x722%x723))+x724);

    if (t166 != 4251283899LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x726 = 12208;
	volatile int16_t x728 = -3;
	volatile int64_t t167 = 326LL;

    t167 = ((x725^(x726%x727))+x728);

    if (t167 != 58181LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x730 = INT64_MAX;
	static int32_t x731 = -1;
	static int64_t t168 = 11LL;

    t168 = ((x729^(x730%x731))+x732);

    if (t168 != 261LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x733 = 398LL;
	volatile int64_t x734 = -1LL;
	int64_t x735 = -1LL;
	int64_t t169 = -490975847LL;

    t169 = ((x733^(x734%x735))+x736);

    if (t169 != -32370LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x737 = -1;
	int32_t x738 = INT32_MIN;
	int64_t x739 = -59801LL;
	uint16_t x740 = 2934U;
	static int64_t t170 = 11845522316995495LL;

    t170 = ((x737^(x738%x739))+x740);

    if (t170 != 32671LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x741 = -1LL;
	int16_t x742 = INT16_MIN;
	int8_t x743 = INT8_MIN;
	int8_t x744 = INT8_MIN;
	volatile int64_t t171 = 21673143124288LL;

    t171 = ((x741^(x742%x743))+x744);

    if (t171 != -129LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x745 = 0U;
	static int8_t x746 = INT8_MIN;
	int16_t x748 = -14;

    t172 = ((x745^(x746%x747))+x748);

    if (t172 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x749 = 3U;
	static volatile int8_t x751 = 1;
	int32_t t173 = -921553;

    t173 = ((x749^(x750%x751))+x752);

    if (t173 != 65538) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x753 = 33U;
	int8_t x754 = -1;
	static int32_t x756 = INT32_MIN;
	int64_t t174 = -90054664571037LL;

    t174 = ((x753^(x754%x755))+x756);

    if (t174 != -2147483682LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x757 = -1;
	int64_t x758 = INT64_MAX;
	volatile uint64_t x760 = 2LLU;
	volatile uint64_t t175 = 2020023LLU;

    t175 = ((x757^(x758%x759))+x760);

    if (t175 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x761 = -1LL;
	volatile uint16_t x762 = 3U;
	int32_t x763 = -1;
	int64_t t176 = 20722536598583LL;

    t176 = ((x761^(x762%x763))+x764);

    if (t176 != 254LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x765 = INT8_MAX;
	uint64_t x766 = UINT64_MAX;
	static volatile int64_t x768 = -879427203LL;
	uint64_t t177 = 44089944LLU;

    t177 = ((x765^(x766%x767))+x768);

    if (t177 != 18446744072830124525LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x769 = -1;
	uint64_t x770 = 8713337LLU;
	volatile uint64_t x771 = 26LLU;
	int64_t x772 = INT64_MAX;
	static volatile uint64_t t178 = 881510LLU;

    t178 = ((x769^(x770%x771))+x772);

    if (t178 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x774 = INT16_MIN;
	uint16_t x775 = UINT16_MAX;
	volatile uint64_t x776 = 3953050559929LLU;
	uint64_t t179 = 5921763LLU;

    t179 = ((x773^(x774%x775))+x776);

    if (t179 != 3953050592696LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x777 = UINT64_MAX;
	int32_t x778 = INT32_MIN;
	static int32_t x779 = -1;
	int8_t x780 = -5;
	volatile uint64_t t180 = 1404826532524087LLU;

    t180 = ((x777^(x778%x779))+x780);

    if (t180 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x781 = 3U;
	static int64_t x782 = INT64_MIN;
	static int32_t x783 = INT32_MIN;
	int64_t x784 = INT64_MIN;
	static int64_t t181 = 10767LL;

    t181 = ((x781^(x782%x783))+x784);

    if (t181 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x789 = -1LL;
	int32_t x790 = 764280583;
	volatile int64_t x791 = INT64_MIN;
	int32_t x792 = INT32_MIN;
	int64_t t182 = -64757064096001LL;

    t182 = ((x789^(x790%x791))+x792);

    if (t182 != -2911764232LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x794 = 77503LLU;
	volatile int64_t x795 = INT64_MIN;

    t183 = ((x793^(x794%x795))+x796);

    if (t183 != 9223372036854698304LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x797 = INT64_MIN;
	static int8_t x798 = 1;
	uint64_t x799 = 516681872870987LLU;
	uint32_t x800 = UINT32_MAX;
	uint64_t t184 = 37928246034700876LLU;

    t184 = ((x797^(x798%x799))+x800);

    if (t184 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x801 = -1;
	static uint16_t x802 = 29895U;
	int64_t x803 = 111313938LL;
	uint16_t x804 = 7458U;
	static volatile int64_t t185 = 277LL;

    t185 = ((x801^(x802%x803))+x804);

    if (t185 != -22438LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x805 = 1;
	volatile int16_t x806 = -1;
	int32_t x807 = 1;
	uint16_t x808 = 0U;

    t186 = ((x805^(x806%x807))+x808);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x809 = INT16_MIN;
	int64_t x810 = -1LL;
	uint8_t x811 = 68U;
	volatile int64_t t187 = 752103940633LL;

    t187 = ((x809^(x810%x811))+x812);

    if (t187 != 32639LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x813 = UINT64_MAX;
	volatile int32_t x814 = -1;
	int32_t x815 = INT32_MIN;
	int8_t x816 = 0;

    t188 = ((x813^(x814%x815))+x816);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x817 = 6646U;
	int16_t x818 = INT16_MIN;
	volatile uint8_t x819 = 4U;
	static volatile int16_t x820 = INT16_MAX;
	int32_t t189 = 54;

    t189 = ((x817^(x818%x819))+x820);

    if (t189 != 39413) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x821 = UINT32_MAX;
	int64_t x822 = -1LL;
	static volatile int8_t x823 = -1;
	int64_t x824 = -1LL;
	int64_t t190 = -825862634LL;

    t190 = ((x821^(x822%x823))+x824);

    if (t190 != 4294967294LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x825 = 1597031U;
	static volatile int32_t x828 = -10786;
	static uint32_t t191 = 3U;

    t191 = ((x825^(x826%x827))+x828);

    if (t191 != 4293359485U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x829 = -1LL;
	uint64_t x830 = 365275240408896LLU;
	volatile int8_t x831 = -8;
	int8_t x832 = -1;
	volatile uint64_t t192 = 764606570420275865LLU;

    t192 = ((x829^(x830%x831))+x832);

    if (t192 != 18446378798469142718LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x833 = INT16_MIN;
	uint8_t x834 = UINT8_MAX;
	static volatile uint64_t x835 = 6510651989LLU;
	uint8_t x836 = 2U;

    t193 = ((x833^(x834%x835))+x836);

    if (t193 != 18446744073709519105LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x838 = 1U;
	static uint64_t x840 = 1440LLU;

    t194 = ((x837^(x838%x839))+x840);

    if (t194 != 1443LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x842 = 199889U;
	volatile int16_t x843 = INT16_MIN;
	static volatile uint32_t t195 = 650130U;

    t195 = ((x841^(x842%x843))+x844);

    if (t195 != 200833U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x845 = 8769U;
	int64_t x846 = INT64_MIN;
	int64_t x847 = -1LL;
	volatile uint32_t x848 = 10U;
	static int64_t t196 = 3551932231194852449LL;

    t196 = ((x845^(x846%x847))+x848);

    if (t196 != 8779LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x849 = UINT64_MAX;
	uint16_t x850 = UINT16_MAX;
	volatile int64_t x851 = -1LL;
	int16_t x852 = INT16_MAX;
	uint64_t t197 = 737211651646690992LLU;

    t197 = ((x849^(x850%x851))+x852);

    if (t197 != 32766LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x853 = INT8_MIN;
	volatile uint16_t x856 = UINT16_MAX;
	volatile int32_t t198 = -629566;

    t198 = ((x853^(x854%x855))+x856);

    if (t198 != 65518) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x857 = -2981;
	uint16_t x858 = UINT16_MAX;
	uint8_t x860 = UINT8_MAX;
	static uint64_t t199 = 272419609150994LLU;

    t199 = ((x857^(x858%x859))+x860);

    if (t199 != 18446744073709489315LLU) { NG(); } else { ; }
	
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

