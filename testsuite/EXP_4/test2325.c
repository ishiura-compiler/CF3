
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

static uint32_t x2 = 1971U;
int32_t x6 = INT32_MAX;
static int8_t x7 = INT8_MAX;
int64_t t4 = 65LL;
int16_t x24 = INT16_MAX;
int16_t x27 = -1;
int32_t x28 = -1;
uint64_t t7 = 86184LLU;
int32_t x39 = -1;
uint64_t t9 = 35007LLU;
uint16_t x41 = UINT16_MAX;
uint32_t t10 = 2091830U;
int8_t x62 = -3;
int64_t x64 = INT64_MIN;
volatile int64_t t14 = -15962125554339LL;
static uint32_t x67 = 1185632U;
uint64_t t15 = 31LLU;
int16_t x77 = INT16_MAX;
volatile uint32_t t18 = 70844U;
static int32_t x90 = INT32_MIN;
volatile int8_t x94 = INT8_MIN;
volatile int64_t x97 = -2902491LL;
int8_t x101 = INT8_MAX;
static volatile int8_t x104 = -2;
int32_t x108 = 324208774;
static int64_t x120 = INT64_MIN;
uint32_t x124 = UINT32_MAX;
static volatile int8_t x126 = -16;
int64_t x127 = INT64_MAX;
int8_t x135 = -34;
int64_t x136 = INT64_MIN;
static uint64_t x141 = 0LLU;
int8_t x147 = INT8_MIN;
volatile uint64_t t34 = 7096193LLU;
int64_t x153 = -1LL;
uint32_t x160 = UINT32_MAX;
int16_t x161 = -1;
int32_t x164 = 793996;
int16_t x174 = -1;
int16_t x177 = INT16_MIN;
static uint64_t x179 = 1034941781994LLU;
static volatile int8_t x189 = INT8_MIN;
int16_t x190 = -104;
uint64_t x191 = UINT64_MAX;
int8_t x202 = INT8_MIN;
static int64_t t47 = -46714809354111LL;
int16_t x209 = INT16_MIN;
int32_t x214 = INT32_MIN;
int64_t x218 = 1838924LL;
static int16_t x220 = INT16_MIN;
uint32_t x222 = 2020U;
int16_t x230 = INT16_MIN;
volatile int64_t t54 = 6183251498LL;
int8_t x236 = 5;
static int16_t x246 = -617;
uint64_t x247 = 2152LLU;
volatile int16_t x250 = -2;
int16_t x253 = -1;
int16_t x254 = -1;
int16_t x262 = -43;
int8_t x276 = -1;
static uint32_t t62 = 807084U;
int8_t x278 = INT8_MIN;
volatile uint32_t t63 = 0U;
int16_t x283 = INT16_MIN;
volatile int64_t x284 = INT64_MAX;
uint32_t x288 = 415U;
int64_t t65 = 14653521613149696LL;
uint32_t x293 = 1388925625U;
static volatile uint16_t x296 = UINT16_MAX;
volatile int16_t x299 = -290;
int8_t x300 = -1;
volatile int8_t x301 = INT8_MIN;
static int8_t x303 = -1;
static volatile int64_t x318 = -1LL;
int64_t x321 = -1LL;
volatile int32_t x333 = INT32_MIN;
uint8_t x342 = UINT8_MAX;
int32_t x343 = INT32_MAX;
volatile uint64_t t79 = 520292859495594329LLU;
int8_t x359 = 0;
static int32_t x365 = INT32_MIN;
static volatile uint8_t x368 = UINT8_MAX;
uint8_t x370 = 28U;
int32_t t83 = -1;
uint64_t x389 = 13793LLU;
volatile int16_t x391 = -1;
volatile uint64_t t87 = 4810832157LLU;
static int32_t x403 = 6204;
volatile uint64_t x404 = 651101272522812LLU;
static int32_t x411 = INT32_MIN;
int16_t x418 = -4;
int64_t x420 = INT64_MAX;
static int16_t x422 = 1;
static uint64_t x426 = 1715640333708876LLU;
uint32_t x430 = 5311U;
volatile uint64_t t95 = 7718429124641229LLU;
uint32_t x448 = 179327U;
static int8_t x450 = INT8_MAX;
volatile uint64_t x451 = UINT64_MAX;
uint32_t x455 = UINT32_MAX;
int32_t x456 = INT32_MIN;
volatile uint16_t x458 = UINT16_MAX;
int8_t x465 = 1;
int32_t x469 = 270552035;
static uint32_t x483 = UINT32_MAX;
volatile uint32_t t106 = UINT32_MAX;
int16_t x487 = INT16_MAX;
int32_t t107 = 254797522;
uint8_t x489 = 88U;
int16_t x492 = -1;
int64_t x494 = -946696817LL;
static int32_t x496 = -399771558;
int16_t x497 = INT16_MIN;
volatile int64_t t111 = 5432LL;
int8_t x508 = INT8_MIN;
int16_t x515 = INT16_MIN;
uint16_t x520 = 12378U;
int64_t x526 = -1LL;
uint64_t x539 = 304798819LLU;
int32_t x544 = -858;
volatile int64_t t121 = 227353252547LL;
int16_t x550 = -88;
volatile uint64_t x551 = UINT64_MAX;
int32_t x552 = -1;
int8_t x555 = INT8_MIN;
static volatile int64_t t123 = 802669435263529LL;
static int16_t x561 = INT16_MAX;
volatile uint64_t t126 = 30841LLU;
static volatile uint64_t t127 = 22LLU;
int16_t x578 = -1;
int8_t x584 = 26;
volatile int32_t t131 = -185055815;
int8_t x592 = INT8_MAX;
uint16_t x594 = 433U;
int32_t x600 = 230930;
volatile int64_t t134 = -1317LL;
int16_t x604 = INT16_MIN;
int32_t t135 = 397615;
uint8_t x608 = 50U;
int32_t x609 = INT32_MIN;
volatile uint64_t t137 = 159963321400718563LLU;
volatile int32_t x622 = INT32_MAX;
volatile int32_t x624 = -79;
int32_t t140 = -67;
uint8_t x627 = UINT8_MAX;
uint16_t x629 = UINT16_MAX;
static int32_t x633 = INT32_MIN;
int16_t x635 = INT16_MIN;
uint64_t x638 = UINT64_MAX;
static uint64_t x644 = UINT64_MAX;
uint8_t x653 = 5U;
static int32_t x656 = -1;
volatile uint32_t t148 = 1233874059U;
volatile uint8_t x665 = 31U;
static volatile uint16_t x666 = 8U;
uint32_t x667 = UINT32_MAX;
static volatile int64_t t152 = 428LL;
static uint32_t x676 = 127324U;
int64_t t153 = -1LL;
int32_t x683 = INT32_MIN;
static uint32_t x687 = 503U;
volatile int64_t x691 = -1LL;
int64_t x695 = -1LL;
int8_t x703 = INT8_MIN;
int64_t x704 = -1LL;
static int16_t x706 = INT16_MIN;
int64_t x712 = -488089378LL;
static volatile int16_t x715 = -1;
uint64_t x722 = 56144954419693244LLU;
static int32_t x723 = INT32_MIN;
uint8_t x728 = UINT8_MAX;
volatile uint64_t x729 = 184362585LLU;
int16_t x750 = -12;
volatile int8_t x751 = INT8_MIN;
int32_t x752 = -1;
int8_t x756 = INT8_MIN;
uint64_t x759 = 157558074272LLU;
int16_t x760 = -1;
uint32_t x761 = 41693653U;
volatile int64_t t173 = -107783167171LL;
int8_t x774 = -46;
static int64_t x776 = INT64_MIN;
static volatile uint64_t x790 = UINT64_MAX;
static uint64_t x791 = UINT64_MAX;
volatile uint64_t t180 = 192158260128LLU;
volatile int32_t t181 = 227516;
static uint8_t x799 = 0U;
static int16_t x801 = 3465;
int32_t x802 = 44;
int32_t x809 = 18593;
int64_t t185 = -82LL;
static volatile int8_t x820 = INT8_MAX;
static volatile int16_t x825 = INT16_MAX;
static uint8_t x834 = 2U;
int8_t x836 = INT8_MAX;
volatile int32_t x845 = -1;
int8_t x847 = -26;
int16_t x853 = INT16_MIN;
uint8_t x855 = 1U;
static volatile uint16_t x858 = 82U;
uint16_t x867 = 2U;
uint8_t x869 = 7U;
int64_t x871 = 2519746719215456456LL;
int16_t x875 = INT16_MIN;


void f0(void) {
    	int32_t x1 = 35030;
	int16_t x3 = 0;
	volatile uint8_t x4 = 15U;
	uint32_t t0 = 615U;

    t0 = (x1+(x2|(x3&x4)));

    if (t0 != 37001U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint32_t x5 = UINT32_MAX;
	int16_t x8 = INT16_MAX;
	uint32_t t1 = 1U;

    t1 = (x5+(x6|(x7&x8)));

    if (t1 != 2147483646U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MAX;
	volatile int16_t x10 = -16;
	volatile uint32_t x11 = 526674U;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 289786443602189LL;

    t2 = (x9+(x10|(x11&x12)));

    if (t2 != 2147483631LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 2022173911U;
	int8_t x14 = 6;
	volatile int8_t x15 = INT8_MIN;
	volatile uint16_t x16 = UINT16_MAX;
	static volatile uint32_t t3 = 1948293170U;

    t3 = (x13+(x14|(x15&x16)));

    if (t3 != 2022239325U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 1;
	uint8_t x18 = UINT8_MAX;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = -169005119LL;

    t4 = (x17+(x18|(x19&x20)));

    if (t4 != 256LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MIN;
	uint32_t t5 = 7U;

    t5 = (x21+(x22|(x23&x24)));

    if (t5 != 2147483646U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = 3U;
	int32_t x26 = INT32_MIN;
	int32_t t6 = -2850159;

    t6 = (x25+(x26|(x27&x28)));

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 103U;
	static int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;
	uint64_t x32 = 82603490LLU;

    t7 = (x29+(x30|(x31&x32)));

    if (t7 != 18446744071644671561LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	int32_t x35 = -1;
	uint32_t x36 = 8051062U;
	uint32_t t8 = 107U;

    t8 = (x33+(x34|(x35&x36)));

    if (t8 != 2155534965U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	uint16_t x38 = 1639U;
	uint64_t x40 = 68011871LLU;

    t9 = (x37+(x38|(x39&x40)));

    if (t9 != 68011902LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = -1;
	volatile uint32_t x43 = UINT32_MAX;
	static volatile uint8_t x44 = 71U;

    t10 = (x41+(x42|(x43&x44)));

    if (t10 != 65534U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -16687925355588LL;
	int64_t x46 = INT64_MIN;
	static int64_t x47 = -8037498LL;
	int64_t x48 = -1LL;
	int64_t t11 = 3983535981LL;

    t11 = (x45+(x46|(x47&x48)));

    if (t11 != -16687933393086LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	uint16_t x50 = UINT16_MAX;
	static volatile uint16_t x51 = UINT16_MAX;
	uint16_t x52 = 6U;
	int32_t t12 = 209669063;

    t12 = (x49+(x50|(x51&x52)));

    if (t12 != 65662) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	static int16_t x55 = INT16_MAX;
	static int64_t x56 = 1LL;
	int64_t t13 = 6004827LL;

    t13 = (x53+(x54|(x55&x56)));

    if (t13 != -32895LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -285048609183LL;
	uint16_t x63 = 1U;

    t14 = (x61+(x62|(x63&x64)));

    if (t14 != -285048609186LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	int32_t x66 = -1;
	volatile uint64_t x68 = UINT64_MAX;

    t15 = (x65+(x66|(x67&x68)));

    if (t15 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = 1979U;
	int8_t x70 = INT8_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	int8_t x72 = -25;
	uint32_t t16 = 76310U;

    t16 = (x69+(x70|(x71&x72)));

    if (t16 != 1954U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x73 = 393532449900117849LLU;
	static int64_t x74 = INT64_MIN;
	int32_t x75 = -1;
	int32_t x76 = -1;
	uint64_t t17 = 45159569LLU;

    t17 = (x73+(x74|(x75&x76)));

    if (t17 != 393532449900117848LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x78 = UINT32_MAX;
	static uint8_t x79 = UINT8_MAX;
	volatile int8_t x80 = INT8_MAX;

    t18 = (x77+(x78|(x79&x80)));

    if (t18 != 32766U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x85 = INT32_MIN;
	uint64_t x86 = 443LLU;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = 44U;
	uint64_t t19 = 71446446630203552LLU;

    t19 = (x85+(x86|(x87&x88)));

    if (t19 != 18446744071562068411LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x89 = 0U;
	int16_t x91 = INT16_MAX;
	static uint64_t x92 = 18164966616515LLU;
	static volatile uint64_t t20 = 638LLU;

    t20 = (x89+(x90|(x91&x92)));

    if (t20 != 18446744071562096067LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x93 = INT16_MAX;
	static uint64_t x95 = 18825LLU;
	int32_t x96 = INT32_MIN;
	uint64_t t21 = 6225LLU;

    t21 = (x93+(x94|(x95&x96)));

    if (t21 != 32639LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x98 = INT16_MIN;
	volatile int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MAX;
	volatile int64_t t22 = -235884068260063445LL;

    t22 = (x97+(x98|(x99&x100)));

    if (t22 != -2935259LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x102 = 0;
	static uint64_t x103 = 0LLU;
	uint64_t t23 = 126101185LLU;

    t23 = (x101+(x102|(x103&x104)));

    if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x105 = 6U;
	int32_t x106 = INT32_MIN;
	static int16_t x107 = INT16_MIN;
	static int32_t t24 = -585056112;

    t24 = (x105+(x106|(x107&x108)));

    if (t24 != -1823277050) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = -1;
	static int64_t x110 = 6239335889231LL;
	int8_t x111 = 62;
	volatile uint32_t x112 = UINT32_MAX;
	volatile int64_t t25 = 20843575781978220LL;

    t25 = (x109+(x110|(x111&x112)));

    if (t25 != 6239335889278LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x113 = -2739042059LL;
	volatile int64_t x114 = 39069749913LL;
	static volatile uint64_t x115 = 32356008LLU;
	uint8_t x116 = UINT8_MAX;
	uint64_t t26 = 528LLU;

    t26 = (x113+(x114|(x115&x116)));

    if (t26 != 36330707886LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x117 = INT16_MIN;
	static uint16_t x118 = 2034U;
	int32_t x119 = 8124;
	volatile int64_t t27 = -359695884LL;

    t27 = (x117+(x118|(x119&x120)));

    if (t27 != -30734LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x121 = 511LLU;
	uint8_t x122 = 6U;
	uint8_t x123 = UINT8_MAX;
	static uint64_t t28 = 4052160544LLU;

    t28 = (x121+(x122|(x123&x124)));

    if (t28 != 766LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x125 = 51U;
	int8_t x128 = 0;
	volatile int64_t t29 = -394205074212188379LL;

    t29 = (x125+(x126|(x127&x128)));

    if (t29 != 35LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x133 = 13U;
	uint64_t x134 = 4490LLU;
	volatile uint64_t t30 = 18532551LLU;

    t30 = (x133+(x134|(x135&x136)));

    if (t30 != 9223372036854780311LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 125889771526LLU;
	volatile int8_t x139 = INT8_MAX;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t31 = 41951491744744LLU;

    t31 = (x137+(x138|(x139&x140)));

    if (t31 != 130184738821LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x142 = INT64_MIN;
	int32_t x143 = -1;
	static uint16_t x144 = 2874U;
	static uint64_t t32 = 86626789080466242LLU;

    t32 = (x141+(x142|(x143&x144)));

    if (t32 != 9223372036854778682LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x145 = 9765U;
	int16_t x146 = -1095;
	int16_t x148 = INT16_MIN;
	static volatile uint32_t t33 = 25442U;

    t33 = (x145+(x146|(x147&x148)));

    if (t33 != 8670U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x149 = -3946;
	static uint64_t x150 = 934626763799897250LLU;
	int8_t x151 = 8;
	uint32_t x152 = 96189186U;

    t34 = (x149+(x150|(x151&x152)));

    if (t34 != 934626763799893304LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x154 = 0U;
	static uint64_t x155 = 1382LLU;
	int16_t x156 = INT16_MAX;
	volatile uint64_t t35 = 8335LLU;

    t35 = (x153+(x154|(x155&x156)));

    if (t35 != 1381LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = INT16_MIN;
	static int8_t x158 = 1;
	volatile int32_t x159 = INT32_MIN;
	static uint32_t t36 = 1U;

    t36 = (x157+(x158|(x159&x160)));

    if (t36 != 2147450881U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x162 = UINT32_MAX;
	int32_t x163 = INT32_MIN;
	volatile uint32_t t37 = 691247U;

    t37 = (x161+(x162|(x163&x164)));

    if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = INT64_MAX;
	static volatile int64_t x166 = -1LL;
	volatile int64_t x167 = -1LL;
	int8_t x168 = -14;
	static int64_t t38 = -22220102LL;

    t38 = (x165+(x166|(x167&x168)));

    if (t38 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x169 = 1;
	int64_t x170 = 132618952360LL;
	uint64_t x171 = UINT64_MAX;
	int32_t x172 = -1;
	uint64_t t39 = 935970629LLU;

    t39 = (x169+(x170|(x171&x172)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x173 = INT32_MAX;
	static int64_t x175 = INT64_MAX;
	volatile int8_t x176 = -20;
	int64_t t40 = 99LL;

    t40 = (x173+(x174|(x175&x176)));

    if (t40 != 2147483646LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x178 = INT8_MAX;
	static volatile uint32_t x180 = UINT32_MAX;
	uint64_t t41 = 43LLU;

    t41 = (x177+(x178|(x179&x180)));

    if (t41 != 4149598207LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = -1;
	uint32_t x182 = UINT32_MAX;
	int16_t x183 = INT16_MAX;
	volatile int8_t x184 = INT8_MAX;
	uint32_t t42 = 219U;

    t42 = (x181+(x182|(x183&x184)));

    if (t42 != 4294967294U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x185 = -1LL;
	uint64_t x186 = UINT64_MAX;
	int32_t x187 = 411;
	int32_t x188 = -1;
	static uint64_t t43 = 4030LLU;

    t43 = (x185+(x186|(x187&x188)));

    if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x192 = 64U;
	volatile uint64_t t44 = 16185960872LLU;

    t44 = (x189+(x190|(x191&x192)));

    if (t44 != 18446744073709551448LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = -1LL;
	int64_t x194 = INT64_MIN;
	static int16_t x195 = -1;
	int32_t x196 = -1;
	volatile int64_t t45 = -23089531484731237LL;

    t45 = (x193+(x194|(x195&x196)));

    if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x197 = 0U;
	static volatile int64_t x198 = INT64_MIN;
	volatile int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MAX;
	volatile int64_t t46 = INT64_MIN;

    t46 = (x197+(x198|(x199&x200)));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x201 = UINT16_MAX;
	static int32_t x203 = INT32_MIN;
	static int64_t x204 = INT64_MAX;

    t47 = (x201+(x202|(x203&x204)));

    if (t47 != 65407LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x205 = -1LL;
	static int16_t x206 = INT16_MIN;
	int64_t x207 = 7471545257674916LL;
	int32_t x208 = -1;
	volatile int64_t t48 = 72519LL;

    t48 = (x205+(x206|(x207&x208)));

    if (t48 != -14173LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	volatile int16_t x212 = INT16_MIN;
	uint64_t t49 = 90680370164373503LLU;

    t49 = (x209+(x210|(x211&x212)));

    if (t49 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x213 = 9849485LLU;
	int32_t x215 = -1;
	volatile int32_t x216 = -1;
	static uint64_t t50 = 55807980119225LLU;

    t50 = (x213+(x214|(x215&x216)));

    if (t50 != 9849484LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x217 = INT32_MIN;
	uint64_t x219 = 803378662288834LLU;
	uint64_t t51 = 16LLU;

    t51 = (x217+(x218|(x219&x220)));

    if (t51 != 803376516108108LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x221 = -1;
	uint32_t x223 = 1223648U;
	volatile uint8_t x224 = 72U;
	uint32_t t52 = 399361380U;

    t52 = (x221+(x222|(x223&x224)));

    if (t52 != 2019U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x225 = 8U;
	volatile int8_t x226 = -1;
	int64_t x227 = -144LL;
	volatile int32_t x228 = 7206822;
	int64_t t53 = -51297068277038100LL;

    t53 = (x225+(x226|(x227&x228)));

    if (t53 != 7LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x229 = -1;
	static volatile int64_t x231 = 110LL;
	volatile int32_t x232 = -1;

    t54 = (x229+(x230|(x231&x232)));

    if (t54 != -32659LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x233 = 442U;
	int64_t x234 = -1LL;
	int8_t x235 = 0;
	static int64_t t55 = 837242632LL;

    t55 = (x233+(x234|(x235&x236)));

    if (t55 != 441LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x245 = 6U;
	static int64_t x248 = -1LL;
	uint64_t t56 = 822231LLU;

    t56 = (x245+(x246|(x247&x248)));

    if (t56 != 18446744073709551109LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x249 = 802;
	static int32_t x251 = INT32_MIN;
	volatile uint16_t x252 = 777U;
	volatile int32_t t57 = 4012;

    t57 = (x249+(x250|(x251&x252)));

    if (t57 != 800) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x255 = INT32_MIN;
	volatile uint8_t x256 = 5U;
	int32_t t58 = -111234472;

    t58 = (x253+(x254|(x255&x256)));

    if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x257 = -32;
	int64_t x258 = -115748LL;
	int64_t x259 = INT64_MAX;
	uint8_t x260 = UINT8_MAX;
	int64_t t59 = 3990468LL;

    t59 = (x257+(x258|(x259&x260)));

    if (t59 != -115745LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x261 = 607654U;
	static int32_t x263 = INT32_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile uint32_t t60 = 131U;

    t60 = (x261+(x262|(x263&x264)));

    if (t60 != 607611U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x265 = 4287415154420LLU;
	static int32_t x266 = -1;
	static uint16_t x267 = 16003U;
	static int8_t x268 = -1;
	volatile uint64_t t61 = 37865210LLU;

    t61 = (x265+(x266|(x267&x268)));

    if (t61 != 4287415154419LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x273 = 20;
	volatile uint32_t x274 = UINT32_MAX;
	volatile uint8_t x275 = 40U;

    t62 = (x273+(x274|(x275&x276)));

    if (t62 != 19U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x277 = -1;
	static uint16_t x279 = UINT16_MAX;
	volatile uint32_t x280 = 23892U;

    t63 = (x277+(x278|(x279&x280)));

    if (t63 != 4294967251U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x281 = -1;
	volatile int16_t x282 = INT16_MIN;
	volatile int64_t t64 = -1776882273106969LL;

    t64 = (x281+(x282|(x283&x284)));

    if (t64 != -32769LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x285 = INT64_MIN;
	int16_t x286 = 604;
	uint16_t x287 = 4U;

    t65 = (x285+(x286|(x287&x288)));

    if (t65 != -9223372036854775204LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x289 = INT16_MIN;
	int64_t x290 = 12LL;
	int8_t x291 = INT8_MIN;
	volatile int8_t x292 = INT8_MIN;
	int64_t t66 = 65254760LL;

    t66 = (x289+(x290|(x291&x292)));

    if (t66 != -32884LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x294 = 1U;
	uint16_t x295 = 168U;
	volatile uint32_t t67 = 187001717U;

    t67 = (x293+(x294|(x295&x296)));

    if (t67 != 1388925794U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = 6670326;
	int32_t x298 = INT32_MAX;
	volatile int32_t t68 = 15121492;

    t68 = (x297+(x298|(x299&x300)));

    if (t68 != 6670325) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x302 = -92;
	volatile int8_t x304 = 52;
	int32_t t69 = -124;

    t69 = (x301+(x302|(x303&x304)));

    if (t69 != -204) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x305 = -1LL;
	static int16_t x306 = INT16_MAX;
	static uint16_t x307 = UINT16_MAX;
	int32_t x308 = INT32_MAX;
	static int64_t t70 = -84697685063584LL;

    t70 = (x305+(x306|(x307&x308)));

    if (t70 != 65534LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x309 = -1LL;
	int32_t x310 = -349318;
	static int32_t x311 = -1;
	volatile int8_t x312 = -3;
	static int64_t t71 = -55LL;

    t71 = (x309+(x310|(x311&x312)));

    if (t71 != -2LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x313 = UINT32_MAX;
	uint64_t x314 = UINT64_MAX;
	uint64_t x315 = 103695043268922156LLU;
	int32_t x316 = INT32_MAX;
	static volatile uint64_t t72 = 4029034074034760LLU;

    t72 = (x313+(x314|(x315&x316)));

    if (t72 != 4294967294LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x317 = -1;
	static uint8_t x319 = 1U;
	uint64_t x320 = UINT64_MAX;
	uint64_t t73 = 105498891083954446LLU;

    t73 = (x317+(x318|(x319&x320)));

    if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x322 = -1LL;
	static int16_t x323 = -1;
	int32_t x324 = INT32_MAX;
	volatile int64_t t74 = -97LL;

    t74 = (x321+(x322|(x323&x324)));

    if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x325 = INT8_MIN;
	static int8_t x326 = -1;
	volatile uint16_t x327 = UINT16_MAX;
	int16_t x328 = 22;
	volatile int32_t t75 = 1055021655;

    t75 = (x325+(x326|(x327&x328)));

    if (t75 != -129) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = -99019777;
	int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MAX;
	uint8_t x332 = 59U;
	int32_t t76 = -1708;

    t76 = (x329+(x330|(x331&x332)));

    if (t76 != -99052486) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x334 = 29272U;
	volatile int64_t x335 = INT64_MAX;
	int16_t x336 = INT16_MIN;
	volatile int64_t t77 = -135216618LL;

    t77 = (x333+(x334|(x335&x336)));

    if (t77 != 9223372034707288664LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x341 = UINT64_MAX;
	static int32_t x344 = -1;
	uint64_t t78 = 903414045328LLU;

    t78 = (x341+(x342|(x343&x344)));

    if (t78 != 2147483646LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x349 = -20964769;
	int32_t x350 = -22;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = 44778325LLU;

    t79 = (x349+(x350|(x351&x352)));

    if (t79 != 18446744073688586825LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x353 = 64283328475418LLU;
	uint64_t x354 = 2060805LLU;
	uint8_t x355 = 40U;
	uint8_t x356 = 23U;
	static uint64_t t80 = 10894714492228266LLU;

    t80 = (x353+(x354|(x355&x356)));

    if (t80 != 64283330536223LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x357 = UINT8_MAX;
	volatile int8_t x358 = INT8_MIN;
	int64_t x360 = -1LL;
	volatile int64_t t81 = 16543LL;

    t81 = (x357+(x358|(x359&x360)));

    if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x366 = 56135133LLU;
	int32_t x367 = INT32_MIN;
	uint64_t t82 = 7254330928LLU;

    t82 = (x365+(x366|(x367&x368)));

    if (t82 != 18446744071618203101LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x369 = 18U;
	int32_t x371 = -973043;
	static int8_t x372 = INT8_MIN;

    t83 = (x369+(x370|(x371&x372)));

    if (t83 != -973010) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x377 = 10355U;
	volatile int16_t x378 = INT16_MIN;
	uint16_t x379 = 2952U;
	uint64_t x380 = 8873376381305655408LLU;
	uint64_t t84 = 454LLU;

    t84 = (x377+(x378|(x379&x380)));

    if (t84 != 18446744073709529203LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x381 = -3;
	int32_t x382 = 65907;
	static uint32_t x383 = UINT32_MAX;
	int8_t x384 = 39;
	uint32_t t85 = 1U;

    t85 = (x381+(x382|(x383&x384)));

    if (t85 != 65908U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x385 = 2U;
	int64_t x386 = -8580993093LL;
	int32_t x387 = INT32_MAX;
	int64_t x388 = -1LL;
	int64_t t86 = 8889738022008LL;

    t86 = (x385+(x386|(x387&x388)));

    if (t86 != -6442450943LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x390 = -1LL;
	static int32_t x392 = -1;

    t87 = (x389+(x390|(x391&x392)));

    if (t87 != 13792LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x397 = INT16_MAX;
	static volatile int8_t x398 = 34;
	static volatile int64_t x399 = INT64_MIN;
	int64_t x400 = 32576LL;
	int64_t t88 = 3604537641LL;

    t88 = (x397+(x398|(x399&x400)));

    if (t88 != 32801LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x401 = 57929905U;
	static int32_t x402 = -1;
	static uint64_t t89 = 37207425LLU;

    t89 = (x401+(x402|(x403&x404)));

    if (t89 != 57929904LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x409 = INT16_MAX;
	uint64_t x410 = 534LLU;
	uint32_t x412 = 6270384U;
	static volatile uint64_t t90 = 21LLU;

    t90 = (x409+(x410|(x411&x412)));

    if (t90 != 33301LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x413 = 64U;
	int8_t x414 = INT8_MAX;
	volatile int32_t x415 = -6934;
	static volatile int16_t x416 = INT16_MAX;
	int32_t t91 = -6;

    t91 = (x413+(x414|(x415&x416)));

    if (t91 != 25919) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x417 = INT32_MAX;
	int32_t x419 = 53051666;
	static volatile int64_t t92 = -66326566471530652LL;

    t92 = (x417+(x418|(x419&x420)));

    if (t92 != 2147483645LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x421 = -6554;
	int32_t x423 = -501951919;
	volatile int64_t x424 = -56361262329LL;
	int64_t t93 = -595LL;

    t93 = (x421+(x422|(x423&x424)));

    if (t93 != -56370386841LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x425 = 77700347LLU;
	int16_t x427 = -1702;
	static int32_t x428 = -120;
	uint64_t t94 = 550006LLU;

    t94 = (x425+(x426|(x427&x428)));

    if (t94 != 77700167LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x429 = 0LLU;
	int8_t x431 = 28;
	int8_t x432 = INT8_MIN;

    t95 = (x429+(x430|(x431&x432)));

    if (t95 != 5311LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x433 = -773LL;
	int32_t x434 = -1;
	int8_t x435 = INT8_MIN;
	int64_t x436 = INT64_MIN;
	static volatile int64_t t96 = -1839017899LL;

    t96 = (x433+(x434|(x435&x436)));

    if (t96 != -774LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x437 = UINT32_MAX;
	volatile int8_t x438 = -1;
	static int8_t x439 = 0;
	static int16_t x440 = -1;
	static uint32_t t97 = 29U;

    t97 = (x437+(x438|(x439&x440)));

    if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x441 = INT64_MIN;
	volatile int16_t x442 = 1359;
	uint32_t x443 = 0U;
	uint32_t x444 = 700528287U;
	int64_t t98 = 444893773764302413LL;

    t98 = (x441+(x442|(x443&x444)));

    if (t98 != -9223372036854774449LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x445 = 1;
	static int64_t x446 = -1049876LL;
	static int16_t x447 = -1;
	static int64_t t99 = -554460797434289LL;

    t99 = (x445+(x446|(x447&x448)));

    if (t99 != -1048832LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x449 = -1;
	static int8_t x452 = INT8_MAX;
	static uint64_t t100 = 221LLU;

    t100 = (x449+(x450|(x451&x452)));

    if (t100 != 126LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x453 = -1;
	volatile int16_t x454 = INT16_MAX;
	volatile uint32_t t101 = 4132014U;

    t101 = (x453+(x454|(x455&x456)));

    if (t101 != 2147516414U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x457 = UINT8_MAX;
	uint8_t x459 = 20U;
	int32_t x460 = INT32_MAX;
	int32_t t102 = -10822879;

    t102 = (x457+(x458|(x459&x460)));

    if (t102 != 65790) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x466 = 2;
	static uint8_t x467 = UINT8_MAX;
	static volatile uint16_t x468 = 6U;
	volatile int32_t t103 = -823;

    t103 = (x465+(x466|(x467&x468)));

    if (t103 != 7) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x470 = -1;
	int8_t x471 = 26;
	uint8_t x472 = 31U;
	int32_t t104 = 3447;

    t104 = (x469+(x470|(x471&x472)));

    if (t104 != 270552034) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x473 = UINT8_MAX;
	static int32_t x474 = INT32_MAX;
	int64_t x475 = -1LL;
	uint16_t x476 = UINT16_MAX;
	static volatile int64_t t105 = 8680744427885127LL;

    t105 = (x473+(x474|(x475&x476)));

    if (t105 != 2147483902LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x481 = 0;
	uint16_t x482 = 261U;
	int8_t x484 = -1;

    t106 = (x481+(x482|(x483&x484)));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x485 = 14057U;
	static uint16_t x486 = 732U;
	volatile int16_t x488 = -1;

    t107 = (x485+(x486|(x487&x488)));

    if (t107 != 46824) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x490 = INT16_MIN;
	volatile int16_t x491 = -4;
	volatile int32_t t108 = 69;

    t108 = (x489+(x490|(x491&x492)));

    if (t108 != 84) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x493 = INT8_MAX;
	volatile int8_t x495 = INT8_MIN;
	volatile int64_t t109 = 1309401247711LL;

    t109 = (x493+(x494|(x495&x496)));

    if (t109 != -272892402LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x498 = 16199991892LL;
	int32_t x499 = INT32_MIN;
	int32_t x500 = INT32_MIN;
	int64_t t110 = -205828324507LL;

    t110 = (x497+(x498|(x499&x500)));

    if (t110 != -979910060LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x501 = UINT16_MAX;
	static int32_t x502 = INT32_MIN;
	static int64_t x503 = 943867LL;
	uint32_t x504 = 52241U;

    t111 = (x501+(x502|(x503&x504)));

    if (t111 != -2147400688LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x505 = INT8_MIN;
	int64_t x506 = INT64_MIN;
	static uint64_t x507 = 2LLU;
	static volatile uint64_t t112 = 2918928369104006816LLU;

    t112 = (x505+(x506|(x507&x508)));

    if (t112 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x509 = -1;
	uint8_t x510 = 1U;
	int8_t x511 = INT8_MIN;
	int32_t x512 = 102730;
	volatile int32_t t113 = 1224878;

    t113 = (x509+(x510|(x511&x512)));

    if (t113 != 102656) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x513 = INT16_MAX;
	uint32_t x514 = 9U;
	int16_t x516 = -2;
	volatile uint32_t t114 = 7U;

    t114 = (x513+(x514|(x515&x516)));

    if (t114 != 8U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x517 = 33524152U;
	int8_t x518 = INT8_MIN;
	int32_t x519 = -63679320;
	static volatile uint32_t t115 = 548417U;

    t115 = (x517+(x518|(x519&x520)));

    if (t115 != 33524032U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x521 = 19364LLU;
	int8_t x522 = -1;
	uint32_t x523 = 1782585586U;
	static uint8_t x524 = UINT8_MAX;
	volatile uint64_t t116 = 12369LLU;

    t116 = (x521+(x522|(x523&x524)));

    if (t116 != 4294986659LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x525 = -1;
	uint32_t x527 = 2758U;
	int16_t x528 = INT16_MAX;
	int64_t t117 = -11033711166849LL;

    t117 = (x525+(x526|(x527&x528)));

    if (t117 != -2LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x529 = 9;
	static int8_t x530 = INT8_MIN;
	uint64_t x531 = 12348LLU;
	uint16_t x532 = 28760U;
	uint64_t t118 = 2LLU;

    t118 = (x529+(x530|(x531&x532)));

    if (t118 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x537 = -1;
	volatile int32_t x538 = INT32_MIN;
	uint64_t x540 = UINT64_MAX;
	volatile uint64_t t119 = 42436LLU;

    t119 = (x537+(x538|(x539&x540)));

    if (t119 != 18446744071866866786LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x541 = -34757210052664414LL;
	volatile uint16_t x542 = UINT16_MAX;
	static int16_t x543 = -13;
	volatile int64_t t120 = -27LL;

    t120 = (x541+(x542|(x543&x544)));

    if (t120 != -34757210052664415LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x545 = 795117878741121726LL;
	int16_t x546 = INT16_MIN;
	static int16_t x547 = INT16_MAX;
	volatile int64_t x548 = INT64_MIN;

    t121 = (x545+(x546|(x547&x548)));

    if (t121 != 795117878741088958LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x549 = -11139496;
	uint64_t t122 = 18558231484561437LLU;

    t122 = (x549+(x550|(x551&x552)));

    if (t122 != 18446744073698412119LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x553 = 118752U;
	uint8_t x554 = 10U;
	volatile int64_t x556 = INT64_MIN;

    t123 = (x553+(x554|(x555&x556)));

    if (t123 != -9223372036854657046LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x557 = INT64_MIN;
	static uint8_t x558 = UINT8_MAX;
	int64_t x559 = INT64_MAX;
	int64_t x560 = -1LL;
	int64_t t124 = -307367384338578764LL;

    t124 = (x557+(x558|(x559&x560)));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x562 = 2;
	uint64_t x563 = 27188998823LLU;
	int32_t x564 = -1;
	uint64_t t125 = 342LLU;

    t125 = (x561+(x562|(x563&x564)));

    if (t125 != 27189031590LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x565 = 0U;
	volatile uint64_t x566 = 84LLU;
	uint16_t x567 = UINT16_MAX;
	uint8_t x568 = 5U;

    t126 = (x565+(x566|(x567&x568)));

    if (t126 != 85LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x569 = INT64_MIN;
	static int32_t x570 = -1;
	static uint8_t x571 = 5U;
	static uint64_t x572 = UINT64_MAX;

    t127 = (x569+(x570|(x571&x572)));

    if (t127 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x573 = UINT64_MAX;
	int8_t x574 = 0;
	int64_t x575 = -12921328666LL;
	uint8_t x576 = 34U;
	uint64_t t128 = 78510690303LLU;

    t128 = (x573+(x574|(x575&x576)));

    if (t128 != 33LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x577 = INT16_MIN;
	static volatile int16_t x579 = INT16_MIN;
	static int32_t x580 = -1;
	static volatile int32_t t129 = 4489;

    t129 = (x577+(x578|(x579&x580)));

    if (t129 != -32769) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x581 = INT64_MIN;
	int16_t x582 = 8478;
	int8_t x583 = INT8_MAX;
	static volatile int64_t t130 = -2071050LL;

    t130 = (x581+(x582|(x583&x584)));

    if (t130 != -9223372036854767330LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x585 = 1U;
	int16_t x586 = INT16_MIN;
	volatile int16_t x587 = 1;
	int32_t x588 = -356244258;

    t131 = (x585+(x586|(x587&x588)));

    if (t131 != -32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x589 = -20;
	int64_t x590 = INT64_MAX;
	int8_t x591 = 3;
	volatile int64_t t132 = -183474084687161LL;

    t132 = (x589+(x590|(x591&x592)));

    if (t132 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x593 = INT64_MIN;
	uint64_t x595 = 498142390518293LLU;
	int8_t x596 = 0;
	volatile uint64_t t133 = 6640748397986LLU;

    t133 = (x593+(x594|(x595&x596)));

    if (t133 != 9223372036854776241LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x597 = 341418403313727773LL;
	volatile int32_t x598 = INT32_MIN;
	int8_t x599 = 0;

    t134 = (x597+(x598|(x599&x600)));

    if (t134 != 341418401166244125LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x601 = INT16_MIN;
	uint8_t x602 = 43U;
	int32_t x603 = INT32_MAX;

    t135 = (x601+(x602|(x603&x604)));

    if (t135 != 2147418155) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x605 = UINT64_MAX;
	uint16_t x606 = UINT16_MAX;
	int32_t x607 = 270106;
	uint64_t t136 = 40359782836LLU;

    t136 = (x605+(x606|(x607&x608)));

    if (t136 != 65534LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x610 = 14U;
	int8_t x611 = INT8_MIN;
	uint64_t x612 = 2322969986588LLU;

    t137 = (x609+(x610|(x611&x612)));

    if (t137 != 2320822502926LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x613 = -1;
	int32_t x614 = -1;
	static uint16_t x615 = UINT16_MAX;
	int64_t x616 = INT64_MIN;
	int64_t t138 = 1LL;

    t138 = (x613+(x614|(x615&x616)));

    if (t138 != -2LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x617 = 6101993640LL;
	uint16_t x618 = UINT16_MAX;
	int64_t x619 = INT64_MIN;
	int8_t x620 = 0;
	int64_t t139 = -25219854934LL;

    t139 = (x617+(x618|(x619&x620)));

    if (t139 != 6102059175LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x621 = INT32_MAX;
	int32_t x623 = INT32_MIN;

    t140 = (x621+(x622|(x623&x624)));

    if (t140 != 2147483646) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x625 = 7;
	uint16_t x626 = 4746U;
	int8_t x628 = INT8_MIN;
	int32_t t141 = -6;

    t141 = (x625+(x626|(x627&x628)));

    if (t141 != 4753) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x630 = 52;
	volatile uint8_t x631 = 3U;
	static volatile int64_t x632 = INT64_MIN;
	int64_t t142 = 7441467LL;

    t142 = (x629+(x630|(x631&x632)));

    if (t142 != 65587LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x634 = 436U;
	int32_t x636 = 43381;
	volatile uint32_t t143 = 241517U;

    t143 = (x633+(x634|(x635&x636)));

    if (t143 != 2147516852U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x637 = UINT32_MAX;
	static volatile uint64_t x639 = 6250342856354544207LLU;
	int32_t x640 = -1;
	uint64_t t144 = 1091744446459LLU;

    t144 = (x637+(x638|(x639&x640)));

    if (t144 != 4294967294LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x641 = -166421;
	int8_t x642 = -1;
	uint8_t x643 = 57U;
	static uint64_t t145 = 1168037369697856501LLU;

    t145 = (x641+(x642|(x643&x644)));

    if (t145 != 18446744073709385194LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x645 = INT64_MIN;
	int8_t x646 = INT8_MAX;
	volatile uint32_t x647 = UINT32_MAX;
	static uint32_t x648 = UINT32_MAX;
	int64_t t146 = 12317983113541LL;

    t146 = (x645+(x646|(x647&x648)));

    if (t146 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x649 = -1LL;
	uint32_t x650 = 2098232372U;
	int8_t x651 = INT8_MAX;
	volatile int16_t x652 = INT16_MIN;
	volatile int64_t t147 = 864606283929552276LL;

    t147 = (x649+(x650|(x651&x652)));

    if (t147 != 2098232371LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x654 = 3;
	volatile uint32_t x655 = UINT32_MAX;

    t148 = (x653+(x654|(x655&x656)));

    if (t148 != 4U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x657 = INT32_MAX;
	int64_t x658 = INT64_MIN;
	uint32_t x659 = 15656U;
	int64_t x660 = 7122LL;
	int64_t t149 = -11108LL;

    t149 = (x657+(x658|(x659&x660)));

    if (t149 != -9223372034707285761LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x661 = -1;
	uint8_t x662 = 3U;
	uint16_t x663 = 6514U;
	int8_t x664 = -1;
	int32_t t150 = -7531;

    t150 = (x661+(x662|(x663&x664)));

    if (t150 != 6514) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x668 = 1;
	volatile uint32_t t151 = 900U;

    t151 = (x665+(x666|(x667&x668)));

    if (t151 != 40U) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x669 = 150U;
	uint16_t x670 = 177U;
	uint8_t x671 = 6U;
	int64_t x672 = -1LL;

    t152 = (x669+(x670|(x671&x672)));

    if (t152 != 333LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x673 = -1;
	int64_t x674 = INT64_MIN;
	int8_t x675 = INT8_MIN;

    t153 = (x673+(x674|(x675&x676)));

    if (t153 != -9223372036854648577LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x677 = -1;
	int32_t x678 = -1;
	uint16_t x679 = UINT16_MAX;
	int64_t x680 = INT64_MIN;
	int64_t t154 = -5544732647537645LL;

    t154 = (x677+(x678|(x679&x680)));

    if (t154 != -2LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x681 = INT64_MIN;
	int8_t x682 = 7;
	static volatile uint32_t x684 = UINT32_MAX;
	volatile int64_t t155 = -55LL;

    t155 = (x681+(x682|(x683&x684)));

    if (t155 != -9223372034707292153LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x686 = -1LL;
	static int64_t x688 = INT64_MIN;
	volatile int64_t t156 = -1871LL;

    t156 = (x685+(x686|(x687&x688)));

    if (t156 != -129LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x689 = 5LLU;
	int8_t x690 = -1;
	volatile uint32_t x692 = UINT32_MAX;
	uint64_t t157 = 0LLU;

    t157 = (x689+(x690|(x691&x692)));

    if (t157 != 4LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x694 = INT64_MAX;
	static volatile int16_t x696 = INT16_MIN;
	int64_t t158 = -24948397447LL;

    t158 = (x693+(x694|(x695&x696)));

    if (t158 != -2147483649LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x697 = INT16_MAX;
	static int64_t x698 = -1LL;
	uint16_t x699 = UINT16_MAX;
	uint32_t x700 = 1221037881U;
	int64_t t159 = 479849216462541542LL;

    t159 = (x697+(x698|(x699&x700)));

    if (t159 != 32766LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x701 = -1;
	int8_t x702 = INT8_MIN;
	volatile int64_t t160 = -15498648494LL;

    t160 = (x701+(x702|(x703&x704)));

    if (t160 != -129LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x705 = 343LLU;
	int64_t x707 = 2104721216695805552LL;
	int32_t x708 = -1;
	volatile uint64_t t161 = 98475893353278333LLU;

    t161 = (x705+(x706|(x707&x708)));

    if (t161 != 18446744073709529031LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x709 = -1;
	int64_t x710 = INT64_MAX;
	uint32_t x711 = 54712U;
	static int64_t t162 = -18751LL;

    t162 = (x709+(x710|(x711&x712)));

    if (t162 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x713 = INT8_MIN;
	uint32_t x714 = 2066895179U;
	static uint8_t x716 = 1U;
	static uint32_t t163 = 202691142U;

    t163 = (x713+(x714|(x715&x716)));

    if (t163 != 2066895051U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x721 = -1;
	int64_t x724 = INT64_MIN;
	uint64_t t164 = 58153232073LLU;

    t164 = (x721+(x722|(x723&x724)));

    if (t164 != 9279516991274469051LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x725 = INT32_MAX;
	int8_t x726 = INT8_MIN;
	uint16_t x727 = 2430U;
	static int32_t t165 = 0;

    t165 = (x725+(x726|(x727&x728)));

    if (t165 != 2147483645) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x730 = 1U;
	int8_t x731 = 1;
	int32_t x732 = INT32_MIN;
	volatile uint64_t t166 = 113186457661058LLU;

    t166 = (x729+(x730|(x731&x732)));

    if (t166 != 184362586LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x733 = -172049;
	int8_t x734 = -1;
	int32_t x735 = INT32_MIN;
	volatile int32_t x736 = INT32_MIN;
	int32_t t167 = -27;

    t167 = (x733+(x734|(x735&x736)));

    if (t167 != -172050) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x737 = INT16_MIN;
	uint8_t x738 = UINT8_MAX;
	volatile uint32_t x739 = UINT32_MAX;
	uint8_t x740 = UINT8_MAX;
	uint32_t t168 = 61673U;

    t168 = (x737+(x738|(x739&x740)));

    if (t168 != 4294934783U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x745 = -2010636788247255LL;
	int8_t x746 = 24;
	static int64_t x747 = INT64_MAX;
	int64_t x748 = INT64_MAX;
	int64_t t169 = -276LL;

    t169 = (x745+(x746|(x747&x748)));

    if (t169 != 9221361400066528552LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x749 = UINT8_MAX;
	volatile int32_t t170 = -716;

    t170 = (x749+(x750|(x751&x752)));

    if (t170 != 243) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint8_t x753 = UINT8_MAX;
	int64_t x754 = INT64_MAX;
	volatile int8_t x755 = INT8_MIN;
	volatile int64_t t171 = 839LL;

    t171 = (x753+(x754|(x755&x756)));

    if (t171 != 254LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x757 = INT16_MIN;
	int8_t x758 = INT8_MAX;
	volatile uint64_t t172 = 339LLU;

    t172 = (x757+(x758|(x759&x760)));

    if (t172 != 157558041599LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x762 = -1582;
	int8_t x763 = INT8_MIN;
	int64_t x764 = 9LL;

    t173 = (x761+(x762|(x763&x764)));

    if (t173 != 41692071LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x765 = 1;
	int16_t x766 = INT16_MIN;
	uint64_t x767 = UINT64_MAX;
	int64_t x768 = INT64_MIN;
	uint64_t t174 = 17LLU;

    t174 = (x765+(x766|(x767&x768)));

    if (t174 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x769 = 43U;
	volatile uint16_t x770 = 237U;
	int32_t x771 = INT32_MIN;
	int8_t x772 = INT8_MIN;
	volatile int32_t t175 = -990754342;

    t175 = (x769+(x770|(x771&x772)));

    if (t175 != -2147483368) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x773 = -1;
	uint8_t x775 = UINT8_MAX;
	volatile int64_t t176 = 2085LL;

    t176 = (x773+(x774|(x775&x776)));

    if (t176 != -47LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x777 = 93556U;
	uint32_t x778 = 589U;
	static int32_t x779 = INT32_MIN;
	volatile int8_t x780 = INT8_MIN;
	uint32_t t177 = 121906U;

    t177 = (x777+(x778|(x779&x780)));

    if (t177 != 2147577793U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x781 = -365;
	int16_t x782 = 131;
	uint8_t x783 = 39U;
	int8_t x784 = INT8_MIN;
	volatile int32_t t178 = 192;

    t178 = (x781+(x782|(x783&x784)));

    if (t178 != -234) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x785 = 1LLU;
	static int64_t x786 = INT64_MAX;
	int64_t x787 = INT64_MIN;
	int32_t x788 = 59427;
	volatile uint64_t t179 = 20163228586705446LLU;

    t179 = (x785+(x786|(x787&x788)));

    if (t179 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x789 = -47;
	static uint32_t x792 = 21848U;

    t180 = (x789+(x790|(x791&x792)));

    if (t180 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x793 = 10548U;
	int32_t x794 = -1;
	static int32_t x795 = INT32_MIN;
	static uint8_t x796 = 25U;

    t181 = (x793+(x794|(x795&x796)));

    if (t181 != 10547) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	int32_t x798 = -2027899;
	uint32_t x800 = 0U;
	volatile uint32_t t182 = 3U;

    t182 = (x797+(x798|(x799&x800)));

    if (t182 != 4292939396U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x803 = INT32_MIN;
	static volatile int8_t x804 = -5;
	volatile int32_t t183 = -126;

    t183 = (x801+(x802|(x803&x804)));

    if (t183 != -2147480139) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x805 = 81U;
	uint64_t x806 = UINT64_MAX;
	uint8_t x807 = UINT8_MAX;
	static int8_t x808 = -1;
	static uint64_t t184 = 581917344255905985LLU;

    t184 = (x805+(x806|(x807&x808)));

    if (t184 != 80LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x810 = -742LL;
	uint16_t x811 = UINT16_MAX;
	static int64_t x812 = -1LL;

    t185 = (x809+(x810|(x811&x812)));

    if (t185 != 18592LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x817 = -1;
	volatile int8_t x818 = INT8_MAX;
	uint16_t x819 = 16U;
	volatile int32_t t186 = -88738;

    t186 = (x817+(x818|(x819&x820)));

    if (t186 != 126) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x821 = 0U;
	int8_t x822 = INT8_MIN;
	int32_t x823 = -1;
	uint8_t x824 = UINT8_MAX;
	int32_t t187 = -507;

    t187 = (x821+(x822|(x823&x824)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint16_t x826 = UINT16_MAX;
	int8_t x827 = 12;
	volatile int16_t x828 = -1;
	int32_t t188 = -66;

    t188 = (x825+(x826|(x827&x828)));

    if (t188 != 98302) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x833 = 241U;
	volatile int16_t x835 = 4;
	int32_t t189 = -241730536;

    t189 = (x833+(x834|(x835&x836)));

    if (t189 != 247) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x837 = 7049680934LL;
	int16_t x838 = INT16_MAX;
	static int8_t x839 = INT8_MAX;
	int16_t x840 = 44;
	volatile int64_t t190 = 28563801LL;

    t190 = (x837+(x838|(x839&x840)));

    if (t190 != 7049713701LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x841 = INT64_MAX;
	static volatile int64_t x842 = INT64_MIN;
	static int64_t x843 = -1972115316761177LL;
	uint32_t x844 = 344U;
	int64_t t191 = 50493463443404LL;

    t191 = (x841+(x842|(x843&x844)));

    if (t191 != 255LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x846 = UINT16_MAX;
	volatile uint16_t x848 = UINT16_MAX;
	volatile int32_t t192 = 77044;

    t192 = (x845+(x846|(x847&x848)));

    if (t192 != 65534) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x849 = INT32_MAX;
	int16_t x850 = INT16_MAX;
	int8_t x851 = 0;
	volatile int64_t x852 = -399477546356717LL;
	int64_t t193 = 125012355042035745LL;

    t193 = (x849+(x850|(x851&x852)));

    if (t193 != 2147516414LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x854 = INT8_MIN;
	static int16_t x856 = INT16_MAX;
	volatile int32_t t194 = -139078789;

    t194 = (x853+(x854|(x855&x856)));

    if (t194 != -32895) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x857 = -1;
	int16_t x859 = INT16_MAX;
	int8_t x860 = INT8_MAX;
	static volatile int32_t t195 = 145734;

    t195 = (x857+(x858|(x859&x860)));

    if (t195 != 126) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x861 = 1U;
	int32_t x862 = -1;
	int8_t x863 = INT8_MIN;
	int32_t x864 = INT32_MIN;
	volatile int32_t t196 = 151;

    t196 = (x861+(x862|(x863&x864)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x865 = 25U;
	int16_t x866 = INT16_MIN;
	uint32_t x868 = 96009662U;
	static volatile uint32_t t197 = 115179U;

    t197 = (x865+(x866|(x867&x868)));

    if (t197 != 4294934555U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x870 = INT16_MAX;
	uint16_t x872 = UINT16_MAX;
	int64_t t198 = 233285268290070792LL;

    t198 = (x869+(x870|(x871&x872)));

    if (t198 != 32774LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x873 = 6;
	int64_t x874 = INT64_MIN;
	int32_t x876 = INT32_MIN;
	volatile int64_t t199 = -2571846398LL;

    t199 = (x873+(x874|(x875&x876)));

    if (t199 != -2147483642LL) { NG(); } else { ; }
	
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

