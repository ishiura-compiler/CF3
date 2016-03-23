
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

static uint16_t x2 = UINT16_MAX;
int32_t x3 = INT32_MIN;
uint64_t x4 = 99LLU;
static int32_t t0 = 30989;
volatile int32_t t1 = -21;
uint8_t x20 = 11U;
static uint32_t x23 = 400110038U;
uint16_t x27 = 11095U;
int32_t t7 = 614168;
int32_t x33 = -1;
uint64_t x38 = 12949385385542179LLU;
static uint64_t x41 = 173LLU;
int32_t t10 = 229;
int64_t x47 = -7490LL;
volatile uint16_t x50 = 28560U;
int16_t x57 = 1258;
int32_t t17 = -156381;
volatile int32_t t18 = 57;
int16_t x80 = -1;
int32_t x82 = INT32_MAX;
uint32_t x86 = UINT32_MAX;
static int64_t x88 = 379135253621723209LL;
int16_t x89 = INT16_MIN;
int32_t t22 = 2419461;
int8_t x99 = INT8_MIN;
int16_t x101 = INT16_MIN;
int32_t t25 = 9722;
static int8_t x107 = -24;
int32_t t26 = -29;
volatile int16_t x110 = -1;
int64_t x114 = 26998905LL;
int8_t x119 = 27;
uint16_t x130 = UINT16_MAX;
volatile int16_t x132 = INT16_MIN;
int32_t x136 = -1;
volatile int32_t t33 = 3;
uint32_t x145 = 7613U;
uint8_t x150 = 23U;
int8_t x158 = -1;
static uint8_t x160 = UINT8_MAX;
int32_t x162 = -10;
volatile int32_t t41 = -230902427;
uint32_t x169 = 23U;
int16_t x172 = -1;
uint8_t x173 = UINT8_MAX;
uint32_t x180 = 7562U;
uint32_t x182 = 1U;
int32_t t45 = 232;
int64_t x185 = INT64_MIN;
volatile uint16_t x190 = UINT16_MAX;
static volatile int64_t x219 = -7399LL;
uint16_t x224 = 0U;
uint8_t x225 = UINT8_MAX;
uint32_t x226 = 9858355U;
volatile int32_t t56 = 17290;
volatile int64_t x232 = INT64_MIN;
uint16_t x233 = 2681U;
volatile uint8_t x236 = 95U;
int32_t x238 = INT32_MIN;
volatile int16_t x242 = INT16_MIN;
uint64_t x246 = 76109LLU;
volatile uint32_t x250 = UINT32_MAX;
static uint16_t x259 = 15352U;
volatile int32_t t64 = -8809551;
int8_t x265 = 23;
volatile int32_t t66 = 290;
static int64_t x271 = 479834LL;
static volatile int32_t x272 = INT32_MIN;
uint32_t x273 = UINT32_MAX;
volatile int16_t x274 = 0;
int16_t x277 = INT16_MIN;
int16_t x285 = INT16_MAX;
int32_t x290 = INT32_MIN;
uint8_t x295 = 2U;
static volatile int32_t t73 = 197;
uint16_t x299 = 593U;
uint8_t x306 = 2U;
int16_t x308 = INT16_MAX;
int16_t x318 = 41;
uint16_t x319 = 211U;
uint64_t x323 = 57419831LLU;
int32_t t80 = 3834;
int8_t x331 = -2;
uint32_t x335 = 1182265493U;
int32_t x343 = INT32_MIN;
int32_t x344 = INT32_MIN;
volatile int32_t t85 = 874093;
int8_t x346 = INT8_MIN;
int32_t x347 = INT32_MIN;
volatile int32_t t87 = 8082064;
int8_t x354 = INT8_MAX;
static int32_t x356 = INT32_MAX;
uint64_t x359 = 206131067LLU;
int64_t x361 = INT64_MIN;
uint32_t x363 = 8U;
static int32_t x364 = -75716;
int64_t x365 = INT64_MIN;
static int16_t x368 = 1;
int32_t t91 = 536390088;
static volatile int8_t x370 = 1;
volatile int32_t t92 = -898304077;
int32_t x375 = -1;
uint32_t x377 = 1996117U;
int8_t x381 = INT8_MIN;
int16_t x383 = INT16_MIN;
uint32_t x388 = UINT32_MAX;
uint32_t x392 = UINT32_MAX;
volatile int32_t t97 = 0;
int16_t x394 = -1;
volatile int64_t x396 = INT64_MIN;
int16_t x403 = -1;
static uint64_t x419 = 98399136868LLU;
volatile int32_t x420 = -1;
volatile int16_t x428 = 7171;
int8_t x439 = -1;
volatile int8_t x440 = -3;
uint16_t x442 = UINT16_MAX;
int64_t x443 = -1LL;
uint16_t x446 = 0U;
static int8_t x447 = -1;
int32_t t111 = 217;
int32_t x452 = INT32_MIN;
static volatile int32_t t113 = -3;
volatile int32_t t114 = -29976123;
int32_t t115 = 90;
volatile int64_t x466 = 1233LL;
int32_t t116 = -8310;
uint8_t x470 = UINT8_MAX;
uint32_t x478 = 2967U;
int8_t x500 = -1;
static int64_t x501 = -1LL;
static volatile int16_t x503 = INT16_MIN;
int32_t t126 = -28;
int32_t t127 = -2;
uint32_t x513 = UINT32_MAX;
volatile int32_t x523 = INT32_MAX;
int32_t t130 = 159;
volatile int32_t t132 = 75;
static int16_t x535 = INT16_MIN;
uint8_t x538 = 8U;
static uint8_t x540 = 0U;
static int64_t x541 = -1LL;
uint8_t x543 = 5U;
uint8_t x545 = 8U;
static uint64_t x553 = 4260681095LLU;
int16_t x555 = -1;
int16_t x557 = INT16_MAX;
static uint64_t x561 = UINT64_MAX;
uint8_t x564 = 11U;
uint16_t x566 = UINT16_MAX;
int64_t x570 = INT64_MAX;
volatile int32_t t143 = 0;
uint32_t x580 = 4621174U;
static int32_t x586 = INT32_MIN;
uint8_t x590 = 2U;
int32_t x599 = 1;
uint32_t x601 = UINT32_MAX;
int16_t x603 = INT16_MIN;
uint8_t x607 = 1U;
volatile uint8_t x609 = 6U;
volatile uint64_t x610 = UINT64_MAX;
uint16_t x631 = UINT16_MAX;
int32_t t157 = -844;
volatile int32_t x633 = INT32_MAX;
static int8_t x640 = INT8_MAX;
uint32_t x643 = 16243178U;
volatile int64_t x651 = -1234334LL;
int32_t x652 = INT32_MIN;
int64_t x654 = INT64_MIN;
volatile int32_t t163 = 0;
uint64_t x661 = 7887720LLU;
uint64_t x662 = UINT64_MAX;
int32_t x663 = -3;
uint32_t x671 = UINT32_MAX;
uint32_t x673 = 68986U;
volatile uint16_t x681 = 3294U;
volatile int32_t x687 = INT32_MIN;
int32_t t171 = 253;
int8_t x689 = -1;
static int32_t x690 = -1;
volatile uint8_t x694 = 3U;
uint32_t x702 = 1327612U;
volatile int8_t x706 = -1;
int32_t x708 = INT32_MIN;
uint16_t x713 = UINT16_MAX;
uint64_t x720 = UINT64_MAX;
int32_t x721 = -147445;
uint64_t x723 = 191004565761748LLU;
uint32_t x725 = 2250U;
int16_t x735 = -1;
int32_t t183 = -4756876;
int16_t x738 = -26;
volatile int32_t t185 = -160988621;
int16_t x748 = INT16_MIN;
volatile int32_t t188 = -6;
uint64_t x760 = 15496155814LLU;
volatile int32_t t190 = -130;
static uint64_t x770 = 191LLU;
int64_t x790 = INT64_MIN;
static uint32_t x794 = 1829369380U;
static int32_t x795 = INT32_MIN;
uint8_t x799 = UINT8_MAX;
static volatile int32_t t199 = -507056474;


void f0(void) {
    	uint8_t x1 = 3U;

    t0 = (x1!=(x2|(x3<=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 13;
	static int8_t x6 = -1;
	volatile int16_t x7 = INT16_MAX;
	int32_t x8 = INT32_MAX;

    t1 = (x5!=(x6|(x7<=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -2276834;
	int32_t x10 = INT32_MIN;
	volatile int16_t x11 = 459;
	static uint16_t x12 = 604U;
	volatile int32_t t2 = -3;

    t2 = (x9!=(x10|(x11<=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 994329LLU;
	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MAX;
	static volatile uint16_t x16 = 6411U;
	volatile int32_t t3 = -65193;

    t3 = (x13!=(x14|(x15<=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	volatile int16_t x18 = INT16_MAX;
	int8_t x19 = 0;
	int32_t t4 = 16;

    t4 = (x17!=(x18|(x19<=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -1;
	volatile int8_t x22 = INT8_MIN;
	volatile uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = -6366;

    t5 = (x21!=(x22|(x23<=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MIN;
	int64_t x28 = -203202857LL;
	volatile int32_t t6 = -1314;

    t6 = (x25!=(x26|(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = 6412434206LL;
	int16_t x30 = -1;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = 899891639U;

    t7 = (x29!=(x30|(x31<=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x34 = INT32_MIN;
	volatile int16_t x35 = INT16_MAX;
	static int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 9;

    t8 = (x33!=(x34|(x35<=x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	volatile int64_t x39 = -150961LL;
	static uint32_t x40 = 268U;
	static volatile int32_t t9 = -80766;

    t9 = (x37!=(x38|(x39<=x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x42 = INT8_MIN;
	volatile int16_t x43 = -1;
	static uint32_t x44 = 21U;

    t10 = (x41!=(x42|(x43<=x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 5U;
	static volatile int64_t x46 = INT64_MIN;
	int64_t x48 = 3313LL;
	int32_t t11 = 15517518;

    t11 = (x45!=(x46|(x47<=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	static int8_t x51 = INT8_MIN;
	static int64_t x52 = -485467191948LL;
	int32_t t12 = -43;

    t12 = (x49!=(x50|(x51<=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -1;
	uint8_t x54 = 1U;
	uint8_t x55 = 50U;
	int16_t x56 = INT16_MIN;
	static volatile int32_t t13 = -840;

    t13 = (x53!=(x54|(x55<=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x58 = UINT16_MAX;
	uint8_t x59 = 5U;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = 869004;

    t14 = (x57!=(x58|(x59<=x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 1279U;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = -1;
	int64_t x64 = INT64_MIN;
	static volatile int32_t t15 = 7;

    t15 = (x61!=(x62|(x63<=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int64_t x66 = -1LL;
	int16_t x67 = INT16_MIN;
	uint8_t x68 = 1U;
	volatile int32_t t16 = 23272;

    t16 = (x65!=(x66|(x67<=x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x69 = 8;
	static uint64_t x70 = 197852987919LLU;
	int64_t x71 = 3550389LL;
	int16_t x72 = 167;

    t17 = (x69!=(x70|(x71<=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 1U;
	int32_t x74 = -8623;
	int16_t x75 = -2040;
	volatile int32_t x76 = INT32_MIN;

    t18 = (x73!=(x74|(x75<=x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = -1;
	int16_t x78 = INT16_MIN;
	int64_t x79 = -1LL;
	volatile int32_t t19 = -35247;

    t19 = (x77!=(x78|(x79<=x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1924612053392308771LL;
	int16_t x83 = 4576;
	int8_t x84 = -1;
	int32_t t20 = -191848676;

    t20 = (x81!=(x82|(x83<=x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = 77LLU;
	volatile int16_t x87 = -1;
	volatile int32_t t21 = -115049;

    t21 = (x85!=(x86|(x87<=x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = -1LL;
	int16_t x91 = INT16_MAX;
	static volatile int16_t x92 = -1;

    t22 = (x89!=(x90|(x91<=x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 49950LLU;
	volatile int8_t x94 = -3;
	int32_t x95 = 316107;
	int16_t x96 = 496;
	volatile int32_t t23 = -15526733;

    t23 = (x93!=(x94|(x95<=x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x97 = 3U;
	static uint8_t x98 = 1U;
	int16_t x100 = -15058;
	volatile int32_t t24 = 339;

    t24 = (x97!=(x98|(x99<=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x102 = 1951234697U;
	int32_t x103 = -2891876;
	volatile uint16_t x104 = 11388U;

    t25 = (x101!=(x102|(x103<=x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -75;
	volatile int32_t x106 = -1;
	static uint8_t x108 = 1U;

    t26 = (x105!=(x106|(x107<=x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -19;
	static int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -30502615;

    t27 = (x109!=(x110|(x111<=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 237;
	int64_t x115 = -90090LL;
	int8_t x116 = INT8_MAX;
	int32_t t28 = -18940;

    t28 = (x113!=(x114|(x115<=x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int8_t x118 = 5;
	volatile int32_t x120 = INT32_MIN;
	int32_t t29 = 14157;

    t29 = (x117!=(x118|(x119<=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 1;
	int32_t x122 = -1;
	static volatile int32_t x123 = 2;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -228028;

    t30 = (x121!=(x122|(x123<=x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = 19490190172828175LL;
	uint64_t x126 = 585LLU;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 1;

    t31 = (x125!=(x126|(x127<=x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 8U;
	int64_t x131 = -8052LL;
	int32_t t32 = 148827283;

    t32 = (x129!=(x130|(x131<=x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x133 = INT8_MAX;
	static uint32_t x134 = UINT32_MAX;
	int8_t x135 = -3;

    t33 = (x133!=(x134|(x135<=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	static int8_t x139 = INT8_MAX;
	int16_t x140 = -1;
	volatile int32_t t34 = 980425;

    t34 = (x137!=(x138|(x139<=x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MAX;
	int32_t x143 = -5611;
	int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -167321656;

    t35 = (x141!=(x142|(x143<=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = INT32_MIN;
	uint8_t x147 = UINT8_MAX;
	uint16_t x148 = 3492U;
	volatile int32_t t36 = -15903732;

    t36 = (x145!=(x146|(x147<=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = 902038389LLU;
	static int32_t t37 = -1;

    t37 = (x149!=(x150|(x151<=x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	volatile int8_t x154 = INT8_MIN;
	volatile int16_t x155 = 53;
	volatile int64_t x156 = -575635163402456LL;
	static volatile int32_t t38 = 86997;

    t38 = (x153!=(x154|(x155<=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	static int32_t x159 = INT32_MIN;
	int32_t t39 = -1340176;

    t39 = (x157!=(x158|(x159<=x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x163 = 0;
	int8_t x164 = INT8_MAX;
	int32_t t40 = 1;

    t40 = (x161!=(x162|(x163<=x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 183635U;
	int8_t x166 = INT8_MIN;
	int64_t x167 = INT64_MIN;
	int16_t x168 = -7;

    t41 = (x165!=(x166|(x167<=x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x170 = 3U;
	int64_t x171 = INT64_MIN;
	volatile int32_t t42 = 1;

    t42 = (x169!=(x170|(x171<=x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x174 = UINT32_MAX;
	static int32_t x175 = -1;
	static int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -10149;

    t43 = (x173!=(x174|(x175<=x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	volatile uint64_t x178 = 89870LLU;
	static int16_t x179 = 9899;
	volatile int32_t t44 = -3;

    t44 = (x177!=(x178|(x179<=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = -1042296392;
	int16_t x183 = -1;
	int64_t x184 = -1LL;

    t45 = (x181!=(x182|(x183<=x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x186 = 2U;
	int8_t x187 = INT8_MIN;
	uint32_t x188 = 1U;
	int32_t t46 = -1;

    t46 = (x185!=(x186|(x187<=x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = UINT8_MAX;
	int32_t x191 = 71190;
	volatile int32_t x192 = -1;
	volatile int32_t t47 = -1330;

    t47 = (x189!=(x190|(x191<=x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 0U;
	uint8_t x194 = UINT8_MAX;
	int8_t x195 = -7;
	uint32_t x196 = UINT32_MAX;
	int32_t t48 = -3641172;

    t48 = (x193!=(x194|(x195<=x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = 33U;
	int64_t x198 = -5LL;
	int32_t x199 = INT32_MAX;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t49 = -4145;

    t49 = (x197!=(x198|(x199<=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint8_t x201 = 12U;
	uint8_t x202 = 54U;
	int64_t x203 = INT64_MIN;
	int64_t x204 = -1LL;
	int32_t t50 = -205817;

    t50 = (x201!=(x202|(x203<=x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int16_t x206 = -6832;
	static volatile uint64_t x207 = UINT64_MAX;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -100121;

    t51 = (x205!=(x206|(x207<=x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x209 = 1U;
	int32_t x210 = 45718;
	volatile int64_t x211 = 8330200555LL;
	uint64_t x212 = UINT64_MAX;
	int32_t t52 = 110046;

    t52 = (x209!=(x210|(x211<=x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	uint16_t x214 = 1928U;
	static int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MAX;
	static int32_t t53 = 5212629;

    t53 = (x213!=(x214|(x215<=x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	uint32_t x218 = UINT32_MAX;
	int32_t x220 = INT32_MIN;
	int32_t t54 = 1;

    t54 = (x217!=(x218|(x219<=x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int8_t x222 = 0;
	volatile int16_t x223 = -1;
	static volatile int32_t t55 = 240084;

    t55 = (x221!=(x222|(x223<=x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x227 = INT64_MIN;
	int32_t x228 = INT32_MAX;

    t56 = (x225!=(x226|(x227<=x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = INT32_MAX;
	uint8_t x230 = 58U;
	uint64_t x231 = 1366178LLU;
	volatile int32_t t57 = -1077157;

    t57 = (x229!=(x230|(x231<=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = INT32_MIN;
	volatile uint64_t x235 = 4LLU;
	static volatile int32_t t58 = -233;

    t58 = (x233!=(x234|(x235<=x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 121U;
	uint8_t x239 = UINT8_MAX;
	int64_t x240 = INT64_MAX;
	static int32_t t59 = 385065;

    t59 = (x237!=(x238|(x239<=x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	static volatile int8_t x243 = INT8_MAX;
	int64_t x244 = -1LL;
	volatile int32_t t60 = 322948;

    t60 = (x241!=(x242|(x243<=x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = UINT64_MAX;
	volatile int32_t x247 = INT32_MAX;
	uint16_t x248 = 29961U;
	volatile int32_t t61 = -3462380;

    t61 = (x245!=(x246|(x247<=x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -1;
	int16_t x251 = INT16_MAX;
	int32_t x252 = -339;
	int32_t t62 = -3;

    t62 = (x249!=(x250|(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = -1;
	volatile int64_t x254 = -435357098457LL;
	uint16_t x255 = 202U;
	int32_t x256 = -1;
	static volatile int32_t t63 = 766943;

    t63 = (x253!=(x254|(x255<=x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	static volatile int16_t x258 = -1;
	int16_t x260 = 2539;

    t64 = (x257!=(x258|(x259<=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	int8_t x262 = -3;
	volatile uint64_t x263 = 8590LLU;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 184633841;

    t65 = (x261!=(x262|(x263<=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x266 = INT32_MAX;
	uint8_t x267 = 5U;
	volatile int16_t x268 = INT16_MIN;

    t66 = (x265!=(x266|(x267<=x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = 189410402;
	uint64_t x270 = 7209502683081LLU;
	static int32_t t67 = -186109;

    t67 = (x269!=(x270|(x271<=x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x275 = 2204;
	volatile int32_t x276 = INT32_MAX;
	int32_t t68 = -631556690;

    t68 = (x273!=(x274|(x275<=x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x278 = INT16_MIN;
	static volatile int64_t x279 = 1055872794144612LL;
	int32_t x280 = -1;
	int32_t t69 = -920321;

    t69 = (x277!=(x278|(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 5U;
	int16_t x282 = INT16_MIN;
	static int16_t x283 = INT16_MAX;
	int8_t x284 = -8;
	volatile int32_t t70 = -42;

    t70 = (x281!=(x282|(x283<=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = INT16_MAX;
	int16_t x287 = INT16_MAX;
	volatile int16_t x288 = 560;
	int32_t t71 = -516339;

    t71 = (x285!=(x286|(x287<=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x289 = 19296U;
	volatile int32_t x291 = -13866142;
	int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -611;

    t72 = (x289!=(x290|(x291<=x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = 330;
	int64_t x294 = -5LL;
	int64_t x296 = INT64_MAX;

    t73 = (x293!=(x294|(x295<=x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MIN;
	uint32_t x298 = 13522062U;
	int16_t x300 = -6559;
	static volatile int32_t t74 = 3;

    t74 = (x297!=(x298|(x299<=x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = -1;
	static int16_t x302 = 2009;
	int64_t x303 = INT64_MAX;
	int64_t x304 = INT64_MIN;
	volatile int32_t t75 = 9562;

    t75 = (x301!=(x302|(x303<=x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	volatile int32_t x307 = INT32_MIN;
	volatile int32_t t76 = 251038445;

    t76 = (x305!=(x306|(x307<=x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = 1;
	int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MIN;
	volatile uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = -28270859;

    t77 = (x309!=(x310|(x311<=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 324197LLU;
	volatile int32_t x314 = INT32_MIN;
	static int8_t x315 = -13;
	uint64_t x316 = 1648461LLU;
	int32_t t78 = -523692;

    t78 = (x313!=(x314|(x315<=x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = 6;
	volatile int32_t x320 = -1;
	volatile int32_t t79 = -2;

    t79 = (x317!=(x318|(x319<=x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 230LLU;
	int8_t x322 = INT8_MIN;
	uint64_t x324 = UINT64_MAX;

    t80 = (x321!=(x322|(x323<=x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = INT16_MAX;
	int16_t x326 = -1;
	volatile uint32_t x327 = UINT32_MAX;
	static uint16_t x328 = 6U;
	static int32_t t81 = 856;

    t81 = (x325!=(x326|(x327<=x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	static uint32_t x330 = UINT32_MAX;
	uint32_t x332 = UINT32_MAX;
	int32_t t82 = 939913724;

    t82 = (x329!=(x330|(x331<=x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	static int16_t x334 = INT16_MAX;
	volatile uint64_t x336 = UINT64_MAX;
	volatile int32_t t83 = 0;

    t83 = (x333!=(x334|(x335<=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = UINT8_MAX;
	uint64_t x338 = 134710714951LLU;
	static int32_t x339 = -1;
	uint8_t x340 = 13U;
	int32_t t84 = 7070;

    t84 = (x337!=(x338|(x339<=x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	static int64_t x342 = INT64_MIN;

    t85 = (x341!=(x342|(x343<=x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	volatile int8_t x348 = 55;
	int32_t t86 = -391433358;

    t86 = (x345!=(x346|(x347<=x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x349 = 1U;
	int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MIN;
	volatile int64_t x352 = -3074090148713374LL;

    t87 = (x349!=(x350|(x351<=x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	uint16_t x355 = 7776U;
	volatile int32_t t88 = 481653849;

    t88 = (x353!=(x354|(x355<=x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	uint32_t x358 = 3U;
	int16_t x360 = -627;
	int32_t t89 = -1;

    t89 = (x357!=(x358|(x359<=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x362 = INT64_MAX;
	static int32_t t90 = 208217;

    t90 = (x361!=(x362|(x363<=x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = -1LL;
	int16_t x367 = -25;

    t91 = (x365!=(x366|(x367<=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	volatile int64_t x371 = -4LL;
	static volatile uint64_t x372 = 20805228LLU;

    t92 = (x369!=(x370|(x371<=x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = 184383;
	int8_t x374 = INT8_MIN;
	int32_t x376 = -1;
	int32_t t93 = -21986092;

    t93 = (x373!=(x374|(x375<=x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x378 = 0U;
	int32_t x379 = -606914;
	volatile uint8_t x380 = 1U;
	volatile int32_t t94 = 1;

    t94 = (x377!=(x378|(x379<=x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = INT8_MIN;
	uint8_t x384 = 29U;
	volatile int32_t t95 = -13974;

    t95 = (x381!=(x382|(x383<=x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 4U;
	static uint64_t x386 = UINT64_MAX;
	volatile uint32_t x387 = 21278525U;
	int32_t t96 = -107760030;

    t96 = (x385!=(x386|(x387<=x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -316205864665LL;
	static int16_t x390 = INT16_MAX;
	uint8_t x391 = 3U;

    t97 = (x389!=(x390|(x391<=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	uint16_t x395 = 2303U;
	volatile int32_t t98 = -40005;

    t98 = (x393!=(x394|(x395<=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = 29421491LL;
	int64_t x398 = -1928940935368333335LL;
	static int16_t x399 = INT16_MIN;
	uint64_t x400 = 155076930084040LLU;
	int32_t t99 = -494348329;

    t99 = (x397!=(x398|(x399<=x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	uint32_t x402 = UINT32_MAX;
	static volatile int16_t x404 = INT16_MIN;
	volatile int32_t t100 = 8;

    t100 = (x401!=(x402|(x403<=x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = -1;
	int8_t x406 = INT8_MAX;
	int16_t x407 = INT16_MAX;
	volatile int32_t x408 = INT32_MAX;
	volatile int32_t t101 = 3;

    t101 = (x405!=(x406|(x407<=x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	uint64_t x410 = 1063885074LLU;
	int32_t x411 = -15768798;
	int16_t x412 = INT16_MIN;
	int32_t t102 = -7639781;

    t102 = (x409!=(x410|(x411<=x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = UINT64_MAX;
	int16_t x414 = -1;
	int8_t x415 = -1;
	uint64_t x416 = 1066LLU;
	int32_t t103 = 834;

    t103 = (x413!=(x414|(x415<=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 193892864195361671LL;
	int16_t x418 = 1008;
	int32_t t104 = 0;

    t104 = (x417!=(x418|(x419<=x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MAX;
	static int16_t x422 = -1;
	static int32_t x423 = INT32_MIN;
	int32_t x424 = INT32_MIN;
	int32_t t105 = -43;

    t105 = (x421!=(x422|(x423<=x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	volatile int16_t x426 = INT16_MAX;
	int16_t x427 = -1;
	volatile int32_t t106 = -2;

    t106 = (x425!=(x426|(x427<=x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x429 = 73968727LLU;
	int32_t x430 = INT32_MAX;
	volatile int16_t x431 = 7;
	int64_t x432 = INT64_MIN;
	volatile int32_t t107 = -96;

    t107 = (x429!=(x430|(x431<=x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MAX;
	static int64_t x434 = INT64_MIN;
	int8_t x435 = INT8_MAX;
	static uint32_t x436 = 296231U;
	int32_t t108 = 2402;

    t108 = (x433!=(x434|(x435<=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	int16_t x438 = INT16_MAX;
	volatile int32_t t109 = 818771;

    t109 = (x437!=(x438|(x439<=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = -1;
	int32_t x444 = -1;
	volatile int32_t t110 = 179701;

    t110 = (x441!=(x442|(x443<=x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = 10;
	int8_t x448 = -1;

    t111 = (x445!=(x446|(x447<=x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 175U;
	int8_t x450 = -36;
	uint16_t x451 = 73U;
	volatile int32_t t112 = -5023;

    t112 = (x449!=(x450|(x451<=x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = -1;
	static int64_t x454 = INT64_MAX;
	int32_t x455 = INT32_MIN;
	int32_t x456 = INT32_MIN;

    t113 = (x453!=(x454|(x455<=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = INT8_MAX;
	int8_t x458 = -1;
	volatile int32_t x459 = 56;
	uint64_t x460 = UINT64_MAX;

    t114 = (x457!=(x458|(x459<=x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = 142;
	static int8_t x462 = INT8_MAX;
	volatile int32_t x463 = INT32_MIN;
	uint8_t x464 = 86U;

    t115 = (x461!=(x462|(x463<=x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = 0;
	uint8_t x467 = 17U;
	static uint32_t x468 = UINT32_MAX;

    t116 = (x465!=(x466|(x467<=x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x469 = 209LL;
	static int64_t x471 = 162368479693LL;
	int16_t x472 = -105;
	static volatile int32_t t117 = 2551244;

    t117 = (x469!=(x470|(x471<=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = -1;
	uint32_t x474 = 2200U;
	int64_t x475 = -5062746761LL;
	int16_t x476 = INT16_MIN;
	volatile int32_t t118 = -2604623;

    t118 = (x473!=(x474|(x475<=x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -310409360094LL;
	uint64_t x479 = UINT64_MAX;
	uint32_t x480 = 298661U;
	volatile int32_t t119 = -2;

    t119 = (x477!=(x478|(x479<=x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	uint64_t x482 = 489632LLU;
	int32_t x483 = INT32_MIN;
	uint64_t x484 = 7373792674650891LLU;
	volatile int32_t t120 = -248690;

    t120 = (x481!=(x482|(x483<=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = INT64_MAX;
	volatile int64_t x486 = INT64_MAX;
	int8_t x487 = INT8_MIN;
	uint64_t x488 = 118038258713030LLU;
	volatile int32_t t121 = -158671;

    t121 = (x485!=(x486|(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 2;
	int8_t x490 = INT8_MAX;
	static int8_t x491 = INT8_MAX;
	int32_t x492 = -1;
	volatile int32_t t122 = 3737100;

    t122 = (x489!=(x490|(x491<=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	volatile uint32_t x494 = UINT32_MAX;
	static uint16_t x495 = 2U;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t123 = 1610202;

    t123 = (x493!=(x494|(x495<=x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x498 = INT16_MAX;
	uint8_t x499 = 35U;
	int32_t t124 = -11537;

    t124 = (x497!=(x498|(x499<=x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x502 = 268069U;
	uint16_t x504 = 0U;
	int32_t t125 = -1;

    t125 = (x501!=(x502|(x503<=x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MAX;
	static int16_t x506 = INT16_MIN;
	int16_t x507 = -12538;
	int64_t x508 = -1LL;

    t126 = (x505!=(x506|(x507<=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 23995955LLU;
	volatile int16_t x510 = INT16_MAX;
	int64_t x511 = INT64_MIN;
	int8_t x512 = -1;

    t127 = (x509!=(x510|(x511<=x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x514 = INT16_MIN;
	volatile int16_t x515 = INT16_MIN;
	uint32_t x516 = UINT32_MAX;
	static volatile int32_t t128 = 13268;

    t128 = (x513!=(x514|(x515<=x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	int8_t x518 = -1;
	static int64_t x519 = -1LL;
	int32_t x520 = INT32_MIN;
	volatile int32_t t129 = 18424756;

    t129 = (x517!=(x518|(x519<=x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x521 = 30U;
	int8_t x522 = INT8_MAX;
	int16_t x524 = INT16_MIN;

    t130 = (x521!=(x522|(x523<=x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	int64_t x526 = INT64_MIN;
	static int8_t x527 = 0;
	volatile uint8_t x528 = 33U;
	int32_t t131 = 1;

    t131 = (x525!=(x526|(x527<=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	int8_t x530 = INT8_MIN;
	int16_t x531 = INT16_MIN;
	int32_t x532 = -1422;

    t132 = (x529!=(x530|(x531<=x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x533 = UINT16_MAX;
	int32_t x534 = INT32_MAX;
	int16_t x536 = 73;
	volatile int32_t t133 = -223858;

    t133 = (x533!=(x534|(x535<=x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = INT16_MIN;
	volatile uint32_t x539 = 4U;
	static volatile int32_t t134 = 44501;

    t134 = (x537!=(x538|(x539<=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = -1;
	int64_t x544 = -23146LL;
	static volatile int32_t t135 = 39;

    t135 = (x541!=(x542|(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x546 = 128764997LLU;
	int8_t x547 = INT8_MIN;
	int32_t x548 = -1;
	int32_t t136 = -47;

    t136 = (x545!=(x546|(x547<=x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 1579880LL;
	volatile uint16_t x550 = 562U;
	uint64_t x551 = 541LLU;
	int32_t x552 = -3251676;
	int32_t t137 = -185776897;

    t137 = (x549!=(x550|(x551<=x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x554 = INT64_MAX;
	static volatile int32_t x556 = INT32_MIN;
	static volatile int32_t t138 = 13276926;

    t138 = (x553!=(x554|(x555<=x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x558 = 7420;
	static uint32_t x559 = 481912U;
	static uint16_t x560 = 62U;
	int32_t t139 = -10;

    t139 = (x557!=(x558|(x559<=x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = INT16_MIN;
	uint8_t x563 = 5U;
	volatile int32_t t140 = 0;

    t140 = (x561!=(x562|(x563<=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x565 = 0U;
	static volatile uint8_t x567 = UINT8_MAX;
	volatile uint32_t x568 = UINT32_MAX;
	int32_t t141 = -125101946;

    t141 = (x565!=(x566|(x567<=x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -30;
	static int8_t x571 = INT8_MAX;
	int64_t x572 = -2511824492812LL;
	volatile int32_t t142 = 8755899;

    t142 = (x569!=(x570|(x571<=x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	volatile int8_t x574 = INT8_MIN;
	uint8_t x575 = UINT8_MAX;
	static uint64_t x576 = 65797LLU;

    t143 = (x573!=(x574|(x575<=x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	uint16_t x578 = 13U;
	int16_t x579 = -1;
	int32_t t144 = -147952482;

    t144 = (x577!=(x578|(x579<=x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x581 = UINT64_MAX;
	int64_t x582 = INT64_MIN;
	volatile uint32_t x583 = 6581140U;
	int8_t x584 = -1;
	volatile int32_t t145 = 49112;

    t145 = (x581!=(x582|(x583<=x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x585 = -1;
	volatile int32_t x587 = 190490320;
	int16_t x588 = -1;
	int32_t t146 = -292888197;

    t146 = (x585!=(x586|(x587<=x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -1LL;
	static uint16_t x591 = UINT16_MAX;
	int64_t x592 = 26729LL;
	volatile int32_t t147 = -1;

    t147 = (x589!=(x590|(x591<=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	int8_t x594 = INT8_MAX;
	volatile uint32_t x595 = UINT32_MAX;
	volatile uint16_t x596 = UINT16_MAX;
	int32_t t148 = -351;

    t148 = (x593!=(x594|(x595<=x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x597 = UINT8_MAX;
	int16_t x598 = 118;
	static volatile int32_t x600 = -14;
	static int32_t t149 = 0;

    t149 = (x597!=(x598|(x599<=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x602 = -7;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t150 = 4690;

    t150 = (x601!=(x602|(x603<=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int8_t x606 = INT8_MIN;
	int8_t x608 = -1;
	static volatile int32_t t151 = 880;

    t151 = (x605!=(x606|(x607<=x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x611 = -125;
	static uint32_t x612 = UINT32_MAX;
	volatile int32_t t152 = 55;

    t152 = (x609!=(x610|(x611<=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = INT64_MAX;
	static int32_t x614 = -1;
	int16_t x615 = INT16_MIN;
	int16_t x616 = -545;
	volatile int32_t t153 = -12;

    t153 = (x613!=(x614|(x615<=x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	int16_t x618 = -145;
	int8_t x619 = INT8_MAX;
	volatile uint8_t x620 = 29U;
	volatile int32_t t154 = -126;

    t154 = (x617!=(x618|(x619<=x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = INT64_MIN;
	int64_t x622 = 2469891070668926746LL;
	int16_t x623 = INT16_MIN;
	int32_t x624 = INT32_MIN;
	int32_t t155 = 17593;

    t155 = (x621!=(x622|(x623<=x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint64_t x625 = UINT64_MAX;
	uint8_t x626 = 43U;
	int32_t x627 = INT32_MAX;
	volatile int8_t x628 = -17;
	static int32_t t156 = 83051;

    t156 = (x625!=(x626|(x627<=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 31;
	uint64_t x630 = 30251LLU;
	volatile uint16_t x632 = 2U;

    t157 = (x629!=(x630|(x631<=x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = 1;
	uint8_t x635 = UINT8_MAX;
	volatile uint16_t x636 = 23440U;
	int32_t t158 = -111626665;

    t158 = (x633!=(x634|(x635<=x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -472;
	int16_t x638 = INT16_MIN;
	uint32_t x639 = 357U;
	int32_t t159 = -1809573;

    t159 = (x637!=(x638|(x639<=x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = UINT8_MAX;
	int32_t x642 = -1;
	int32_t x644 = INT32_MAX;
	int32_t t160 = -9575;

    t160 = (x641!=(x642|(x643<=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -762918151264LL;
	volatile uint16_t x646 = UINT16_MAX;
	static uint64_t x647 = 181LLU;
	static int64_t x648 = INT64_MIN;
	int32_t t161 = 3145;

    t161 = (x645!=(x646|(x647<=x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 31799128151673LL;
	int8_t x650 = -1;
	static int32_t t162 = 2;

    t162 = (x649!=(x650|(x651<=x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -3758;
	static volatile uint32_t x655 = 204406911U;
	int32_t x656 = -1;

    t163 = (x653!=(x654|(x655<=x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	static uint32_t x658 = 5408U;
	volatile int64_t x659 = 3154515LL;
	uint32_t x660 = 9335389U;
	static int32_t t164 = 21683;

    t164 = (x657!=(x658|(x659<=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x664 = 29349U;
	int32_t t165 = 0;

    t165 = (x661!=(x662|(x663<=x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int64_t x666 = 22183142LL;
	int16_t x667 = 1;
	uint32_t x668 = 22907U;
	static volatile int32_t t166 = 264836;

    t166 = (x665!=(x666|(x667<=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	int16_t x670 = -6;
	int32_t x672 = INT32_MIN;
	int32_t t167 = 11;

    t167 = (x669!=(x670|(x671<=x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x674 = INT32_MIN;
	int8_t x675 = 23;
	uint32_t x676 = 1U;
	volatile int32_t t168 = -586890;

    t168 = (x673!=(x674|(x675<=x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 418U;
	int32_t x678 = INT32_MAX;
	int64_t x679 = -1LL;
	int64_t x680 = INT64_MIN;
	volatile int32_t t169 = 131;

    t169 = (x677!=(x678|(x679<=x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x682 = UINT64_MAX;
	int32_t x683 = -3494534;
	int64_t x684 = INT64_MIN;
	int32_t t170 = 18781796;

    t170 = (x681!=(x682|(x683<=x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = 208;
	volatile int32_t x686 = 357629462;
	volatile int8_t x688 = -22;

    t171 = (x685!=(x686|(x687<=x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x691 = 2345U;
	static volatile int64_t x692 = INT64_MIN;
	int32_t t172 = 104557;

    t172 = (x689!=(x690|(x691<=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x695 = 0;
	volatile int8_t x696 = -1;
	volatile int32_t t173 = 8461;

    t173 = (x693!=(x694|(x695<=x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	int32_t x698 = -1345479;
	int64_t x699 = -5728303273604088LL;
	uint32_t x700 = 3071U;
	int32_t t174 = -660;

    t174 = (x697!=(x698|(x699<=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x701 = INT16_MAX;
	int16_t x703 = INT16_MIN;
	int32_t x704 = 7480683;
	int32_t t175 = 276998;

    t175 = (x701!=(x702|(x703<=x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = INT16_MIN;
	static int32_t x707 = INT32_MAX;
	volatile int32_t t176 = -4552;

    t176 = (x705!=(x706|(x707<=x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -31;
	static int8_t x710 = INT8_MAX;
	uint8_t x711 = UINT8_MAX;
	static int32_t x712 = INT32_MIN;
	int32_t t177 = -3;

    t177 = (x709!=(x710|(x711<=x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = -207;
	int8_t x715 = INT8_MAX;
	static uint16_t x716 = UINT16_MAX;
	int32_t t178 = -1979;

    t178 = (x713!=(x714|(x715<=x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x717 = 15124;
	int16_t x718 = -1;
	int8_t x719 = INT8_MAX;
	static int32_t t179 = -1749;

    t179 = (x717!=(x718|(x719<=x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x722 = INT8_MIN;
	int64_t x724 = 196626466369629900LL;
	static volatile int32_t t180 = 2276283;

    t180 = (x721!=(x722|(x723<=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x726 = 1;
	uint16_t x727 = 6U;
	int16_t x728 = -1;
	volatile int32_t t181 = 3;

    t181 = (x725!=(x726|(x727<=x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = -781284109397037365LL;
	int8_t x730 = INT8_MIN;
	uint64_t x731 = UINT64_MAX;
	int16_t x732 = -1;
	int32_t t182 = -15838290;

    t182 = (x729!=(x730|(x731<=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 757506U;
	int64_t x734 = -57587299LL;
	static int8_t x736 = INT8_MIN;

    t183 = (x733!=(x734|(x735<=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 3U;
	int16_t x739 = INT16_MIN;
	uint16_t x740 = 3U;
	volatile int32_t t184 = -6893513;

    t184 = (x737!=(x738|(x739<=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	static int16_t x742 = INT16_MIN;
	int16_t x743 = INT16_MAX;
	uint16_t x744 = 6324U;

    t185 = (x741!=(x742|(x743<=x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = -6;
	uint64_t x746 = 56136001LLU;
	static volatile int8_t x747 = -1;
	volatile int32_t t186 = 56;

    t186 = (x745!=(x746|(x747<=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x749 = 1266657LLU;
	static uint8_t x750 = UINT8_MAX;
	int64_t x751 = INT64_MAX;
	int32_t x752 = -255;
	volatile int32_t t187 = -493331659;

    t187 = (x749!=(x750|(x751<=x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	static volatile int16_t x754 = INT16_MIN;
	static volatile int64_t x755 = INT64_MAX;
	uint16_t x756 = 5U;

    t188 = (x753!=(x754|(x755<=x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	int32_t x758 = INT32_MIN;
	uint8_t x759 = UINT8_MAX;
	volatile int32_t t189 = 1;

    t189 = (x757!=(x758|(x759<=x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MAX;
	volatile int32_t x762 = 23313;
	static int16_t x763 = 0;
	int8_t x764 = INT8_MAX;

    t190 = (x761!=(x762|(x763<=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MAX;
	uint8_t x766 = 46U;
	uint8_t x767 = UINT8_MAX;
	uint16_t x768 = 1U;
	int32_t t191 = 24757;

    t191 = (x765!=(x766|(x767<=x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = 1;
	uint32_t x771 = 475290119U;
	uint32_t x772 = 6389638U;
	static int32_t t192 = 104;

    t192 = (x769!=(x770|(x771<=x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x773 = -1;
	volatile int64_t x774 = INT64_MIN;
	volatile int64_t x775 = INT64_MIN;
	int32_t x776 = INT32_MIN;
	int32_t t193 = 3379270;

    t193 = (x773!=(x774|(x775<=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -3301;
	volatile int16_t x778 = -1;
	uint64_t x779 = 577328198124LLU;
	uint8_t x780 = 3U;
	static volatile int32_t t194 = 2336644;

    t194 = (x777!=(x778|(x779<=x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	int32_t x782 = INT32_MAX;
	static int16_t x783 = INT16_MIN;
	static volatile int16_t x784 = INT16_MIN;
	volatile int32_t t195 = 231694;

    t195 = (x781!=(x782|(x783<=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = INT16_MIN;
	int8_t x787 = 26;
	volatile uint32_t x788 = 481364895U;
	static volatile int32_t t196 = -270098;

    t196 = (x785!=(x786|(x787<=x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = INT32_MIN;
	int16_t x791 = 6825;
	static int8_t x792 = 0;
	int32_t t197 = -20324329;

    t197 = (x789!=(x790|(x791<=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = 34;
	volatile uint64_t x796 = UINT64_MAX;
	static volatile int32_t t198 = 865951;

    t198 = (x793!=(x794|(x795<=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x797 = -6447;
	static uint16_t x798 = UINT16_MAX;
	int8_t x800 = -1;

    t199 = (x797!=(x798|(x799<=x800)));

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

