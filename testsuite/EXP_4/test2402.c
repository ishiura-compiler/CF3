
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

uint8_t x3 = 0U;
volatile int16_t x11 = INT16_MAX;
int16_t x12 = INT16_MIN;
int32_t x15 = -135482895;
static int32_t x19 = -1;
int8_t x21 = -1;
volatile int16_t x23 = -150;
int32_t x24 = -4168858;
int32_t t5 = 1586605;
volatile int64_t x28 = 110014773552107LL;
volatile int32_t t6 = 27198;
int64_t x29 = -1401067124085853794LL;
int32_t t8 = -4030;
int16_t x39 = 0;
int16_t x44 = -1;
int16_t x47 = INT16_MAX;
volatile int64_t x48 = -1LL;
volatile int32_t t12 = 412146923;
int64_t x60 = -1LL;
volatile int32_t t14 = 12039580;
int16_t x66 = -1;
int16_t x69 = -64;
volatile int32_t x73 = INT32_MAX;
int8_t x87 = -7;
volatile int32_t t21 = -9482860;
int32_t x94 = INT32_MAX;
volatile int32_t x96 = INT32_MIN;
int32_t x99 = INT32_MIN;
static int8_t x102 = INT8_MIN;
volatile int16_t x110 = INT16_MAX;
volatile int64_t x117 = INT64_MIN;
int16_t x120 = INT16_MIN;
int8_t x136 = -1;
volatile int32_t t32 = -486824;
uint64_t x139 = 63992552021810466LLU;
volatile int16_t x140 = -12219;
static uint16_t x147 = 13154U;
static uint8_t x149 = 29U;
int16_t x150 = INT16_MIN;
volatile int16_t x151 = INT16_MIN;
static uint16_t x154 = 5971U;
int32_t x158 = INT32_MIN;
int8_t x159 = -1;
volatile uint16_t x162 = 12U;
int32_t x166 = -272532;
volatile uint8_t x173 = 34U;
volatile int8_t x175 = INT8_MIN;
int32_t x176 = 474740463;
volatile int64_t x177 = INT64_MAX;
int16_t x190 = INT16_MAX;
int8_t x196 = INT8_MAX;
int32_t t48 = -4;
int16_t x201 = 5736;
static int32_t t49 = 144315653;
static int32_t x210 = INT32_MAX;
int8_t x211 = -1;
volatile uint16_t x212 = 754U;
int32_t t51 = -1533;
int32_t t52 = 105065057;
volatile int16_t x224 = -1;
static volatile int32_t t54 = 12634240;
static int32_t x233 = 133;
static uint16_t x234 = 2070U;
volatile int64_t x237 = INT64_MAX;
int64_t x246 = -1LL;
uint64_t x251 = 4796LLU;
static int64_t x256 = 7781188336298848LL;
int32_t x260 = 75313;
int8_t x263 = INT8_MIN;
uint32_t x267 = UINT32_MAX;
int8_t x268 = -1;
uint8_t x272 = 70U;
int16_t x275 = 12;
int16_t x279 = -57;
volatile int32_t t68 = 37857;
static int8_t x284 = -1;
volatile uint32_t x286 = 6111745U;
static int16_t x289 = INT16_MIN;
int64_t x291 = -13LL;
int32_t x293 = -10414;
static volatile int32_t t73 = -402720;
int64_t x305 = -39818647921076757LL;
int32_t t76 = -1767104;
int16_t x318 = -1;
int64_t x320 = -1LL;
uint16_t x324 = 4019U;
uint16_t x335 = 4U;
static uint32_t x347 = 12244977U;
static int8_t x348 = INT8_MAX;
static volatile int32_t t85 = -62659244;
uint32_t x349 = 656U;
volatile uint16_t x351 = UINT16_MAX;
static int64_t x352 = INT64_MAX;
static int32_t x360 = -1;
uint8_t x362 = UINT8_MAX;
int32_t t89 = -586;
int64_t x365 = 2328LL;
int8_t x383 = INT8_MIN;
int32_t x388 = INT32_MIN;
int16_t x393 = 141;
volatile int32_t t97 = 222154057;
static uint8_t x405 = 28U;
int8_t x424 = 3;
uint16_t x425 = 99U;
static volatile int32_t x426 = -2614;
int64_t x435 = INT64_MIN;
uint8_t x439 = 76U;
int64_t x440 = INT64_MAX;
int32_t x448 = -1;
int16_t x457 = INT16_MAX;
volatile int32_t t115 = -1;
static int64_t x473 = INT64_MIN;
volatile int8_t x480 = -1;
int64_t x485 = -13442562LL;
uint8_t x487 = 92U;
static volatile int32_t t119 = 123996;
uint16_t x490 = 46U;
int32_t x492 = INT32_MAX;
volatile int32_t t121 = 2;
int32_t t124 = 6189142;
static uint16_t x509 = UINT16_MAX;
volatile uint16_t x511 = 28284U;
volatile int32_t t125 = -1650;
volatile int32_t x514 = -5;
int32_t x515 = -1;
uint16_t x520 = 53U;
int32_t t127 = 4;
static volatile int8_t x527 = INT8_MIN;
static int8_t x540 = 1;
int32_t t131 = 47040;
static int64_t x545 = -1LL;
volatile int16_t x547 = INT16_MIN;
uint32_t x548 = 220U;
int64_t x549 = INT64_MIN;
uint8_t x552 = 62U;
static int16_t x554 = INT16_MIN;
uint32_t x556 = 157379388U;
volatile int16_t x559 = -17;
int64_t x564 = INT64_MIN;
static uint16_t x569 = 27U;
static int64_t x575 = INT64_MIN;
static volatile int32_t t140 = 119870005;
uint16_t x577 = 3U;
int16_t x579 = 77;
uint8_t x580 = 9U;
volatile int8_t x583 = 1;
volatile int8_t x585 = INT8_MIN;
uint32_t x588 = UINT32_MAX;
int16_t x591 = INT16_MIN;
volatile int32_t t144 = 0;
uint64_t x595 = 1427754LLU;
int64_t x596 = INT64_MIN;
static int16_t x601 = -1;
int32_t x605 = 7;
int32_t x614 = INT32_MAX;
int64_t x623 = 60812109361831889LL;
static int8_t x626 = INT8_MAX;
volatile int32_t t153 = 8333;
volatile uint16_t x634 = 14599U;
volatile int32_t t155 = -31102;
uint32_t x637 = UINT32_MAX;
int16_t x640 = -1;
int32_t x642 = INT32_MIN;
static int32_t t157 = -380;
uint32_t x645 = 60829029U;
static int32_t x648 = -1;
uint64_t x651 = 2339801486820LLU;
volatile int32_t x653 = INT32_MIN;
volatile int64_t x660 = 5LL;
uint16_t x663 = 31379U;
volatile int32_t t163 = 5340951;
static int8_t x676 = -1;
int8_t x681 = INT8_MIN;
static int16_t x682 = INT16_MIN;
uint32_t x688 = 23980357U;
volatile int16_t x690 = INT16_MAX;
static int8_t x703 = INT8_MIN;
int32_t t174 = -1777862;
volatile int32_t t176 = 256;
int32_t x739 = 1;
volatile int32_t x744 = INT32_MAX;
int32_t x750 = -14;
static volatile int32_t t183 = 1857820;
uint16_t x764 = UINT16_MAX;
int32_t t186 = -5;
uint8_t x766 = 29U;
int64_t x776 = -1490180306631773602LL;
uint16_t x781 = UINT16_MAX;
volatile int16_t x782 = -1;
static int64_t x783 = -142585LL;
int32_t x785 = INT32_MAX;
volatile int64_t x787 = INT64_MIN;
uint64_t x788 = 1493756122655679LLU;
int32_t t192 = -12613;
int8_t x790 = 1;
int16_t x801 = INT16_MAX;
static uint16_t x803 = 141U;
volatile int32_t t197 = -3;
int32_t x810 = INT32_MAX;
volatile int32_t t198 = 322434723;


void f0(void) {
    	int64_t x1 = 5858525365367135LL;
	int8_t x2 = -1;
	int8_t x4 = 5;
	volatile int32_t t0 = 182457;

    t0 = (x1==(x2/(x3|x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = 15941576LL;
	volatile int32_t x6 = 3952134;
	int8_t x7 = -9;
	static int32_t x8 = -1;
	volatile int32_t t1 = 1697;

    t1 = (x5==(x6/(x7|x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 19;
	int16_t x10 = -27;
	int32_t t2 = -564235064;

    t2 = (x9==(x10/(x11|x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -45580134;
	int16_t x14 = 569;
	uint32_t x16 = 457U;
	int32_t t3 = -20264;

    t3 = (x13==(x14/(x15|x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 0LLU;
	int64_t x18 = 5360597386986LL;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 1;

    t4 = (x17==(x18/(x19|x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x22 = INT8_MIN;

    t5 = (x21==(x22/(x23|x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = 0;
	volatile uint32_t x27 = UINT32_MAX;

    t6 = (x25==(x26/(x27|x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = -7;
	uint16_t x31 = 5U;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 253899;

    t7 = (x29==(x30/(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint32_t x33 = 1U;
	int32_t x34 = 7603;
	volatile int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MAX;

    t8 = (x33==(x34/(x35|x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x37 = UINT8_MAX;
	static volatile int64_t x38 = INT64_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 379871;

    t9 = (x37==(x38/(x39|x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = 226;
	int16_t x42 = INT16_MIN;
	static volatile uint8_t x43 = 19U;
	volatile int32_t t10 = 382097333;

    t10 = (x41==(x42/(x43|x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	int32_t x46 = INT32_MIN;
	int32_t t11 = 19930860;

    t11 = (x45==(x46/(x47|x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MIN;
	int8_t x51 = 3;
	static int64_t x52 = INT64_MIN;

    t12 = (x49==(x50/(x51|x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = -482314428;
	uint16_t x54 = UINT16_MAX;
	int16_t x55 = INT16_MAX;
	volatile uint8_t x56 = 62U;
	int32_t t13 = 29599207;

    t13 = (x53==(x54/(x55|x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 29;
	int16_t x58 = 1;
	uint16_t x59 = 8691U;

    t14 = (x57==(x58/(x59|x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	static volatile int64_t x62 = INT64_MAX;
	volatile int32_t x63 = INT32_MIN;
	int32_t x64 = -1;
	static volatile int32_t t15 = -468979;

    t15 = (x61==(x62/(x63|x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = 6827501LLU;
	int16_t x67 = 1;
	static int64_t x68 = INT64_MIN;
	static volatile int32_t t16 = 1;

    t16 = (x65==(x66/(x67|x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x70 = 14U;
	int16_t x71 = -1;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 28;

    t17 = (x69==(x70/(x71|x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	int64_t x76 = -1LL;
	static volatile int32_t t18 = -27986;

    t18 = (x73==(x74/(x75|x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 8U;
	int16_t x78 = -1;
	static int16_t x79 = INT16_MAX;
	static volatile uint8_t x80 = 45U;
	int32_t t19 = -3;

    t19 = (x77==(x78/(x79|x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x81 = 183U;
	volatile int16_t x82 = 190;
	uint32_t x83 = 24395U;
	uint16_t x84 = UINT16_MAX;
	int32_t t20 = 899909;

    t20 = (x81==(x82/(x83|x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 902396U;
	static int16_t x86 = -1;
	int64_t x88 = -1LL;

    t21 = (x85==(x86/(x87|x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = 30U;
	int8_t x90 = INT8_MIN;
	volatile int32_t x91 = -3;
	volatile int64_t x92 = 4194325287299LL;
	static volatile int32_t t22 = 0;

    t22 = (x89==(x90/(x91|x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 1224U;
	int8_t x95 = INT8_MIN;
	volatile int32_t t23 = 117501387;

    t23 = (x93==(x94/(x95|x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	int64_t x98 = 162295651352LL;
	int32_t x100 = -16196;
	volatile int32_t t24 = -104427;

    t24 = (x97==(x98/(x99|x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 464359U;
	volatile int64_t x103 = INT64_MAX;
	uint64_t x104 = UINT64_MAX;
	static volatile int32_t t25 = 79;

    t25 = (x101==(x102/(x103|x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int64_t x106 = -1LL;
	int16_t x107 = INT16_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = -37277664;

    t26 = (x105==(x106/(x107|x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x109 = INT64_MIN;
	int16_t x111 = INT16_MAX;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t27 = -259722;

    t27 = (x109==(x110/(x111|x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x113 = 0U;
	static volatile uint32_t x114 = UINT32_MAX;
	static int32_t x115 = INT32_MIN;
	static uint32_t x116 = UINT32_MAX;
	int32_t t28 = -1;

    t28 = (x113==(x114/(x115|x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = 1;
	int64_t x119 = 456054LL;
	volatile int32_t t29 = 410;

    t29 = (x117==(x118/(x119|x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	static int16_t x122 = -1;
	uint32_t x123 = UINT32_MAX;
	uint32_t x124 = UINT32_MAX;
	int32_t t30 = -2288523;

    t30 = (x121==(x122/(x123|x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	volatile int8_t x126 = -1;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 3426072771LLU;
	int32_t t31 = 265201081;

    t31 = (x125==(x126/(x127|x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = UINT32_MAX;
	static int8_t x134 = INT8_MIN;
	uint64_t x135 = 35041147501891139LLU;

    t32 = (x133==(x134/(x135|x136)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 7225689U;
	int32_t x138 = -15;
	volatile int32_t t33 = -55580;

    t33 = (x137==(x138/(x139|x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x141 = 29115650422257378LLU;
	uint32_t x142 = 337273U;
	uint64_t x143 = UINT64_MAX;
	int8_t x144 = -1;
	volatile int32_t t34 = 876314192;

    t34 = (x141==(x142/(x143|x144)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MAX;
	static uint64_t x146 = 69966564034916LLU;
	volatile uint16_t x148 = UINT16_MAX;
	static volatile int32_t t35 = 3;

    t35 = (x145==(x146/(x147|x148)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x152 = INT16_MIN;
	static volatile int32_t t36 = 20;

    t36 = (x149==(x150/(x151|x152)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x153 = UINT64_MAX;
	uint8_t x155 = 5U;
	int32_t x156 = 13486;
	int32_t t37 = -435686;

    t37 = (x153==(x154/(x155|x156)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = INT16_MAX;
	int64_t x160 = INT64_MAX;
	int32_t t38 = -44745;

    t38 = (x157==(x158/(x159|x160)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = 948;
	int16_t x163 = -261;
	static uint32_t x164 = 37234U;
	static volatile int32_t t39 = -130;

    t39 = (x161==(x162/(x163|x164)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = -1;
	int16_t x167 = 0;
	int8_t x168 = INT8_MIN;
	static int32_t t40 = 6040249;

    t40 = (x165==(x166/(x167|x168)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = 3873U;
	int32_t x170 = INT32_MIN;
	volatile int32_t x171 = -1;
	volatile int64_t x172 = INT64_MIN;
	static volatile int32_t t41 = -21361875;

    t41 = (x169==(x170/(x171|x172)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x174 = -1;
	int32_t t42 = -955361;

    t42 = (x173==(x174/(x175|x176)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x178 = -43419564440428191LL;
	uint32_t x179 = 0U;
	static int16_t x180 = INT16_MIN;
	int32_t t43 = 0;

    t43 = (x177==(x178/(x179|x180)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x181 = -2;
	static int16_t x182 = 47;
	volatile int16_t x183 = -1;
	volatile int8_t x184 = -1;
	int32_t t44 = -2268;

    t44 = (x181==(x182/(x183|x184)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x185 = -1LL;
	uint16_t x186 = 13086U;
	uint32_t x187 = 67U;
	static int16_t x188 = INT16_MIN;
	int32_t t45 = -9200890;

    t45 = (x185==(x186/(x187|x188)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x189 = 17U;
	static int16_t x191 = INT16_MIN;
	uint64_t x192 = 78LLU;
	int32_t t46 = 60082;

    t46 = (x189==(x190/(x191|x192)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x193 = UINT16_MAX;
	int64_t x194 = INT64_MAX;
	static int8_t x195 = -13;
	int32_t t47 = -3;

    t47 = (x193==(x194/(x195|x196)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x197 = -2084594925567537LL;
	int8_t x198 = -1;
	volatile int16_t x199 = INT16_MIN;
	static int8_t x200 = INT8_MIN;

    t48 = (x197==(x198/(x199|x200)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x202 = 1;
	volatile int8_t x203 = -1;
	int8_t x204 = -2;

    t49 = (x201==(x202/(x203|x204)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x205 = -6;
	uint16_t x206 = 8035U;
	uint8_t x207 = 1U;
	volatile uint32_t x208 = UINT32_MAX;
	int32_t t50 = -776756178;

    t50 = (x205==(x206/(x207|x208)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x209 = 31U;

    t51 = (x209==(x210/(x211|x212)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = INT8_MAX;
	int32_t x214 = -1;
	int64_t x215 = -5143881347LL;
	int16_t x216 = INT16_MIN;

    t52 = (x213==(x214/(x215|x216)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x217 = 190754269U;
	static int8_t x218 = INT8_MIN;
	uint32_t x219 = 9964U;
	int16_t x220 = INT16_MAX;
	int32_t t53 = 84152;

    t53 = (x217==(x218/(x219|x220)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x221 = 3;
	int32_t x222 = -74339;
	static volatile int16_t x223 = 3559;

    t54 = (x221==(x222/(x223|x224)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x225 = -511;
	volatile int64_t x226 = -237414559376588LL;
	int32_t x227 = INT32_MAX;
	int32_t x228 = INT32_MIN;
	int32_t t55 = -947883;

    t55 = (x225==(x226/(x227|x228)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x229 = UINT64_MAX;
	static int64_t x230 = 119LL;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = 501U;
	int32_t t56 = -1;

    t56 = (x229==(x230/(x231|x232)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x235 = INT8_MAX;
	uint64_t x236 = 1372LLU;
	int32_t t57 = 464663;

    t57 = (x233==(x234/(x235|x236)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x238 = -12;
	int8_t x239 = INT8_MIN;
	static uint32_t x240 = UINT32_MAX;
	volatile int32_t t58 = 9596;

    t58 = (x237==(x238/(x239|x240)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x241 = 21313687392117266LL;
	volatile uint32_t x242 = 58502988U;
	int16_t x243 = INT16_MIN;
	static int8_t x244 = -1;
	int32_t t59 = -9193;

    t59 = (x241==(x242/(x243|x244)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x245 = UINT16_MAX;
	int64_t x247 = -1LL;
	static volatile int16_t x248 = -491;
	int32_t t60 = -1138;

    t60 = (x245==(x246/(x247|x248)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = -1LL;
	static int16_t x250 = INT16_MIN;
	int8_t x252 = INT8_MAX;
	static int32_t t61 = 103129697;

    t61 = (x249==(x250/(x251|x252)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x253 = INT64_MIN;
	int16_t x254 = -6;
	static volatile int64_t x255 = -1LL;
	static volatile int32_t t62 = 133;

    t62 = (x253==(x254/(x255|x256)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x257 = 11;
	static volatile uint64_t x258 = 15539710875962825LLU;
	static int32_t x259 = INT32_MIN;
	int32_t t63 = 1;

    t63 = (x257==(x258/(x259|x260)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x261 = INT16_MIN;
	static int64_t x262 = INT64_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t64 = -569306;

    t64 = (x261==(x262/(x263|x264)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = 11971085LLU;
	static int64_t x266 = -1LL;
	static volatile int32_t t65 = -78;

    t65 = (x265==(x266/(x267|x268)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	int16_t x271 = -1;
	volatile int32_t t66 = -1483085;

    t66 = (x269==(x270/(x271|x272)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x273 = 1740;
	volatile uint32_t x274 = UINT32_MAX;
	int64_t x276 = -1LL;
	volatile int32_t t67 = 8029;

    t67 = (x273==(x274/(x275|x276)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = INT64_MAX;
	int64_t x278 = -1LL;
	uint64_t x280 = 109LLU;

    t68 = (x277==(x278/(x279|x280)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = INT8_MIN;
	uint32_t x282 = 982486774U;
	static uint8_t x283 = UINT8_MAX;
	volatile int32_t t69 = -189193355;

    t69 = (x281==(x282/(x283|x284)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = 1;
	static int32_t x287 = INT32_MIN;
	volatile uint32_t x288 = 194U;
	int32_t t70 = -1;

    t70 = (x285==(x286/(x287|x288)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x290 = INT64_MAX;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t71 = 1366;

    t71 = (x289==(x290/(x291|x292)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x294 = 85130U;
	static int8_t x295 = -1;
	static int8_t x296 = -14;
	int32_t t72 = -74462;

    t72 = (x293==(x294/(x295|x296)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x297 = 82274577052LLU;
	static int8_t x298 = INT8_MIN;
	volatile int8_t x299 = 1;
	int16_t x300 = -1;

    t73 = (x297==(x298/(x299|x300)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x301 = 3309730LLU;
	int8_t x302 = INT8_MIN;
	static volatile uint32_t x303 = UINT32_MAX;
	int32_t x304 = -1;
	static int32_t t74 = 166570;

    t74 = (x301==(x302/(x303|x304)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x306 = 10232937;
	int16_t x307 = INT16_MIN;
	static volatile uint32_t x308 = UINT32_MAX;
	int32_t t75 = 21583425;

    t75 = (x305==(x306/(x307|x308)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x309 = UINT16_MAX;
	int32_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = INT8_MIN;

    t76 = (x309==(x310/(x311|x312)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x313 = 20734U;
	static int32_t x314 = 1218723;
	uint64_t x315 = UINT64_MAX;
	uint32_t x316 = UINT32_MAX;
	int32_t t77 = 836;

    t77 = (x313==(x314/(x315|x316)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x317 = INT32_MAX;
	static uint8_t x319 = 6U;
	int32_t t78 = 259513;

    t78 = (x317==(x318/(x319|x320)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x321 = 24341228441800LLU;
	static uint16_t x322 = UINT16_MAX;
	static uint8_t x323 = UINT8_MAX;
	int32_t t79 = 339845;

    t79 = (x321==(x322/(x323|x324)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x325 = 7U;
	uint16_t x326 = UINT16_MAX;
	static uint8_t x327 = 5U;
	volatile int32_t x328 = INT32_MIN;
	int32_t t80 = -8;

    t80 = (x325==(x326/(x327|x328)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	volatile int32_t x330 = -1;
	int64_t x331 = 1798LL;
	uint64_t x332 = UINT64_MAX;
	int32_t t81 = 0;

    t81 = (x329==(x330/(x331|x332)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x333 = 5149328472721020096LLU;
	int16_t x334 = INT16_MAX;
	int16_t x336 = -1;
	static int32_t t82 = 1;

    t82 = (x333==(x334/(x335|x336)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x337 = -1LL;
	int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = 0U;
	volatile int32_t t83 = -3;

    t83 = (x337==(x338/(x339|x340)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x341 = 24864LLU;
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MIN;
	int8_t x344 = 0;
	volatile int32_t t84 = 143;

    t84 = (x341==(x342/(x343|x344)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x345 = -3190491548366LL;
	uint16_t x346 = 240U;

    t85 = (x345==(x346/(x347|x348)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x350 = UINT16_MAX;
	int32_t t86 = -462;

    t86 = (x349==(x350/(x351|x352)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = INT32_MIN;
	static int32_t x354 = -192;
	int8_t x355 = INT8_MIN;
	uint8_t x356 = 24U;
	static int32_t t87 = -331;

    t87 = (x353==(x354/(x355|x356)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = INT8_MIN;
	int8_t x358 = -48;
	volatile uint16_t x359 = UINT16_MAX;
	volatile int32_t t88 = 3713713;

    t88 = (x357==(x358/(x359|x360)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x361 = INT8_MIN;
	int64_t x363 = 10LL;
	static int8_t x364 = 1;

    t89 = (x361==(x362/(x363|x364)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x366 = -4123399452LL;
	static uint8_t x367 = 29U;
	int16_t x368 = -30;
	int32_t t90 = -4820925;

    t90 = (x365==(x366/(x367|x368)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x369 = 22U;
	int32_t x370 = INT32_MIN;
	static int16_t x371 = -1;
	int64_t x372 = 387551287378LL;
	int32_t t91 = -1029172661;

    t91 = (x369==(x370/(x371|x372)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x373 = 0U;
	volatile int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	int32_t x376 = 11623;
	volatile int32_t t92 = -8;

    t92 = (x373==(x374/(x375|x376)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x377 = UINT64_MAX;
	int8_t x378 = INT8_MAX;
	volatile int16_t x379 = -1;
	int16_t x380 = INT16_MAX;
	volatile int32_t t93 = -24240;

    t93 = (x377==(x378/(x379|x380)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x381 = INT8_MAX;
	int16_t x382 = -2734;
	int8_t x384 = 0;
	int32_t t94 = 66803573;

    t94 = (x381==(x382/(x383|x384)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MAX;
	volatile int8_t x387 = INT8_MIN;
	static volatile int32_t t95 = 3;

    t95 = (x385==(x386/(x387|x388)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x389 = INT32_MAX;
	static int32_t x390 = INT32_MAX;
	int32_t x391 = INT32_MIN;
	uint8_t x392 = 12U;
	int32_t t96 = 891741;

    t96 = (x389==(x390/(x391|x392)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x394 = UINT64_MAX;
	uint8_t x395 = 31U;
	int16_t x396 = INT16_MIN;

    t97 = (x393==(x394/(x395|x396)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = INT32_MIN;
	int16_t x398 = -4;
	int64_t x399 = INT64_MAX;
	static int64_t x400 = 4770985546LL;
	volatile int32_t t98 = -2470328;

    t98 = (x397==(x398/(x399|x400)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x406 = -11569;
	int64_t x407 = -4386197933462515645LL;
	uint8_t x408 = 11U;
	volatile int32_t t99 = -23615426;

    t99 = (x405==(x406/(x407|x408)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x409 = UINT32_MAX;
	static int64_t x410 = -1970418LL;
	int32_t x411 = INT32_MIN;
	int16_t x412 = -1;
	volatile int32_t t100 = 10641;

    t100 = (x409==(x410/(x411|x412)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x413 = -1;
	int64_t x414 = INT64_MAX;
	static int16_t x415 = 13082;
	int8_t x416 = -1;
	int32_t t101 = -456;

    t101 = (x413==(x414/(x415|x416)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x417 = INT32_MAX;
	uint8_t x418 = UINT8_MAX;
	volatile uint32_t x419 = 15306U;
	volatile int32_t x420 = -248350339;
	volatile int32_t t102 = 3;

    t102 = (x417==(x418/(x419|x420)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x421 = 3780272012LLU;
	volatile int16_t x422 = -1218;
	uint32_t x423 = UINT32_MAX;
	volatile int32_t t103 = 43307;

    t103 = (x421==(x422/(x423|x424)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x427 = 4U;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t104 = -66362512;

    t104 = (x425==(x426/(x427|x428)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x429 = 2948;
	int32_t x430 = INT32_MIN;
	static int64_t x431 = -870LL;
	int8_t x432 = 31;
	volatile int32_t t105 = 19496;

    t105 = (x429==(x430/(x431|x432)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = INT8_MIN;
	volatile int16_t x434 = -1;
	int32_t x436 = -1;
	volatile int32_t t106 = -26171;

    t106 = (x433==(x434/(x435|x436)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x437 = UINT64_MAX;
	uint16_t x438 = UINT16_MAX;
	int32_t t107 = 0;

    t107 = (x437==(x438/(x439|x440)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x441 = 242974U;
	int64_t x442 = -230982LL;
	volatile uint32_t x443 = 56U;
	static int64_t x444 = 65471536LL;
	static int32_t t108 = -18268313;

    t108 = (x441==(x442/(x443|x444)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x445 = INT16_MIN;
	static volatile int16_t x446 = -1;
	int8_t x447 = -1;
	int32_t t109 = 59;

    t109 = (x445==(x446/(x447|x448)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x449 = UINT16_MAX;
	static int64_t x450 = -1LL;
	static uint32_t x451 = 1387459773U;
	int32_t x452 = 31885;
	volatile int32_t t110 = 2;

    t110 = (x449==(x450/(x451|x452)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = INT32_MIN;
	static int8_t x454 = -1;
	int16_t x455 = INT16_MAX;
	int8_t x456 = INT8_MIN;
	int32_t t111 = -106795254;

    t111 = (x453==(x454/(x455|x456)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x458 = INT8_MAX;
	uint64_t x459 = 239460766324495LLU;
	uint64_t x460 = 308272236LLU;
	volatile int32_t t112 = 540913280;

    t112 = (x457==(x458/(x459|x460)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x461 = INT8_MIN;
	int64_t x462 = -1LL;
	uint8_t x463 = 0U;
	int8_t x464 = INT8_MIN;
	static int32_t t113 = -470;

    t113 = (x461==(x462/(x463|x464)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x465 = UINT16_MAX;
	volatile int16_t x466 = INT16_MIN;
	volatile uint8_t x467 = UINT8_MAX;
	volatile int32_t x468 = INT32_MIN;
	int32_t t114 = 135454;

    t114 = (x465==(x466/(x467|x468)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x469 = INT64_MAX;
	int64_t x470 = INT64_MIN;
	volatile int32_t x471 = INT32_MIN;
	int8_t x472 = -17;

    t115 = (x469==(x470/(x471|x472)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x474 = UINT16_MAX;
	volatile int32_t x475 = INT32_MAX;
	int16_t x476 = INT16_MAX;
	static int32_t t116 = 74757;

    t116 = (x473==(x474/(x475|x476)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = -47;
	uint16_t x478 = UINT16_MAX;
	volatile int8_t x479 = -1;
	static volatile int32_t t117 = -4334251;

    t117 = (x477==(x478/(x479|x480)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x481 = UINT16_MAX;
	uint16_t x482 = UINT16_MAX;
	static int32_t x483 = 860079;
	static uint64_t x484 = 65304378LLU;
	int32_t t118 = -39;

    t118 = (x481==(x482/(x483|x484)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x486 = 37U;
	uint8_t x488 = 43U;

    t119 = (x485==(x486/(x487|x488)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x489 = -29580852355561LL;
	int8_t x491 = INT8_MAX;
	volatile int32_t t120 = -79;

    t120 = (x489==(x490/(x491|x492)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x493 = 12487U;
	int32_t x494 = -111757164;
	int32_t x495 = INT32_MIN;
	volatile uint32_t x496 = 21738885U;

    t121 = (x493==(x494/(x495|x496)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x497 = -13;
	int8_t x498 = 1;
	static int16_t x499 = INT16_MIN;
	volatile int32_t x500 = INT32_MIN;
	int32_t t122 = -5175;

    t122 = (x497==(x498/(x499|x500)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x501 = INT8_MIN;
	static int16_t x502 = -1;
	int8_t x503 = 0;
	int64_t x504 = -189029154LL;
	static int32_t t123 = 130605;

    t123 = (x501==(x502/(x503|x504)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x505 = INT16_MAX;
	uint32_t x506 = 1872177U;
	volatile int32_t x507 = -885668;
	uint8_t x508 = 1U;

    t124 = (x505==(x506/(x507|x508)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x510 = INT64_MAX;
	static int32_t x512 = -1;

    t125 = (x509==(x510/(x511|x512)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x513 = 60;
	int64_t x516 = INT64_MIN;
	volatile int32_t t126 = -23343;

    t126 = (x513==(x514/(x515|x516)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	static int32_t x518 = INT32_MAX;
	int16_t x519 = INT16_MIN;

    t127 = (x517==(x518/(x519|x520)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x521 = 5036U;
	uint64_t x522 = UINT64_MAX;
	static uint16_t x523 = UINT16_MAX;
	volatile int64_t x524 = -1LL;
	volatile int32_t t128 = 604029572;

    t128 = (x521==(x522/(x523|x524)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x525 = 0U;
	int8_t x526 = INT8_MIN;
	static uint32_t x528 = 155385825U;
	static volatile int32_t t129 = 5923464;

    t129 = (x525==(x526/(x527|x528)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x529 = 1U;
	volatile uint16_t x530 = 6U;
	int32_t x531 = -1;
	int16_t x532 = -1;
	int32_t t130 = -31206836;

    t130 = (x529==(x530/(x531|x532)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	int8_t x538 = -1;
	volatile int32_t x539 = INT32_MIN;

    t131 = (x537==(x538/(x539|x540)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x541 = -1LL;
	uint32_t x542 = UINT32_MAX;
	int16_t x543 = -1;
	int16_t x544 = -404;
	int32_t t132 = -506742;

    t132 = (x541==(x542/(x543|x544)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x546 = 117804864U;
	int32_t t133 = -540474;

    t133 = (x545==(x546/(x547|x548)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x550 = 2034759288717262969LL;
	volatile int32_t x551 = 15983;
	volatile int32_t t134 = 42;

    t134 = (x549==(x550/(x551|x552)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x553 = 123;
	static int8_t x555 = 1;
	int32_t t135 = -245939;

    t135 = (x553==(x554/(x555|x556)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x557 = -1;
	int64_t x558 = INT64_MIN;
	static int64_t x560 = INT64_MIN;
	int32_t t136 = 111612268;

    t136 = (x557==(x558/(x559|x560)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = INT8_MIN;
	int32_t x562 = -612845;
	static int8_t x563 = INT8_MIN;
	volatile int32_t t137 = -5785;

    t137 = (x561==(x562/(x563|x564)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x565 = 4626U;
	static int16_t x566 = INT16_MIN;
	int8_t x567 = INT8_MAX;
	int16_t x568 = 15;
	int32_t t138 = 8416;

    t138 = (x565==(x566/(x567|x568)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x570 = 5122U;
	uint64_t x571 = 1055LLU;
	static int64_t x572 = -2191947024339218LL;
	volatile int32_t t139 = 2085;

    t139 = (x569==(x570/(x571|x572)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x573 = 192565LL;
	uint16_t x574 = 3575U;
	volatile int16_t x576 = INT16_MAX;

    t140 = (x573==(x574/(x575|x576)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x578 = INT16_MIN;
	static volatile int32_t t141 = 82942;

    t141 = (x577==(x578/(x579|x580)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x581 = -1;
	int32_t x582 = INT32_MIN;
	static uint8_t x584 = 3U;
	int32_t t142 = 0;

    t142 = (x581==(x582/(x583|x584)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x586 = -1;
	uint16_t x587 = 5U;
	static int32_t t143 = -2269;

    t143 = (x585==(x586/(x587|x588)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x589 = 341889U;
	int32_t x590 = INT32_MAX;
	int64_t x592 = INT64_MIN;

    t144 = (x589==(x590/(x591|x592)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x593 = -39;
	int32_t x594 = INT32_MAX;
	int32_t t145 = -107204;

    t145 = (x593==(x594/(x595|x596)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x597 = -1;
	int32_t x598 = INT32_MAX;
	int64_t x599 = INT64_MIN;
	int16_t x600 = -1;
	volatile int32_t t146 = 117039;

    t146 = (x597==(x598/(x599|x600)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x602 = 2070841LL;
	volatile int16_t x603 = 6653;
	int32_t x604 = INT32_MIN;
	int32_t t147 = 0;

    t147 = (x601==(x602/(x603|x604)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x606 = 244U;
	int32_t x607 = -1;
	int16_t x608 = INT16_MIN;
	static int32_t t148 = 188;

    t148 = (x605==(x606/(x607|x608)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x609 = INT16_MAX;
	static int8_t x610 = INT8_MIN;
	uint16_t x611 = 931U;
	int8_t x612 = INT8_MIN;
	static volatile int32_t t149 = 489116756;

    t149 = (x609==(x610/(x611|x612)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x613 = -42;
	static uint16_t x615 = 4U;
	volatile int8_t x616 = INT8_MIN;
	int32_t t150 = -320133952;

    t150 = (x613==(x614/(x615|x616)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x617 = INT16_MIN;
	volatile int8_t x618 = INT8_MAX;
	int16_t x619 = INT16_MIN;
	int32_t x620 = 2;
	int32_t t151 = 580;

    t151 = (x617==(x618/(x619|x620)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x621 = -1;
	int16_t x622 = -1672;
	int8_t x624 = INT8_MIN;
	int32_t t152 = -4;

    t152 = (x621==(x622/(x623|x624)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x625 = 376U;
	static volatile uint64_t x627 = UINT64_MAX;
	int8_t x628 = INT8_MIN;

    t153 = (x625==(x626/(x627|x628)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x629 = -6367231029863353LL;
	int8_t x630 = 0;
	int16_t x631 = INT16_MIN;
	int16_t x632 = INT16_MIN;
	int32_t t154 = 1001573;

    t154 = (x629==(x630/(x631|x632)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x633 = -61;
	static volatile uint32_t x635 = 699570192U;
	static int64_t x636 = -1LL;

    t155 = (x633==(x634/(x635|x636)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x638 = INT32_MAX;
	int16_t x639 = -1032;
	int32_t t156 = 724225;

    t156 = (x637==(x638/(x639|x640)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x641 = 381007430LLU;
	volatile uint64_t x643 = UINT64_MAX;
	int8_t x644 = INT8_MIN;

    t157 = (x641==(x642/(x643|x644)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x646 = -1;
	int8_t x647 = 10;
	static volatile int32_t t158 = 21;

    t158 = (x645==(x646/(x647|x648)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x649 = 19232LLU;
	static int64_t x650 = 5006321LL;
	volatile uint8_t x652 = UINT8_MAX;
	volatile int32_t t159 = -902;

    t159 = (x649==(x650/(x651|x652)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x654 = INT64_MIN;
	static volatile int8_t x655 = INT8_MIN;
	int64_t x656 = INT64_MIN;
	static int32_t t160 = -815850;

    t160 = (x653==(x654/(x655|x656)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x657 = 26455311017241LLU;
	volatile int32_t x658 = INT32_MIN;
	uint16_t x659 = 37U;
	volatile int32_t t161 = -1;

    t161 = (x657==(x658/(x659|x660)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x661 = 6561129103440LLU;
	static int8_t x662 = -1;
	int32_t x664 = INT32_MAX;
	static int32_t t162 = 116;

    t162 = (x661==(x662/(x663|x664)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x669 = INT64_MIN;
	static int8_t x670 = INT8_MIN;
	static volatile int32_t x671 = -1;
	volatile uint64_t x672 = 11132088LLU;

    t163 = (x669==(x670/(x671|x672)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x673 = INT32_MIN;
	static uint32_t x674 = 38602921U;
	uint8_t x675 = 0U;
	volatile int32_t t164 = 42967346;

    t164 = (x673==(x674/(x675|x676)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x677 = INT64_MIN;
	volatile uint8_t x678 = 0U;
	int32_t x679 = 2393563;
	uint8_t x680 = 26U;
	volatile int32_t t165 = 163;

    t165 = (x677==(x678/(x679|x680)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x683 = 982573827;
	volatile int64_t x684 = INT64_MAX;
	static volatile int32_t t166 = -30;

    t166 = (x681==(x682/(x683|x684)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x685 = -1;
	int16_t x686 = -10;
	int8_t x687 = INT8_MIN;
	int32_t t167 = 166120;

    t167 = (x685==(x686/(x687|x688)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x689 = INT16_MIN;
	volatile uint16_t x691 = 14544U;
	int32_t x692 = INT32_MAX;
	static int32_t t168 = 9;

    t168 = (x689==(x690/(x691|x692)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x693 = INT64_MAX;
	int32_t x694 = 5110373;
	int32_t x695 = INT32_MAX;
	volatile uint64_t x696 = 97866522960774LLU;
	int32_t t169 = -514701;

    t169 = (x693==(x694/(x695|x696)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x697 = INT32_MIN;
	int32_t x698 = -1;
	static uint8_t x699 = UINT8_MAX;
	uint32_t x700 = 1613572491U;
	static volatile int32_t t170 = 7343;

    t170 = (x697==(x698/(x699|x700)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x701 = -1LL;
	int16_t x702 = -1;
	static int16_t x704 = INT16_MIN;
	int32_t t171 = -2047;

    t171 = (x701==(x702/(x703|x704)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x705 = 2;
	uint8_t x706 = 1U;
	int32_t x707 = -1;
	uint32_t x708 = 1584457131U;
	int32_t t172 = 19382;

    t172 = (x705==(x706/(x707|x708)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = INT8_MIN;
	int32_t x710 = 960190;
	static volatile uint16_t x711 = 25934U;
	static int16_t x712 = -1;
	static volatile int32_t t173 = 0;

    t173 = (x709==(x710/(x711|x712)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x713 = -1;
	volatile int64_t x714 = 49684143992LL;
	volatile uint64_t x715 = UINT64_MAX;
	uint64_t x716 = 1905801LLU;

    t174 = (x713==(x714/(x715|x716)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x717 = INT16_MIN;
	int16_t x718 = -1;
	int64_t x719 = INT64_MIN;
	int64_t x720 = 120077876229112LL;
	int32_t t175 = 5;

    t175 = (x717==(x718/(x719|x720)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x721 = INT16_MAX;
	static volatile int32_t x722 = INT32_MIN;
	uint32_t x723 = 9U;
	uint16_t x724 = 19U;

    t176 = (x721==(x722/(x723|x724)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x725 = INT16_MAX;
	static int64_t x726 = INT64_MIN;
	uint8_t x727 = 41U;
	volatile int32_t x728 = 6943462;
	int32_t t177 = 20278;

    t177 = (x725==(x726/(x727|x728)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x729 = INT8_MIN;
	int16_t x730 = 1;
	static volatile int32_t x731 = -961078890;
	int32_t x732 = INT32_MIN;
	volatile int32_t t178 = 4;

    t178 = (x729==(x730/(x731|x732)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x733 = INT16_MAX;
	int64_t x734 = 365887275868516489LL;
	int32_t x735 = INT32_MIN;
	int32_t x736 = INT32_MIN;
	volatile int32_t t179 = 3;

    t179 = (x733==(x734/(x735|x736)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x737 = INT8_MIN;
	int8_t x738 = INT8_MIN;
	static volatile uint16_t x740 = 16665U;
	int32_t t180 = -387835541;

    t180 = (x737==(x738/(x739|x740)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x741 = 107U;
	int8_t x742 = INT8_MIN;
	int8_t x743 = INT8_MAX;
	int32_t t181 = 4;

    t181 = (x741==(x742/(x743|x744)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x745 = 472U;
	uint64_t x746 = 7592841LLU;
	int16_t x747 = -1;
	int32_t x748 = -218087;
	int32_t t182 = 89953807;

    t182 = (x745==(x746/(x747|x748)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x749 = 7086733U;
	volatile uint8_t x751 = 29U;
	uint16_t x752 = 32476U;

    t183 = (x749==(x750/(x751|x752)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x753 = 0U;
	uint16_t x754 = 62U;
	volatile uint16_t x755 = 1303U;
	static volatile int32_t x756 = INT32_MAX;
	int32_t t184 = 406392;

    t184 = (x753==(x754/(x755|x756)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x757 = 0;
	int32_t x758 = -1;
	uint64_t x759 = 30619LLU;
	int32_t x760 = INT32_MIN;
	int32_t t185 = -4712;

    t185 = (x757==(x758/(x759|x760)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x761 = UINT16_MAX;
	int64_t x762 = -1LL;
	int16_t x763 = 2741;

    t186 = (x761==(x762/(x763|x764)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x765 = 235;
	int64_t x767 = INT64_MAX;
	static uint16_t x768 = 1036U;
	volatile int32_t t187 = 3061121;

    t187 = (x765==(x766/(x767|x768)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x769 = 280615898745828927LL;
	uint32_t x770 = 3255889U;
	uint8_t x771 = 0U;
	static int8_t x772 = -6;
	static int32_t t188 = -4968;

    t188 = (x769==(x770/(x771|x772)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x773 = INT32_MAX;
	int32_t x774 = 992006;
	int32_t x775 = -1;
	int32_t t189 = -570893643;

    t189 = (x773==(x774/(x775|x776)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x777 = UINT64_MAX;
	int16_t x778 = -1;
	int16_t x779 = 14;
	int32_t x780 = INT32_MAX;
	volatile int32_t t190 = -767036;

    t190 = (x777==(x778/(x779|x780)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x784 = INT8_MIN;
	static int32_t t191 = -679;

    t191 = (x781==(x782/(x783|x784)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x786 = UINT8_MAX;

    t192 = (x785==(x786/(x787|x788)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x789 = UINT32_MAX;
	uint64_t x791 = 479286658888214510LLU;
	uint32_t x792 = 349279U;
	volatile int32_t t193 = 3;

    t193 = (x789==(x790/(x791|x792)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x793 = -1772;
	static int32_t x794 = INT32_MAX;
	static int64_t x795 = 0LL;
	int64_t x796 = -2884781347575LL;
	int32_t t194 = 0;

    t194 = (x793==(x794/(x795|x796)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x797 = UINT8_MAX;
	uint64_t x798 = UINT64_MAX;
	static int64_t x799 = 321497LL;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t195 = -1;

    t195 = (x797==(x798/(x799|x800)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x802 = 2516978U;
	int64_t x804 = INT64_MIN;
	static int32_t t196 = 672;

    t196 = (x801==(x802/(x803|x804)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x805 = 2647758;
	volatile uint16_t x806 = 1700U;
	int64_t x807 = INT64_MAX;
	uint64_t x808 = 571141067086826LLU;

    t197 = (x805==(x806/(x807|x808)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x809 = 5268;
	int16_t x811 = INT16_MAX;
	static int8_t x812 = INT8_MAX;

    t198 = (x809==(x810/(x811|x812)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x813 = INT16_MAX;
	static volatile int16_t x814 = 29;
	static int16_t x815 = INT16_MIN;
	int8_t x816 = -1;
	int32_t t199 = 3;

    t199 = (x813==(x814/(x815|x816)));

    if (t199 != 0) { NG(); } else { ; }
	
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

