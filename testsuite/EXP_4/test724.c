
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

static uint64_t x3 = UINT64_MAX;
int64_t x8 = INT64_MIN;
volatile uint8_t x16 = UINT8_MAX;
uint16_t x20 = 92U;
volatile int16_t x26 = INT16_MIN;
int32_t x28 = 10216;
static volatile int32_t t8 = 5861;
volatile int32_t t10 = -217338;
static volatile int32_t t11 = 36465;
volatile int64_t x54 = 248499476281666490LL;
uint16_t x56 = 1748U;
static uint32_t x63 = 509978U;
int32_t x71 = INT32_MAX;
static int16_t x74 = INT16_MIN;
volatile int32_t t18 = 7106273;
volatile uint8_t x80 = 2U;
uint64_t x81 = 4069833286068LLU;
static volatile int16_t x86 = -1;
volatile int16_t x89 = -1;
uint32_t x92 = 11U;
static int32_t x94 = INT32_MIN;
volatile int16_t x96 = -2519;
uint32_t x97 = 59904U;
int32_t x103 = -7238;
int16_t x108 = INT16_MAX;
static volatile int32_t t27 = 6651195;
static uint32_t x118 = 17407U;
volatile uint16_t x120 = 4166U;
uint16_t x122 = 11U;
uint32_t x123 = UINT32_MAX;
volatile int64_t x129 = 609234885062LL;
uint32_t x147 = UINT32_MAX;
uint64_t x152 = 175243LLU;
int32_t x156 = INT32_MIN;
volatile int8_t x161 = INT8_MIN;
int16_t x162 = INT16_MIN;
static int64_t x163 = INT64_MIN;
int8_t x168 = INT8_MAX;
uint8_t x177 = 116U;
static int64_t x183 = -856677620926733174LL;
uint64_t x200 = 55LLU;
uint8_t x207 = 6U;
static int16_t x213 = INT16_MAX;
int16_t x214 = 677;
volatile int32_t t51 = 99;
volatile uint8_t x218 = UINT8_MAX;
volatile uint64_t x221 = 1512617546381LLU;
int64_t x225 = INT64_MIN;
uint16_t x226 = UINT16_MAX;
int32_t x227 = -1;
int16_t x230 = -4;
volatile int8_t x233 = INT8_MAX;
volatile uint8_t x235 = 122U;
volatile int32_t t57 = 157;
int32_t t58 = -1;
uint8_t x249 = 16U;
static volatile int64_t x252 = INT64_MAX;
int8_t x254 = 1;
static int32_t x256 = -1;
int64_t x262 = INT64_MAX;
uint64_t x275 = 1023979600698LLU;
int8_t x277 = 6;
static int32_t t67 = -10871238;
int16_t x285 = INT16_MIN;
volatile uint8_t x288 = 10U;
static int64_t x299 = -32047LL;
int16_t x303 = INT16_MIN;
int64_t x304 = INT64_MIN;
int8_t x309 = INT8_MIN;
int32_t x318 = INT32_MAX;
volatile int32_t x320 = 565736301;
static volatile int16_t x321 = INT16_MIN;
int32_t t78 = -30753977;
int64_t x325 = INT64_MIN;
uint16_t x329 = UINT16_MAX;
volatile int32_t t80 = -28669;
int16_t x333 = INT16_MIN;
int8_t x337 = 1;
static int64_t x340 = INT64_MAX;
volatile int32_t x346 = -1;
static int32_t x352 = -1;
volatile int32_t t85 = 250;
int8_t x361 = -1;
int32_t t88 = -744315;
uint64_t x365 = 4611843121LLU;
uint32_t x366 = 138343035U;
volatile int8_t x367 = -6;
static volatile int32_t t89 = -2;
int16_t x372 = -1;
int32_t t90 = -24747;
static int64_t x374 = INT64_MAX;
volatile int32_t t92 = -115440792;
int64_t x383 = 72412293911568LL;
uint8_t x394 = 3U;
int8_t x397 = -30;
volatile int32_t x399 = INT32_MIN;
static uint64_t x400 = 6LLU;
int8_t x418 = INT8_MAX;
int8_t x423 = INT8_MIN;
static int32_t x425 = INT32_MAX;
uint64_t x427 = 501680308478505LLU;
uint8_t x428 = 11U;
int32_t x429 = INT32_MIN;
int32_t x431 = INT32_MIN;
int32_t t105 = 0;
int32_t t108 = 241366;
int32_t x446 = 809252144;
int64_t x454 = INT64_MIN;
int8_t x460 = INT8_MIN;
int32_t t113 = -1;
uint64_t x466 = 117754LLU;
uint8_t x467 = UINT8_MAX;
static uint16_t x468 = UINT16_MAX;
volatile uint16_t x470 = UINT16_MAX;
static int8_t x475 = INT8_MIN;
int8_t x486 = -14;
volatile int32_t t122 = -93954;
volatile uint8_t x503 = 0U;
uint32_t x504 = 111821U;
int32_t t123 = -7;
volatile int32_t x509 = -1;
volatile int32_t x517 = 8238306;
int8_t x518 = INT8_MIN;
int32_t t127 = 4489;
uint32_t x527 = 449U;
volatile int32_t t128 = 142976640;
uint8_t x535 = 68U;
static volatile int32_t t132 = 2944;
volatile int8_t x549 = INT8_MAX;
static int64_t x552 = INT64_MIN;
volatile int32_t x556 = INT32_MAX;
volatile int32_t t135 = 3146467;
uint16_t x561 = UINT16_MAX;
volatile int32_t t140 = -1007110131;
int64_t x579 = INT64_MIN;
int32_t x580 = -451300;
int32_t x583 = INT32_MAX;
int32_t t142 = -15;
static int64_t x586 = -1LL;
static uint16_t x591 = 2U;
uint32_t x593 = 15424891U;
static int32_t x594 = 751787;
volatile int32_t t145 = 0;
int8_t x600 = -49;
int8_t x602 = INT8_MIN;
volatile int32_t t147 = 0;
int32_t t148 = 459;
volatile int16_t x617 = INT16_MIN;
volatile uint32_t x625 = UINT32_MAX;
static volatile int32_t x626 = -355;
int16_t x627 = INT16_MIN;
int32_t x628 = -1;
int32_t t153 = -243046;
volatile int8_t x636 = INT8_MIN;
int32_t t154 = -23863;
volatile uint64_t x643 = 198852768295LLU;
int16_t x664 = -1;
volatile uint64_t x670 = UINT64_MAX;
uint16_t x674 = UINT16_MAX;
volatile int8_t x675 = -9;
int16_t x686 = INT16_MIN;
static volatile int64_t x695 = INT64_MIN;
volatile uint64_t x699 = 8222981320697690LLU;
uint64_t x703 = UINT64_MAX;
uint32_t x705 = 343998U;
static uint64_t x710 = UINT64_MAX;
int64_t x721 = INT64_MAX;
static int16_t x724 = INT16_MAX;
int32_t t175 = 1681;
int16_t x725 = INT16_MIN;
volatile uint64_t x728 = 63LLU;
int32_t t176 = 209;
int32_t x742 = INT32_MIN;
static int8_t x745 = -1;
int8_t x747 = -1;
uint16_t x753 = 6348U;
volatile int32_t x757 = -1;
uint16_t x758 = 6U;
int16_t x760 = -1;
int64_t x761 = INT64_MIN;
int8_t x775 = 22;
int32_t x778 = INT32_MIN;
uint64_t x779 = UINT64_MAX;
volatile int64_t x789 = INT64_MIN;
uint8_t x791 = UINT8_MAX;
int32_t x801 = -761560437;
int32_t x803 = INT32_MAX;
volatile int16_t x804 = -1;
volatile int32_t t195 = 192374;
static int32_t t197 = 175;
int64_t x818 = INT64_MAX;
static int32_t t199 = 200029421;


void f0(void) {
    	int8_t x1 = -1;
	static int16_t x2 = INT16_MIN;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = -34;

    t0 = (x1<=(x2<=(x3/x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -112;
	static uint32_t x6 = UINT32_MAX;
	static int32_t x7 = INT32_MIN;
	volatile int32_t t1 = 103347;

    t1 = (x5<=(x6<=(x7/x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int8_t x10 = 3;
	static int32_t x11 = -143972257;
	volatile int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 26947;

    t2 = (x9<=(x10<=(x11/x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	uint32_t x14 = UINT32_MAX;
	static uint8_t x15 = UINT8_MAX;
	volatile int32_t t3 = -23054993;

    t3 = (x13<=(x14<=(x15/x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -717526;
	volatile uint64_t x18 = 8702760956802513LLU;
	static volatile uint64_t x19 = 1LLU;
	volatile int32_t t4 = -22731;

    t4 = (x17<=(x18<=(x19/x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -111728659LL;
	static int32_t x22 = INT32_MIN;
	int64_t x23 = 189947LL;
	uint64_t x24 = 148145357657177LLU;
	volatile int32_t t5 = 40689;

    t5 = (x21<=(x22<=(x23/x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 1031;
	int8_t x27 = INT8_MIN;
	int32_t t6 = -14210;

    t6 = (x25<=(x26<=(x27/x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 338271U;
	int8_t x30 = -7;
	int8_t x31 = INT8_MAX;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 111;

    t7 = (x29<=(x30<=(x31/x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	static volatile uint32_t x34 = 3463U;
	int64_t x35 = 146199LL;
	volatile int32_t x36 = INT32_MIN;

    t8 = (x33<=(x34<=(x35/x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x37 = UINT8_MAX;
	static int16_t x38 = INT16_MIN;
	volatile int64_t x39 = INT64_MAX;
	int8_t x40 = -1;
	volatile int32_t t9 = -330;

    t9 = (x37<=(x38<=(x39/x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	int8_t x42 = -1;
	uint32_t x43 = 245U;
	int64_t x44 = INT64_MIN;

    t10 = (x41<=(x42<=(x43/x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = 2415;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = 4357198354LLU;
	static volatile int8_t x48 = INT8_MIN;

    t11 = (x45<=(x46<=(x47/x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 5782005;
	int32_t x50 = -95;
	int8_t x51 = 0;
	volatile int8_t x52 = 4;
	volatile int32_t t12 = 32376134;

    t12 = (x49<=(x50<=(x51/x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MIN;
	int8_t x55 = -3;
	int32_t t13 = -1;

    t13 = (x53<=(x54<=(x55/x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int64_t x58 = 132488823950983LL;
	static int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 31044;

    t14 = (x57<=(x58<=(x59/x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MAX;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 489;

    t15 = (x61<=(x62<=(x63/x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	volatile int32_t x66 = INT32_MIN;
	static int32_t x67 = -1;
	int8_t x68 = 1;
	int32_t t16 = -49271831;

    t16 = (x65<=(x66<=(x67/x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	volatile int8_t x70 = INT8_MIN;
	int8_t x72 = -1;
	volatile int32_t t17 = 348166;

    t17 = (x69<=(x70<=(x71/x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	volatile int32_t x75 = -18695298;
	volatile uint32_t x76 = 3U;

    t18 = (x73<=(x74<=(x75/x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int32_t x78 = INT32_MAX;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t t19 = -176039;

    t19 = (x77<=(x78<=(x79/x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x82 = 331U;
	uint8_t x83 = 34U;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 307691242;

    t20 = (x81<=(x82<=(x83/x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -949290231LL;
	int16_t x87 = INT16_MAX;
	int16_t x88 = -1;
	static volatile int32_t t21 = -30596371;

    t21 = (x85<=(x86<=(x87/x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x90 = 0U;
	static int8_t x91 = -44;
	static volatile int32_t t22 = -695690404;

    t22 = (x89<=(x90<=(x91/x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 52U;
	int32_t x95 = INT32_MAX;
	volatile int32_t t23 = -1;

    t23 = (x93<=(x94<=(x95/x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x98 = 4U;
	int8_t x99 = 2;
	uint16_t x100 = UINT16_MAX;
	int32_t t24 = 14;

    t24 = (x97<=(x98<=(x99/x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int8_t x104 = -1;
	static int32_t t25 = -379;

    t25 = (x101<=(x102<=(x103/x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1265;
	uint8_t x106 = UINT8_MAX;
	uint32_t x107 = 2517U;
	int32_t t26 = 468153;

    t26 = (x105<=(x106<=(x107/x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 1;
	static int64_t x110 = -1LL;
	uint32_t x111 = 23459445U;
	static int32_t x112 = INT32_MAX;

    t27 = (x109<=(x110<=(x111/x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	int64_t x114 = -13407906892LL;
	static uint64_t x115 = 1294692601LLU;
	int32_t x116 = INT32_MIN;
	int32_t t28 = -7;

    t28 = (x113<=(x114<=(x115/x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	volatile int8_t x119 = INT8_MIN;
	int32_t t29 = 27182;

    t29 = (x117<=(x118<=(x119/x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = 278103;

    t30 = (x121<=(x122<=(x123/x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = INT8_MIN;
	volatile uint32_t x126 = 94171U;
	static int32_t x127 = -1;
	int64_t x128 = -927563313LL;
	int32_t t31 = 1;

    t31 = (x125<=(x126<=(x127/x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x130 = 7301U;
	uint16_t x131 = 848U;
	int32_t x132 = INT32_MAX;
	static volatile int32_t t32 = 20773;

    t32 = (x129<=(x130<=(x131/x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x137 = 14U;
	volatile int64_t x138 = -1LL;
	int16_t x139 = INT16_MIN;
	static int16_t x140 = INT16_MAX;
	static int32_t t33 = -664723807;

    t33 = (x137<=(x138<=(x139/x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	uint32_t x143 = 56201691U;
	int32_t x144 = INT32_MIN;
	volatile int32_t t34 = -146;

    t34 = (x141<=(x142<=(x143/x144)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MAX;
	volatile uint64_t x146 = 351LLU;
	int32_t x148 = INT32_MAX;
	int32_t t35 = -332063;

    t35 = (x145<=(x146<=(x147/x148)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x149 = 104U;
	int32_t x150 = INT32_MIN;
	uint64_t x151 = 431936243404303LLU;
	static volatile int32_t t36 = 10261;

    t36 = (x149<=(x150<=(x151/x152)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MIN;
	volatile int16_t x154 = 13401;
	static int64_t x155 = INT64_MAX;
	int32_t t37 = 2676861;

    t37 = (x153<=(x154<=(x155/x156)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x157 = 5LLU;
	int64_t x158 = -10592473092LL;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = 22102LL;
	static int32_t t38 = -47363;

    t38 = (x157<=(x158<=(x159/x160)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x164 = 841U;
	volatile int32_t t39 = -11963998;

    t39 = (x161<=(x162<=(x163/x164)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MAX;
	int32_t x166 = -1;
	uint16_t x167 = 30557U;
	volatile int32_t t40 = 16197390;

    t40 = (x165<=(x166<=(x167/x168)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x169 = -1;
	int8_t x170 = INT8_MIN;
	int8_t x171 = 2;
	int16_t x172 = INT16_MIN;
	volatile int32_t t41 = -3044831;

    t41 = (x169<=(x170<=(x171/x172)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x173 = 1912U;
	static volatile int32_t x174 = -16;
	uint64_t x175 = 132532LLU;
	static volatile uint32_t x176 = 140403U;
	int32_t t42 = -64041;

    t42 = (x173<=(x174<=(x175/x176)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x178 = UINT64_MAX;
	static int64_t x179 = 249LL;
	volatile int32_t x180 = 297702;
	volatile int32_t t43 = -93;

    t43 = (x177<=(x178<=(x179/x180)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = UINT8_MAX;
	int16_t x182 = INT16_MIN;
	uint32_t x184 = 52159U;
	static int32_t t44 = 1;

    t44 = (x181<=(x182<=(x183/x184)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = UINT16_MAX;
	uint8_t x190 = 0U;
	static int16_t x191 = -1;
	static int8_t x192 = -1;
	volatile int32_t t45 = 3;

    t45 = (x189<=(x190<=(x191/x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x193 = 0;
	uint8_t x194 = 26U;
	volatile uint16_t x195 = UINT16_MAX;
	volatile uint64_t x196 = 202898434376LLU;
	int32_t t46 = 0;

    t46 = (x193<=(x194<=(x195/x196)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = INT64_MIN;
	int8_t x198 = 4;
	volatile uint16_t x199 = UINT16_MAX;
	int32_t t47 = 1633;

    t47 = (x197<=(x198<=(x199/x200)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x202 = -1LL;
	int32_t x203 = 23536;
	static volatile uint8_t x204 = UINT8_MAX;
	int32_t t48 = -82;

    t48 = (x201<=(x202<=(x203/x204)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = INT64_MIN;
	uint32_t x206 = UINT32_MAX;
	int8_t x208 = INT8_MAX;
	volatile int32_t t49 = 119182;

    t49 = (x205<=(x206<=(x207/x208)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = -2890;
	static int32_t x210 = INT32_MIN;
	volatile int32_t x211 = INT32_MAX;
	uint32_t x212 = 135U;
	volatile int32_t t50 = 31446575;

    t50 = (x209<=(x210<=(x211/x212)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x215 = 3U;
	static int64_t x216 = -1LL;

    t51 = (x213<=(x214<=(x215/x216)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = -4;
	int64_t x219 = -14539779054LL;
	static int8_t x220 = INT8_MIN;
	int32_t t52 = -6933872;

    t52 = (x217<=(x218<=(x219/x220)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t53 = 56;

    t53 = (x221<=(x222<=(x223/x224)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x228 = -1LL;
	volatile int32_t t54 = 1;

    t54 = (x225<=(x226<=(x227/x228)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x229 = 4;
	int32_t x231 = INT32_MIN;
	static uint16_t x232 = 191U;
	int32_t t55 = 499895347;

    t55 = (x229<=(x230<=(x231/x232)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x234 = 89967LLU;
	int32_t x236 = -1;
	volatile int32_t t56 = 729191647;

    t56 = (x233<=(x234<=(x235/x236)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x237 = 558507213102434LLU;
	uint32_t x238 = UINT32_MAX;
	uint32_t x239 = 21U;
	int8_t x240 = INT8_MIN;

    t57 = (x237<=(x238<=(x239/x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = INT8_MIN;
	uint16_t x242 = 73U;
	static uint32_t x243 = UINT32_MAX;
	uint64_t x244 = 3643134828953585503LLU;

    t58 = (x241<=(x242<=(x243/x244)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = 1117;
	static int8_t x246 = 0;
	uint64_t x247 = UINT64_MAX;
	int8_t x248 = -2;
	volatile int32_t t59 = 773990;

    t59 = (x245<=(x246<=(x247/x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MIN;
	int32_t t60 = -369917;

    t60 = (x249<=(x250<=(x251/x252)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = INT8_MAX;
	volatile uint64_t x255 = 305LLU;
	int32_t t61 = 870515634;

    t61 = (x253<=(x254<=(x255/x256)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = INT16_MIN;
	int64_t x258 = -492213446LL;
	int64_t x259 = 36490LL;
	volatile uint32_t x260 = 136042U;
	volatile int32_t t62 = 1;

    t62 = (x257<=(x258<=(x259/x260)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = -11;
	int64_t x263 = INT64_MAX;
	int8_t x264 = INT8_MAX;
	static int32_t t63 = -561004935;

    t63 = (x261<=(x262<=(x263/x264)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MAX;
	static volatile uint8_t x266 = UINT8_MAX;
	uint16_t x267 = 29U;
	uint16_t x268 = 5021U;
	int32_t t64 = 515628;

    t64 = (x265<=(x266<=(x267/x268)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = 89;
	int32_t x270 = INT32_MAX;
	volatile int16_t x271 = -1;
	int8_t x272 = INT8_MAX;
	volatile int32_t t65 = -228112379;

    t65 = (x269<=(x270<=(x271/x272)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x273 = 8375175965129LLU;
	uint32_t x274 = 255574U;
	int32_t x276 = -16651;
	volatile int32_t t66 = -557200;

    t66 = (x273<=(x274<=(x275/x276)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x278 = 1U;
	int64_t x279 = INT64_MAX;
	static volatile int16_t x280 = -1;

    t67 = (x277<=(x278<=(x279/x280)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = -1;
	int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = 714706292889LLU;
	int32_t t68 = -18;

    t68 = (x281<=(x282<=(x283/x284)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x286 = -1LL;
	int64_t x287 = -1LL;
	int32_t t69 = 1;

    t69 = (x285<=(x286<=(x287/x288)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = 13;
	int32_t x290 = INT32_MAX;
	int64_t x291 = INT64_MAX;
	static volatile int64_t x292 = INT64_MIN;
	volatile int32_t t70 = 0;

    t70 = (x289<=(x290<=(x291/x292)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x293 = -1687;
	static uint16_t x294 = 3U;
	static int32_t x295 = INT32_MIN;
	int16_t x296 = 124;
	volatile int32_t t71 = 5131;

    t71 = (x293<=(x294<=(x295/x296)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x297 = INT32_MIN;
	uint16_t x298 = UINT16_MAX;
	int64_t x300 = 457648004636380246LL;
	volatile int32_t t72 = 374946043;

    t72 = (x297<=(x298<=(x299/x300)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = -1;
	static int32_t t73 = 7;

    t73 = (x301<=(x302<=(x303/x304)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x305 = UINT16_MAX;
	volatile int8_t x306 = INT8_MAX;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t74 = -176836454;

    t74 = (x305<=(x306<=(x307/x308)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x310 = INT8_MIN;
	volatile int16_t x311 = -420;
	int32_t x312 = -1;
	volatile int32_t t75 = 22788;

    t75 = (x309<=(x310<=(x311/x312)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = 259LL;
	int32_t x314 = INT32_MAX;
	uint16_t x315 = 13320U;
	int64_t x316 = -1LL;
	volatile int32_t t76 = 7;

    t76 = (x313<=(x314<=(x315/x316)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = 20;
	int64_t x319 = INT64_MAX;
	static int32_t t77 = 1;

    t77 = (x317<=(x318<=(x319/x320)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MIN;
	int64_t x324 = 72000313700256LL;

    t78 = (x321<=(x322<=(x323/x324)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x326 = -117;
	static int32_t x327 = 97828;
	static uint8_t x328 = 76U;
	int32_t t79 = 124367;

    t79 = (x325<=(x326<=(x327/x328)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x330 = INT16_MAX;
	int64_t x331 = -1LL;
	volatile uint64_t x332 = UINT64_MAX;

    t80 = (x329<=(x330<=(x331/x332)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x334 = UINT16_MAX;
	volatile int32_t x335 = INT32_MAX;
	static uint64_t x336 = UINT64_MAX;
	static volatile int32_t t81 = -14;

    t81 = (x333<=(x334<=(x335/x336)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x338 = 58U;
	int32_t x339 = 290;
	volatile int32_t t82 = 220529;

    t82 = (x337<=(x338<=(x339/x340)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = -1;
	int8_t x342 = -4;
	volatile int8_t x343 = -1;
	volatile int16_t x344 = -499;
	volatile int32_t t83 = 3;

    t83 = (x341<=(x342<=(x343/x344)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = 1;
	int64_t x347 = -185306551527774878LL;
	int64_t x348 = -2133933764782790LL;
	static volatile int32_t t84 = -9784;

    t84 = (x345<=(x346<=(x347/x348)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x349 = -1LL;
	volatile uint32_t x350 = UINT32_MAX;
	volatile uint64_t x351 = 3114988475044LLU;

    t85 = (x349<=(x350<=(x351/x352)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x353 = 918U;
	int16_t x354 = 633;
	static uint64_t x355 = 6LLU;
	uint16_t x356 = 24922U;
	int32_t t86 = 639;

    t86 = (x353<=(x354<=(x355/x356)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = INT8_MIN;
	int16_t x358 = 209;
	int16_t x359 = INT16_MIN;
	uint64_t x360 = UINT64_MAX;
	int32_t t87 = -104;

    t87 = (x357<=(x358<=(x359/x360)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x362 = -1LL;
	int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MIN;

    t88 = (x361<=(x362<=(x363/x364)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x368 = 5724;

    t89 = (x365<=(x366<=(x367/x368)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x369 = 64U;
	int8_t x370 = -18;
	volatile int16_t x371 = -1;

    t90 = (x369<=(x370<=(x371/x372)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x373 = 1075594289190019LL;
	int32_t x375 = INT32_MAX;
	uint64_t x376 = 1589353733069LLU;
	static int32_t t91 = 5920731;

    t91 = (x373<=(x374<=(x375/x376)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	int32_t x380 = -3654;

    t92 = (x377<=(x378<=(x379/x380)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x381 = INT8_MIN;
	uint64_t x382 = 185LLU;
	int64_t x384 = INT64_MAX;
	static volatile int32_t t93 = -405;

    t93 = (x381<=(x382<=(x383/x384)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x385 = -1LL;
	int32_t x386 = -1;
	volatile int16_t x387 = INT16_MIN;
	int16_t x388 = -1;
	int32_t t94 = 10527634;

    t94 = (x385<=(x386<=(x387/x388)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x389 = -1;
	static uint8_t x390 = 1U;
	static int32_t x391 = -1;
	static int32_t x392 = INT32_MIN;
	volatile int32_t t95 = 3410891;

    t95 = (x389<=(x390<=(x391/x392)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint32_t x393 = 517269U;
	int16_t x395 = INT16_MAX;
	volatile uint16_t x396 = 3550U;
	volatile int32_t t96 = 42335;

    t96 = (x393<=(x394<=(x395/x396)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x398 = -1;
	int32_t t97 = 254618909;

    t97 = (x397<=(x398<=(x399/x400)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x401 = -1LL;
	int8_t x402 = INT8_MAX;
	static uint32_t x403 = 353U;
	int32_t x404 = -1;
	volatile int32_t t98 = -122606927;

    t98 = (x401<=(x402<=(x403/x404)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x405 = 387334029U;
	uint8_t x406 = 5U;
	static volatile int32_t x407 = -1;
	uint16_t x408 = 184U;
	static volatile int32_t t99 = 883;

    t99 = (x405<=(x406<=(x407/x408)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	volatile int64_t x411 = INT64_MIN;
	volatile uint16_t x412 = 15U;
	volatile int32_t t100 = 725;

    t100 = (x409<=(x410<=(x411/x412)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x413 = 90766;
	int32_t x414 = -1;
	int32_t x415 = -1;
	volatile int16_t x416 = -1;
	volatile int32_t t101 = -2;

    t101 = (x413<=(x414<=(x415/x416)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = 44761LL;
	static int64_t x419 = -9756945LL;
	static volatile uint64_t x420 = 464LLU;
	int32_t t102 = -2763708;

    t102 = (x417<=(x418<=(x419/x420)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x421 = UINT32_MAX;
	int32_t x422 = -2470;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t103 = 6869660;

    t103 = (x421<=(x422<=(x423/x424)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x426 = INT64_MAX;
	volatile int32_t t104 = -94803;

    t104 = (x425<=(x426<=(x427/x428)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x430 = 38U;
	static uint8_t x432 = 2U;

    t105 = (x429<=(x430<=(x431/x432)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x433 = UINT32_MAX;
	int16_t x434 = INT16_MIN;
	int32_t x435 = -1;
	int16_t x436 = -98;
	int32_t t106 = 593483844;

    t106 = (x433<=(x434<=(x435/x436)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = -1;
	volatile int32_t x438 = INT32_MIN;
	static int8_t x439 = -1;
	static uint16_t x440 = 3U;
	volatile int32_t t107 = 143607072;

    t107 = (x437<=(x438<=(x439/x440)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x441 = INT32_MAX;
	volatile int8_t x442 = INT8_MAX;
	static volatile int8_t x443 = INT8_MIN;
	int64_t x444 = 7083254LL;

    t108 = (x441<=(x442<=(x443/x444)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x445 = 1333949989639158505LLU;
	uint32_t x447 = UINT32_MAX;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t109 = -581351330;

    t109 = (x445<=(x446<=(x447/x448)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = -1;
	volatile uint8_t x450 = UINT8_MAX;
	int64_t x451 = INT64_MAX;
	volatile int16_t x452 = -1;
	volatile int32_t t110 = 29;

    t110 = (x449<=(x450<=(x451/x452)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x453 = 77U;
	static int32_t x455 = INT32_MIN;
	volatile int64_t x456 = INT64_MIN;
	static volatile int32_t t111 = 1572;

    t111 = (x453<=(x454<=(x455/x456)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x457 = -342;
	static int16_t x458 = 51;
	uint8_t x459 = 3U;
	volatile int32_t t112 = 160317;

    t112 = (x457<=(x458<=(x459/x460)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x461 = UINT32_MAX;
	static uint16_t x462 = UINT16_MAX;
	int8_t x463 = -1;
	static int8_t x464 = -1;

    t113 = (x461<=(x462<=(x463/x464)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x465 = -1;
	static volatile int32_t t114 = -85701288;

    t114 = (x465<=(x466<=(x467/x468)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x469 = 0LL;
	int8_t x471 = INT8_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t115 = -950;

    t115 = (x469<=(x470<=(x471/x472)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x473 = INT8_MIN;
	uint8_t x474 = UINT8_MAX;
	uint16_t x476 = 145U;
	int32_t t116 = 1565470;

    t116 = (x473<=(x474<=(x475/x476)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x477 = INT64_MAX;
	uint64_t x478 = 1200491LLU;
	int8_t x479 = 3;
	static uint16_t x480 = UINT16_MAX;
	int32_t t117 = 453911583;

    t117 = (x477<=(x478<=(x479/x480)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint32_t x481 = 8069U;
	uint64_t x482 = 5746721918LLU;
	uint64_t x483 = UINT64_MAX;
	int32_t x484 = 793175015;
	volatile int32_t t118 = -675;

    t118 = (x481<=(x482<=(x483/x484)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x485 = INT32_MIN;
	static int64_t x487 = -1208288062370LL;
	uint8_t x488 = UINT8_MAX;
	int32_t t119 = 11;

    t119 = (x485<=(x486<=(x487/x488)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x489 = INT16_MIN;
	static int64_t x490 = INT64_MIN;
	uint16_t x491 = 0U;
	uint64_t x492 = UINT64_MAX;
	volatile int32_t t120 = -153822248;

    t120 = (x489<=(x490<=(x491/x492)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x493 = INT32_MIN;
	uint64_t x494 = 30246478287056LLU;
	static int64_t x495 = INT64_MIN;
	uint64_t x496 = 3653806372422487945LLU;
	static volatile int32_t t121 = -6;

    t121 = (x493<=(x494<=(x495/x496)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x497 = -452;
	uint32_t x498 = UINT32_MAX;
	uint8_t x499 = UINT8_MAX;
	int32_t x500 = 4;

    t122 = (x497<=(x498<=(x499/x500)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x501 = 35699U;
	static int32_t x502 = INT32_MIN;

    t123 = (x501<=(x502<=(x503/x504)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x505 = INT32_MIN;
	uint64_t x506 = 839LLU;
	int64_t x507 = -30276699835LL;
	static int8_t x508 = -19;
	volatile int32_t t124 = 784466;

    t124 = (x505<=(x506<=(x507/x508)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x510 = INT64_MAX;
	static uint16_t x511 = UINT16_MAX;
	volatile uint64_t x512 = 1836931LLU;
	int32_t t125 = -7;

    t125 = (x509<=(x510<=(x511/x512)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x519 = UINT64_MAX;
	int16_t x520 = -1;
	volatile int32_t t126 = 7030764;

    t126 = (x517<=(x518<=(x519/x520)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x521 = 2840U;
	static int16_t x522 = 1300;
	static volatile uint16_t x523 = 62U;
	uint8_t x524 = 3U;

    t127 = (x521<=(x522<=(x523/x524)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x525 = INT8_MAX;
	int16_t x526 = INT16_MAX;
	volatile int16_t x528 = INT16_MAX;

    t128 = (x525<=(x526<=(x527/x528)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x529 = INT8_MIN;
	volatile uint32_t x530 = 0U;
	static int32_t x531 = INT32_MAX;
	int16_t x532 = -61;
	static int32_t t129 = 2027;

    t129 = (x529<=(x530<=(x531/x532)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x533 = -1;
	volatile int8_t x534 = INT8_MIN;
	volatile uint64_t x536 = UINT64_MAX;
	static volatile int32_t t130 = -32855;

    t130 = (x533<=(x534<=(x535/x536)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x537 = -1;
	static int16_t x538 = INT16_MIN;
	int16_t x539 = 1722;
	int32_t x540 = 11297136;
	int32_t t131 = -15525;

    t131 = (x537<=(x538<=(x539/x540)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = INT32_MIN;
	int16_t x542 = INT16_MIN;
	volatile uint16_t x543 = 37U;
	static int64_t x544 = -1LL;

    t132 = (x541<=(x542<=(x543/x544)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x545 = INT32_MAX;
	int32_t x546 = -1;
	int8_t x547 = 5;
	int64_t x548 = -1LL;
	volatile int32_t t133 = 124;

    t133 = (x545<=(x546<=(x547/x548)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x550 = UINT32_MAX;
	int64_t x551 = INT64_MIN;
	volatile int32_t t134 = -22991;

    t134 = (x549<=(x550<=(x551/x552)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x553 = 12LLU;
	int16_t x554 = -1;
	volatile int16_t x555 = INT16_MAX;

    t135 = (x553<=(x554<=(x555/x556)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x557 = 1326U;
	uint8_t x558 = 76U;
	static uint8_t x559 = 15U;
	uint32_t x560 = 14525851U;
	volatile int32_t t136 = -8126793;

    t136 = (x557<=(x558<=(x559/x560)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x562 = INT32_MIN;
	volatile int8_t x563 = -1;
	int64_t x564 = INT64_MAX;
	int32_t t137 = -1549;

    t137 = (x561<=(x562<=(x563/x564)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = -1;
	uint8_t x566 = UINT8_MAX;
	volatile int16_t x567 = INT16_MIN;
	int64_t x568 = INT64_MIN;
	volatile int32_t t138 = 6455;

    t138 = (x565<=(x566<=(x567/x568)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x569 = UINT64_MAX;
	int16_t x570 = 6089;
	int64_t x571 = INT64_MIN;
	int64_t x572 = -148048324606LL;
	int32_t t139 = 40289;

    t139 = (x569<=(x570<=(x571/x572)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x573 = -7LL;
	int8_t x574 = -9;
	volatile uint16_t x575 = 55U;
	static uint64_t x576 = 23924222149291798LLU;

    t140 = (x573<=(x574<=(x575/x576)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x577 = -1LL;
	volatile int16_t x578 = INT16_MIN;
	static volatile int32_t t141 = -12125;

    t141 = (x577<=(x578<=(x579/x580)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x581 = INT32_MIN;
	int16_t x582 = -1;
	int32_t x584 = -52;

    t142 = (x581<=(x582<=(x583/x584)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x585 = -1LL;
	int8_t x587 = INT8_MAX;
	int64_t x588 = INT64_MIN;
	int32_t t143 = -1;

    t143 = (x585<=(x586<=(x587/x588)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x589 = INT32_MIN;
	int32_t x590 = INT32_MIN;
	int64_t x592 = INT64_MIN;
	int32_t t144 = -4951;

    t144 = (x589<=(x590<=(x591/x592)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x595 = INT64_MIN;
	int16_t x596 = INT16_MIN;

    t145 = (x593<=(x594<=(x595/x596)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x597 = 66U;
	uint64_t x598 = 999724616974665LLU;
	uint16_t x599 = 16276U;
	volatile int32_t t146 = -468;

    t146 = (x597<=(x598<=(x599/x600)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x601 = 26371102806491LL;
	uint16_t x603 = 6501U;
	uint32_t x604 = 30832U;

    t147 = (x601<=(x602<=(x603/x604)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x609 = UINT16_MAX;
	uint64_t x610 = 273LLU;
	int16_t x611 = INT16_MIN;
	int8_t x612 = INT8_MAX;

    t148 = (x609<=(x610<=(x611/x612)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x613 = INT32_MIN;
	uint32_t x614 = 4U;
	static int64_t x615 = INT64_MIN;
	uint8_t x616 = UINT8_MAX;
	static int32_t t149 = -81;

    t149 = (x613<=(x614<=(x615/x616)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x618 = INT32_MAX;
	uint32_t x619 = UINT32_MAX;
	uint32_t x620 = UINT32_MAX;
	volatile int32_t t150 = 709;

    t150 = (x617<=(x618<=(x619/x620)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x621 = INT32_MIN;
	uint16_t x622 = 2U;
	static volatile uint8_t x623 = UINT8_MAX;
	uint32_t x624 = 600790747U;
	volatile int32_t t151 = -17;

    t151 = (x621<=(x622<=(x623/x624)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t t152 = 3;

    t152 = (x625<=(x626<=(x627/x628)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x629 = -1;
	int32_t x630 = 6052;
	int64_t x631 = -1LL;
	uint16_t x632 = 547U;

    t153 = (x629<=(x630<=(x631/x632)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x633 = UINT64_MAX;
	uint8_t x634 = 55U;
	volatile int32_t x635 = 187;

    t154 = (x633<=(x634<=(x635/x636)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x637 = INT8_MIN;
	int32_t x638 = -14644696;
	int64_t x639 = -32601612870683LL;
	int64_t x640 = INT64_MAX;
	int32_t t155 = 493;

    t155 = (x637<=(x638<=(x639/x640)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x641 = 1060680028409LLU;
	int16_t x642 = INT16_MIN;
	static uint16_t x644 = 23U;
	int32_t t156 = 1685;

    t156 = (x641<=(x642<=(x643/x644)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x645 = INT64_MAX;
	int64_t x646 = -1LL;
	int8_t x647 = 0;
	volatile uint64_t x648 = 5206021LLU;
	volatile int32_t t157 = -6550181;

    t157 = (x645<=(x646<=(x647/x648)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x649 = UINT64_MAX;
	uint8_t x650 = 1U;
	uint32_t x651 = 2574U;
	int8_t x652 = INT8_MIN;
	int32_t t158 = 11;

    t158 = (x649<=(x650<=(x651/x652)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = -1;
	int32_t x654 = INT32_MAX;
	uint16_t x655 = 491U;
	int64_t x656 = -1LL;
	volatile int32_t t159 = -188;

    t159 = (x653<=(x654<=(x655/x656)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x657 = 11;
	static uint16_t x658 = UINT16_MAX;
	int32_t x659 = -1;
	static uint32_t x660 = 185111U;
	volatile int32_t t160 = 7;

    t160 = (x657<=(x658<=(x659/x660)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x661 = INT8_MIN;
	volatile uint8_t x662 = 0U;
	int16_t x663 = INT16_MAX;
	int32_t t161 = -34805741;

    t161 = (x661<=(x662<=(x663/x664)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x665 = INT8_MIN;
	volatile int16_t x666 = INT16_MIN;
	int64_t x667 = -1LL;
	uint16_t x668 = 23U;
	int32_t t162 = 78284101;

    t162 = (x665<=(x666<=(x667/x668)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x669 = 48903923816220273LLU;
	int16_t x671 = -11;
	int32_t x672 = INT32_MIN;
	volatile int32_t t163 = -5259;

    t163 = (x669<=(x670<=(x671/x672)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x673 = 1703LLU;
	volatile int64_t x676 = INT64_MAX;
	volatile int32_t t164 = -86183;

    t164 = (x673<=(x674<=(x675/x676)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = INT16_MIN;
	int64_t x682 = -696051122984LL;
	volatile int32_t x683 = -1;
	volatile int8_t x684 = 1;
	volatile int32_t t165 = -42;

    t165 = (x681<=(x682<=(x683/x684)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x685 = INT16_MIN;
	int8_t x687 = INT8_MIN;
	uint32_t x688 = 476U;
	volatile int32_t t166 = 19;

    t166 = (x685<=(x686<=(x687/x688)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x689 = INT32_MIN;
	static volatile uint16_t x690 = UINT16_MAX;
	int64_t x691 = 112LL;
	int32_t x692 = 29;
	int32_t t167 = 90607625;

    t167 = (x689<=(x690<=(x691/x692)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x693 = 1603715779LL;
	volatile int8_t x694 = INT8_MIN;
	static uint64_t x696 = 2144044LLU;
	volatile int32_t t168 = -953660;

    t168 = (x693<=(x694<=(x695/x696)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x697 = UINT16_MAX;
	static volatile uint64_t x698 = 1293195693759514LLU;
	int64_t x700 = -1LL;
	volatile int32_t t169 = 4;

    t169 = (x697<=(x698<=(x699/x700)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MAX;
	int32_t x704 = INT32_MIN;
	int32_t t170 = 212791;

    t170 = (x701<=(x702<=(x703/x704)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x706 = 5U;
	uint8_t x707 = 100U;
	volatile uint8_t x708 = UINT8_MAX;
	static volatile int32_t t171 = 7653360;

    t171 = (x705<=(x706<=(x707/x708)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x709 = 2;
	uint64_t x711 = 897430624LLU;
	uint16_t x712 = 2144U;
	int32_t t172 = -1962;

    t172 = (x709<=(x710<=(x711/x712)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x713 = INT64_MAX;
	int16_t x714 = -1;
	int64_t x715 = INT64_MAX;
	uint16_t x716 = UINT16_MAX;
	static int32_t t173 = 13188;

    t173 = (x713<=(x714<=(x715/x716)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x717 = -6;
	volatile uint8_t x718 = 0U;
	uint64_t x719 = UINT64_MAX;
	uint8_t x720 = 70U;
	volatile int32_t t174 = 6172;

    t174 = (x717<=(x718<=(x719/x720)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x722 = 174635236U;
	static int32_t x723 = 223265803;

    t175 = (x721<=(x722<=(x723/x724)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x726 = INT64_MIN;
	static int32_t x727 = -32790;

    t176 = (x725<=(x726<=(x727/x728)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = -3;
	static int8_t x730 = -2;
	uint64_t x731 = 1193509983595214041LLU;
	uint32_t x732 = 2223U;
	static volatile int32_t t177 = 18798;

    t177 = (x729<=(x730<=(x731/x732)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x733 = 21U;
	uint64_t x734 = 4133609049744LLU;
	volatile uint64_t x735 = UINT64_MAX;
	int64_t x736 = INT64_MAX;
	static int32_t t178 = -699961253;

    t178 = (x733<=(x734<=(x735/x736)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x737 = INT32_MAX;
	int32_t x738 = INT32_MIN;
	int64_t x739 = -1LL;
	int16_t x740 = 9;
	volatile int32_t t179 = -148263;

    t179 = (x737<=(x738<=(x739/x740)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x741 = INT64_MIN;
	static int64_t x743 = INT64_MIN;
	int16_t x744 = 2;
	volatile int32_t t180 = 15698998;

    t180 = (x741<=(x742<=(x743/x744)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x746 = 24445;
	volatile int8_t x748 = -42;
	volatile int32_t t181 = 7;

    t181 = (x745<=(x746<=(x747/x748)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x749 = 119U;
	int8_t x750 = INT8_MIN;
	int8_t x751 = 29;
	int32_t x752 = -3740;
	int32_t t182 = -782445830;

    t182 = (x749<=(x750<=(x751/x752)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x754 = 2U;
	int32_t x755 = -22126687;
	static uint32_t x756 = UINT32_MAX;
	volatile int32_t t183 = -55401;

    t183 = (x753<=(x754<=(x755/x756)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x759 = 41;
	int32_t t184 = -625889587;

    t184 = (x757<=(x758<=(x759/x760)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x762 = -1LL;
	int8_t x763 = -1;
	uint8_t x764 = 2U;
	static volatile int32_t t185 = 1;

    t185 = (x761<=(x762<=(x763/x764)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x765 = 281005;
	static uint32_t x766 = UINT32_MAX;
	static int8_t x767 = INT8_MIN;
	int64_t x768 = INT64_MIN;
	int32_t t186 = -54452480;

    t186 = (x765<=(x766<=(x767/x768)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x769 = -1;
	volatile int8_t x770 = 12;
	uint32_t x771 = UINT32_MAX;
	volatile uint8_t x772 = UINT8_MAX;
	static int32_t t187 = 48452456;

    t187 = (x769<=(x770<=(x771/x772)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x773 = -59;
	static volatile int16_t x774 = -1;
	uint8_t x776 = UINT8_MAX;
	int32_t t188 = -78;

    t188 = (x773<=(x774<=(x775/x776)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x777 = INT16_MIN;
	static int8_t x780 = -3;
	int32_t t189 = 27382402;

    t189 = (x777<=(x778<=(x779/x780)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x781 = INT16_MAX;
	static uint64_t x782 = 2147037431319LLU;
	uint8_t x783 = 2U;
	volatile int8_t x784 = INT8_MIN;
	static volatile int32_t t190 = 436274;

    t190 = (x781<=(x782<=(x783/x784)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x785 = -1LL;
	int64_t x786 = -1LL;
	volatile uint16_t x787 = UINT16_MAX;
	volatile int64_t x788 = -1LL;
	static volatile int32_t t191 = 0;

    t191 = (x785<=(x786<=(x787/x788)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x790 = -25285LL;
	uint32_t x792 = 22U;
	static int32_t t192 = -7;

    t192 = (x789<=(x790<=(x791/x792)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x793 = UINT32_MAX;
	static uint16_t x794 = 218U;
	int64_t x795 = INT64_MIN;
	int16_t x796 = INT16_MIN;
	int32_t t193 = -55910322;

    t193 = (x793<=(x794<=(x795/x796)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x797 = INT16_MIN;
	volatile int8_t x798 = INT8_MIN;
	int32_t x799 = -1;
	int64_t x800 = INT64_MAX;
	int32_t t194 = 40374;

    t194 = (x797<=(x798<=(x799/x800)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x802 = -252;

    t195 = (x801<=(x802<=(x803/x804)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x805 = INT16_MAX;
	volatile int32_t x806 = -1;
	volatile int32_t x807 = INT32_MAX;
	int8_t x808 = -1;
	int32_t t196 = 16;

    t196 = (x805<=(x806<=(x807/x808)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x809 = INT16_MIN;
	static int32_t x810 = INT32_MAX;
	static uint32_t x811 = 2U;
	uint64_t x812 = 5489248199LLU;

    t197 = (x809<=(x810<=(x811/x812)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x813 = 0LL;
	int32_t x814 = INT32_MIN;
	static int32_t x815 = INT32_MIN;
	uint64_t x816 = UINT64_MAX;
	int32_t t198 = 121;

    t198 = (x813<=(x814<=(x815/x816)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x817 = -1;
	static uint64_t x819 = UINT64_MAX;
	uint8_t x820 = 116U;

    t199 = (x817<=(x818<=(x819/x820)));

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

