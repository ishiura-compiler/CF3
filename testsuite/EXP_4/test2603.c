
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

static volatile uint8_t x3 = 93U;
int64_t x8 = INT64_MAX;
uint8_t x13 = UINT8_MAX;
uint8_t x16 = 2U;
volatile int16_t x18 = INT16_MIN;
uint32_t x26 = UINT32_MAX;
volatile uint32_t t6 = 158401U;
static int32_t t10 = 37797;
static int16_t x54 = INT16_MAX;
static int16_t x55 = 506;
volatile uint64_t t14 = 269867265614275LLU;
int8_t x68 = -10;
static volatile int16_t x69 = INT16_MAX;
static int16_t x71 = 3;
volatile int32_t t17 = 1050;
static uint16_t x79 = UINT16_MAX;
int32_t x83 = 50459711;
static int8_t x87 = INT8_MIN;
volatile int64_t t21 = INT64_MAX;
volatile int64_t x89 = -1LL;
int32_t x92 = -444451;
volatile uint32_t x99 = 14598167U;
volatile int32_t x100 = -1;
int8_t x101 = -1;
static uint8_t x102 = 17U;
static volatile int64_t x104 = 180539604552LL;
volatile int64_t x110 = -43LL;
int8_t x113 = INT8_MIN;
int32_t x115 = -1;
uint32_t x116 = 339U;
uint32_t x121 = 29833U;
static volatile int64_t t31 = 52033256748946463LL;
static int64_t x129 = -215233316LL;
static int8_t x130 = INT8_MIN;
uint16_t x131 = 21752U;
uint16_t x136 = 1U;
static int8_t x138 = 0;
volatile int32_t t34 = INT32_MIN;
int8_t x163 = INT8_MAX;
static uint64_t x172 = 3783933721922LLU;
static int64_t x177 = -3624799733956019699LL;
int8_t x183 = INT8_MIN;
int64_t t44 = 1320921LL;
int8_t x186 = INT8_MIN;
static int64_t x188 = -1360393282LL;
volatile int64_t x191 = 37LL;
static volatile int32_t t48 = 26959177;
int8_t x204 = INT8_MAX;
static int32_t x222 = INT32_MIN;
volatile uint64_t t56 = 14LLU;
volatile uint16_t x243 = 1U;
int32_t x245 = -1225;
int64_t x250 = -2LL;
volatile int64_t t61 = -350924368456945833LL;
uint32_t x253 = 502U;
static int64_t x259 = -98471LL;
int16_t x262 = INT16_MIN;
static int16_t x263 = INT16_MIN;
static int32_t t64 = 15773830;
uint64_t x265 = 12581LLU;
uint8_t x270 = 1U;
int64_t t67 = -9134216LL;
int8_t x279 = 12;
int32_t x286 = -1;
uint8_t x303 = UINT8_MAX;
int64_t t74 = 49629206634377LL;
int32_t x307 = INT32_MAX;
uint64_t x308 = 9579627475922LLU;
int16_t x314 = INT16_MIN;
uint32_t t77 = 191535282U;
volatile int32_t x323 = INT32_MIN;
uint8_t x324 = UINT8_MAX;
volatile int16_t x328 = -1;
uint64_t t80 = 51351850260607222LLU;
int8_t x336 = 5;
int8_t x338 = -1;
uint64_t x344 = 7LLU;
uint64_t t84 = 1104030687278611703LLU;
uint8_t x354 = 52U;
int64_t x357 = -166153381710099093LL;
static uint8_t x361 = 3U;
volatile int64_t t90 = 55804960957LL;
static int32_t x375 = INT32_MIN;
uint8_t x376 = 0U;
uint16_t x384 = 125U;
uint64_t t94 = 6452819LLU;
uint32_t x390 = UINT32_MAX;
volatile int64_t t95 = 7306553LL;
int64_t t96 = 252631575691892LL;
int8_t x405 = INT8_MIN;
uint64_t t99 = 575LLU;
volatile uint8_t x412 = 4U;
static int8_t x415 = INT8_MAX;
volatile int32_t x423 = INT32_MIN;
int8_t x428 = -42;
volatile int32_t x432 = INT32_MIN;
int32_t t105 = 1467;
static int64_t x453 = 69574LL;
int8_t x455 = INT8_MIN;
static int32_t x461 = INT32_MIN;
uint16_t x463 = 3596U;
int32_t x471 = -101604;
int8_t x473 = INT8_MIN;
int32_t x476 = -36;
uint8_t x483 = 49U;
int16_t x491 = INT16_MIN;
int16_t x493 = INT16_MIN;
static int32_t x495 = INT32_MAX;
volatile int16_t x503 = INT16_MIN;
int16_t x507 = INT16_MIN;
uint32_t x511 = 25727U;
int16_t x512 = INT16_MAX;
static int16_t x517 = INT16_MIN;
int16_t x521 = INT16_MIN;
static int32_t x526 = INT32_MIN;
int64_t x529 = INT64_MAX;
int8_t x542 = INT8_MIN;
static int8_t x552 = 0;
uint32_t x553 = 2978087U;
volatile int32_t x554 = -1;
int32_t x556 = INT32_MAX;
int64_t x557 = INT64_MIN;
uint8_t x561 = 8U;
static int8_t x565 = -1;
static int32_t x566 = INT32_MIN;
int32_t x567 = INT32_MIN;
int16_t x573 = -1;
volatile uint64_t t142 = 4804613LLU;
volatile int16_t x585 = -1;
volatile int32_t x586 = INT32_MIN;
uint16_t x588 = UINT16_MAX;
int32_t x595 = INT32_MIN;
uint32_t x601 = 17U;
volatile int64_t t148 = -879LL;
static uint16_t x609 = 4U;
int8_t x623 = INT8_MIN;
int16_t x625 = -1;
volatile uint32_t x628 = UINT32_MAX;
static uint64_t t153 = UINT64_MAX;
uint32_t x631 = 5U;
volatile uint32_t t154 = 22581254U;
static uint16_t x639 = 342U;
int32_t t160 = 13;
int8_t x662 = INT8_MAX;
int16_t x663 = 0;
int8_t x672 = -1;
static volatile int8_t x683 = INT8_MIN;
uint64_t t167 = 357601700LLU;
uint8_t x698 = 1U;
uint32_t x700 = 2U;
volatile int32_t x702 = 117;
int64_t t171 = 17394503478465374LL;
int16_t x718 = 1306;
volatile int64_t t176 = INT64_MIN;
uint16_t x729 = 6U;
static int64_t t179 = -3LL;
volatile uint32_t x747 = 6792U;
static int64_t t182 = -3643746412167134LL;
int8_t x758 = -1;
int32_t x760 = -1;
static int16_t x764 = INT16_MIN;
int64_t x771 = INT64_MIN;
volatile uint8_t x779 = 11U;
int16_t x785 = INT16_MAX;
int32_t x790 = INT32_MAX;
int8_t x794 = 1;
int32_t x800 = 178198;
volatile uint8_t x808 = 10U;
int64_t x811 = INT64_MIN;
int8_t x817 = INT8_MAX;
volatile int32_t t197 = -54373204;
int32_t x823 = -12;
uint64_t t198 = 235677375635459682LLU;
int8_t x825 = INT8_MAX;
volatile int8_t x826 = 0;
uint32_t x827 = 670220390U;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	static volatile int64_t x2 = INT64_MIN;
	static volatile int64_t x4 = -64207906416092802LL;
	static volatile uint64_t t0 = UINT64_MAX;

    t0 = (x1|(x2/(x3^x4)));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	static int8_t x6 = INT8_MAX;
	int8_t x7 = -1;
	int64_t t1 = -344679071401934382LL;

    t1 = (x5|(x6/(x7^x8)));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = UINT16_MAX;
	uint16_t x10 = 5228U;
	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 1U;
	static int32_t t2 = 166;

    t2 = (x9|(x10/(x11^x12)));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x14 = 1293U;
	int8_t x15 = INT8_MAX;
	static volatile int32_t t3 = -16641136;

    t3 = (x13|(x14/(x15^x16)));

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 3U;
	uint32_t x19 = UINT32_MAX;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t4 = 1545994911830062078LLU;

    t4 = (x17|(x18/(x19^x20)));

    if (t4 != 3LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint64_t x22 = 120265534442LLU;
	int8_t x23 = INT8_MAX;
	int8_t x24 = INT8_MIN;
	uint64_t t5 = 1LLU;

    t5 = (x21|(x22/(x23^x24)));

    if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	volatile uint8_t x27 = UINT8_MAX;
	static uint32_t x28 = UINT32_MAX;

    t6 = (x25|(x26/(x27^x28)));

    if (t6 != 255U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MAX;
	int32_t x31 = INT32_MAX;
	int64_t x32 = INT64_MIN;
	int64_t t7 = -335986479666083LL;

    t7 = (x29|(x30/(x31^x32)));

    if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -2084724LL;
	int32_t x34 = -1;
	int8_t x35 = 0;
	uint32_t x36 = 143295U;
	volatile int64_t t8 = -45851497039LL;

    t8 = (x33|(x34/(x35^x36)));

    if (t8 != -2067044LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 2LL;
	volatile uint16_t x38 = 6046U;
	uint8_t x39 = 9U;
	static int16_t x40 = -1;
	volatile int64_t t9 = -748936241460231019LL;

    t9 = (x37|(x38/(x39^x40)));

    if (t9 != -602LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MAX;
	int32_t x43 = -640901048;
	int16_t x44 = -31;

    t10 = (x41|(x42/(x43^x44)));

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	int16_t x46 = -1;
	int16_t x47 = -1;
	int32_t x48 = INT32_MIN;
	static int32_t t11 = -794;

    t11 = (x45|(x46/(x47^x48)));

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	static int8_t x52 = -1;
	volatile int64_t t12 = -5539922558357884LL;

    t12 = (x49|(x50/(x51^x52)));

    if (t12 != 255LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	int64_t x56 = -1LL;
	volatile int64_t t13 = -4LL;

    t13 = (x53|(x54/(x55^x56)));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MIN;
	uint64_t x58 = 4621593LLU;
	int8_t x59 = -3;
	int16_t x60 = INT16_MAX;

    t14 = (x57|(x58/(x59^x60)));

    if (t14 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	uint16_t x62 = UINT16_MAX;
	int32_t x63 = -1;
	static uint8_t x64 = 15U;
	static volatile int32_t t15 = -61972163;

    t15 = (x61|(x62/(x63^x64)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 109U;
	volatile int32_t x66 = 3025;
	volatile int64_t x67 = -1LL;
	static int64_t t16 = -171344LL;

    t16 = (x65|(x66/(x67^x68)));

    if (t16 != 381LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = 6;
	uint16_t x72 = 30518U;

    t17 = (x69|(x70/(x71^x72)));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 323438810LL;
	int8_t x74 = 1;
	static int32_t x75 = 2;
	static int32_t x76 = -262;
	volatile int64_t t18 = -116LL;

    t18 = (x73|(x74/(x75^x76)));

    if (t18 != 323438810LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	static volatile int32_t x78 = INT32_MIN;
	static uint8_t x80 = 51U;
	int64_t t19 = -735209LL;

    t19 = (x77|(x78/(x79^x80)));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -660;
	int8_t x82 = INT8_MIN;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -60;

    t20 = (x81|(x82/(x83^x84)));

    if (t20 != -660) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MAX;
	static uint16_t x86 = 18938U;
	uint16_t x88 = UINT16_MAX;

    t21 = (x85|(x86/(x87^x88)));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x90 = UINT32_MAX;
	int32_t x91 = -1;
	int64_t t22 = -200802006390334950LL;

    t22 = (x89|(x90/(x91^x92)));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -2;
	static int16_t x94 = INT16_MIN;
	volatile int32_t x95 = INT32_MIN;
	static uint16_t x96 = UINT16_MAX;
	int32_t t23 = -15310;

    t23 = (x93|(x94/(x95^x96)));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MIN;
	uint16_t x98 = UINT16_MAX;
	uint32_t t24 = 515352U;

    t24 = (x97|(x98/(x99^x100)));

    if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x103 = 46120;
	volatile int64_t t25 = 40707464624610LL;

    t25 = (x101|(x102/(x103^x104)));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MIN;
	volatile uint8_t x107 = 2U;
	uint16_t x108 = UINT16_MAX;
	volatile uint64_t t26 = UINT64_MAX;

    t26 = (x105|(x106/(x107^x108)));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	int16_t x111 = INT16_MAX;
	volatile int8_t x112 = -1;
	int64_t t27 = -8323483584LL;

    t27 = (x109|(x110/(x111^x112)));

    if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x114 = 2461;
	volatile uint32_t t28 = 1247U;

    t28 = (x113|(x114/(x115^x116)));

    if (t28 != 4294967168U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = 61;
	int16_t x118 = INT16_MIN;
	int32_t x119 = -1;
	int16_t x120 = -199;
	static volatile int32_t t29 = 12;

    t29 = (x117|(x118/(x119^x120)));

    if (t29 != -129) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x122 = 0U;
	int64_t x123 = 69054595286950LL;
	int32_t x124 = 13227;
	int64_t t30 = 35LL;

    t30 = (x121|(x122/(x123^x124)));

    if (t30 != 29833LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x125 = 5U;
	int64_t x126 = -1LL;
	static int64_t x127 = -7LL;
	uint16_t x128 = 2464U;

    t31 = (x125|(x126/(x127^x128)));

    if (t31 != 5LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x132 = 31U;
	static volatile int64_t t32 = -10729LL;

    t32 = (x129|(x130/(x131^x132)));

    if (t32 != -215233316LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	volatile int16_t x134 = -450;
	uint16_t x135 = 56U;
	int32_t t33 = 870330;

    t33 = (x133|(x134/(x135^x136)));

    if (t33 != -7) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	uint8_t x139 = UINT8_MAX;
	uint8_t x140 = 28U;

    t34 = (x137|(x138/(x139^x140)));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -37LL;
	uint32_t x142 = UINT32_MAX;
	uint16_t x143 = 1U;
	int8_t x144 = INT8_MIN;
	int64_t t35 = 32941958LL;

    t35 = (x141|(x142/(x143^x144)));

    if (t35 != -37LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MIN;
	uint8_t x151 = 53U;
	int8_t x152 = -1;
	int32_t t36 = 929617;

    t36 = (x149|(x150/(x151^x152)));

    if (t36 != -34) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = 247;
	int8_t x154 = INT8_MIN;
	volatile uint64_t x155 = 196LLU;
	uint8_t x156 = 0U;
	static volatile uint64_t t37 = 6430777657279958352LLU;

    t37 = (x153|(x154/(x155^x156)));

    if (t37 != 94116041192395767LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = UINT32_MAX;
	int64_t x158 = -23734856LL;
	static int64_t x159 = INT64_MAX;
	int64_t x160 = -1LL;
	static volatile int64_t t38 = -957719032265669956LL;

    t38 = (x157|(x158/(x159^x160)));

    if (t38 != 4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x161 = 9488002U;
	volatile uint16_t x162 = UINT16_MAX;
	int32_t x164 = -1;
	uint32_t t39 = 839618U;

    t39 = (x161|(x162/(x163^x164)));

    if (t39 != 4294966915U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	static uint64_t x167 = 603692486984214352LLU;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t40 = 22130084LLU;

    t40 = (x165|(x166/(x167^x168)));

    if (t40 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x169 = 15U;
	int32_t x170 = INT32_MIN;
	volatile int64_t x171 = INT64_MIN;
	volatile uint64_t t41 = 1LLU;

    t41 = (x169|(x170/(x171^x172)));

    if (t41 != 15LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = INT32_MAX;
	int8_t x174 = -1;
	int8_t x175 = -1;
	int8_t x176 = INT8_MAX;
	int32_t t42 = INT32_MAX;

    t42 = (x173|(x174/(x175^x176)));

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x178 = -434292770502LL;
	uint64_t x179 = UINT64_MAX;
	uint8_t x180 = UINT8_MAX;
	volatile uint64_t t43 = 59208998757LLU;

    t43 = (x177|(x178/(x179^x180)));

    if (t43 != 14821944339753531917LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x181 = -89;
	int64_t x182 = INT64_MIN;
	uint8_t x184 = 4U;

    t44 = (x181|(x182/(x183^x184)));

    if (t44 != -25LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x187 = 0;
	volatile int64_t t45 = 152LL;

    t45 = (x185|(x186/(x187^x188)));

    if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x189 = INT8_MIN;
	static volatile int8_t x190 = INT8_MAX;
	uint16_t x192 = 3817U;
	static volatile int64_t t46 = 58617421216250LL;

    t46 = (x189|(x190/(x191^x192)));

    if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x193 = 1U;
	uint32_t x194 = 1075U;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 809619;
	uint32_t t47 = 1574495805U;

    t47 = (x193|(x194/(x195^x196)));

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = INT16_MIN;
	int16_t x198 = -6015;
	static int16_t x199 = 11;
	volatile int32_t x200 = INT32_MAX;

    t48 = (x197|(x198/(x199^x200)));

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = -3;
	uint8_t x202 = UINT8_MAX;
	static volatile uint64_t x203 = UINT64_MAX;
	static volatile uint64_t t49 = 24193300219448LLU;

    t49 = (x201|(x202/(x203^x204)));

    if (t49 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	static int8_t x207 = -2;
	int64_t x208 = 67319150895920LL;
	volatile int64_t t50 = 29580115413568LL;

    t50 = (x205|(x206/(x207^x208)));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x209 = 12126803LLU;
	int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MIN;
	volatile uint8_t x212 = 5U;
	static volatile uint64_t t51 = 1883659060983LLU;

    t51 = (x209|(x210/(x211^x212)));

    if (t51 != 12126803LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x213 = INT32_MIN;
	static int32_t x214 = -1;
	int64_t x215 = 20LL;
	int8_t x216 = -1;
	int64_t t52 = 769705525773LL;

    t52 = (x213|(x214/(x215^x216)));

    if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x217 = INT8_MIN;
	int64_t x218 = -1LL;
	int8_t x219 = 0;
	uint32_t x220 = 301260U;
	static volatile int64_t t53 = 15511990227LL;

    t53 = (x217|(x218/(x219^x220)));

    if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x221 = 243850334064LLU;
	static int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t54 = UINT64_MAX;

    t54 = (x221|(x222/(x223^x224)));

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x225 = -592;
	uint16_t x226 = 93U;
	uint64_t x227 = 26478318154LLU;
	int16_t x228 = INT16_MIN;
	volatile uint64_t t55 = 0LLU;

    t55 = (x225|(x226/(x227^x228)));

    if (t55 != 18446744073709551024LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x229 = INT16_MAX;
	uint64_t x230 = UINT64_MAX;
	uint32_t x231 = UINT32_MAX;
	int32_t x232 = INT32_MAX;

    t56 = (x229|(x230/(x231^x232)));

    if (t56 != 8589934591LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x233 = UINT64_MAX;
	volatile int16_t x234 = INT16_MIN;
	volatile int64_t x235 = INT64_MIN;
	int32_t x236 = 3305;
	uint64_t t57 = UINT64_MAX;

    t57 = (x233|(x234/(x235^x236)));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x237 = 13371652LLU;
	static int16_t x238 = INT16_MAX;
	int32_t x239 = INT32_MIN;
	volatile int16_t x240 = -1;
	uint64_t t58 = 26LLU;

    t58 = (x237|(x238/(x239^x240)));

    if (t58 != 13371652LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = -1;
	int32_t x242 = -1;
	static volatile uint64_t x244 = 42835406423LLU;
	uint64_t t59 = UINT64_MAX;

    t59 = (x241|(x242/(x243^x244)));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x246 = INT16_MAX;
	int16_t x247 = 103;
	int16_t x248 = INT16_MIN;
	int32_t t60 = 5918467;

    t60 = (x245|(x246/(x247^x248)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = INT16_MIN;
	static int32_t x251 = -1;
	static uint32_t x252 = 5U;

    t61 = (x249|(x250/(x251^x252)));

    if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x254 = INT8_MAX;
	int8_t x255 = INT8_MAX;
	volatile int16_t x256 = 6754;
	static volatile uint32_t t62 = 0U;

    t62 = (x253|(x254/(x255^x256)));

    if (t62 != 502U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x257 = 13U;
	int16_t x258 = 1;
	volatile uint32_t x260 = 109U;
	static volatile int64_t t63 = -314LL;

    t63 = (x257|(x258/(x259^x260)));

    if (t63 != 13LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x261 = 14U;
	volatile uint8_t x264 = UINT8_MAX;

    t64 = (x261|(x262/(x263^x264)));

    if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x266 = INT64_MAX;
	volatile int64_t x267 = INT64_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t65 = 611167282188LLU;

    t65 = (x265|(x266/(x267^x268)));

    if (t65 != 12581LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x269 = INT32_MIN;
	int32_t x271 = -1;
	uint16_t x272 = 1U;
	volatile int32_t t66 = INT32_MIN;

    t66 = (x269|(x270/(x271^x272)));

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x273 = 18U;
	volatile uint16_t x274 = 7946U;
	int32_t x275 = INT32_MAX;
	static int64_t x276 = -1LL;

    t67 = (x273|(x274/(x275^x276)));

    if (t67 != 18LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x277 = -1;
	uint64_t x278 = 4506816LLU;
	static int32_t x280 = INT32_MIN;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = (x277|(x278/(x279^x280)));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x281 = INT64_MAX;
	int32_t x282 = -1;
	int16_t x283 = 2;
	int16_t x284 = INT16_MAX;
	int64_t t69 = INT64_MAX;

    t69 = (x281|(x282/(x283^x284)));

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x285 = 3109697602LLU;
	int16_t x287 = INT16_MIN;
	static int64_t x288 = -107215LL;
	uint64_t t70 = 2511845058LLU;

    t70 = (x285|(x286/(x287^x288)));

    if (t70 != 3109697602LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = INT32_MIN;
	uint16_t x290 = UINT16_MAX;
	int16_t x291 = INT16_MIN;
	uint32_t x292 = 21956U;
	uint32_t t71 = 15494U;

    t71 = (x289|(x290/(x291^x292)));

    if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x293 = INT16_MIN;
	uint32_t x294 = 171U;
	int64_t x295 = INT64_MAX;
	int8_t x296 = -53;
	int64_t t72 = 1922629520053211191LL;

    t72 = (x293|(x294/(x295^x296)));

    if (t72 != -32768LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x297 = 62186LL;
	volatile int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	static uint16_t x300 = 12162U;
	int64_t t73 = 102487968173024LL;

    t73 = (x297|(x298/(x299^x300)));

    if (t73 != 750722125790959LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MIN;
	volatile int64_t x302 = INT64_MIN;
	uint8_t x304 = 26U;

    t74 = (x301|(x302/(x303^x304)));

    if (t74 != -34LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = 72LL;
	static int32_t x306 = INT32_MAX;
	uint64_t t75 = 8628739316360741LLU;

    t75 = (x305|(x306/(x307^x308)));

    if (t75 != 72LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	static volatile uint16_t x311 = 99U;
	int16_t x312 = INT16_MIN;
	int32_t t76 = 375461;

    t76 = (x309|(x310/(x311^x312)));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x313 = UINT8_MAX;
	static uint32_t x315 = 16U;
	static volatile int16_t x316 = -407;

    t77 = (x313|(x314/(x315^x316)));

    if (t77 != 255U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x317 = UINT16_MAX;
	static volatile int64_t x318 = INT64_MAX;
	uint64_t x319 = 33LLU;
	uint8_t x320 = UINT8_MAX;
	uint64_t t78 = 4929788419651918LLU;

    t78 = (x317|(x318/(x319^x320)));

    if (t78 != 41546720886783999LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = INT16_MIN;
	static volatile int16_t x322 = INT16_MAX;
	volatile int32_t t79 = -1;

    t79 = (x321|(x322/(x323^x324)));

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x325 = 593883LLU;
	uint16_t x326 = 748U;
	int32_t x327 = 163517428;

    t80 = (x325|(x326/(x327^x328)));

    if (t80 != 593883LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = INT8_MAX;
	uint64_t x330 = 17367086818379808LLU;
	volatile uint8_t x331 = 9U;
	volatile int32_t x332 = -1;
	uint64_t t81 = 208LLU;

    t81 = (x329|(x330/(x331^x332)));

    if (t81 != 127LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x333 = 15014016593LL;
	static int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	volatile int64_t t82 = -4612822LL;

    t82 = (x333|(x334/(x335^x336)));

    if (t82 != 15014016593LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x337 = -1;
	uint32_t x339 = 3U;
	static volatile uint8_t x340 = 1U;
	uint32_t t83 = UINT32_MAX;

    t83 = (x337|(x338/(x339^x340)));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x341 = 322;
	int64_t x342 = INT64_MIN;
	uint64_t x343 = UINT64_MAX;

    t84 = (x341|(x342/(x343^x344)));

    if (t84 != 322LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x345 = 858U;
	int16_t x346 = INT16_MIN;
	int32_t x347 = -3;
	int16_t x348 = INT16_MIN;
	volatile int32_t t85 = -3564414;

    t85 = (x345|(x346/(x347^x348)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x349 = INT64_MAX;
	int16_t x350 = 8520;
	static uint32_t x351 = UINT32_MAX;
	int64_t x352 = INT64_MIN;
	volatile int64_t t86 = INT64_MAX;

    t86 = (x349|(x350/(x351^x352)));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x353 = 12U;
	uint64_t x355 = 536LLU;
	static int32_t x356 = 101345;
	uint64_t t87 = 259558879434019LLU;

    t87 = (x353|(x354/(x355^x356)));

    if (t87 != 12LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x358 = -1LL;
	int8_t x359 = INT8_MIN;
	volatile int64_t x360 = INT64_MAX;
	int64_t t88 = -272325643820LL;

    t88 = (x357|(x358/(x359^x360)));

    if (t88 != -166153381710099093LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x362 = -93;
	static int16_t x363 = -1;
	volatile uint64_t x364 = 130049524LLU;
	uint64_t t89 = 638308LLU;

    t89 = (x361|(x362/(x363^x364)));

    if (t89 != 3LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x365 = -1;
	int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	volatile int8_t x368 = -1;

    t90 = (x365|(x366/(x367^x368)));

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x369 = 323U;
	int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t91 = 6080929;

    t91 = (x369|(x370/(x371^x372)));

    if (t91 != 323) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x373 = 704;
	volatile int16_t x374 = -1;
	int32_t t92 = -4;

    t92 = (x373|(x374/(x375^x376)));

    if (t92 != 704) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = INT16_MAX;
	int16_t x382 = -1;
	int32_t x383 = -1086;
	static int32_t t93 = 52740164;

    t93 = (x381|(x382/(x383^x384)));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x385 = 343227U;
	int8_t x386 = 1;
	static int16_t x387 = 1058;
	uint64_t x388 = 547598025103601156LLU;

    t94 = (x385|(x386/(x387^x388)));

    if (t94 != 343227LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = 9092290751517LL;
	static int8_t x391 = 0;
	int64_t x392 = INT64_MIN;

    t95 = (x389|(x390/(x391^x392)));

    if (t95 != 9092290751517LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x393 = -12;
	uint16_t x394 = 990U;
	int16_t x395 = -665;
	int64_t x396 = -2LL;

    t96 = (x393|(x394/(x395^x396)));

    if (t96 != -11LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x397 = INT16_MAX;
	static uint64_t x398 = 10241804LLU;
	int8_t x399 = 0;
	uint16_t x400 = UINT16_MAX;
	volatile uint64_t t97 = 83088150LLU;

    t97 = (x397|(x398/(x399^x400)));

    if (t97 != 32767LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x401 = INT64_MIN;
	int32_t x402 = -1;
	int16_t x403 = -16336;
	static volatile int8_t x404 = 0;
	int64_t t98 = INT64_MIN;

    t98 = (x401|(x402/(x403^x404)));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x406 = 3U;
	uint64_t x407 = 34632305LLU;
	static int32_t x408 = -3569;

    t99 = (x405|(x406/(x407^x408)));

    if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x409 = 7U;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = 330333238775319649LLU;
	uint64_t t100 = 422721198786137196LLU;

    t100 = (x409|(x410/(x411^x412)));

    if (t100 != 55LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x413 = 0U;
	int32_t x414 = INT32_MIN;
	uint16_t x416 = 7976U;
	int32_t t101 = -118388;

    t101 = (x413|(x414/(x415^x416)));

    if (t101 != -267665) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = -1LL;
	uint16_t x418 = UINT16_MAX;
	volatile int32_t x419 = -1;
	uint64_t x420 = 62235471143454LLU;
	uint64_t t102 = UINT64_MAX;

    t102 = (x417|(x418/(x419^x420)));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = INT32_MAX;
	static uint16_t x422 = 73U;
	int32_t x424 = -21;
	int32_t t103 = INT32_MAX;

    t103 = (x421|(x422/(x423^x424)));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x425 = -1;
	volatile uint32_t x426 = 3823U;
	int8_t x427 = INT8_MIN;
	volatile uint32_t t104 = UINT32_MAX;

    t104 = (x425|(x426/(x427^x428)));

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x429 = -1;
	int32_t x430 = 1;
	uint8_t x431 = 38U;

    t105 = (x429|(x430/(x431^x432)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = INT8_MIN;
	uint16_t x434 = 6684U;
	uint16_t x435 = 1724U;
	int16_t x436 = INT16_MIN;
	int32_t t106 = -463663;

    t106 = (x433|(x434/(x435^x436)));

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = 0;
	int8_t x438 = 1;
	int32_t x439 = INT32_MIN;
	static int16_t x440 = -1;
	volatile int32_t t107 = 352143;

    t107 = (x437|(x438/(x439^x440)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x441 = 7021U;
	uint16_t x442 = UINT16_MAX;
	volatile int32_t x443 = 28489503;
	static int64_t x444 = -1LL;
	int64_t t108 = 111653LL;

    t108 = (x441|(x442/(x443^x444)));

    if (t108 != 7021LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x445 = -9LL;
	static int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MIN;
	static int64_t x448 = 662LL;
	int64_t t109 = -7808414581LL;

    t109 = (x445|(x446/(x447^x448)));

    if (t109 != -9LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x449 = 7462U;
	int64_t x450 = -1LL;
	uint64_t x451 = 8135025982941396511LLU;
	uint32_t x452 = 1952982U;
	static volatile uint64_t t110 = 4675LLU;

    t110 = (x449|(x450/(x451^x452)));

    if (t110 != 7462LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x454 = 5366227;
	uint64_t x456 = 700594576633244LLU;
	static uint64_t t111 = 80500761LLU;

    t111 = (x453|(x454/(x455^x456)));

    if (t111 != 69574LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x457 = -717990134;
	static int64_t x458 = INT64_MIN;
	uint32_t x459 = UINT32_MAX;
	volatile int16_t x460 = INT16_MAX;
	int64_t t112 = -476812747345LL;

    t112 = (x457|(x458/(x459^x460)));

    if (t112 != -10486LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x462 = -20;
	int8_t x464 = -1;
	int32_t t113 = INT32_MIN;

    t113 = (x461|(x462/(x463^x464)));

    if (t113 != INT32_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x465 = 1U;
	uint16_t x466 = 88U;
	int8_t x467 = -1;
	volatile uint16_t x468 = 37U;
	static volatile int32_t t114 = 19833;

    t114 = (x465|(x466/(x467^x468)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x469 = UINT8_MAX;
	uint16_t x470 = 165U;
	static int16_t x472 = INT16_MIN;
	static volatile int32_t t115 = -127227063;

    t115 = (x469|(x470/(x471^x472)));

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x474 = INT8_MAX;
	static volatile int16_t x475 = INT16_MIN;
	int32_t t116 = -343137;

    t116 = (x473|(x474/(x475^x476)));

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x477 = 1U;
	int64_t x478 = INT64_MIN;
	static int16_t x479 = INT16_MAX;
	int32_t x480 = -19794;
	int64_t t117 = 6758168LL;

    t117 = (x477|(x478/(x479^x480)));

    if (t117 != 710857189738325LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x481 = UINT32_MAX;
	static int64_t x482 = INT64_MIN;
	static uint64_t x484 = UINT64_MAX;
	static volatile uint64_t t118 = 25LLU;

    t118 = (x481|(x482/(x483^x484)));

    if (t118 != 4294967295LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x485 = -1;
	int8_t x486 = INT8_MAX;
	static int16_t x487 = -6747;
	uint16_t x488 = 41U;
	int32_t t119 = 13478;

    t119 = (x485|(x486/(x487^x488)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = -1;
	uint32_t x490 = UINT32_MAX;
	static uint32_t x492 = UINT32_MAX;
	volatile uint32_t t120 = UINT32_MAX;

    t120 = (x489|(x490/(x491^x492)));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x494 = 7U;
	volatile int64_t x496 = INT64_MIN;
	static volatile int64_t t121 = -758LL;

    t121 = (x493|(x494/(x495^x496)));

    if (t121 != -32768LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x497 = -170LL;
	int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;
	int64_t x500 = -6318464574LL;
	int64_t t122 = 109892419475LL;

    t122 = (x497|(x498/(x499^x500)));

    if (t122 != -170LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x501 = 315U;
	int16_t x502 = INT16_MIN;
	static volatile uint32_t x504 = UINT32_MAX;
	static uint32_t t123 = 44575U;

    t123 = (x501|(x502/(x503^x504)));

    if (t123 != 131387U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x505 = UINT32_MAX;
	volatile int32_t x506 = INT32_MIN;
	uint32_t x508 = 983698984U;
	volatile uint32_t t124 = UINT32_MAX;

    t124 = (x505|(x506/(x507^x508)));

    if (t124 != UINT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x509 = UINT64_MAX;
	int32_t x510 = INT32_MIN;
	uint64_t t125 = UINT64_MAX;

    t125 = (x509|(x510/(x511^x512)));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x513 = 5;
	int8_t x514 = INT8_MIN;
	volatile uint8_t x515 = 63U;
	int16_t x516 = 0;
	int32_t t126 = 20;

    t126 = (x513|(x514/(x515^x516)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x518 = INT16_MIN;
	static volatile int16_t x519 = 2;
	int8_t x520 = -1;
	static volatile int32_t t127 = 137951;

    t127 = (x517|(x518/(x519^x520)));

    if (t127 != -21846) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x522 = INT64_MIN;
	static uint32_t x523 = UINT32_MAX;
	int64_t x524 = -2LL;
	volatile int64_t t128 = -4LL;

    t128 = (x521|(x522/(x523^x524)));

    if (t128 != -32768LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x525 = 38U;
	static int64_t x527 = -1LL;
	int8_t x528 = INT8_MAX;
	int64_t t129 = 144798951802LL;

    t129 = (x525|(x526/(x527^x528)));

    if (t129 != 16777254LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x530 = INT8_MAX;
	static int32_t x531 = -21623;
	int32_t x532 = INT32_MAX;
	volatile int64_t t130 = INT64_MAX;

    t130 = (x529|(x530/(x531^x532)));

    if (t130 != INT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x533 = INT64_MIN;
	int8_t x534 = INT8_MIN;
	uint64_t x535 = UINT64_MAX;
	int32_t x536 = -2687;
	volatile uint64_t t131 = 7LLU;

    t131 = (x533|(x534/(x535^x536)));

    if (t131 != 9230239774782441314LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x537 = INT64_MIN;
	volatile int8_t x538 = INT8_MIN;
	volatile int8_t x539 = INT8_MIN;
	uint16_t x540 = 11U;
	int64_t t132 = -3LL;

    t132 = (x537|(x538/(x539^x540)));

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x541 = 4049LLU;
	int64_t x543 = INT64_MIN;
	int16_t x544 = 1614;
	volatile uint64_t t133 = 282461LLU;

    t133 = (x541|(x542/(x543^x544)));

    if (t133 != 4049LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x545 = UINT16_MAX;
	volatile int8_t x546 = INT8_MAX;
	int64_t x547 = INT64_MIN;
	int32_t x548 = INT32_MAX;
	int64_t t134 = 1822142LL;

    t134 = (x545|(x546/(x547^x548)));

    if (t134 != 65535LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x549 = -842;
	int64_t x550 = INT64_MAX;
	volatile uint32_t x551 = 10U;
	static volatile int64_t t135 = -313117794LL;

    t135 = (x549|(x550/(x551^x552)));

    if (t135 != -770LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x555 = UINT32_MAX;
	static uint32_t t136 = 473686191U;

    t136 = (x553|(x554/(x555^x556)));

    if (t136 != 2978087U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x558 = INT8_MIN;
	int64_t x559 = INT64_MIN;
	static uint8_t x560 = UINT8_MAX;
	volatile int64_t t137 = INT64_MIN;

    t137 = (x557|(x558/(x559^x560)));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x562 = INT8_MIN;
	int32_t x563 = INT32_MIN;
	int64_t x564 = INT64_MIN;
	static volatile int64_t t138 = -9300914912595762LL;

    t138 = (x561|(x562/(x563^x564)));

    if (t138 != 8LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x568 = 91U;
	static int32_t t139 = 440038;

    t139 = (x565|(x566/(x567^x568)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x569 = 1634310972369LLU;
	int16_t x570 = -1;
	static uint16_t x571 = UINT16_MAX;
	int8_t x572 = INT8_MAX;
	volatile uint64_t t140 = 14684567LLU;

    t140 = (x569|(x570/(x571^x572)));

    if (t140 != 1634310972369LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x574 = 47006;
	volatile int32_t x575 = -1;
	volatile int16_t x576 = INT16_MIN;
	int32_t t141 = -1;

    t141 = (x573|(x574/(x575^x576)));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x577 = 4U;
	uint64_t x578 = 295216LLU;
	uint64_t x579 = 444LLU;
	int32_t x580 = -1;

    t142 = (x577|(x578/(x579^x580)));

    if (t142 != 4LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x581 = 914204792395943LLU;
	uint16_t x582 = UINT16_MAX;
	static uint8_t x583 = 9U;
	int64_t x584 = INT64_MAX;
	uint64_t t143 = 52545746212LLU;

    t143 = (x581|(x582/(x583^x584)));

    if (t143 != 914204792395943LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x587 = UINT64_MAX;
	volatile uint64_t t144 = UINT64_MAX;

    t144 = (x585|(x586/(x587^x588)));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x589 = -1;
	int8_t x590 = INT8_MIN;
	int32_t x591 = INT32_MIN;
	volatile uint8_t x592 = UINT8_MAX;
	static volatile int32_t t145 = 232;

    t145 = (x589|(x590/(x591^x592)));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x593 = -1LL;
	volatile int16_t x594 = -7056;
	int64_t x596 = -304264345079LL;
	static int64_t t146 = 2337434865LL;

    t146 = (x593|(x594/(x595^x596)));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x602 = 928U;
	volatile uint16_t x603 = 16126U;
	static uint8_t x604 = 22U;
	volatile uint32_t t147 = 8U;

    t147 = (x601|(x602/(x603^x604)));

    if (t147 != 17U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x605 = 10977;
	static int64_t x606 = INT64_MIN;
	int16_t x607 = -58;
	int8_t x608 = INT8_MIN;

    t148 = (x605|(x606/(x607^x608)));

    if (t148 != -131762457669353747LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x610 = INT32_MAX;
	int8_t x611 = 17;
	static int8_t x612 = INT8_MIN;
	volatile int32_t t149 = -10312;

    t149 = (x609|(x610/(x611^x612)));

    if (t149 != -19346699) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x613 = -20;
	volatile int32_t x614 = 2;
	volatile int16_t x615 = INT16_MAX;
	int64_t x616 = INT64_MIN;
	static volatile int64_t t150 = 4LL;

    t150 = (x613|(x614/(x615^x616)));

    if (t150 != -20LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x617 = INT8_MAX;
	volatile int64_t x618 = -3731528083LL;
	static int64_t x619 = 11998252024242LL;
	int32_t x620 = -44605484;
	volatile int64_t t151 = -358013323532389649LL;

    t151 = (x617|(x618/(x619^x620)));

    if (t151 != 127LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x621 = 280607;
	static int16_t x622 = INT16_MIN;
	static uint64_t x624 = UINT64_MAX;
	uint64_t t152 = 2214LLU;

    t152 = (x621|(x622/(x623^x624)));

    if (t152 != 145249953336576031LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x626 = 14U;
	uint64_t x627 = 271101114145LLU;

    t153 = (x625|(x626/(x627^x628)));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x629 = 1U;
	uint8_t x630 = 10U;
	int32_t x632 = 391135;

    t154 = (x629|(x630/(x631^x632)));

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x633 = UINT16_MAX;
	int8_t x634 = INT8_MIN;
	int16_t x635 = 349;
	uint16_t x636 = 342U;
	volatile int32_t t155 = 123622;

    t155 = (x633|(x634/(x635^x636)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x637 = INT64_MIN;
	uint8_t x638 = UINT8_MAX;
	int32_t x640 = -122;
	volatile int64_t t156 = INT64_MIN;

    t156 = (x637|(x638/(x639^x640)));

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x641 = -170;
	int64_t x642 = 102291LL;
	int8_t x643 = INT8_MIN;
	uint16_t x644 = 709U;
	volatile int64_t t157 = -1LL;

    t157 = (x641|(x642/(x643^x644)));

    if (t157 != -130LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x649 = INT32_MIN;
	volatile int16_t x650 = INT16_MAX;
	int32_t x651 = -1;
	int8_t x652 = INT8_MIN;
	volatile int32_t t158 = 262053;

    t158 = (x649|(x650/(x651^x652)));

    if (t158 != -2147483390) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = -623;
	int32_t x654 = INT32_MIN;
	static volatile int32_t x655 = INT32_MIN;
	static int8_t x656 = INT8_MIN;
	volatile int32_t t159 = -1;

    t159 = (x653|(x654/(x655^x656)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x657 = UINT16_MAX;
	volatile int32_t x658 = 464;
	int32_t x659 = 377698;
	static int16_t x660 = 1469;

    t160 = (x657|(x658/(x659^x660)));

    if (t160 != 65535) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x661 = INT16_MIN;
	uint32_t x664 = UINT32_MAX;
	volatile uint32_t t161 = 1119336U;

    t161 = (x661|(x662/(x663^x664)));

    if (t161 != 4294934528U) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x669 = 12;
	volatile int64_t x670 = -1313176LL;
	int8_t x671 = INT8_MAX;
	volatile int64_t t162 = -13594707420386341LL;

    t162 = (x669|(x670/(x671^x672)));

    if (t162 != 10271LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x673 = 27085630U;
	int16_t x674 = -1;
	uint32_t x675 = 601176443U;
	int32_t x676 = INT32_MAX;
	volatile uint32_t t163 = 1498657420U;

    t163 = (x673|(x674/(x675^x676)));

    if (t163 != 27085630U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x677 = INT16_MAX;
	volatile int32_t x678 = -1;
	uint8_t x679 = UINT8_MAX;
	volatile int16_t x680 = INT16_MIN;
	int32_t t164 = -251533;

    t164 = (x677|(x678/(x679^x680)));

    if (t164 != 32767) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x681 = UINT16_MAX;
	int16_t x682 = -143;
	int32_t x684 = INT32_MAX;
	volatile int32_t t165 = 383;

    t165 = (x681|(x682/(x683^x684)));

    if (t165 != 65535) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x685 = 385118985089812LL;
	static int8_t x686 = -1;
	static int16_t x687 = 29;
	uint8_t x688 = 2U;
	int64_t t166 = -186LL;

    t166 = (x685|(x686/(x687^x688)));

    if (t166 != 385118985089812LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x689 = INT32_MAX;
	static uint64_t x690 = 4LLU;
	int8_t x691 = INT8_MIN;
	volatile int8_t x692 = -28;

    t167 = (x689|(x690/(x691^x692)));

    if (t167 != 2147483647LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x693 = INT8_MIN;
	volatile uint8_t x694 = 48U;
	int16_t x695 = INT16_MIN;
	static uint64_t x696 = 33945375694LLU;
	volatile uint64_t t168 = 921167050697LLU;

    t168 = (x693|(x694/(x695^x696)));

    if (t168 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x697 = 23;
	uint32_t x699 = 4486739U;
	volatile uint32_t t169 = 23837343U;

    t169 = (x697|(x698/(x699^x700)));

    if (t169 != 23U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x701 = 9U;
	volatile int16_t x703 = 6;
	int8_t x704 = INT8_MAX;
	volatile int32_t t170 = 0;

    t170 = (x701|(x702/(x703^x704)));

    if (t170 != 9) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = -1;
	int16_t x706 = INT16_MIN;
	static volatile uint32_t x707 = 5689U;
	int64_t x708 = -1LL;

    t171 = (x705|(x706/(x707^x708)));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x709 = -1;
	int64_t x710 = INT64_MIN;
	static int32_t x711 = INT32_MIN;
	static uint16_t x712 = UINT16_MAX;
	int64_t t172 = 45444965613074LL;

    t172 = (x709|(x710/(x711^x712)));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x713 = INT16_MAX;
	int16_t x714 = -2406;
	int32_t x715 = 1719986;
	int32_t x716 = -1;
	volatile int32_t t173 = -115725700;

    t173 = (x713|(x714/(x715^x716)));

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x717 = 1U;
	int32_t x719 = -1;
	volatile int64_t x720 = INT64_MIN;
	static volatile int64_t t174 = 118912143086853744LL;

    t174 = (x717|(x718/(x719^x720)));

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x721 = 1U;
	int8_t x722 = -10;
	volatile int64_t x723 = 110269LL;
	int32_t x724 = INT32_MAX;
	volatile int64_t t175 = -12409238467969LL;

    t175 = (x721|(x722/(x723^x724)));

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x725 = INT64_MIN;
	int16_t x726 = -3679;
	volatile uint16_t x727 = UINT16_MAX;
	int64_t x728 = -1133166103569085132LL;

    t176 = (x725|(x726/(x727^x728)));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x730 = INT64_MIN;
	static int64_t x731 = -1LL;
	static volatile int64_t x732 = INT64_MAX;
	int64_t t177 = 511062LL;

    t177 = (x729|(x730/(x731^x732)));

    if (t177 != 7LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x733 = -1114;
	int8_t x734 = INT8_MIN;
	volatile uint32_t x735 = 5097U;
	static int8_t x736 = INT8_MAX;
	uint32_t t178 = 298818U;

    t178 = (x733|(x734/(x735^x736)));

    if (t178 != 4294966198U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x741 = 11U;
	static volatile int32_t x742 = 854;
	static int64_t x743 = INT64_MIN;
	volatile int8_t x744 = -1;

    t179 = (x741|(x742/(x743^x744)));

    if (t179 != 11LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x745 = 1176502LL;
	volatile uint8_t x746 = UINT8_MAX;
	int32_t x748 = 7;
	volatile int64_t t180 = 16522LL;

    t180 = (x745|(x746/(x747^x748)));

    if (t180 != 1176502LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x749 = INT16_MIN;
	int64_t x750 = 455558639072164624LL;
	int32_t x751 = 24402;
	int32_t x752 = INT32_MAX;
	volatile int64_t t181 = -430482032535548LL;

    t181 = (x749|(x750/(x751^x752)));

    if (t181 != -1600LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x753 = INT8_MIN;
	uint16_t x754 = UINT16_MAX;
	int64_t x755 = INT64_MIN;
	uint16_t x756 = 15526U;

    t182 = (x753|(x754/(x755^x756)));

    if (t182 != -128LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x757 = INT16_MIN;
	volatile uint16_t x759 = 698U;
	volatile int32_t t183 = 5;

    t183 = (x757|(x758/(x759^x760)));

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x761 = INT8_MIN;
	volatile int16_t x762 = 8191;
	static int64_t x763 = INT64_MIN;
	volatile int64_t t184 = 14216346480247LL;

    t184 = (x761|(x762/(x763^x764)));

    if (t184 != -128LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x769 = INT8_MIN;
	static volatile uint32_t x770 = 149296309U;
	int32_t x772 = INT32_MAX;
	int64_t t185 = 1673940494150053389LL;

    t185 = (x769|(x770/(x771^x772)));

    if (t185 != -128LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x773 = INT8_MIN;
	int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MIN;
	int8_t x776 = -1;
	int32_t t186 = -51;

    t186 = (x773|(x774/(x775^x776)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x777 = INT32_MIN;
	int8_t x778 = INT8_MIN;
	int64_t x780 = INT64_MAX;
	volatile int64_t t187 = -141827842LL;

    t187 = (x777|(x778/(x779^x780)));

    if (t187 != -2147483648LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x781 = -1LL;
	int16_t x782 = INT16_MAX;
	static int16_t x783 = 2886;
	int32_t x784 = -59075;
	volatile int64_t t188 = 126511LL;

    t188 = (x781|(x782/(x783^x784)));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x786 = INT16_MAX;
	static volatile uint16_t x787 = UINT16_MAX;
	int64_t x788 = INT64_MIN;
	int64_t t189 = -71182100073403934LL;

    t189 = (x785|(x786/(x787^x788)));

    if (t189 != 32767LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint16_t x789 = 1U;
	int16_t x791 = -38;
	int64_t x792 = INT64_MIN;
	int64_t t190 = -3848082986573LL;

    t190 = (x789|(x790/(x791^x792)));

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x793 = INT32_MIN;
	uint16_t x795 = UINT16_MAX;
	static int8_t x796 = 0;
	volatile int32_t t191 = INT32_MIN;

    t191 = (x793|(x794/(x795^x796)));

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x797 = INT64_MIN;
	int64_t x798 = -39028815LL;
	uint8_t x799 = UINT8_MAX;
	volatile int64_t t192 = -17LL;

    t192 = (x797|(x798/(x799^x800)));

    if (t192 != -218LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x801 = -1LL;
	int64_t x802 = -94776986273LL;
	static int32_t x803 = INT32_MIN;
	uint32_t x804 = 12313U;
	static int64_t t193 = -137795033781605LL;

    t193 = (x801|(x802/(x803^x804)));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x805 = -1;
	int64_t x806 = -1LL;
	static int64_t x807 = -1LL;
	int64_t t194 = 6LL;

    t194 = (x805|(x806/(x807^x808)));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x809 = UINT8_MAX;
	int8_t x810 = -1;
	static uint64_t x812 = UINT64_MAX;
	uint64_t t195 = 787379900819LLU;

    t195 = (x809|(x810/(x811^x812)));

    if (t195 != 255LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x813 = -3904062758LL;
	int8_t x814 = INT8_MIN;
	uint32_t x815 = 235604U;
	static int16_t x816 = INT16_MIN;
	int64_t t196 = 148981265376LL;

    t196 = (x813|(x814/(x815^x816)));

    if (t196 != -3904062757LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x818 = -1;
	int16_t x819 = INT16_MAX;
	volatile int16_t x820 = -1;

    t197 = (x817|(x818/(x819^x820)));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x821 = INT8_MAX;
	uint64_t x822 = UINT64_MAX;
	uint16_t x824 = UINT16_MAX;

    t198 = (x821|(x822/(x823^x824)));

    if (t198 != 127LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x828 = 13U;
	volatile uint32_t t199 = 462U;

    t199 = (x825|(x826/(x827^x828)));

    if (t199 != 127U) { NG(); } else { ; }
	
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

