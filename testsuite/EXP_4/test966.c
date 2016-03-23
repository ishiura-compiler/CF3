
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

static int64_t x5 = INT64_MIN;
static int32_t x6 = INT32_MIN;
uint64_t x7 = 167LLU;
uint8_t x10 = UINT8_MAX;
int32_t x14 = -1;
int8_t x21 = -1;
static uint8_t x22 = 69U;
int64_t x24 = -1LL;
uint8_t x26 = 1U;
uint32_t x32 = UINT32_MAX;
static int16_t x33 = INT16_MAX;
int32_t t8 = 3;
int64_t t9 = -12171LL;
int16_t x43 = -1;
static volatile int32_t x52 = -82;
int16_t x53 = INT16_MIN;
int64_t t15 = 7LL;
static uint32_t x68 = 29766U;
volatile uint64_t t17 = 0LLU;
uint8_t x74 = UINT8_MAX;
static volatile int32_t x79 = -1;
int64_t t19 = 53416579350226LL;
int16_t x90 = 12;
int64_t x93 = INT64_MAX;
volatile int64_t t25 = 1LL;
static int32_t x105 = -1;
int8_t x106 = INT8_MAX;
int64_t x111 = INT64_MAX;
static uint16_t x113 = 23095U;
volatile int16_t x116 = -1;
volatile int64_t x119 = INT64_MIN;
int16_t x126 = 1125;
uint64_t x131 = UINT64_MAX;
static int32_t x140 = INT32_MIN;
volatile int32_t t35 = -3245;
static int32_t x146 = INT32_MIN;
int32_t t36 = -12;
int16_t x149 = 2711;
int64_t x156 = INT64_MIN;
int64_t t38 = -1LL;
int16_t x160 = -1;
int16_t x161 = 46;
int8_t x162 = INT8_MAX;
static int64_t x163 = INT64_MIN;
int8_t x166 = INT8_MAX;
int8_t x167 = -9;
int64_t x168 = -1LL;
static uint16_t x171 = UINT16_MAX;
static volatile int32_t x176 = -117406611;
uint64_t x180 = 1019542LLU;
uint32_t x182 = UINT32_MAX;
volatile uint16_t x185 = 216U;
volatile uint64_t t47 = 917104396865956LLU;
int32_t x196 = -485635048;
int16_t x197 = INT16_MAX;
int64_t x207 = INT64_MAX;
volatile int64_t t51 = INT64_MIN;
int32_t x210 = INT32_MAX;
static int64_t t52 = INT64_MAX;
static volatile uint16_t x215 = 1018U;
volatile int32_t x217 = INT32_MAX;
volatile int16_t x218 = -2851;
int16_t x228 = -1;
static volatile int32_t t58 = -2951492;
int64_t x245 = -1LL;
volatile uint64_t x246 = UINT64_MAX;
int16_t x248 = INT16_MIN;
static int16_t x253 = 3;
int32_t x260 = INT32_MIN;
int32_t x262 = INT32_MIN;
int32_t x263 = -286122;
int16_t x268 = -1;
volatile uint16_t x271 = UINT16_MAX;
int64_t x272 = INT64_MAX;
int64_t t68 = 1LL;
int64_t x280 = -1LL;
uint16_t x289 = UINT16_MAX;
static int8_t x292 = 16;
int64_t x299 = -1LL;
int64_t t74 = -187206715LL;
int16_t x304 = INT16_MIN;
int8_t x305 = INT8_MIN;
volatile uint8_t x332 = 3U;
int64_t x335 = -1LL;
static uint64_t x337 = 25892331824LLU;
uint16_t x340 = UINT16_MAX;
int8_t x341 = INT8_MAX;
int8_t x342 = INT8_MIN;
uint64_t x349 = 92575994847LLU;
int64_t x351 = -63754017788699454LL;
static uint32_t x355 = 1U;
int64_t x356 = -26873161LL;
int64_t t87 = -2166862644LL;
int64_t x361 = INT64_MAX;
volatile uint64_t x363 = UINT64_MAX;
uint16_t x367 = 28821U;
int32_t x369 = -103198;
static uint8_t x371 = UINT8_MAX;
static int16_t x372 = -1;
int32_t t91 = 876140981;
int16_t x373 = -174;
uint16_t x376 = 46U;
static int64_t x385 = INT64_MAX;
volatile int64_t t95 = -897245719852627LL;
int16_t x389 = -1;
int8_t x394 = INT8_MAX;
int32_t x402 = -1944306;
uint64_t t105 = 8343156074LLU;
int16_t x436 = INT16_MIN;
static uint8_t x438 = 1U;
int16_t x439 = -3;
uint64_t t109 = 127201444056LLU;
static int16_t x446 = 2;
int64_t x448 = INT64_MAX;
int64_t x449 = -1LL;
int64_t x455 = 10473608230961440LL;
int32_t t113 = -10852;
volatile int16_t x463 = INT16_MIN;
int32_t x464 = INT32_MAX;
uint16_t x482 = 22217U;
int32_t x488 = INT32_MIN;
int64_t x489 = INT64_MAX;
uint64_t t121 = 527401LLU;
static uint32_t x493 = UINT32_MAX;
static uint32_t x498 = UINT32_MAX;
int8_t x503 = INT8_MIN;
int64_t t124 = 625887LL;
int64_t t125 = -13023LL;
uint32_t x510 = 2863U;
uint32_t x515 = 562625U;
int8_t x516 = INT8_MIN;
static volatile int64_t t127 = -78186327LL;
uint64_t x518 = UINT64_MAX;
int64_t x525 = 8182587877512LL;
volatile int16_t x528 = INT16_MAX;
static int64_t t130 = -20LL;
int32_t x532 = 2107405;
int16_t x539 = INT16_MIN;
int32_t t133 = 15830;
volatile int32_t t135 = -163;
int32_t x554 = 1;
int8_t x561 = INT8_MAX;
int16_t x567 = 10900;
uint16_t x569 = 8763U;
uint64_t x570 = 15553209LLU;
static int64_t x578 = -1LL;
uint16_t x581 = 75U;
int8_t x584 = INT8_MIN;
int32_t t145 = -389;
uint64_t x602 = UINT64_MAX;
static uint8_t x603 = 22U;
volatile uint64_t t149 = 232453LLU;
static volatile int16_t x606 = 1764;
volatile int16_t x609 = INT16_MIN;
uint8_t x615 = 3U;
static int32_t x619 = INT32_MIN;
static int32_t t153 = 29710;
uint64_t t155 = 99998899395040583LLU;
int32_t x629 = -8313903;
volatile int16_t x631 = -3;
int16_t x633 = -22;
volatile int32_t x634 = INT32_MAX;
volatile int16_t x639 = 429;
static int64_t t158 = 23LL;
uint32_t x644 = 67638635U;
int16_t x647 = 1;
volatile int64_t x659 = -1LL;
volatile int64_t t163 = -3959948248166204LL;
volatile int32_t x668 = INT32_MIN;
int8_t x670 = -1;
uint16_t x677 = 63U;
static int16_t x679 = INT16_MIN;
static uint64_t t170 = 553353811306563893LLU;
uint8_t x692 = 7U;
static int64_t x697 = -2068687286935159LL;
static volatile int8_t x706 = INT8_MAX;
int64_t t176 = 786063133061LL;
uint32_t x715 = 487612557U;
volatile int32_t t178 = -7996504;
static int32_t x723 = -2;
static volatile int64_t t181 = 117441LL;
uint64_t x733 = 39826542940LLU;
volatile uint32_t x736 = 497234819U;
volatile int64_t t184 = 133771833LL;
int16_t x746 = 7696;
static int16_t x754 = INT16_MIN;
static uint16_t x757 = 2U;
int8_t x759 = -1;
volatile int64_t t188 = -15800031LL;
volatile uint32_t t189 = 227U;
volatile int16_t x770 = 53;
int32_t t191 = -600824;
uint64_t x785 = UINT64_MAX;
int64_t x786 = INT64_MIN;
uint64_t t195 = 56195495957138353LLU;
int16_t x792 = INT16_MAX;
int16_t x796 = INT16_MIN;
volatile int8_t x801 = INT8_MAX;
int16_t x803 = -1;
int32_t t199 = 31080;


void f0(void) {
    	int32_t x1 = 15507;
	volatile int64_t x2 = INT64_MIN;
	int16_t x3 = -1;
	uint64_t x4 = 10846856602075923LLU;
	uint64_t t0 = 2LLU;

    t0 = (x1^(x2|(x3%x4)));

    if (t0 != 9230459887035263296LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x8 = 27767454720LL;
	uint64_t t1 = 4225220841188466946LLU;

    t1 = (x5^(x6|(x7%x8)));

    if (t1 != 9223372034707292327LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	volatile int16_t x11 = -855;
	uint8_t x12 = 31U;
	volatile int32_t t2 = 374232;

    t2 = (x9^(x10|(x11%x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 3279U;
	uint64_t x15 = 301075LLU;
	int16_t x16 = -1;
	static volatile uint64_t t3 = 481550821045955700LLU;

    t3 = (x13^(x14|(x15%x16)));

    if (t3 != 18446744073709548336LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -690610149LL;
	static uint8_t x18 = UINT8_MAX;
	volatile uint8_t x19 = 45U;
	int16_t x20 = INT16_MAX;
	int64_t t4 = -3900908620972558LL;

    t4 = (x17^(x18|(x19%x20)));

    if (t4 != -690609948LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x23 = -1;
	int64_t t5 = -25426456LL;

    t5 = (x21^(x22|(x23%x24)));

    if (t5 != -70LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 2609290539LLU;
	int64_t x27 = -1658513098LL;
	uint8_t x28 = 5U;
	uint64_t t6 = 5159947214499LLU;

    t6 = (x25^(x26|(x27%x28)));

    if (t6 != 18446744071100261078LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	static int8_t x30 = 2;
	static int32_t x31 = -1;
	volatile uint32_t t7 = 977232U;

    t7 = (x29^(x30|(x31%x32)));

    if (t7 != 2147483650U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x34 = 4U;
	static uint8_t x35 = UINT8_MAX;
	uint16_t x36 = 84U;

    t8 = (x33^(x34|(x35%x36)));

    if (t8 != 32760) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 7;
	int8_t x38 = 59;
	volatile int32_t x39 = INT32_MIN;
	int64_t x40 = -11195806616001LL;

    t9 = (x37^(x38|(x39%x40)));

    if (t9 != -2147483588LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	int64_t x42 = 2199LL;
	int64_t x44 = -1LL;
	int64_t t10 = 10318500LL;

    t10 = (x41^(x42|(x43%x44)));

    if (t10 != 4294965096LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	uint8_t x46 = UINT8_MAX;
	static int8_t x47 = -1;
	static volatile int16_t x48 = INT16_MIN;
	volatile uint64_t t11 = 829LLU;

    t11 = (x45^(x46|(x47%x48)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	static uint64_t x50 = 9LLU;
	int8_t x51 = INT8_MAX;
	volatile uint64_t t12 = 308LLU;

    t12 = (x49^(x50|(x51%x52)));

    if (t12 != 82LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x54 = INT32_MIN;
	volatile uint64_t x55 = 44901361557189LLU;
	int16_t x56 = -1;
	static uint64_t t13 = 26272LLU;

    t13 = (x53^(x54|(x55%x56)));

    if (t13 != 374021829LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MAX;
	int16_t x59 = INT16_MIN;
	int8_t x60 = 1;
	int64_t t14 = -529128453996097LL;

    t14 = (x57^(x58|(x59%x60)));

    if (t14 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MAX;
	static int8_t x63 = INT8_MIN;
	int64_t x64 = INT64_MIN;

    t15 = (x61^(x62|(x63%x64)));

    if (t15 != 127LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 1822812168963412LLU;
	uint64_t x66 = 349154000116976LLU;
	uint64_t x67 = 3744918723LLU;
	uint64_t t16 = 208826810358263439LLU;

    t16 = (x65^(x66|(x67%x68)));

    if (t16 != 2045483676908197LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	int16_t x70 = -8711;
	int16_t x71 = INT16_MAX;
	static uint64_t x72 = 4945646218044LLU;

    t17 = (x69^(x70|(x71%x72)));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	int8_t x75 = 1;
	volatile int16_t x76 = -3;
	static int32_t t18 = -10;

    t18 = (x73^(x74|(x75%x76)));

    if (t18 != -256) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = 916778281U;
	int16_t x78 = INT16_MIN;
	int64_t x80 = -1713103645LL;

    t19 = (x77^(x78|(x79%x80)));

    if (t19 != -916778282LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	int64_t x82 = INT64_MIN;
	uint32_t x83 = 77118U;
	int16_t x84 = -1;
	volatile int64_t t20 = -57087879903037LL;

    t20 = (x81^(x82|(x83%x84)));

    if (t20 != -9223372034707369279LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	volatile uint8_t x86 = UINT8_MAX;
	static uint32_t x87 = UINT32_MAX;
	int16_t x88 = -1;
	uint32_t t21 = 23954732U;

    t21 = (x85^(x86|(x87%x88)));

    if (t21 != 4294967040U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 564;
	int32_t x91 = -4633422;
	uint32_t x92 = 131160U;
	volatile uint32_t t22 = 3U;

    t22 = (x89^(x90|(x91%x92)));

    if (t22 != 90778U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x94 = INT8_MIN;
	static uint64_t x95 = 284876538425846484LLU;
	int32_t x96 = 141;
	uint64_t t23 = 19668511279537941LLU;

    t23 = (x93^(x94|(x95%x96)));

    if (t23 != 9223372036854775923LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 17318LLU;
	int16_t x98 = INT16_MIN;
	uint8_t x99 = 1U;
	static int32_t x100 = -2046005;
	volatile uint64_t t24 = 1732020159502LLU;

    t24 = (x97^(x98|(x99%x100)));

    if (t24 != 18446744073709536167LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x101 = INT16_MAX;
	int16_t x102 = -1;
	int64_t x103 = INT64_MIN;
	static int8_t x104 = -1;

    t25 = (x101^(x102|(x103%x104)));

    if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x107 = 1632088650610571LL;
	int16_t x108 = INT16_MIN;
	int64_t t26 = 2LL;

    t26 = (x105^(x106|(x107%x108)));

    if (t26 != -30720LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 217832U;
	uint8_t x110 = 3U;
	static int64_t x112 = -1LL;
	int64_t t27 = 14739LL;

    t27 = (x109^(x110|(x111%x112)));

    if (t27 != 217835LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = 95;
	volatile uint16_t x115 = UINT16_MAX;
	static int32_t t28 = -2088851;

    t28 = (x113^(x114|(x115%x116)));

    if (t28 != 23144) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int32_t x118 = 136617;
	uint64_t x120 = UINT64_MAX;
	uint64_t t29 = 1986182999468698LLU;

    t29 = (x117^(x118|(x119%x120)));

    if (t29 != 136617LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x121 = 172135096276775764LLU;
	uint64_t x122 = 219LLU;
	static int64_t x123 = 510074088071791759LL;
	static volatile int8_t x124 = INT8_MIN;
	volatile uint64_t t30 = 1520897325570369981LLU;

    t30 = (x121^(x122|(x123%x124)));

    if (t30 != 172135096276775819LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int64_t x127 = 3200815118111LL;
	uint32_t x128 = 2U;
	static volatile int64_t t31 = -3821951LL;

    t31 = (x125^(x126|(x127%x128)));

    if (t31 != -31643LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MIN;
	static uint8_t x132 = 29U;
	uint64_t t32 = 78732LLU;

    t32 = (x129^(x130|(x131%x132)));

    if (t32 != 9223372036854775703LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 996U;
	int8_t x134 = INT8_MIN;
	int8_t x135 = -1;
	int32_t x136 = 29029;
	volatile int32_t t33 = 1521839;

    t33 = (x133^(x134|(x135%x136)));

    if (t33 != -997) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x137 = INT32_MIN;
	int8_t x138 = -1;
	static int16_t x139 = -1;
	int32_t t34 = INT32_MAX;

    t34 = (x137^(x138|(x139%x140)));

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	static int32_t x142 = -1;
	uint16_t x143 = 5260U;
	static int8_t x144 = INT8_MIN;

    t35 = (x141^(x142|(x143%x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = INT32_MIN;
	volatile int8_t x147 = INT8_MIN;
	static int32_t x148 = INT32_MIN;

    t36 = (x145^(x146|(x147%x148)));

    if (t36 != 2147483520) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x150 = -1;
	uint64_t x151 = 1872247832334470964LLU;
	int8_t x152 = -16;
	volatile uint64_t t37 = 25867137933531367LLU;

    t37 = (x149^(x150|(x151%x152)));

    if (t37 != 18446744073709548904LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MIN;
	int16_t x155 = INT16_MAX;

    t38 = (x153^(x154|(x155%x156)));

    if (t38 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -274907181LL;
	volatile int64_t x158 = INT64_MAX;
	volatile int32_t x159 = -1;
	int64_t t39 = -99244LL;

    t39 = (x157^(x158|(x159%x160)));

    if (t39 != -9223372036579868628LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x164 = 64952495680748LLU;
	static uint64_t t40 = 905436LLU;

    t40 = (x161^(x162|(x163%x164)));

    if (t40 != 52697692879057LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = -1;
	volatile int64_t t41 = 122865402LL;

    t41 = (x165^(x166|(x167%x168)));

    if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	int16_t x170 = -446;
	uint32_t x172 = 13913U;
	uint32_t t42 = 5888515U;

    t42 = (x169^(x170|(x171%x172)));

    if (t42 != 2147483940U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	uint16_t x174 = 2932U;
	volatile uint32_t x175 = UINT32_MAX;
	volatile uint32_t t43 = 1U;

    t43 = (x173^(x174|(x175%x176)));

    if (t43 != 4177560585U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	static int64_t x178 = INT64_MIN;
	static int16_t x179 = INT16_MAX;
	uint64_t t44 = 116LLU;

    t44 = (x177^(x178|(x179%x180)));

    if (t44 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	uint8_t x183 = UINT8_MAX;
	static int16_t x184 = INT16_MAX;
	uint32_t t45 = 3U;

    t45 = (x181^(x182|(x183%x184)));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = -1;
	uint16_t x187 = 232U;
	int16_t x188 = INT16_MIN;
	static int32_t t46 = 3;

    t46 = (x185^(x186|(x187%x188)));

    if (t46 != -217) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -6827;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	uint64_t x192 = 732275LLU;

    t47 = (x189^(x190|(x191%x192)));

    if (t47 != 6826LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	static uint8_t x194 = 3U;
	static uint64_t x195 = 94082534LLU;
	volatile uint64_t t48 = 173737547043LLU;

    t48 = (x193^(x194|(x195%x196)));

    if (t48 != 18446744071656150503LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = -1;
	int64_t x199 = INT64_MIN;
	int8_t x200 = -1;
	int64_t t49 = 3647897765410045LL;

    t49 = (x197^(x198|(x199%x200)));

    if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -165LL;
	int32_t x202 = 1;
	static int8_t x203 = INT8_MIN;
	int64_t x204 = -1LL;
	int64_t t50 = -54607096019LL;

    t50 = (x201^(x202|(x203%x204)));

    if (t50 != -166LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x205 = -1;
	int32_t x206 = INT32_MAX;
	int64_t x208 = INT64_MIN;

    t51 = (x205^(x206|(x207%x208)));

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	int32_t x212 = 16522436;

    t52 = (x209^(x210|(x211%x212)));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	uint64_t x214 = 1LLU;
	int8_t x216 = -1;
	static volatile uint64_t t53 = 8647135339LLU;

    t53 = (x213^(x214|(x215%x216)));

    if (t53 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x219 = 24U;
	int64_t x220 = INT64_MIN;
	static volatile int64_t t54 = -38090787805LL;

    t54 = (x217^(x218|(x219%x220)));

    if (t54 != -2147480798LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 744U;
	uint8_t x222 = 1U;
	int8_t x223 = INT8_MIN;
	static int16_t x224 = 7;
	static volatile int32_t t55 = -644558420;

    t55 = (x221^(x222|(x223%x224)));

    if (t55 != -745) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = UINT32_MAX;
	volatile int32_t x226 = -1;
	int32_t x227 = INT32_MIN;
	uint32_t t56 = 2498124U;

    t56 = (x225^(x226|(x227%x228)));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x229 = UINT32_MAX;
	static int32_t x230 = INT32_MIN;
	static int8_t x231 = INT8_MAX;
	static int16_t x232 = INT16_MAX;
	volatile uint32_t t57 = 557U;

    t57 = (x229^(x230|(x231%x232)));

    if (t57 != 2147483520U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int16_t x234 = -1;
	static uint8_t x235 = 37U;
	uint8_t x236 = 11U;

    t58 = (x233^(x234|(x235%x236)));

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 223906894LLU;
	uint32_t x238 = 14U;
	int32_t x239 = 16;
	int16_t x240 = 18;
	uint64_t t59 = 374793404765LLU;

    t59 = (x237^(x238|(x239%x240)));

    if (t59 != 223906896LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	volatile int64_t x242 = 84394983907706344LL;
	uint32_t x243 = 27U;
	volatile int16_t x244 = -1;
	static int64_t t60 = 4070328480740LL;

    t60 = (x241^(x242|(x243%x244)));

    if (t60 != -9138977052947069445LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x247 = 31U;
	static uint64_t t61 = 56LLU;

    t61 = (x245^(x246|(x247%x248)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	uint32_t x250 = UINT32_MAX;
	int16_t x251 = 1;
	static uint64_t x252 = UINT64_MAX;
	static uint64_t t62 = 210277942330LLU;

    t62 = (x249^(x250|(x251%x252)));

    if (t62 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x254 = 275999655342322LLU;
	volatile int32_t x255 = 16643;
	int16_t x256 = 838;
	uint64_t t63 = 8118648815773817961LLU;

    t63 = (x253^(x254|(x255%x256)));

    if (t63 != 275999655342832LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MIN;
	static uint8_t x259 = 1U;
	int64_t t64 = 5392749LL;

    t64 = (x257^(x258|(x259%x260)));

    if (t64 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	int16_t x264 = 321;
	volatile int32_t t65 = -3;

    t65 = (x261^(x262|(x263%x264)));

    if (t65 != 2147483537) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint8_t x265 = 1U;
	static int64_t x266 = -4193513292399LL;
	int8_t x267 = INT8_MAX;
	int64_t t66 = 517981114357577LL;

    t66 = (x265^(x266|(x267%x268)));

    if (t66 != -4193513292400LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = -229;
	int8_t x270 = -1;
	int64_t t67 = 19LL;

    t67 = (x269^(x270|(x271%x272)));

    if (t67 != 228LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MIN;
	static int32_t x274 = -1;
	int8_t x275 = INT8_MIN;
	volatile int64_t x276 = 46648044965046LL;

    t68 = (x273^(x274|(x275%x276)));

    if (t68 != 32767LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 908059844U;
	static volatile int64_t t69 = -1972558422955145LL;

    t69 = (x277^(x278|(x279%x280)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x281 = INT8_MIN;
	int16_t x282 = -1;
	uint16_t x283 = 12U;
	int8_t x284 = -1;
	static int32_t t70 = 3299;

    t70 = (x281^(x282|(x283%x284)));

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 956943375214LLU;
	int64_t x286 = INT64_MIN;
	static int8_t x287 = -2;
	static int8_t x288 = 1;
	static uint64_t t71 = 28239179653LLU;

    t71 = (x285^(x286|(x287%x288)));

    if (t71 != 9223372993798151022LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x290 = -47420;
	int8_t x291 = -25;
	volatile int32_t t72 = -559115;

    t72 = (x289^(x290|(x291%x292)));

    if (t72 != -65528) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x293 = 965U;
	static int64_t x294 = INT64_MIN;
	static uint16_t x295 = UINT16_MAX;
	int64_t x296 = INT64_MIN;
	static int64_t t73 = -40497252900LL;

    t73 = (x293^(x294|(x295%x296)));

    if (t73 != -9223372036854711238LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -380487926;
	volatile int16_t x298 = 4331;
	uint8_t x300 = 5U;

    t74 = (x297^(x298|(x299%x300)));

    if (t74 != 380487925LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 42U;
	volatile int64_t x302 = -1LL;
	int8_t x303 = -1;
	int64_t t75 = 0LL;

    t75 = (x301^(x302|(x303%x304)));

    if (t75 != -43LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = -16;
	volatile uint64_t t76 = 1086113646012723978LLU;

    t76 = (x305^(x306|(x307%x308)));

    if (t76 != 15LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	static volatile uint64_t x310 = 8191527951997500LLU;
	static uint32_t x311 = UINT32_MAX;
	volatile int16_t x312 = -1;
	uint64_t t77 = 684LLU;

    t77 = (x309^(x310|(x311%x312)));

    if (t77 != 18438552545757534780LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	int32_t x314 = -3818769;
	static volatile int8_t x315 = -9;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 108171;

    t78 = (x313^(x314|(x315%x316)));

    if (t78 != -65536) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MAX;
	volatile int32_t x318 = 31831;
	static uint64_t x319 = 191938364915148LLU;
	int64_t x320 = INT64_MIN;
	volatile uint64_t t79 = 385237581373970096LLU;

    t79 = (x317^(x318|(x319%x320)));

    if (t79 != 191939369533984LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = INT32_MIN;
	int64_t x326 = 2909229805415LL;
	volatile uint16_t x327 = 30U;
	uint8_t x328 = 1U;
	static int64_t t80 = 77292752LL;

    t80 = (x325^(x326|(x327%x328)));

    if (t80 != -2908303397017LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x329 = 3928U;
	volatile int32_t x330 = INT32_MIN;
	uint16_t x331 = UINT16_MAX;
	volatile int32_t t81 = -379;

    t81 = (x329^(x330|(x331%x332)));

    if (t81 != -2147479720) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x333 = -1201989805LL;
	int8_t x334 = -60;
	int32_t x336 = INT32_MAX;
	volatile int64_t t82 = 1LL;

    t82 = (x333^(x334|(x335%x336)));

    if (t82 != 1201989804LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x338 = 188;
	int32_t x339 = INT32_MAX;
	volatile uint64_t t83 = 35117990LLU;

    t83 = (x337^(x338|(x339%x340)));

    if (t83 != 25892347599LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x343 = INT64_MIN;
	int32_t x344 = INT32_MIN;
	volatile int64_t t84 = -98652LL;

    t84 = (x341^(x342|(x343%x344)));

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = INT32_MAX;
	volatile int32_t x346 = INT32_MIN;
	int16_t x347 = -213;
	uint8_t x348 = 1U;
	volatile int32_t t85 = 120145772;

    t85 = (x345^(x346|(x347%x348)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x350 = 7;
	int32_t x352 = -5499290;
	uint64_t t86 = 3861444186LLU;

    t86 = (x349^(x350|(x351%x352)));

    if (t86 != 18446743981135899200LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = 1;
	int16_t x354 = INT16_MIN;

    t87 = (x353^(x354|(x355%x356)));

    if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x357 = 2U;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	static int64_t x360 = -1627358141556LL;
	volatile int64_t t88 = 449687228140LL;

    t88 = (x357^(x358|(x359%x360)));

    if (t88 != -20798LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x362 = UINT64_MAX;
	int64_t x364 = INT64_MIN;
	volatile uint64_t t89 = 92052LLU;

    t89 = (x361^(x362|(x363%x364)));

    if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x365 = INT8_MIN;
	int64_t x366 = -1LL;
	static uint8_t x368 = UINT8_MAX;
	static int64_t t90 = -53LL;

    t90 = (x365^(x366|(x367%x368)));

    if (t90 != 127LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x370 = -7670;

    t91 = (x369^(x370|(x371%x372)));

    if (t91 != 102120) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x374 = -8;
	volatile uint16_t x375 = 7324U;
	int32_t t92 = -267227273;

    t92 = (x373^(x374|(x375%x376)));

    if (t92 != 168) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x377 = -442;
	int8_t x378 = -30;
	int8_t x379 = INT8_MAX;
	static uint64_t x380 = 584045035223499200LLU;
	uint64_t t93 = 64850LLU;

    t93 = (x377^(x378|(x379%x380)));

    if (t93 != 441LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x381 = 3U;
	uint64_t x382 = 3LLU;
	int64_t x383 = 1087210181294LL;
	volatile uint64_t x384 = 833791227518LLU;
	static volatile uint64_t t94 = 7LLU;

    t94 = (x381^(x382|(x383%x384)));

    if (t94 != 253418953776LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MIN;
	volatile int32_t x388 = -1;

    t95 = (x385^(x386|(x387%x388)));

    if (t95 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x390 = INT32_MAX;
	static uint64_t x391 = 2840581338233LLU;
	volatile int64_t x392 = 277818710LL;
	uint64_t t96 = 0LLU;

    t96 = (x389^(x390|(x391%x392)));

    if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x393 = 83359;
	int8_t x395 = -1;
	volatile int8_t x396 = -1;
	volatile int32_t t97 = 230;

    t97 = (x393^(x394|(x395%x396)));

    if (t97 != 83424) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = INT16_MAX;
	int64_t x398 = INT64_MAX;
	int16_t x399 = INT16_MIN;
	static int64_t x400 = -688781592133LL;
	volatile int64_t t98 = 1797LL;

    t98 = (x397^(x398|(x399%x400)));

    if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x401 = 2448729741LLU;
	int16_t x403 = -1;
	int64_t x404 = 490412747535LL;
	volatile uint64_t t99 = 55165113915295913LLU;

    t99 = (x401^(x402|(x403%x404)));

    if (t99 != 18446744071260821874LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x405 = INT32_MIN;
	uint16_t x406 = 30U;
	int8_t x407 = INT8_MIN;
	static int32_t x408 = 1;
	volatile int32_t t100 = -3950185;

    t100 = (x405^(x406|(x407%x408)));

    if (t100 != -2147483618) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x409 = UINT16_MAX;
	int16_t x410 = 28;
	uint8_t x411 = UINT8_MAX;
	static int32_t x412 = -1;
	volatile int32_t t101 = 37;

    t101 = (x409^(x410|(x411%x412)));

    if (t101 != 65507) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x413 = 3U;
	static int16_t x414 = INT16_MIN;
	uint8_t x415 = 3U;
	uint32_t x416 = 144811U;
	volatile uint32_t t102 = 3U;

    t102 = (x413^(x414|(x415%x416)));

    if (t102 != 4294934528U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x417 = INT16_MIN;
	int64_t x418 = 511803022298LL;
	uint64_t x419 = 6662645105359602LLU;
	volatile uint8_t x420 = 4U;
	uint64_t t103 = 241435040LLU;

    t103 = (x417^(x418|(x419%x420)));

    if (t103 != 18446743561906543578LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x421 = INT16_MAX;
	int64_t x422 = -7184LL;
	int64_t x423 = INT64_MIN;
	int16_t x424 = -1;
	volatile int64_t t104 = -57839832760LL;

    t104 = (x421^(x422|(x423%x424)));

    if (t104 != -25585LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x425 = 1127220010583LLU;
	int16_t x426 = -1;
	int32_t x427 = 35706;
	int64_t x428 = INT64_MIN;

    t105 = (x425^(x426|(x427%x428)));

    if (t105 != 18446742946489541032LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x429 = 24U;
	int16_t x430 = INT16_MIN;
	volatile int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MAX;
	int64_t t106 = -43LL;

    t106 = (x429^(x430|(x431%x432)));

    if (t106 != -25LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x433 = INT32_MIN;
	uint64_t x434 = UINT64_MAX;
	int8_t x435 = INT8_MIN;
	volatile uint64_t t107 = 3613069LLU;

    t107 = (x433^(x434|(x435%x436)));

    if (t107 != 2147483647LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x437 = INT64_MIN;
	volatile uint32_t x440 = UINT32_MAX;
	volatile int64_t t108 = 70162756663328172LL;

    t108 = (x437^(x438|(x439%x440)));

    if (t108 != -9223372032559808515LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x441 = INT8_MIN;
	static uint32_t x442 = 11351U;
	uint16_t x443 = 193U;
	static uint64_t x444 = 110806856617831926LLU;

    t109 = (x441^(x442|(x443%x444)));

    if (t109 != 18446744073709540183LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x445 = -1;
	static int32_t x447 = INT32_MIN;
	volatile int64_t t110 = 7177437LL;

    t110 = (x445^(x446|(x447%x448)));

    if (t110 != 2147483645LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x450 = INT32_MAX;
	static volatile int8_t x451 = 58;
	int8_t x452 = INT8_MAX;
	static volatile int64_t t111 = -33806707472288214LL;

    t111 = (x449^(x450|(x451%x452)));

    if (t111 != -2147483648LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x453 = 6234668216286LLU;
	int32_t x454 = 9827;
	int64_t x456 = 298754995LL;
	uint64_t t112 = 1367393161548951251LLU;

    t112 = (x453^(x454|(x455%x456)));

    if (t112 != 6234473453857LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x457 = -1;
	uint8_t x458 = 2U;
	int8_t x459 = -1;
	int32_t x460 = INT32_MAX;

    t113 = (x457^(x458|(x459%x460)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x461 = 0U;
	static volatile uint16_t x462 = UINT16_MAX;
	int32_t t114 = -1651943;

    t114 = (x461^(x462|(x463%x464)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x465 = UINT16_MAX;
	int32_t x466 = -19669295;
	int8_t x467 = INT8_MIN;
	static int64_t x468 = -31184LL;
	volatile int64_t t115 = -12475LL;

    t115 = (x465^(x466|(x467%x468)));

    if (t115 != -65490LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x469 = 1;
	volatile int16_t x470 = 711;
	static int32_t x471 = -206793756;
	int64_t x472 = -336421948329725LL;
	volatile int64_t t116 = 1LL;

    t116 = (x469^(x470|(x471%x472)));

    if (t116 != -206793754LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x473 = 741641837U;
	uint8_t x474 = 32U;
	int32_t x475 = INT32_MIN;
	static int32_t x476 = -106;
	volatile uint32_t t117 = 98666914U;

    t117 = (x473^(x474|(x475%x476)));

    if (t117 != 3553325531U) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x477 = -1;
	int32_t x478 = INT32_MAX;
	int64_t x479 = -1LL;
	static volatile uint64_t x480 = UINT64_MAX;
	volatile uint64_t t118 = 502687865LLU;

    t118 = (x477^(x478|(x479%x480)));

    if (t118 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x481 = 65U;
	int32_t x483 = INT32_MIN;
	volatile int16_t x484 = INT16_MIN;
	int32_t t119 = 7;

    t119 = (x481^(x482|(x483%x484)));

    if (t119 != 22152) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x485 = 4U;
	int8_t x486 = INT8_MIN;
	int64_t x487 = 0LL;
	int64_t t120 = -2751LL;

    t120 = (x485^(x486|(x487%x488)));

    if (t120 != -124LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x490 = 212987LLU;
	static uint16_t x491 = 1U;
	int32_t x492 = 346;

    t121 = (x489^(x490|(x491%x492)));

    if (t121 != 9223372036854562820LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x494 = 0U;
	static int8_t x495 = INT8_MIN;
	uint32_t x496 = UINT32_MAX;
	volatile uint32_t t122 = 3U;

    t122 = (x493^(x494|(x495%x496)));

    if (t122 != 127U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x497 = -1;
	int32_t x499 = INT32_MIN;
	static uint16_t x500 = 944U;
	uint32_t t123 = 12267909U;

    t123 = (x497^(x498|(x499%x500)));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x501 = -3649787278840196LL;
	uint32_t x502 = 1880425U;
	volatile int16_t x504 = -968;

    t124 = (x501^(x502|(x503%x504)));

    if (t124 != -3649788813586027LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x505 = -30;
	static int16_t x506 = -15345;
	int8_t x507 = INT8_MAX;
	static int64_t x508 = -19LL;

    t125 = (x505^(x506|(x507%x508)));

    if (t125 != 15341LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x509 = 14U;
	static int8_t x511 = 0;
	int16_t x512 = INT16_MIN;
	volatile uint32_t t126 = 0U;

    t126 = (x509^(x510|(x511%x512)));

    if (t126 != 2849U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x513 = -1;
	int64_t x514 = -31586LL;

    t127 = (x513^(x514|(x515%x516)));

    if (t127 != 27168LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x517 = INT8_MIN;
	uint16_t x519 = UINT16_MAX;
	uint64_t x520 = 48LLU;
	uint64_t t128 = 550998445244029494LLU;

    t128 = (x517^(x518|(x519%x520)));

    if (t128 != 127LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x521 = INT16_MIN;
	int8_t x522 = INT8_MAX;
	static volatile int32_t x523 = INT32_MIN;
	uint64_t x524 = 1509399608208LLU;
	uint64_t t129 = 620864763053004LLU;

    t129 = (x521^(x522|(x523%x524)));

    if (t129 != 18446743926361088895LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x526 = UINT16_MAX;
	int8_t x527 = INT8_MAX;

    t130 = (x525^(x526|(x527%x528)));

    if (t130 != 8182587889527LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x529 = 247710U;
	static int8_t x530 = -1;
	int16_t x531 = -168;
	uint32_t t131 = 83306527U;

    t131 = (x529^(x530|(x531%x532)));

    if (t131 != 4294719585U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x533 = -1LL;
	uint16_t x534 = 8U;
	uint16_t x535 = 492U;
	uint32_t x536 = UINT32_MAX;
	static volatile int64_t t132 = -26LL;

    t132 = (x533^(x534|(x535%x536)));

    if (t132 != -493LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x537 = 632022701;
	uint16_t x538 = 488U;
	uint8_t x540 = 12U;

    t133 = (x537^(x538|(x539%x540)));

    if (t133 != -632022699) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x541 = INT8_MAX;
	int16_t x542 = INT16_MIN;
	static int32_t x543 = INT32_MIN;
	static int16_t x544 = 6521;
	int32_t t134 = 55108;

    t134 = (x541^(x542|(x543%x544)));

    if (t134 != -951) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x545 = -8;
	volatile uint16_t x546 = 31U;
	uint8_t x547 = UINT8_MAX;
	static int16_t x548 = -1;

    t135 = (x545^(x546|(x547%x548)));

    if (t135 != -25) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x549 = 1730118330LL;
	int64_t x550 = INT64_MIN;
	volatile int32_t x551 = INT32_MAX;
	uint16_t x552 = 882U;
	static int64_t t136 = 274440398531282094LL;

    t136 = (x549^(x550|(x551%x552)));

    if (t136 != -9223372035124657971LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x553 = INT64_MIN;
	uint32_t x555 = UINT32_MAX;
	int32_t x556 = INT32_MIN;
	volatile int64_t t137 = 1094640684377690174LL;

    t137 = (x553^(x554|(x555%x556)));

    if (t137 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x557 = -48918;
	uint16_t x558 = 5U;
	volatile int32_t x559 = INT32_MIN;
	int16_t x560 = INT16_MIN;
	int32_t t138 = 821133;

    t138 = (x557^(x558|(x559%x560)));

    if (t138 != -48913) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x562 = INT8_MIN;
	int16_t x563 = -29;
	static int32_t x564 = -1;
	static int32_t t139 = 118;

    t139 = (x561^(x562|(x563%x564)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x565 = -1;
	int64_t x566 = 0LL;
	int8_t x568 = INT8_MIN;
	volatile int64_t t140 = 37739955LL;

    t140 = (x565^(x566|(x567%x568)));

    if (t140 != -21LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x571 = INT64_MIN;
	int32_t x572 = INT32_MIN;
	volatile uint64_t t141 = 0LLU;

    t141 = (x569^(x570|(x571%x572)));

    if (t141 != 15560834LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x573 = 18U;
	static uint8_t x574 = 26U;
	int64_t x575 = INT64_MIN;
	uint64_t x576 = UINT64_MAX;
	volatile uint64_t t142 = 2829785046173937LLU;

    t142 = (x573^(x574|(x575%x576)));

    if (t142 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x577 = -1;
	int64_t x579 = -1LL;
	uint8_t x580 = 32U;
	static volatile int64_t t143 = 403481LL;

    t143 = (x577^(x578|(x579%x580)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x582 = 30054;
	int32_t x583 = 227181;
	int32_t t144 = 4;

    t144 = (x581^(x582|(x583%x584)));

    if (t144 != 29988) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x585 = 1U;
	volatile uint16_t x586 = UINT16_MAX;
	uint8_t x587 = UINT8_MAX;
	int8_t x588 = INT8_MAX;

    t145 = (x585^(x586|(x587%x588)));

    if (t145 != 65534) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x589 = 7432987020210LLU;
	static int64_t x590 = -1LL;
	int16_t x591 = INT16_MAX;
	int64_t x592 = -1LL;
	static uint64_t t146 = 31LLU;

    t146 = (x589^(x590|(x591%x592)));

    if (t146 != 18446736640722531405LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x593 = -1957LL;
	uint16_t x594 = 1848U;
	int8_t x595 = -17;
	volatile int32_t x596 = INT32_MIN;
	volatile int64_t t147 = -227LL;

    t147 = (x593^(x594|(x595%x596)));

    if (t147 != 1956LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x597 = INT64_MIN;
	uint64_t x598 = 12LLU;
	static uint8_t x599 = UINT8_MAX;
	int32_t x600 = -1;
	uint64_t t148 = 297430796346966LLU;

    t148 = (x597^(x598|(x599%x600)));

    if (t148 != 9223372036854775820LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x601 = 1820325384LL;
	int8_t x604 = 1;

    t149 = (x601^(x602|(x603%x604)));

    if (t149 != 18446744071889226231LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x605 = -370276267LL;
	static int32_t x607 = INT32_MIN;
	static int64_t x608 = INT64_MIN;
	volatile int64_t t150 = 40185313LL;

    t150 = (x605^(x606|(x607%x608)));

    if (t150 != 1777209009LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x610 = -1;
	int32_t x611 = INT32_MAX;
	uint16_t x612 = 96U;
	static int32_t t151 = -949;

    t151 = (x609^(x610|(x611%x612)));

    if (t151 != 32767) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x613 = -1LL;
	volatile uint16_t x614 = 1U;
	int8_t x616 = -1;
	static int64_t t152 = 75187076LL;

    t152 = (x613^(x614|(x615%x616)));

    if (t152 != -2LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x617 = -1;
	int16_t x618 = INT16_MAX;
	static int8_t x620 = INT8_MIN;

    t153 = (x617^(x618|(x619%x620)));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x621 = INT8_MIN;
	uint8_t x622 = 7U;
	int16_t x623 = INT16_MIN;
	static uint32_t x624 = 1U;
	uint32_t t154 = 2646707U;

    t154 = (x621^(x622|(x623%x624)));

    if (t154 != 4294967175U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x625 = 50858008;
	uint64_t x626 = 121117LLU;
	volatile int64_t x627 = 721610209LL;
	uint32_t x628 = 1816357223U;

    t155 = (x625^(x626|(x627%x628)));

    if (t155 != 671872485LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x630 = -1;
	int32_t x632 = -1;
	int32_t t156 = 67;

    t156 = (x629^(x630|(x631%x632)));

    if (t156 != 8313902) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x635 = UINT8_MAX;
	volatile int32_t x636 = INT32_MIN;
	int32_t t157 = -348;

    t157 = (x633^(x634|(x635%x636)));

    if (t157 != -2147483627) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x637 = -230810;
	int64_t x638 = -70608034LL;
	uint16_t x640 = 27083U;

    t158 = (x637^(x638|(x639%x640)));

    if (t158 != 70705561LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x641 = -1;
	static int16_t x642 = -1;
	uint16_t x643 = 0U;
	uint32_t t159 = 12309U;

    t159 = (x641^(x642|(x643%x644)));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x645 = INT64_MAX;
	int8_t x646 = 9;
	static int8_t x648 = -1;
	static int64_t t160 = -34940921623341086LL;

    t160 = (x645^(x646|(x647%x648)));

    if (t160 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x649 = INT8_MAX;
	int16_t x650 = INT16_MIN;
	static int8_t x651 = 1;
	uint64_t x652 = 8592081403195225LLU;
	volatile uint64_t t161 = 46760733590199734LLU;

    t161 = (x649^(x650|(x651%x652)));

    if (t161 != 18446744073709518974LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x653 = 1LLU;
	uint8_t x654 = 2U;
	int32_t x655 = 5921;
	volatile int32_t x656 = -3823227;
	uint64_t t162 = 8LLU;

    t162 = (x653^(x654|(x655%x656)));

    if (t162 != 5922LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x657 = 15003410;
	int32_t x658 = -75059;
	int32_t x660 = INT32_MIN;

    t163 = (x657^(x658|(x659%x660)));

    if (t163 != -15003411LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x661 = 37;
	uint32_t x662 = UINT32_MAX;
	uint64_t x663 = UINT64_MAX;
	int64_t x664 = INT64_MAX;
	static volatile uint64_t t164 = 551LLU;

    t164 = (x661^(x662|(x663%x664)));

    if (t164 != 4294967258LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x665 = UINT8_MAX;
	uint32_t x666 = 2273U;
	volatile int64_t x667 = INT64_MIN;
	int64_t t165 = -25568LL;

    t165 = (x665^(x666|(x667%x668)));

    if (t165 != 2078LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x669 = 3;
	uint64_t x671 = 241027618897000484LLU;
	uint64_t x672 = 734107LLU;
	volatile uint64_t t166 = 2175854932605979911LLU;

    t166 = (x669^(x670|(x671%x672)));

    if (t166 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x673 = 1690618U;
	static int8_t x674 = INT8_MAX;
	static int64_t x675 = -1LL;
	volatile int8_t x676 = INT8_MAX;
	int64_t t167 = 2601LL;

    t167 = (x673^(x674|(x675%x676)));

    if (t167 != -1690619LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x678 = UINT64_MAX;
	int16_t x680 = INT16_MAX;
	volatile uint64_t t168 = 5271188990742877LLU;

    t168 = (x677^(x678|(x679%x680)));

    if (t168 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x681 = 733476198633119LLU;
	int64_t x682 = -1LL;
	int64_t x683 = -227504570100LL;
	int32_t x684 = -20665;
	volatile uint64_t t169 = 4005510729236LLU;

    t169 = (x681^(x682|(x683%x684)));

    if (t169 != 18446010597510918496LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x685 = UINT32_MAX;
	uint64_t x686 = 2666314489LLU;
	int64_t x687 = INT64_MIN;
	volatile int8_t x688 = INT8_MIN;

    t170 = (x685^(x686|(x687%x688)));

    if (t170 != 1628652806LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x689 = INT64_MIN;
	uint8_t x690 = 10U;
	int64_t x691 = INT64_MAX;
	volatile int64_t t171 = -114LL;

    t171 = (x689^(x690|(x691%x692)));

    if (t171 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x693 = INT32_MIN;
	int32_t x694 = -26836881;
	int64_t x695 = 209LL;
	static volatile int16_t x696 = INT16_MIN;
	volatile int64_t t172 = 186606519304688216LL;

    t172 = (x693^(x694|(x695%x696)));

    if (t172 != 2120646911LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x698 = 362357038;
	volatile int64_t x699 = -1LL;
	int16_t x700 = INT16_MAX;
	volatile int64_t t173 = -3467957227706748LL;

    t173 = (x697^(x698|(x699%x700)));

    if (t173 != 2068687286935158LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x701 = 624;
	uint16_t x702 = 4U;
	int16_t x703 = -1;
	volatile int64_t x704 = INT64_MAX;
	int64_t t174 = 547059LL;

    t174 = (x701^(x702|(x703%x704)));

    if (t174 != -625LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x705 = -1;
	uint32_t x707 = UINT32_MAX;
	volatile uint64_t x708 = 9945640LLU;
	static uint64_t t175 = 217986071134LLU;

    t175 = (x705^(x706|(x707%x708)));

    if (t175 != 18446744073701155072LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x709 = INT64_MIN;
	uint16_t x710 = 289U;
	int64_t x711 = INT64_MIN;
	uint16_t x712 = UINT16_MAX;

    t176 = (x709^(x710|(x711%x712)));

    if (t176 != 9223372036854743329LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x713 = 3681323U;
	int16_t x714 = INT16_MIN;
	int8_t x716 = INT8_MIN;
	volatile uint32_t t177 = 29297U;

    t177 = (x713^(x714|(x715%x716)));

    if (t177 != 4291284134U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x717 = -1;
	static int32_t x718 = 4;
	uint16_t x719 = UINT16_MAX;
	int32_t x720 = INT32_MAX;

    t178 = (x717^(x718|(x719%x720)));

    if (t178 != -65536) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	int16_t x722 = INT16_MAX;
	int32_t x724 = INT32_MIN;
	static volatile uint32_t t179 = 604U;

    t179 = (x721^(x722|(x723%x724)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x725 = -1;
	static volatile uint64_t x726 = UINT64_MAX;
	static uint16_t x727 = 122U;
	int32_t x728 = INT32_MIN;
	uint64_t t180 = 8596636722455521LLU;

    t180 = (x725^(x726|(x727%x728)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x729 = UINT32_MAX;
	uint16_t x730 = 464U;
	static int64_t x731 = 30LL;
	static int64_t x732 = 7974356094LL;

    t181 = (x729^(x730|(x731%x732)));

    if (t181 != 4294966817LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x734 = 4078U;
	int16_t x735 = INT16_MIN;
	uint64_t t182 = 169298007LLU;

    t182 = (x733^(x734|(x735%x736)));

    if (t182 != 40118337202LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x737 = INT64_MIN;
	uint32_t x738 = 645U;
	uint8_t x739 = 31U;
	uint16_t x740 = 111U;
	int64_t t183 = -3LL;

    t183 = (x737^(x738|(x739%x740)));

    if (t183 != -9223372036854775137LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x741 = 95LL;
	static uint32_t x742 = UINT32_MAX;
	volatile int64_t x743 = -1LL;
	uint16_t x744 = 60U;

    t184 = (x741^(x742|(x743%x744)));

    if (t184 != -96LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x745 = 0U;
	int64_t x747 = 347050267613212446LL;
	static uint32_t x748 = 81932U;
	volatile int64_t t185 = 9638LL;

    t185 = (x745^(x746|(x747%x748)));

    if (t185 != 73534LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x749 = INT8_MIN;
	int32_t x750 = INT32_MIN;
	static int16_t x751 = INT16_MIN;
	int8_t x752 = 12;
	int32_t t186 = -80;

    t186 = (x749^(x750|(x751%x752)));

    if (t186 != 120) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x753 = -1;
	int16_t x755 = -1;
	static int8_t x756 = INT8_MIN;
	int32_t t187 = 218;

    t187 = (x753^(x754|(x755%x756)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x758 = INT64_MAX;
	int64_t x760 = -1LL;

    t188 = (x757^(x758|(x759%x760)));

    if (t188 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x761 = INT32_MIN;
	uint16_t x762 = 780U;
	int8_t x763 = INT8_MIN;
	uint32_t x764 = 40970727U;

    t189 = (x761^(x762|(x763%x764)));

    if (t189 != 2181495724U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x765 = UINT64_MAX;
	int32_t x766 = -1;
	int16_t x767 = -1;
	int64_t x768 = -1LL;
	volatile uint64_t t190 = 265758149984526LLU;

    t190 = (x765^(x766|(x767%x768)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x769 = INT8_MIN;
	volatile int16_t x771 = -39;
	int16_t x772 = INT16_MIN;

    t191 = (x769^(x770|(x771%x772)));

    if (t191 != 125) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x773 = -1;
	volatile int8_t x774 = -1;
	static volatile int8_t x775 = -5;
	volatile int8_t x776 = INT8_MIN;
	static int32_t t192 = -10057072;

    t192 = (x773^(x774|(x775%x776)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x777 = UINT64_MAX;
	static volatile int32_t x778 = 1;
	volatile int16_t x779 = -1;
	int16_t x780 = -8367;
	volatile uint64_t t193 = 458LLU;

    t193 = (x777^(x778|(x779%x780)));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x781 = INT32_MIN;
	volatile uint16_t x782 = 8630U;
	int64_t x783 = 40606475983LL;
	static uint16_t x784 = UINT16_MAX;
	static int64_t t194 = -55099072852294199LL;

    t194 = (x781^(x782|(x783%x784)));

    if (t194 != -2147468354LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x787 = UINT64_MAX;
	volatile uint32_t x788 = 11U;

    t195 = (x785^(x786|(x787%x788)));

    if (t195 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x789 = -1;
	volatile int32_t x790 = INT32_MAX;
	uint64_t x791 = UINT64_MAX;
	volatile uint64_t t196 = 3933454817125402503LLU;

    t196 = (x789^(x790|(x791%x792)));

    if (t196 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	volatile int8_t x794 = INT8_MIN;
	static volatile int64_t x795 = 382116800015470LL;
	volatile int64_t t197 = 1405884LL;

    t197 = (x793^(x794|(x795%x796)));

    if (t197 != -239LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x797 = 201881U;
	int32_t x798 = -1;
	int32_t x799 = -1;
	static uint8_t x800 = 52U;
	volatile uint32_t t198 = 246221U;

    t198 = (x797^(x798|(x799%x800)));

    if (t198 != 4294765414U) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x802 = INT8_MAX;
	static int32_t x804 = INT32_MAX;

    t199 = (x801^(x802|(x803%x804)));

    if (t199 != -128) { NG(); } else { ; }
	
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

