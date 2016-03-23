
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

int16_t x10 = -1;
uint16_t x12 = 1U;
int32_t x19 = -1;
int16_t x35 = -1;
int16_t x38 = 5;
int32_t x45 = -20;
int32_t t11 = 360747;
int8_t x49 = INT8_MIN;
int8_t x51 = 3;
volatile int16_t x60 = INT16_MIN;
int32_t t14 = 1;
volatile int64_t x62 = 46948377618742LL;
volatile uint64_t x71 = 187LLU;
static int64_t x73 = -456321637988LL;
static volatile int32_t x80 = 323989562;
static uint64_t x111 = UINT64_MAX;
static int8_t x140 = INT8_MAX;
uint16_t x142 = UINT16_MAX;
int16_t x143 = INT16_MAX;
volatile int16_t x152 = INT16_MIN;
int64_t x153 = INT64_MIN;
uint64_t t35 = 18677820LLU;
int16_t x171 = -1;
int16_t x172 = INT16_MAX;
int64_t x176 = INT64_MIN;
uint16_t x178 = UINT16_MAX;
int32_t t39 = 176449171;
static uint8_t x182 = UINT8_MAX;
int64_t x185 = -1LL;
int64_t x189 = INT64_MIN;
static int32_t x190 = -865257;
int16_t x191 = INT16_MAX;
int8_t x204 = -23;
int32_t x211 = -3184;
volatile int16_t x234 = INT16_MIN;
uint32_t t50 = 2U;
int32_t x240 = -7;
int8_t x247 = INT8_MIN;
volatile int32_t x249 = 0;
uint8_t x250 = 3U;
static int16_t x257 = INT16_MIN;
uint8_t x260 = 3U;
volatile int32_t t55 = 74179;
static uint64_t x265 = 4LLU;
uint16_t x269 = 73U;
uint16_t x274 = UINT16_MAX;
volatile int32_t t59 = -288770;
uint8_t x281 = UINT8_MAX;
static uint32_t x287 = 10222U;
volatile uint32_t x291 = 2U;
uint16_t x292 = UINT16_MAX;
volatile int8_t x306 = 0;
int64_t t66 = 2280815LL;
uint64_t x309 = UINT64_MAX;
int32_t x316 = INT32_MIN;
int16_t x324 = INT16_MIN;
static int64_t x328 = 537415232311263096LL;
uint64_t x329 = 2LLU;
volatile int16_t x335 = -1;
volatile int32_t t73 = -7737;
int32_t x342 = -125;
uint32_t x343 = UINT32_MAX;
int64_t x352 = INT64_MIN;
static uint32_t x361 = 5647U;
uint64_t x364 = 11692450LLU;
volatile int64_t x367 = INT64_MIN;
static volatile int64_t t80 = 1761345682016LL;
int64_t x374 = INT64_MIN;
int8_t x382 = 14;
volatile uint8_t x391 = 28U;
uint32_t x392 = UINT32_MAX;
volatile int64_t x395 = -2017300094LL;
uint32_t x396 = 29298U;
volatile uint32_t t86 = 32U;
int8_t x406 = 1;
static uint8_t x410 = UINT8_MAX;
uint64_t t88 = UINT64_MAX;
uint64_t x416 = 435458131258649635LLU;
int8_t x419 = -1;
volatile int64_t x421 = -8LL;
int16_t x422 = INT16_MIN;
int8_t x423 = -36;
volatile uint64_t x425 = UINT64_MAX;
int64_t x437 = -361984LL;
int64_t x438 = -6LL;
int32_t t94 = -328;
volatile int16_t x452 = -9712;
int16_t x454 = 146;
static int8_t x483 = -60;
volatile int8_t x496 = -1;
static uint16_t x497 = 8183U;
volatile uint64_t x501 = 785418335773411799LLU;
volatile int32_t t107 = 1;
volatile int32_t x515 = -10750;
int64_t x518 = INT64_MIN;
int8_t x520 = INT8_MIN;
volatile int32_t t111 = 408;
int64_t x530 = -1LL;
int32_t x531 = INT32_MAX;
int64_t x539 = -398102LL;
int64_t x549 = -1LL;
int32_t x550 = 1809;
static volatile int8_t x551 = -1;
static volatile int32_t t119 = 1;
uint32_t x558 = 1488641U;
int8_t x561 = 9;
volatile int32_t t122 = -1807;
uint64_t x573 = UINT64_MAX;
static int8_t x581 = INT8_MIN;
static volatile int8_t x602 = -1;
static volatile uint64_t x606 = UINT64_MAX;
int64_t t135 = 166314040926589LL;
static uint8_t x617 = UINT8_MAX;
uint64_t x618 = 454316353809LLU;
int32_t x633 = -1;
volatile int64_t x636 = -3786500658841566LL;
int64_t x640 = INT64_MIN;
int32_t x641 = INT32_MIN;
int8_t x643 = 1;
uint16_t x647 = UINT16_MAX;
uint64_t x649 = 1066848485387483504LLU;
uint32_t x651 = 3007140U;
static int64_t x666 = INT64_MIN;
static int16_t x671 = INT16_MAX;
uint32_t t148 = UINT32_MAX;
int8_t x675 = INT8_MAX;
static uint64_t t150 = 31301625779988917LLU;
int64_t x682 = INT64_MIN;
static int32_t x685 = 51988729;
uint16_t x686 = UINT16_MAX;
static int8_t x696 = 3;
int32_t t153 = -1;
int32_t t154 = -362;
volatile int32_t t155 = 198707;
int64_t x712 = INT64_MAX;
int8_t x716 = INT8_MIN;
static volatile int32_t t158 = 64520278;
static volatile int32_t t159 = 291880576;
volatile uint32_t x722 = UINT32_MAX;
volatile int32_t t160 = 0;
int32_t t161 = 10845893;
int32_t t165 = 169;
int16_t x749 = 12;
int32_t x752 = -2;
uint32_t x758 = 277U;
int32_t t168 = 141;
uint16_t x763 = UINT16_MAX;
int64_t x764 = -1LL;
uint16_t x772 = UINT16_MAX;
volatile int64_t x773 = INT64_MIN;
int16_t x776 = INT16_MIN;
uint32_t x781 = 270236U;
uint16_t x783 = 0U;
int16_t x784 = 4;
volatile uint32_t t176 = 286944929U;
static volatile uint32_t x800 = UINT32_MAX;
int8_t x807 = 1;
uint16_t x810 = UINT16_MAX;
uint16_t x811 = UINT16_MAX;
uint64_t x816 = UINT64_MAX;
volatile uint64_t t181 = UINT64_MAX;
int64_t x822 = 81456361087779LL;
volatile uint8_t x824 = 2U;
uint8_t x828 = 56U;
volatile int32_t t183 = -444;
int32_t x837 = INT32_MAX;
uint64_t x838 = UINT64_MAX;
volatile int8_t x839 = INT8_MAX;
int32_t x845 = INT32_MAX;
uint8_t x846 = 43U;
int16_t x852 = -40;
int32_t t188 = 14097574;
int64_t x861 = INT64_MIN;
int32_t x865 = 3282797;
uint32_t t193 = 6U;
volatile int16_t x883 = INT16_MIN;
int16_t x885 = INT16_MAX;
int64_t t196 = 12748572381454790LL;
volatile int32_t x890 = 40110170;
int32_t x897 = 295325006;
uint16_t x902 = 2776U;
int32_t x904 = INT32_MIN;


void f0(void) {
    	int8_t x1 = 56;
	static volatile int32_t x2 = INT32_MIN;
	int64_t x3 = -1LL;
	uint64_t x4 = 4510LLU;
	volatile uint64_t t0 = 873858172178533LLU;

    t0 = ((x1<=(x2+x3))*x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint16_t x6 = UINT16_MAX;
	uint16_t x7 = 18965U;
	uint8_t x8 = 127U;
	int32_t t1 = 692615;

    t1 = ((x5<=(x6+x7))*x8);

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int16_t x11 = 2405;
	int32_t t2 = 519172;

    t2 = ((x9<=(x10+x11))*x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 21U;
	static uint64_t x14 = 328347LLU;
	int32_t x15 = INT32_MAX;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

    t3 = ((x13<=(x14+x15))*x16);

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 1;
	uint32_t x18 = 281101U;
	volatile int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = INT32_MIN;

    t4 = ((x17<=(x18+x19))*x20);

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int8_t x22 = -1;
	int32_t x23 = 223566;
	volatile uint16_t x24 = UINT16_MAX;
	static int32_t t5 = -170;

    t5 = ((x21<=(x22+x23))*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -1;
	uint16_t x26 = 15U;
	volatile uint16_t x27 = 815U;
	volatile uint64_t x28 = 73539901524683242LLU;
	uint64_t t6 = 1394LLU;

    t6 = ((x25<=(x26+x27))*x28);

    if (t6 != 73539901524683242LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint64_t x30 = 77LLU;
	uint64_t x31 = UINT64_MAX;
	int64_t x32 = 20139LL;
	int64_t t7 = 27336392563LL;

    t7 = ((x29<=(x30+x31))*x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	uint16_t x34 = UINT16_MAX;
	uint64_t x36 = 1145LLU;
	uint64_t t8 = 297LLU;

    t8 = ((x33<=(x34+x35))*x36);

    if (t8 != 1145LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 549U;
	volatile int16_t x39 = -1;
	uint32_t x40 = 7282704U;
	uint32_t t9 = 969U;

    t9 = ((x37<=(x38+x39))*x40);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	volatile uint8_t x42 = 16U;
	volatile int16_t x43 = 36;
	int32_t x44 = -1;
	volatile int32_t t10 = 0;

    t10 = ((x41<=(x42+x43))*x44);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MAX;
	int16_t x48 = INT16_MIN;

    t11 = ((x45<=(x46+x47))*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x50 = 839660223U;
	int16_t x52 = -1;
	int32_t t12 = 170;

    t12 = ((x49<=(x50+x51))*x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = 6;
	uint32_t x54 = 2U;
	int64_t x55 = INT64_MIN;
	static uint64_t x56 = UINT64_MAX;
	uint64_t t13 = 3838653782053211862LLU;

    t13 = ((x53<=(x54+x55))*x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x57 = INT16_MIN;
	static volatile int32_t x58 = INT32_MAX;
	volatile uint64_t x59 = 13019771LLU;

    t14 = ((x57<=(x58+x59))*x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x61 = 1U;
	static volatile uint8_t x63 = UINT8_MAX;
	volatile int16_t x64 = INT16_MIN;
	static int32_t t15 = 85;

    t15 = ((x61<=(x62+x63))*x64);

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MIN;
	volatile uint64_t x66 = 113468159923572233LLU;
	int16_t x67 = INT16_MIN;
	volatile int32_t x68 = 347797965;
	volatile int32_t t16 = -234960;

    t16 = ((x65<=(x66+x67))*x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MIN;
	uint16_t x72 = 8840U;
	int32_t t17 = -9;

    t17 = ((x69<=(x70+x71))*x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x74 = 232249750U;
	int32_t x75 = INT32_MIN;
	uint32_t x76 = 55685U;
	static volatile uint32_t t18 = 537271793U;

    t18 = ((x73<=(x74+x75))*x76);

    if (t18 != 55685U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 0;
	uint32_t x78 = UINT32_MAX;
	volatile uint32_t x79 = 7290440U;
	volatile int32_t t19 = -283260;

    t19 = ((x77<=(x78+x79))*x80);

    if (t19 != 323989562) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	static uint8_t x91 = 6U;
	uint16_t x92 = UINT16_MAX;
	int32_t t20 = -1374772;

    t20 = ((x89<=(x90+x91))*x92);

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = -10267;
	uint32_t x94 = 3U;
	int64_t x95 = 0LL;
	uint64_t x96 = 68911326809279612LLU;
	volatile uint64_t t21 = 6793LLU;

    t21 = ((x93<=(x94+x95))*x96);

    if (t21 != 68911326809279612LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x97 = 95U;
	uint16_t x98 = 50U;
	static int16_t x99 = 0;
	volatile int16_t x100 = INT16_MIN;
	int32_t t22 = -129;

    t22 = ((x97<=(x98+x99))*x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	int16_t x103 = -1;
	volatile int8_t x104 = 0;
	int32_t t23 = -3629492;

    t23 = ((x101<=(x102+x103))*x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x105 = INT8_MAX;
	volatile uint32_t x106 = 798U;
	uint8_t x107 = 55U;
	static int8_t x108 = INT8_MAX;
	int32_t t24 = -98;

    t24 = ((x105<=(x106+x107))*x108);

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x109 = -15998946;
	int8_t x110 = -1;
	int32_t x112 = INT32_MIN;
	int32_t t25 = INT32_MIN;

    t25 = ((x109<=(x110+x111))*x112);

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = -1;
	static uint8_t x114 = UINT8_MAX;
	uint32_t x115 = 23606U;
	int8_t x116 = -1;
	int32_t t26 = 182079;

    t26 = ((x113<=(x114+x115))*x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = INT64_MIN;
	uint8_t x122 = 12U;
	volatile int8_t x123 = 1;
	static int16_t x124 = -1;
	int32_t t27 = 24;

    t27 = ((x121<=(x122+x123))*x124);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = -322613010LL;
	uint16_t x126 = 26856U;
	uint8_t x127 = UINT8_MAX;
	static uint16_t x128 = 777U;
	static int32_t t28 = 487312729;

    t28 = ((x125<=(x126+x127))*x128);

    if (t28 != 777) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = 0;
	int32_t x130 = 330;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = -407000879LL;
	volatile int64_t t29 = 5545288016690030LL;

    t29 = ((x129<=(x130+x131))*x132);

    if (t29 != -407000879LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = -1;
	static uint64_t x134 = 35627906184LLU;
	volatile int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	int32_t t30 = -9;

    t30 = ((x133<=(x134+x135))*x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = -18516114LL;
	volatile int64_t x138 = -1LL;
	uint32_t x139 = 4015121U;
	volatile int32_t t31 = -51413606;

    t31 = ((x137<=(x138+x139))*x140);

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = -32;
	int64_t x144 = -876LL;
	volatile int64_t t32 = -3663421752218836585LL;

    t32 = ((x141<=(x142+x143))*x144);

    if (t32 != -876LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = INT8_MIN;
	int8_t x146 = 3;
	uint32_t x147 = 46184039U;
	int16_t x148 = INT16_MAX;
	static volatile int32_t t33 = 19087994;

    t33 = ((x145<=(x146+x147))*x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x149 = 0;
	int16_t x150 = -3976;
	static uint8_t x151 = UINT8_MAX;
	int32_t t34 = 0;

    t34 = ((x149<=(x150+x151))*x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x154 = 0LLU;
	uint16_t x155 = 96U;
	volatile uint64_t x156 = 1552116094561LLU;

    t35 = ((x153<=(x154+x155))*x156);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = -4;
	int16_t x162 = INT16_MIN;
	volatile uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 5U;
	int32_t t36 = 957999014;

    t36 = ((x161<=(x162+x163))*x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x169 = INT16_MIN;
	static int16_t x170 = -2;
	static volatile int32_t t37 = -1048150231;

    t37 = ((x169<=(x170+x171))*x172);

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x173 = INT8_MAX;
	uint16_t x174 = 2070U;
	int16_t x175 = INT16_MIN;
	static volatile int64_t t38 = -22882086887LL;

    t38 = ((x173<=(x174+x175))*x176);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x177 = 2U;
	int8_t x179 = 13;
	static int8_t x180 = -1;

    t39 = ((x177<=(x178+x179))*x180);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x181 = -157LL;
	static int8_t x183 = INT8_MIN;
	uint32_t x184 = 24U;
	uint32_t t40 = 211600271U;

    t40 = ((x181<=(x182+x183))*x184);

    if (t40 != 24U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x186 = UINT64_MAX;
	int8_t x187 = -1;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t41 = -63587;

    t41 = ((x185<=(x186+x187))*x188);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x192 = 51U;
	volatile int32_t t42 = -86;

    t42 = ((x189<=(x190+x191))*x192);

    if (t42 != 51) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x197 = UINT32_MAX;
	static volatile int32_t x198 = -50;
	uint16_t x199 = 1477U;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t43 = 45U;

    t43 = ((x197<=(x198+x199))*x200);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x201 = -733;
	volatile uint16_t x202 = 0U;
	volatile uint64_t x203 = 5LLU;
	int32_t t44 = 677649;

    t44 = ((x201<=(x202+x203))*x204);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x209 = UINT32_MAX;
	volatile int64_t x210 = -13973LL;
	uint32_t x212 = 87691U;
	volatile uint32_t t45 = 220779U;

    t45 = ((x209<=(x210+x211))*x212);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x213 = INT32_MIN;
	volatile uint32_t x214 = UINT32_MAX;
	int64_t x215 = -2LL;
	uint64_t x216 = 389499645LLU;
	uint64_t t46 = 63033774LLU;

    t46 = ((x213<=(x214+x215))*x216);

    if (t46 != 389499645LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x217 = INT32_MIN;
	int64_t x218 = -1LL;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = -1;
	int32_t t47 = -3520542;

    t47 = ((x217<=(x218+x219))*x220);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint16_t x221 = UINT16_MAX;
	volatile uint32_t x222 = 178219U;
	static uint32_t x223 = UINT32_MAX;
	int32_t x224 = 3;
	volatile int32_t t48 = -461;

    t48 = ((x221<=(x222+x223))*x224);

    if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x229 = INT16_MAX;
	int64_t x230 = 1360741079402LL;
	static volatile int8_t x231 = 59;
	static volatile uint16_t x232 = 43U;
	volatile int32_t t49 = -2457;

    t49 = ((x229<=(x230+x231))*x232);

    if (t49 != 43) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x233 = UINT64_MAX;
	uint32_t x235 = 15249485U;
	static uint32_t x236 = 2U;

    t50 = ((x233<=(x234+x235))*x236);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x237 = -1;
	volatile int16_t x238 = INT16_MIN;
	int8_t x239 = 1;
	int32_t t51 = 976103;

    t51 = ((x237<=(x238+x239))*x240);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x241 = -25;
	uint64_t x242 = 4375343692118LLU;
	static uint64_t x243 = UINT64_MAX;
	static uint16_t x244 = 70U;
	static volatile int32_t t52 = -141175;

    t52 = ((x241<=(x242+x243))*x244);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x245 = 600U;
	int64_t x246 = -230649LL;
	int8_t x248 = 6;
	volatile int32_t t53 = -314727;

    t53 = ((x245<=(x246+x247))*x248);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x251 = INT16_MAX;
	int8_t x252 = -1;
	volatile int32_t t54 = -429590741;

    t54 = ((x249<=(x250+x251))*x252);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x258 = 1;
	int64_t x259 = INT64_MIN;

    t55 = ((x257<=(x258+x259))*x260);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x261 = INT8_MIN;
	int32_t x262 = -1;
	int16_t x263 = 1130;
	int8_t x264 = -3;
	static volatile int32_t t56 = -15518049;

    t56 = ((x261<=(x262+x263))*x264);

    if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x266 = INT8_MAX;
	uint32_t x267 = 27353059U;
	volatile int16_t x268 = INT16_MAX;
	static int32_t t57 = 132;

    t57 = ((x265<=(x266+x267))*x268);

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x270 = 9U;
	volatile uint8_t x271 = UINT8_MAX;
	uint64_t x272 = 531902649461906718LLU;
	volatile uint64_t t58 = 4616LLU;

    t58 = ((x269<=(x270+x271))*x272);

    if (t58 != 531902649461906718LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x273 = 329425213759LLU;
	int32_t x275 = INT32_MIN;
	int8_t x276 = -1;

    t59 = ((x273<=(x274+x275))*x276);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x277 = 302510U;
	static int16_t x278 = 819;
	static volatile int64_t x279 = 20808856846639LL;
	int32_t x280 = INT32_MAX;
	static volatile int32_t t60 = INT32_MAX;

    t60 = ((x277<=(x278+x279))*x280);

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x282 = INT32_MAX;
	static int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t61 = -96875174;

    t61 = ((x281<=(x282+x283))*x284);

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x285 = 1;
	int32_t x286 = INT32_MIN;
	volatile int8_t x288 = INT8_MIN;
	int32_t t62 = -3764;

    t62 = ((x285<=(x286+x287))*x288);

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x289 = -1;
	int16_t x290 = -4;
	int32_t t63 = -22334;

    t63 = ((x289<=(x290+x291))*x292);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x293 = 1;
	int64_t x294 = 255943098240614LL;
	int16_t x295 = INT16_MIN;
	static uint64_t x296 = 432395910413140316LLU;
	volatile uint64_t t64 = 28777166568820LLU;

    t64 = ((x293<=(x294+x295))*x296);

    if (t64 != 432395910413140316LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	static int16_t x299 = INT16_MIN;
	static int8_t x300 = INT8_MAX;
	static volatile int32_t t65 = 146058183;

    t65 = ((x297<=(x298+x299))*x300);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x305 = INT64_MAX;
	uint32_t x307 = 15767268U;
	int64_t x308 = 2877793608366875550LL;

    t66 = ((x305<=(x306+x307))*x308);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x310 = INT8_MIN;
	int64_t x311 = 298LL;
	uint64_t x312 = 4LLU;
	uint64_t t67 = 5909263061954029LLU;

    t67 = ((x309<=(x310+x311))*x312);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MAX;
	uint64_t x315 = 240LLU;
	volatile int32_t t68 = 1846429;

    t68 = ((x313<=(x314+x315))*x316);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x317 = -63;
	volatile int64_t x318 = -1LL;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = 3223572318553268LLU;
	static uint64_t t69 = 190923817773172993LLU;

    t69 = ((x317<=(x318+x319))*x320);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x321 = 0U;
	uint32_t x322 = 365236U;
	int8_t x323 = INT8_MIN;
	volatile int32_t t70 = 3;

    t70 = ((x321<=(x322+x323))*x324);

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x325 = -4703;
	static int32_t x326 = INT32_MIN;
	static int8_t x327 = 1;
	volatile int64_t t71 = -247LL;

    t71 = ((x325<=(x326+x327))*x328);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x330 = UINT64_MAX;
	static uint32_t x331 = UINT32_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t72 = INT32_MIN;

    t72 = ((x329<=(x330+x331))*x332);

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x333 = INT16_MIN;
	volatile int8_t x334 = -1;
	int16_t x336 = -44;

    t73 = ((x333<=(x334+x335))*x336);

    if (t73 != -44) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x337 = 31;
	int8_t x338 = INT8_MIN;
	static volatile uint8_t x339 = UINT8_MAX;
	volatile int8_t x340 = 2;
	volatile int32_t t74 = 87;

    t74 = ((x337<=(x338+x339))*x340);

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x341 = INT16_MIN;
	uint64_t x344 = 853LLU;
	static uint64_t t75 = 31585LLU;

    t75 = ((x341<=(x342+x343))*x344);

    if (t75 != 853LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x349 = UINT16_MAX;
	uint16_t x350 = 0U;
	uint8_t x351 = 4U;
	static volatile int64_t t76 = 915LL;

    t76 = ((x349<=(x350+x351))*x352);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x353 = INT16_MIN;
	uint8_t x354 = 0U;
	int8_t x355 = INT8_MAX;
	int16_t x356 = 7;
	volatile int32_t t77 = 383156;

    t77 = ((x353<=(x354+x355))*x356);

    if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x357 = UINT8_MAX;
	int16_t x358 = 6451;
	int32_t x359 = 18471;
	int16_t x360 = INT16_MIN;
	int32_t t78 = -4;

    t78 = ((x357<=(x358+x359))*x360);

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x362 = -23101443504198612LL;
	int16_t x363 = -1;
	uint64_t t79 = 6193649476262LLU;

    t79 = ((x361<=(x362+x363))*x364);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x365 = -1LL;
	uint64_t x366 = 2866191133399194LLU;
	int64_t x368 = 746836645868989LL;

    t80 = ((x365<=(x366+x367))*x368);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x375 = 6;
	int64_t x376 = 35657885LL;
	volatile int64_t t81 = 196582908422886169LL;

    t81 = ((x373<=(x374+x375))*x376);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	int64_t x380 = 681557452146532888LL;
	int64_t t82 = -163470397377LL;

    t82 = ((x377<=(x378+x379))*x380);

    if (t82 != 681557452146532888LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x381 = 23466150443389LLU;
	uint64_t x383 = 2617395201990472LLU;
	int8_t x384 = -1;
	volatile int32_t t83 = -105;

    t83 = ((x381<=(x382+x383))*x384);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x385 = 13LL;
	int64_t x386 = 13663187862429LL;
	static uint8_t x387 = 88U;
	int16_t x388 = INT16_MAX;
	int32_t t84 = -4885899;

    t84 = ((x385<=(x386+x387))*x388);

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x389 = 1050094726173318LLU;
	static volatile uint32_t x390 = 47U;
	volatile uint32_t t85 = 62461U;

    t85 = ((x389<=(x390+x391))*x392);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x393 = -1;
	uint8_t x394 = UINT8_MAX;

    t86 = ((x393<=(x394+x395))*x396);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x405 = INT64_MAX;
	volatile int8_t x407 = -1;
	volatile int64_t x408 = 26252816LL;
	static volatile int64_t t87 = 759639363133LL;

    t87 = ((x405<=(x406+x407))*x408);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x409 = -105800LL;
	int32_t x411 = -1;
	uint64_t x412 = UINT64_MAX;

    t88 = ((x409<=(x410+x411))*x412);

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x413 = INT16_MIN;
	int8_t x414 = 3;
	static int64_t x415 = 125580678LL;
	static volatile uint64_t t89 = 133767293972LLU;

    t89 = ((x413<=(x414+x415))*x416);

    if (t89 != 435458131258649635LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x417 = -1;
	int16_t x418 = -1;
	uint8_t x420 = 2U;
	static volatile int32_t t90 = 62589;

    t90 = ((x417<=(x418+x419))*x420);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x424 = INT16_MIN;
	volatile int32_t t91 = -625362561;

    t91 = ((x421<=(x422+x423))*x424);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x426 = UINT8_MAX;
	static uint32_t x427 = UINT32_MAX;
	uint32_t x428 = 1001025537U;
	static volatile uint32_t t92 = 133U;

    t92 = ((x425<=(x426+x427))*x428);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x429 = 1LL;
	static int16_t x430 = INT16_MIN;
	uint16_t x431 = 27644U;
	int8_t x432 = 19;
	volatile int32_t t93 = -42;

    t93 = ((x429<=(x430+x431))*x432);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x439 = INT32_MAX;
	volatile int8_t x440 = -4;

    t94 = ((x437<=(x438+x439))*x440);

    if (t94 != -4) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x441 = INT64_MIN;
	static int32_t x442 = 27430751;
	int8_t x443 = INT8_MIN;
	uint16_t x444 = 48U;
	int32_t t95 = -374;

    t95 = ((x441<=(x442+x443))*x444);

    if (t95 != 48) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x449 = UINT64_MAX;
	uint64_t x450 = UINT64_MAX;
	int8_t x451 = 8;
	static volatile int32_t t96 = -18319342;

    t96 = ((x449<=(x450+x451))*x452);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x453 = 2327U;
	int16_t x455 = 3242;
	int16_t x456 = INT16_MAX;
	int32_t t97 = -992209;

    t97 = ((x453<=(x454+x455))*x456);

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x457 = INT8_MIN;
	volatile int64_t x458 = INT64_MAX;
	int16_t x459 = -380;
	int32_t x460 = -1;
	volatile int32_t t98 = -1869;

    t98 = ((x457<=(x458+x459))*x460);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x461 = -326;
	static int64_t x462 = INT64_MIN;
	volatile uint16_t x463 = 7072U;
	int32_t x464 = INT32_MIN;
	int32_t t99 = 49;

    t99 = ((x461<=(x462+x463))*x464);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x469 = 5894U;
	volatile uint32_t x470 = 952U;
	volatile uint64_t x471 = 18652117946345LLU;
	int64_t x472 = -42698797687880646LL;
	int64_t t100 = -2305998956100023LL;

    t100 = ((x469<=(x470+x471))*x472);

    if (t100 != -42698797687880646LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x473 = 2;
	uint64_t x474 = 1791911814774417LLU;
	int32_t x475 = -334521;
	uint32_t x476 = UINT32_MAX;
	uint32_t t101 = UINT32_MAX;

    t101 = ((x473<=(x474+x475))*x476);

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x477 = 9U;
	static int8_t x478 = 0;
	int64_t x479 = -148031173841LL;
	volatile int32_t x480 = -184042;
	volatile int32_t t102 = -487491743;

    t102 = ((x477<=(x478+x479))*x480);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x481 = 76U;
	static volatile int32_t x482 = 3304;
	int8_t x484 = INT8_MIN;
	static int32_t t103 = -195671;

    t103 = ((x481<=(x482+x483))*x484);

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x489 = INT64_MAX;
	static int8_t x490 = INT8_MIN;
	volatile int8_t x491 = -1;
	static volatile int16_t x492 = INT16_MAX;
	int32_t t104 = 13788816;

    t104 = ((x489<=(x490+x491))*x492);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x493 = 723324203760LLU;
	int64_t x494 = -1LL;
	int16_t x495 = -6;
	int32_t t105 = 89748;

    t105 = ((x493<=(x494+x495))*x496);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x498 = 1;
	static int64_t x499 = -1LL;
	int8_t x500 = INT8_MIN;
	int32_t t106 = -4082294;

    t106 = ((x497<=(x498+x499))*x500);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x502 = -35870848439947829LL;
	static uint64_t x503 = UINT64_MAX;
	int32_t x504 = -124433;

    t107 = ((x501<=(x502+x503))*x504);

    if (t107 != -124433) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x505 = INT64_MAX;
	static volatile int16_t x506 = INT16_MIN;
	static int64_t x507 = -1LL;
	int8_t x508 = INT8_MIN;
	static volatile int32_t t108 = -154601;

    t108 = ((x505<=(x506+x507))*x508);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x509 = INT32_MIN;
	volatile int16_t x510 = INT16_MIN;
	uint16_t x511 = UINT16_MAX;
	int32_t x512 = -1002363;
	volatile int32_t t109 = -9874;

    t109 = ((x509<=(x510+x511))*x512);

    if (t109 != -1002363) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x513 = INT64_MIN;
	uint8_t x514 = 31U;
	volatile int8_t x516 = -1;
	int32_t t110 = 380920;

    t110 = ((x513<=(x514+x515))*x516);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x517 = INT16_MIN;
	uint8_t x519 = 0U;

    t111 = ((x517<=(x518+x519))*x520);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x521 = -1;
	int32_t x522 = -346579;
	volatile uint8_t x523 = 6U;
	uint32_t x524 = 16079982U;
	volatile uint32_t t112 = 283181090U;

    t112 = ((x521<=(x522+x523))*x524);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x525 = UINT8_MAX;
	int64_t x526 = 1457737068400877192LL;
	volatile int64_t x527 = INT64_MIN;
	static int16_t x528 = INT16_MIN;
	volatile int32_t t113 = 92217166;

    t113 = ((x525<=(x526+x527))*x528);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x529 = 117U;
	int16_t x532 = INT16_MIN;
	volatile int32_t t114 = 51531415;

    t114 = ((x529<=(x530+x531))*x532);

    if (t114 != -32768) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x533 = 5U;
	static int32_t x534 = INT32_MIN;
	uint8_t x535 = 7U;
	int16_t x536 = INT16_MIN;
	volatile int32_t t115 = 8;

    t115 = ((x533<=(x534+x535))*x536);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x537 = INT64_MIN;
	int64_t x538 = 12600056197LL;
	int16_t x540 = -1;
	int32_t t116 = 37386148;

    t116 = ((x537<=(x538+x539))*x540);

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x541 = INT32_MIN;
	int8_t x542 = INT8_MIN;
	int8_t x543 = 12;
	int16_t x544 = INT16_MAX;
	int32_t t117 = -72280363;

    t117 = ((x541<=(x542+x543))*x544);

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x545 = UINT16_MAX;
	volatile int64_t x546 = INT64_MIN;
	static volatile int32_t x547 = 7388;
	int8_t x548 = INT8_MIN;
	volatile int32_t t118 = -119;

    t118 = ((x545<=(x546+x547))*x548);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x552 = -1;

    t119 = ((x549<=(x550+x551))*x552);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x553 = 260502LLU;
	volatile uint64_t x554 = 349221071LLU;
	uint32_t x555 = UINT32_MAX;
	uint16_t x556 = UINT16_MAX;
	int32_t t120 = 6;

    t120 = ((x553<=(x554+x555))*x556);

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x557 = UINT8_MAX;
	int8_t x559 = 0;
	static int64_t x560 = INT64_MIN;
	int64_t t121 = INT64_MIN;

    t121 = ((x557<=(x558+x559))*x560);

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x562 = 1U;
	uint32_t x563 = UINT32_MAX;
	int32_t x564 = INT32_MIN;

    t122 = ((x561<=(x562+x563))*x564);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x565 = 0U;
	uint32_t x566 = 14904U;
	int32_t x567 = -96962;
	volatile int8_t x568 = 9;
	static int32_t t123 = 26144;

    t123 = ((x565<=(x566+x567))*x568);

    if (t123 != 9) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x569 = 4779U;
	volatile int8_t x570 = INT8_MIN;
	static int64_t x571 = INT64_MAX;
	int32_t x572 = 42583;
	volatile int32_t t124 = -43368147;

    t124 = ((x569<=(x570+x571))*x572);

    if (t124 != 42583) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x574 = 394356U;
	volatile int8_t x575 = 8;
	uint8_t x576 = 75U;
	static volatile int32_t t125 = -3397527;

    t125 = ((x573<=(x574+x575))*x576);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x577 = -1;
	uint32_t x578 = 2U;
	int8_t x579 = 0;
	uint16_t x580 = 146U;
	int32_t t126 = 1;

    t126 = ((x577<=(x578+x579))*x580);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x582 = -1;
	volatile int64_t x583 = 83LL;
	uint8_t x584 = 3U;
	volatile int32_t t127 = 4038;

    t127 = ((x581<=(x582+x583))*x584);

    if (t127 != 3) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x585 = UINT64_MAX;
	uint8_t x586 = 1U;
	int64_t x587 = -342LL;
	uint16_t x588 = 7508U;
	int32_t t128 = -1;

    t128 = ((x585<=(x586+x587))*x588);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x589 = -449452;
	static int32_t x590 = -26648496;
	int8_t x591 = 1;
	static int64_t x592 = INT64_MAX;
	int64_t t129 = -2525049812LL;

    t129 = ((x589<=(x590+x591))*x592);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x593 = INT64_MIN;
	int8_t x594 = INT8_MIN;
	static uint16_t x595 = 2U;
	int16_t x596 = INT16_MAX;
	volatile int32_t t130 = 809173;

    t130 = ((x593<=(x594+x595))*x596);

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x597 = INT16_MIN;
	static uint64_t x598 = 20006997724936980LLU;
	int64_t x599 = -1LL;
	int32_t x600 = 21428;
	int32_t t131 = -14;

    t131 = ((x597<=(x598+x599))*x600);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x601 = 194194LL;
	volatile uint32_t x603 = 2U;
	volatile int32_t x604 = INT32_MIN;
	int32_t t132 = -387;

    t132 = ((x601<=(x602+x603))*x604);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x605 = 35882971006103LL;
	int32_t x607 = INT32_MAX;
	int8_t x608 = 11;
	volatile int32_t t133 = -3;

    t133 = ((x605<=(x606+x607))*x608);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x609 = UINT64_MAX;
	int16_t x610 = 1;
	int64_t x611 = INT64_MIN;
	static int8_t x612 = INT8_MIN;
	int32_t t134 = 1;

    t134 = ((x609<=(x610+x611))*x612);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x613 = INT8_MIN;
	uint64_t x614 = 6502562234LLU;
	uint32_t x615 = 76223U;
	int64_t x616 = INT64_MAX;

    t135 = ((x613<=(x614+x615))*x616);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x619 = INT32_MIN;
	uint32_t x620 = UINT32_MAX;
	uint32_t t136 = UINT32_MAX;

    t136 = ((x617<=(x618+x619))*x620);

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x625 = -242960;
	static int16_t x626 = INT16_MIN;
	int8_t x627 = INT8_MIN;
	uint32_t x628 = UINT32_MAX;
	volatile uint32_t t137 = UINT32_MAX;

    t137 = ((x625<=(x626+x627))*x628);

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x629 = 9;
	int64_t x630 = INT64_MAX;
	int16_t x631 = INT16_MIN;
	int8_t x632 = 45;
	volatile int32_t t138 = 89581301;

    t138 = ((x629<=(x630+x631))*x632);

    if (t138 != 45) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x634 = INT16_MIN;
	int8_t x635 = INT8_MAX;
	volatile int64_t t139 = 189709LL;

    t139 = ((x633<=(x634+x635))*x636);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x637 = -1;
	static int8_t x638 = 1;
	uint16_t x639 = UINT16_MAX;
	int64_t t140 = INT64_MIN;

    t140 = ((x637<=(x638+x639))*x640);

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x642 = 10290U;
	int8_t x644 = INT8_MIN;
	volatile int32_t t141 = 1;

    t141 = ((x641<=(x642+x643))*x644);

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x645 = 11;
	int8_t x646 = INT8_MIN;
	int8_t x648 = -19;
	volatile int32_t t142 = 162;

    t142 = ((x645<=(x646+x647))*x648);

    if (t142 != -19) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x650 = INT8_MIN;
	uint8_t x652 = 2U;
	volatile int32_t t143 = -152811280;

    t143 = ((x649<=(x650+x651))*x652);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x653 = -1;
	static uint8_t x654 = 10U;
	int64_t x655 = INT64_MIN;
	volatile int16_t x656 = INT16_MIN;
	volatile int32_t t144 = 1;

    t144 = ((x653<=(x654+x655))*x656);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x657 = 59U;
	static uint32_t x658 = 509924903U;
	int64_t x659 = 157389644013563LL;
	int16_t x660 = INT16_MIN;
	static volatile int32_t t145 = 78;

    t145 = ((x657<=(x658+x659))*x660);

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x661 = -1;
	uint8_t x662 = UINT8_MAX;
	int64_t x663 = INT64_MIN;
	static volatile int8_t x664 = INT8_MAX;
	volatile int32_t t146 = -1;

    t146 = ((x661<=(x662+x663))*x664);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x665 = -1;
	int64_t x667 = 1110LL;
	int8_t x668 = INT8_MIN;
	volatile int32_t t147 = -24485;

    t147 = ((x665<=(x666+x667))*x668);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x669 = 3;
	volatile uint64_t x670 = UINT64_MAX;
	static uint32_t x672 = UINT32_MAX;

    t148 = ((x669<=(x670+x671))*x672);

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x673 = INT16_MIN;
	static int32_t x674 = INT32_MIN;
	int64_t x676 = INT64_MIN;
	static volatile int64_t t149 = 435501LL;

    t149 = ((x673<=(x674+x675))*x676);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x677 = -10447;
	int8_t x678 = 17;
	static int16_t x679 = INT16_MIN;
	static volatile uint64_t x680 = UINT64_MAX;

    t150 = ((x677<=(x678+x679))*x680);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x681 = 1767579U;
	uint64_t x683 = 695472962819239668LLU;
	volatile int64_t x684 = -215257LL;
	volatile int64_t t151 = -19559628461675689LL;

    t151 = ((x681<=(x682+x683))*x684);

    if (t151 != -215257LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x687 = INT32_MIN;
	int32_t x688 = -225;
	volatile int32_t t152 = 9250018;

    t152 = ((x685<=(x686+x687))*x688);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x693 = 1;
	static int64_t x694 = -7693LL;
	volatile uint8_t x695 = 3U;

    t153 = ((x693<=(x694+x695))*x696);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x697 = 62U;
	uint64_t x698 = 6861033939965267955LLU;
	uint32_t x699 = 55807U;
	int32_t x700 = -1;

    t154 = ((x697<=(x698+x699))*x700);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x701 = INT64_MAX;
	uint64_t x702 = UINT64_MAX;
	static int32_t x703 = -17;
	static uint16_t x704 = 59U;

    t155 = ((x701<=(x702+x703))*x704);

    if (t155 != 59) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x705 = INT8_MIN;
	int32_t x706 = -1;
	static uint32_t x707 = 7036U;
	int32_t x708 = -1;
	volatile int32_t t156 = -120478;

    t156 = ((x705<=(x706+x707))*x708);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x709 = UINT32_MAX;
	int32_t x710 = INT32_MIN;
	volatile int32_t x711 = 121810710;
	volatile int64_t t157 = -2281671522590LL;

    t157 = ((x709<=(x710+x711))*x712);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x713 = -3;
	static uint8_t x714 = UINT8_MAX;
	uint64_t x715 = 549LLU;

    t158 = ((x713<=(x714+x715))*x716);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x717 = INT64_MIN;
	volatile int32_t x718 = INT32_MIN;
	static volatile uint8_t x719 = 1U;
	volatile uint8_t x720 = 21U;

    t159 = ((x717<=(x718+x719))*x720);

    if (t159 != 21) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x721 = INT32_MIN;
	int32_t x723 = INT32_MIN;
	int32_t x724 = -1;

    t160 = ((x721<=(x722+x723))*x724);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x725 = -1;
	int32_t x726 = INT32_MIN;
	uint8_t x727 = 0U;
	volatile int8_t x728 = 25;

    t161 = ((x725<=(x726+x727))*x728);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x729 = 1288022533727011LLU;
	static volatile uint64_t x730 = 139138640878LLU;
	int16_t x731 = INT16_MAX;
	int8_t x732 = -1;
	int32_t t162 = 181047909;

    t162 = ((x729<=(x730+x731))*x732);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x733 = 40U;
	static int64_t x734 = -1LL;
	volatile int32_t x735 = INT32_MIN;
	int8_t x736 = INT8_MAX;
	volatile int32_t t163 = -33334;

    t163 = ((x733<=(x734+x735))*x736);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x737 = INT16_MIN;
	int32_t x738 = INT32_MAX;
	int32_t x739 = INT32_MIN;
	uint32_t x740 = UINT32_MAX;
	uint32_t t164 = UINT32_MAX;

    t164 = ((x737<=(x738+x739))*x740);

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x741 = INT32_MIN;
	volatile int32_t x742 = INT32_MIN;
	uint16_t x743 = UINT16_MAX;
	volatile int8_t x744 = INT8_MAX;

    t165 = ((x741<=(x742+x743))*x744);

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x745 = INT64_MIN;
	uint32_t x746 = UINT32_MAX;
	uint32_t x747 = 30U;
	static int32_t x748 = -439509648;
	int32_t t166 = -1881;

    t166 = ((x745<=(x746+x747))*x748);

    if (t166 != -439509648) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x750 = INT16_MAX;
	uint32_t x751 = UINT32_MAX;
	volatile int32_t t167 = -27;

    t167 = ((x749<=(x750+x751))*x752);

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x757 = 6U;
	int8_t x759 = -3;
	uint8_t x760 = 1U;

    t168 = ((x757<=(x758+x759))*x760);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x761 = -8;
	int16_t x762 = -3188;
	static volatile int64_t t169 = -1909473244611543LL;

    t169 = ((x761<=(x762+x763))*x764);

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x765 = UINT32_MAX;
	static uint16_t x766 = 49U;
	uint16_t x767 = 8U;
	uint32_t x768 = UINT32_MAX;
	volatile uint32_t t170 = 27103U;

    t170 = ((x765<=(x766+x767))*x768);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x769 = INT32_MIN;
	int32_t x770 = INT32_MIN;
	int32_t x771 = INT32_MAX;
	int32_t t171 = 1;

    t171 = ((x769<=(x770+x771))*x772);

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x774 = UINT8_MAX;
	uint32_t x775 = 10176232U;
	int32_t t172 = -1;

    t172 = ((x773<=(x774+x775))*x776);

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x777 = -634;
	volatile uint8_t x778 = 118U;
	static int8_t x779 = INT8_MIN;
	uint64_t x780 = 13LLU;
	uint64_t t173 = 4LLU;

    t173 = ((x777<=(x778+x779))*x780);

    if (t173 != 13LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x782 = 32144936LL;
	int32_t t174 = 22950;

    t174 = ((x781<=(x782+x783))*x784);

    if (t174 != 4) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x785 = UINT16_MAX;
	int16_t x786 = INT16_MAX;
	int64_t x787 = 24494LL;
	int64_t x788 = 82568LL;
	int64_t t175 = -734606LL;

    t175 = ((x785<=(x786+x787))*x788);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x789 = 1U;
	int8_t x790 = INT8_MAX;
	int16_t x791 = -1;
	static uint32_t x792 = 5037111U;

    t176 = ((x789<=(x790+x791))*x792);

    if (t176 != 5037111U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x797 = INT32_MIN;
	uint16_t x798 = 7U;
	uint8_t x799 = 8U;
	static volatile uint32_t t177 = UINT32_MAX;

    t177 = ((x797<=(x798+x799))*x800);

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x801 = INT16_MIN;
	uint64_t x802 = 3621640627446LLU;
	int64_t x803 = 21LL;
	volatile int16_t x804 = -53;
	int32_t t178 = -11078;

    t178 = ((x801<=(x802+x803))*x804);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x805 = -14;
	uint64_t x806 = 5072036349LLU;
	uint16_t x808 = 1832U;
	int32_t t179 = -392816361;

    t179 = ((x805<=(x806+x807))*x808);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x809 = 0;
	int16_t x812 = INT16_MAX;
	int32_t t180 = 247;

    t180 = ((x809<=(x810+x811))*x812);

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x813 = -1LL;
	int8_t x814 = 0;
	uint16_t x815 = 929U;

    t181 = ((x813<=(x814+x815))*x816);

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x821 = 764;
	volatile int32_t x823 = 1;
	volatile int32_t t182 = -3869512;

    t182 = ((x821<=(x822+x823))*x824);

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x825 = -510;
	int16_t x826 = INT16_MIN;
	static uint8_t x827 = 90U;

    t183 = ((x825<=(x826+x827))*x828);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x829 = 95U;
	uint16_t x830 = 995U;
	static int8_t x831 = INT8_MAX;
	static uint16_t x832 = 21U;
	static int32_t t184 = -29;

    t184 = ((x829<=(x830+x831))*x832);

    if (t184 != 21) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x833 = UINT64_MAX;
	uint64_t x834 = 812123392408453655LLU;
	int64_t x835 = 5335543438LL;
	uint32_t x836 = 1459000116U;
	uint32_t t185 = 13U;

    t185 = ((x833<=(x834+x835))*x836);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x840 = 3004;
	volatile int32_t t186 = -7;

    t186 = ((x837<=(x838+x839))*x840);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x847 = -1;
	static int64_t x848 = -6280084428321866LL;
	int64_t t187 = 13708LL;

    t187 = ((x845<=(x846+x847))*x848);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x849 = INT8_MIN;
	uint32_t x850 = 60215392U;
	static int64_t x851 = INT64_MIN;

    t188 = ((x849<=(x850+x851))*x852);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x853 = INT32_MIN;
	int32_t x854 = INT32_MIN;
	uint64_t x855 = 288758LLU;
	volatile uint32_t x856 = 3119U;
	volatile uint32_t t189 = 3998U;

    t189 = ((x853<=(x854+x855))*x856);

    if (t189 != 3119U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x857 = -1;
	uint8_t x858 = UINT8_MAX;
	uint8_t x859 = 6U;
	uint32_t x860 = UINT32_MAX;
	volatile uint32_t t190 = UINT32_MAX;

    t190 = ((x857<=(x858+x859))*x860);

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x862 = 51496827;
	uint32_t x863 = UINT32_MAX;
	uint16_t x864 = UINT16_MAX;
	volatile int32_t t191 = 786;

    t191 = ((x861<=(x862+x863))*x864);

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x866 = 2LLU;
	int16_t x867 = INT16_MIN;
	int32_t x868 = 21288011;
	int32_t t192 = 1;

    t192 = ((x865<=(x866+x867))*x868);

    if (t192 != 21288011) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x869 = INT32_MAX;
	uint16_t x870 = UINT16_MAX;
	uint32_t x871 = 165767589U;
	uint32_t x872 = UINT32_MAX;

    t193 = ((x869<=(x870+x871))*x872);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x873 = -1817347806448331LL;
	uint16_t x874 = 151U;
	int32_t x875 = INT32_MIN;
	int8_t x876 = -1;
	volatile int32_t t194 = -2150;

    t194 = ((x873<=(x874+x875))*x876);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x881 = 25313195;
	volatile uint16_t x882 = UINT16_MAX;
	volatile int64_t x884 = INT64_MIN;
	static volatile int64_t t195 = 1108LL;

    t195 = ((x881<=(x882+x883))*x884);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x886 = INT64_MIN;
	volatile int16_t x887 = INT16_MAX;
	int64_t x888 = INT64_MIN;

    t196 = ((x885<=(x886+x887))*x888);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x889 = INT16_MAX;
	volatile uint32_t x891 = 858858986U;
	uint32_t x892 = UINT32_MAX;
	volatile uint32_t t197 = UINT32_MAX;

    t197 = ((x889<=(x890+x891))*x892);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x898 = -16;
	uint16_t x899 = 32573U;
	uint64_t x900 = 1067LLU;
	static uint64_t t198 = 10024808356797385LLU;

    t198 = ((x897<=(x898+x899))*x900);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x901 = 1036935;
	uint32_t x903 = 1571368U;
	volatile int32_t t199 = INT32_MIN;

    t199 = ((x901<=(x902+x903))*x904);

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

