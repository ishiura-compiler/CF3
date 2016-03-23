
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

static uint16_t x4 = UINT16_MAX;
volatile int64_t x16 = -1LL;
uint16_t x18 = 0U;
static volatile int64_t x19 = -1LL;
uint8_t x23 = UINT8_MAX;
static int16_t x24 = INT16_MIN;
static int16_t x29 = INT16_MAX;
volatile uint64_t t7 = 113LLU;
volatile int16_t x35 = INT16_MAX;
uint64_t t9 = 166LLU;
int64_t x45 = INT64_MIN;
int16_t x48 = INT16_MAX;
static int32_t x50 = INT32_MAX;
int8_t x55 = INT8_MIN;
int32_t x57 = 703;
uint8_t x59 = 1U;
static volatile int64_t x63 = -2LL;
static int8_t x64 = -1;
static int64_t x70 = -1LL;
int64_t x71 = -1LL;
uint8_t x72 = 0U;
volatile uint16_t x73 = 8359U;
int16_t x77 = 175;
static volatile int64_t x79 = -1LL;
int8_t x82 = -1;
volatile uint64_t t20 = 658298383LLU;
int16_t x95 = -77;
static uint16_t x98 = 20601U;
int64_t t26 = 4759478359935354LL;
static uint32_t x111 = 16066909U;
static int64_t x117 = INT64_MIN;
static int64_t x120 = -415LL;
volatile int64_t t29 = 1124LL;
static int8_t x122 = 3;
volatile uint16_t x128 = UINT16_MAX;
volatile uint16_t x135 = 467U;
volatile uint32_t x143 = 2U;
int32_t x145 = -453;
static int8_t x146 = INT8_MAX;
volatile int64_t x150 = INT64_MIN;
volatile int8_t x151 = INT8_MAX;
static int32_t x158 = INT32_MAX;
int16_t x159 = INT16_MIN;
int64_t t39 = -51LL;
int8_t x161 = -1;
volatile int16_t x166 = INT16_MIN;
uint32_t x173 = 839192565U;
volatile int8_t x174 = 4;
uint32_t t43 = 129610U;
uint64_t t44 = 276350741389LLU;
int64_t x182 = -1LL;
int64_t x186 = -1LL;
int32_t x195 = -112643630;
static uint64_t t49 = 332966451LLU;
int8_t x203 = INT8_MIN;
static volatile int64_t t51 = -14514091LL;
uint8_t x212 = 1U;
int16_t x217 = 2;
uint32_t x218 = UINT32_MAX;
int32_t x222 = INT32_MIN;
volatile int32_t x227 = INT32_MIN;
int8_t x228 = 47;
volatile uint64_t t57 = 3826778641438453LLU;
int16_t x233 = 8424;
volatile int64_t x237 = INT64_MIN;
volatile int32_t x239 = -1;
volatile int64_t t61 = 268474536495LL;
int32_t x251 = INT32_MIN;
static volatile int32_t t62 = 87;
volatile uint64_t t63 = 1896654883554LLU;
uint16_t x258 = 375U;
int16_t x259 = -4053;
int8_t x263 = INT8_MAX;
static uint64_t t65 = 3LLU;
static uint32_t x265 = 1881550857U;
volatile uint32_t t66 = 108454349U;
static uint32_t x280 = 2277798U;
volatile int64_t x282 = INT64_MIN;
int16_t x283 = -21;
int32_t x286 = -1;
uint8_t x294 = 2U;
static volatile uint16_t x310 = UINT16_MAX;
int32_t x314 = -95;
volatile int64_t t81 = -187962807LL;
static int16_t x329 = -1;
volatile uint32_t x332 = 61382U;
int16_t x333 = -1;
uint32_t x335 = 2U;
volatile int32_t x337 = 14777;
static volatile uint64_t t84 = 860116LLU;
int8_t x342 = -1;
uint64_t x345 = UINT64_MAX;
uint8_t x350 = 25U;
uint64_t x353 = 15451328386135914LLU;
uint64_t x356 = UINT64_MAX;
static uint8_t x362 = 31U;
volatile int32_t x363 = INT32_MIN;
int64_t x376 = INT64_MAX;
int32_t x384 = INT32_MIN;
uint16_t x389 = 0U;
int32_t x390 = INT32_MIN;
volatile int8_t x393 = INT8_MIN;
static volatile int64_t x397 = 96205957564552LL;
int16_t x406 = -3;
uint32_t x409 = 20286U;
uint8_t x411 = UINT8_MAX;
int16_t x415 = -1;
static int16_t x417 = INT16_MAX;
int64_t x421 = -1LL;
int16_t x423 = -1;
static volatile int16_t x424 = INT16_MIN;
volatile int64_t t105 = 3998401247997LL;
volatile uint64_t x430 = 224LLU;
volatile uint8_t x431 = UINT8_MAX;
volatile int64_t t109 = -2035543038563460LL;
uint8_t x446 = 10U;
volatile int64_t t111 = 22188946LL;
int8_t x450 = INT8_MIN;
uint16_t x455 = UINT16_MAX;
volatile int64_t t113 = -17410537016553LL;
int32_t x458 = -92;
int8_t x459 = -1;
int8_t x463 = INT8_MIN;
static int16_t x470 = INT16_MIN;
static int32_t x472 = 11006;
int16_t x475 = INT16_MAX;
int64_t x476 = INT64_MIN;
int32_t x477 = INT32_MAX;
int8_t x482 = -1;
uint16_t x484 = UINT16_MAX;
int32_t x491 = INT32_MAX;
volatile int64_t x500 = -341LL;
static int32_t t126 = -29681412;
int32_t x509 = INT32_MAX;
int8_t x517 = INT8_MIN;
int32_t x519 = 597;
static volatile uint32_t x523 = UINT32_MAX;
static int16_t x524 = INT16_MIN;
volatile int32_t t132 = 117864964;
volatile int32_t t133 = -859;
int64_t t134 = -2891907271106418LL;
uint16_t x544 = 7U;
volatile int8_t x551 = -7;
static int16_t x559 = -1;
static int32_t x562 = -1;
int32_t x572 = 473139;
int8_t x575 = -1;
int16_t x576 = INT16_MIN;
int16_t x579 = -1;
int8_t x581 = INT8_MAX;
uint32_t x589 = 28U;
int16_t x592 = INT16_MAX;
uint32_t t147 = 960787U;
uint64_t x596 = UINT64_MAX;
volatile uint64_t t148 = 19432061LLU;
static int8_t x598 = -4;
int64_t x601 = INT64_MAX;
uint16_t x602 = 0U;
volatile uint64_t x606 = UINT64_MAX;
volatile uint64_t t151 = 88503998415042LLU;
static int16_t x615 = -1;
int64_t x617 = INT64_MIN;
int64_t x618 = INT64_MIN;
static int64_t x619 = -1LL;
int64_t t154 = INT64_MAX;
int32_t x621 = -718545736;
static uint32_t x622 = 469U;
uint32_t x632 = 24988396U;
int32_t x634 = INT32_MIN;
int8_t x635 = INT8_MIN;
int16_t x647 = INT16_MIN;
int8_t x655 = INT8_MIN;
volatile uint32_t x666 = UINT32_MAX;
int32_t x674 = -1;
volatile uint64_t t168 = 18373LLU;
int8_t x678 = INT8_MIN;
int64_t t170 = 1387526349652934291LL;
volatile int64_t x687 = INT64_MIN;
int32_t x692 = -54099033;
volatile int64_t t172 = 172947LL;
volatile int16_t x693 = -1;
volatile uint32_t t174 = 23U;
static int32_t t175 = 4;
uint8_t x709 = 102U;
static int8_t x717 = 0;
int8_t x721 = INT8_MAX;
int8_t x724 = INT8_MIN;
int64_t x726 = 26709324LL;
int64_t x728 = -1LL;
volatile int64_t t181 = 5251706LL;
uint64_t x731 = UINT64_MAX;
uint64_t x734 = 24273951802012LLU;
int64_t x738 = INT64_MIN;
volatile uint64_t t184 = 9051LLU;
volatile int8_t x755 = INT8_MAX;
int16_t x756 = -3;
int32_t t188 = 18;
volatile int16_t x758 = INT16_MIN;
volatile int16_t x762 = INT16_MIN;
uint16_t x764 = 652U;
static int64_t x775 = -1LL;
volatile int64_t x776 = -1LL;
volatile int64_t t194 = -7LL;
static int32_t x787 = 3522;
int16_t x792 = 24;
volatile int64_t x793 = -1LL;
volatile int32_t x794 = INT32_MIN;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	static volatile int16_t x2 = -1;
	uint64_t x3 = 1903918726LLU;
	uint64_t t0 = 937348216293965576LLU;

    t0 = (x1^(x2|(x3&x4)));

    if (t0 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 20541U;
	int32_t t1 = 3;

    t1 = (x5^(x6|(x7&x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = -1;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MAX;
	static uint32_t x12 = 909078761U;
	volatile uint32_t t2 = 1738217859U;

    t2 = (x9^(x10|(x11&x12)));

    if (t2 != 22U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MAX;
	int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MIN;
	volatile int64_t t3 = 1LL;

    t3 = (x13^(x14|(x15&x16)));

    if (t3 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile int32_t x20 = INT32_MIN;
	static int64_t t4 = 70007716LL;

    t4 = (x17^(x18|(x19&x20)));

    if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	static int16_t x22 = -1;
	volatile uint64_t t5 = 1351815175LLU;

    t5 = (x21^(x22|(x23&x24)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 237693;
	static uint32_t x26 = 192280786U;
	static int16_t x27 = -1;
	int64_t x28 = -441106LL;
	int64_t t6 = -393589LL;

    t6 = (x25^(x26|(x27&x28)));

    if (t6 != -107389LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 314U;
	static uint64_t x31 = 3LLU;
	int64_t x32 = INT64_MAX;

    t7 = (x29^(x30|(x31&x32)));

    if (t7 != 32452LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = -172647LL;
	uint32_t x34 = 554092749U;
	int32_t x36 = -383;
	static volatile int64_t t8 = -9LL;

    t8 = (x33^(x34|(x35&x36)));

    if (t8 != -553933996LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 2743095LLU;
	volatile int8_t x38 = INT8_MAX;
	int32_t x39 = -1;
	uint16_t x40 = 671U;

    t9 = (x37^(x38|(x39&x40)));

    if (t9 != 2742728LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = 9U;
	uint16_t x42 = 5721U;
	int8_t x43 = -1;
	static int8_t x44 = INT8_MIN;
	int32_t t10 = 2367054;

    t10 = (x41^(x42|(x43&x44)));

    if (t10 != -48) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = 1U;
	int8_t x47 = INT8_MIN;
	int64_t t11 = -523576604LL;

    t11 = (x45^(x46|(x47&x48)));

    if (t11 != -9223372036854743167LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	uint64_t x51 = UINT64_MAX;
	int64_t x52 = INT64_MIN;
	uint64_t t12 = 57731933977LLU;

    t12 = (x49^(x50|(x51&x52)));

    if (t12 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 1045856U;
	uint8_t x54 = UINT8_MAX;
	int16_t x56 = INT16_MAX;
	uint32_t t13 = 509926U;

    t13 = (x53^(x54|(x55&x56)));

    if (t13 != 1018527U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x58 = 2393U;
	int32_t x60 = INT32_MAX;
	volatile uint32_t t14 = 15087993U;

    t14 = (x57^(x58|(x59&x60)));

    if (t14 != 3046U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 420;
	int32_t x62 = -226958048;
	int64_t t15 = -890LL;

    t15 = (x61^(x62|(x63&x64)));

    if (t15 != -422LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 106801U;
	int8_t x66 = 1;
	int8_t x67 = -1;
	int16_t x68 = 5974;
	uint32_t t16 = 5U;

    t16 = (x65^(x66|(x67&x68)));

    if (t16 != 112230U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = 5382U;
	int64_t t17 = 57LL;

    t17 = (x69^(x70|(x71&x72)));

    if (t17 != -5383LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x74 = -26694071778269LL;
	int16_t x75 = -1;
	int16_t x76 = -1;
	int64_t t18 = -77LL;

    t18 = (x73^(x74|(x75&x76)));

    if (t18 != -8360LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = INT16_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int64_t t19 = 8406020176645LL;

    t19 = (x77^(x78|(x79&x80)));

    if (t19 != -176LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	uint8_t x83 = 1U;
	static uint32_t x84 = 2U;

    t20 = (x81^(x82|(x83&x84)));

    if (t20 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 4;
	uint32_t x86 = 34U;
	static int32_t x87 = 89138;
	int64_t x88 = -1LL;
	int64_t t21 = 1380420LL;

    t21 = (x85^(x86|(x87&x88)));

    if (t21 != 89142LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 495548168U;
	int16_t x90 = -1;
	int32_t x91 = -15288;
	int8_t x92 = INT8_MAX;
	volatile uint32_t t22 = 5261600U;

    t22 = (x89^(x90|(x91&x92)));

    if (t22 != 3799419127U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = UINT32_MAX;
	int32_t x94 = -1;
	int32_t x96 = INT32_MAX;
	uint32_t t23 = 25508U;

    t23 = (x93^(x94|(x95&x96)));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 4689514LL;
	volatile uint32_t x99 = 55U;
	int16_t x100 = INT16_MAX;
	static int64_t t24 = 1863437159LL;

    t24 = (x97^(x98|(x99&x100)));

    if (t24 != 4709909LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 22966U;
	uint16_t x102 = 3U;
	volatile int64_t x103 = -1LL;
	volatile int32_t x104 = INT32_MIN;
	volatile int64_t t25 = -200922345LL;

    t25 = (x101^(x102|(x103&x104)));

    if (t25 != -2147460683LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -1LL;
	int32_t x106 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;
	static int64_t x108 = INT64_MIN;

    t26 = (x105^(x106|(x107&x108)));

    if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	static int32_t x110 = -83;
	static int16_t x112 = INT16_MAX;
	int64_t t27 = 1559413335588777LL;

    t27 = (x109^(x110|(x111&x112)));

    if (t27 != -9223372032559808515LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	static uint16_t x114 = 39U;
	volatile uint64_t x115 = UINT64_MAX;
	volatile uint8_t x116 = 2U;
	uint64_t t28 = 868218LLU;

    t28 = (x113^(x114|(x115&x116)));

    if (t28 != 18446744073709518887LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = -82298704899483697LL;
	volatile int64_t x119 = -1LL;

    t29 = (x117^(x118|(x119&x120)));

    if (t29 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	uint32_t x123 = 3697166U;
	int32_t x124 = INT32_MIN;
	static uint64_t t30 = 58LLU;

    t30 = (x121^(x122|(x123&x124)));

    if (t30 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 45536380LLU;
	int32_t x126 = -1;
	int64_t x127 = INT64_MAX;
	static uint64_t t31 = 685871337LLU;

    t31 = (x125^(x126|(x127&x128)));

    if (t31 != 18446744073664015235LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = 3354118119LLU;
	uint32_t x130 = UINT32_MAX;
	uint8_t x131 = 46U;
	int32_t x132 = -178536897;
	volatile uint64_t t32 = 1813LLU;

    t32 = (x129^(x130|(x131&x132)));

    if (t32 != 940849176LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	int32_t x134 = -217365;
	volatile int8_t x136 = -1;
	static int64_t t33 = 206271426LL;

    t33 = (x133^(x134|(x135&x136)));

    if (t33 != -9223372036854558716LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	uint64_t x139 = 1339558940026LLU;
	uint32_t x140 = 101U;
	volatile uint64_t t34 = 1LLU;

    t34 = (x137^(x138|(x139&x140)));

    if (t34 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	static int64_t x142 = 920400809732LL;
	int64_t x144 = 0LL;
	volatile int64_t t35 = 249540717906LL;

    t35 = (x141^(x142|(x143&x144)));

    if (t35 != 922140160251LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x147 = 7271;
	static uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = 35376635U;

    t36 = (x145^(x146|(x147&x148)));

    if (t36 != 4294959684U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	volatile int8_t x152 = -1;
	int64_t t37 = 1LL;

    t37 = (x149^(x150|(x151&x152)));

    if (t37 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	volatile int64_t x154 = -178256699276266950LL;
	int64_t x155 = INT64_MIN;
	volatile int64_t x156 = -1LL;
	volatile int64_t t38 = -764795577LL;

    t38 = (x153^(x154|(x155&x156)));

    if (t38 != -178256701182308923LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = 16LL;
	int8_t x160 = -1;

    t39 = (x157^(x158|(x159&x160)));

    if (t39 != -17LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x162 = 1199093416050900LLU;
	uint32_t x163 = UINT32_MAX;
	int32_t x164 = -1;
	static volatile uint64_t t40 = 3LLU;

    t40 = (x161^(x162|(x163&x164)));

    if (t40 != 18445544978970050560LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x167 = INT16_MAX;
	int8_t x168 = -37;
	volatile int64_t t41 = -235142695168311394LL;

    t41 = (x165^(x166|(x167&x168)));

    if (t41 != 9223372036854775771LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 143196095320307LLU;
	uint64_t x170 = UINT64_MAX;
	static int32_t x171 = INT32_MAX;
	uint8_t x172 = UINT8_MAX;
	uint64_t t42 = 88222440954986363LLU;

    t42 = (x169^(x170|(x171&x172)));

    if (t42 != 18446600877614231308LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MAX;

    t43 = (x173^(x174|(x175&x176)));

    if (t43 != 839217162U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = -1;
	uint64_t x178 = 103421LLU;
	volatile int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;

    t44 = (x177^(x178|(x179&x180)));

    if (t44 != 27650LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x181 = 0U;
	uint8_t x183 = 18U;
	int8_t x184 = 5;
	volatile int64_t t45 = -2480374855899LL;

    t45 = (x181^(x182|(x183&x184)));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = UINT8_MAX;
	int16_t x187 = -4;
	int8_t x188 = -1;
	volatile int64_t t46 = 11741864218LL;

    t46 = (x185^(x186|(x187&x188)));

    if (t46 != -256LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = UINT16_MAX;
	static uint64_t x190 = 126LLU;
	int32_t x191 = INT32_MIN;
	int64_t x192 = 21767014295897LL;
	uint64_t t47 = 502664204868LLU;

    t47 = (x189^(x190|(x191&x192)));

    if (t47 != 21766894321537LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = INT8_MIN;
	volatile int8_t x194 = INT8_MAX;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = INT64_MAX;

    t48 = (x193^(x194|(x195&x196)));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x197 = 1971428101876986107LLU;
	static uint16_t x198 = 1U;
	volatile int16_t x199 = INT16_MIN;
	int16_t x200 = -1;

    t49 = (x197^(x198|(x199&x200)));

    if (t49 != 16475315971832557818LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -8;
	volatile int64_t x202 = -1LL;
	volatile int32_t x204 = INT32_MIN;
	volatile int64_t t50 = 7688778713879LL;

    t50 = (x201^(x202|(x203&x204)));

    if (t50 != 7LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MAX;
	int16_t x206 = -95;
	volatile int64_t x207 = INT64_MAX;
	uint8_t x208 = 78U;

    t51 = (x205^(x206|(x207&x208)));

    if (t51 != -112LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x209 = INT16_MAX;
	volatile uint64_t x210 = UINT64_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	uint64_t t52 = 14803030718051LLU;

    t52 = (x209^(x210|(x211&x212)));

    if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = UINT64_MAX;
	uint64_t x214 = 0LLU;
	int8_t x215 = INT8_MIN;
	volatile int16_t x216 = -1;
	volatile uint64_t t53 = 200391630180LLU;

    t53 = (x213^(x214|(x215&x216)));

    if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x219 = 196064325379015150LLU;
	uint64_t x220 = 3823866390667441505LLU;
	uint64_t t54 = 399970413123609LLU;

    t54 = (x217^(x218|(x219&x220)));

    if (t54 != 4514805197045757LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int16_t x223 = -893;
	uint16_t x224 = 75U;
	int32_t t55 = 967472;

    t55 = (x221^(x222|(x223&x224)));

    if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = INT64_MAX;
	volatile uint64_t x226 = 2419335LLU;
	uint64_t t56 = 1483LLU;

    t56 = (x225^(x226|(x227&x228)));

    if (t56 != 9223372036852356472LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -1;
	volatile uint16_t x230 = 7075U;
	static int16_t x231 = -1;
	uint64_t x232 = 36LLU;

    t57 = (x229^(x230|(x231&x232)));

    if (t57 != 18446744073709544536LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x234 = -1LL;
	int16_t x235 = INT16_MIN;
	int16_t x236 = -1;
	int64_t t58 = -1LL;

    t58 = (x233^(x234|(x235&x236)));

    if (t58 != -8425LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x238 = 10892U;
	int32_t x240 = INT32_MIN;
	int64_t t59 = 446967300LL;

    t59 = (x237^(x238|(x239&x240)));

    if (t59 != -9223372034707281268LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = 19;
	int32_t x242 = -776686480;
	uint64_t x243 = 51621LLU;
	uint16_t x244 = 530U;
	volatile uint64_t t60 = 323113680983LLU;

    t60 = (x241^(x242|(x243&x244)));

    if (t60 != 18446744072932865123LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MIN;
	static uint32_t x247 = 5661U;
	int64_t x248 = INT64_MAX;

    t61 = (x245^(x246|(x247&x248)));

    if (t61 != 32669LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = INT16_MIN;
	int32_t x250 = -20383;
	uint16_t x252 = 338U;

    t62 = (x249^(x250|(x251&x252)));

    if (t62 != 12385) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	uint32_t x254 = 827U;
	uint32_t x255 = 105507U;
	static uint64_t x256 = 109277LLU;

    t63 = (x253^(x254|(x255&x256)));

    if (t63 != 18446744073709423419LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -4207934167776826048LL;
	int8_t x260 = INT8_MIN;
	volatile int64_t t64 = -3336LL;

    t64 = (x257^(x258|(x259&x260)));

    if (t64 != 4207934167776828471LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MAX;
	uint64_t x264 = UINT64_MAX;

    t65 = (x261^(x262|(x263&x264)));

    if (t65 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x266 = 3U;
	uint16_t x267 = 35U;
	static uint8_t x268 = 23U;

    t66 = (x265^(x266|(x267&x268)));

    if (t66 != 1881550858U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = -1;
	int16_t x270 = -4138;
	uint16_t x271 = 18U;
	static volatile int64_t x272 = -1LL;
	static volatile int64_t t67 = 4LL;

    t67 = (x269^(x270|(x271&x272)));

    if (t67 != 4137LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1;
	uint8_t x274 = 93U;
	static int32_t x275 = 3193;
	volatile uint64_t x276 = 264LLU;
	uint64_t t68 = 238084LLU;

    t68 = (x273^(x274|(x275&x276)));

    if (t68 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 8;
	int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	volatile int64_t t69 = 0LL;

    t69 = (x277^(x278|(x279&x280)));

    if (t69 != -82LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	uint64_t x284 = 299367782422552604LLU;
	volatile uint64_t t70 = 41LLU;

    t70 = (x281^(x282|(x283&x284)));

    if (t70 != 18147376291286999031LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x285 = UINT32_MAX;
	int8_t x287 = INT8_MIN;
	uint8_t x288 = 3U;
	volatile uint32_t t71 = 41U;

    t71 = (x285^(x286|(x287&x288)));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x289 = 3543198538LLU;
	uint8_t x290 = 72U;
	int32_t x291 = -1;
	static uint32_t x292 = 98U;
	volatile uint64_t t72 = 154229939297255LLU;

    t72 = (x289^(x290|(x291&x292)));

    if (t72 != 3543198496LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 28U;
	uint16_t x295 = 13920U;
	int64_t x296 = -3LL;
	int64_t t73 = -68638406712303LL;

    t73 = (x293^(x294|(x295&x296)));

    if (t73 != 13950LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = 98397665320758027LL;
	int32_t x298 = INT32_MAX;
	uint16_t x299 = UINT16_MAX;
	uint32_t x300 = 2U;
	int64_t t74 = 0LL;

    t74 = (x297^(x298|(x299&x300)));

    if (t74 != 98397665315001588LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = 1;
	volatile uint32_t x302 = 222U;
	volatile int64_t x303 = -1LL;
	static int16_t x304 = INT16_MAX;
	volatile int64_t t75 = -50543239414043338LL;

    t75 = (x301^(x302|(x303&x304)));

    if (t75 != 32766LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	uint64_t x306 = 130LLU;
	static int32_t x307 = 26067263;
	int16_t x308 = INT16_MAX;
	uint64_t t76 = 1LLU;

    t76 = (x305^(x306|(x307&x308)));

    if (t76 != 18446744071562084799LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	int64_t x311 = INT64_MIN;
	static volatile uint8_t x312 = UINT8_MAX;
	static int64_t t77 = -5030412LL;

    t77 = (x309^(x310|(x311&x312)));

    if (t77 != 2147418112LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	static uint32_t x315 = UINT32_MAX;
	int32_t x316 = INT32_MIN;
	volatile uint32_t t78 = 441475U;

    t78 = (x313^(x314|(x315&x316)));

    if (t78 != 94U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = 114309760452445049LLU;
	static int8_t x318 = -1;
	volatile int32_t x319 = -259230570;
	static uint64_t x320 = 51887745926806505LLU;
	uint64_t t79 = 1LLU;

    t79 = (x317^(x318|(x319&x320)));

    if (t79 != 18332434313257106566LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = INT8_MIN;
	int16_t x322 = -1;
	int64_t x323 = INT64_MAX;
	int8_t x324 = -1;
	volatile int64_t t80 = -10029163999695LL;

    t80 = (x321^(x322|(x323&x324)));

    if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MAX;
	int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	int16_t x328 = -1;

    t81 = (x325^(x326|(x327&x328)));

    if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x330 = 6567U;
	int64_t x331 = 2386465207679273186LL;
	volatile int64_t t82 = -1LL;

    t82 = (x329^(x330|(x331&x332)));

    if (t82 != -23016LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = 60U;
	volatile int8_t x336 = -1;
	volatile uint32_t t83 = 1182227U;

    t83 = (x333^(x334|(x335&x336)));

    if (t83 != 4294967233U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = INT8_MAX;
	uint64_t x339 = 3602470584891233LLU;
	volatile int16_t x340 = 2089;

    t84 = (x337^(x338|(x339&x340)));

    if (t84 != 14790LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t85 = 98949642416LLU;

    t85 = (x341^(x342|(x343&x344)));

    if (t85 != 2147483647LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x346 = 50LL;
	int32_t x347 = INT32_MIN;
	int32_t x348 = -1;
	volatile uint64_t t86 = 7710LLU;

    t86 = (x345^(x346|(x347&x348)));

    if (t86 != 2147483597LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 841720783713563859LLU;
	uint8_t x351 = UINT8_MAX;
	uint64_t x352 = 553066943463490761LLU;
	static volatile uint64_t t87 = 660415980152LLU;

    t87 = (x349^(x350|(x351&x352)));

    if (t87 != 841720783713563658LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = 0;
	uint32_t x355 = 7990U;
	uint64_t t88 = 8077488538LLU;

    t88 = (x353^(x354|(x355&x356)));

    if (t88 != 15451328386132060LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	static int16_t x358 = -1475;
	static volatile int16_t x359 = INT16_MIN;
	uint8_t x360 = 36U;
	int64_t t89 = 2756LL;

    t89 = (x357^(x358|(x359&x360)));

    if (t89 != 9223372036854774333LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	static int8_t x364 = INT8_MAX;
	int32_t t90 = -362003024;

    t90 = (x361^(x362|(x363&x364)));

    if (t90 != -97) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	int16_t x366 = -1;
	uint16_t x367 = UINT16_MAX;
	uint64_t x368 = 110332570717268475LLU;
	volatile uint64_t t91 = 123998761921LLU;

    t91 = (x365^(x366|(x367&x368)));

    if (t91 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -3;
	volatile int16_t x370 = -1;
	int32_t x371 = -1;
	int64_t x372 = INT64_MIN;
	int64_t t92 = 0LL;

    t92 = (x369^(x370|(x371&x372)));

    if (t92 != 2LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	static uint32_t x374 = 140807U;
	static volatile int16_t x375 = -1;
	int64_t t93 = -2710742020562LL;

    t93 = (x373^(x374|(x375&x376)));

    if (t93 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	int64_t x378 = 40957822835LL;
	int16_t x379 = INT16_MIN;
	int16_t x380 = -1;
	volatile int64_t t94 = 747907619373119758LL;

    t94 = (x377^(x378|(x379&x380)));

    if (t94 != 14476LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = INT8_MIN;
	uint64_t x382 = UINT64_MAX;
	static int16_t x383 = -50;
	volatile uint64_t t95 = 41568815410806426LLU;

    t95 = (x381^(x382|(x383&x384)));

    if (t95 != 127LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = -1;
	int8_t x386 = 1;
	uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 1U;
	int32_t t96 = -181943;

    t96 = (x385^(x386|(x387&x388)));

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x391 = INT32_MIN;
	static uint8_t x392 = UINT8_MAX;
	int32_t t97 = INT32_MIN;

    t97 = (x389^(x390|(x391&x392)));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MIN;
	volatile uint32_t t98 = 672282U;

    t98 = (x393^(x394|(x395&x396)));

    if (t98 != 127U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x398 = 26U;
	int16_t x399 = INT16_MAX;
	int8_t x400 = INT8_MAX;
	volatile int64_t t99 = -512395623628309826LL;

    t99 = (x397^(x398|(x399&x400)));

    if (t99 != 96205957564663LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MIN;
	volatile int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MAX;
	volatile int32_t t100 = -1;

    t100 = (x401^(x402|(x403&x404)));

    if (t100 != 2147451007) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 15334U;
	uint32_t x407 = 7721U;
	uint64_t x408 = 91LLU;
	uint64_t t101 = 37588970107063LLU;

    t101 = (x405^(x406|(x407&x408)));

    if (t101 != 18446744073709536283LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x410 = INT8_MIN;
	volatile int8_t x412 = INT8_MIN;
	uint32_t t102 = 276U;

    t102 = (x409^(x410|(x411&x412)));

    if (t102 != 4294947006U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -8;
	int16_t x414 = -1;
	int32_t x416 = INT32_MIN;
	int32_t t103 = 136587581;

    t103 = (x413^(x414|(x415&x416)));

    if (t103 != 7) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x418 = 993132289500LLU;
	int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MAX;
	static uint64_t t104 = 6013828LLU;

    t104 = (x417^(x418|(x419&x420)));

    if (t104 != 993132281891LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x422 = 0U;

    t105 = (x421^(x422|(x423&x424)));

    if (t105 != 32767LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x425 = 520506LLU;
	int16_t x426 = 1;
	uint32_t x427 = 3U;
	int32_t x428 = -1;
	static uint64_t t106 = 410944LLU;

    t106 = (x425^(x426|(x427&x428)));

    if (t106 != 520505LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 1LLU;
	uint8_t x432 = 2U;
	volatile uint64_t t107 = 18218198504388LLU;

    t107 = (x429^(x430|(x431&x432)));

    if (t107 != 227LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x433 = 2045587279521LLU;
	int64_t x434 = INT64_MIN;
	uint8_t x435 = 58U;
	uint64_t x436 = 761771076944LLU;
	static uint64_t t108 = 313843483454083LLU;

    t108 = (x433^(x434|(x435&x436)));

    if (t108 != 9223374082442055345LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x437 = 54U;
	int16_t x438 = -21;
	volatile int64_t x439 = INT64_MIN;
	uint32_t x440 = 1966003U;

    t109 = (x437^(x438|(x439&x440)));

    if (t109 != -35LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	int16_t x442 = -1;
	uint16_t x443 = 52U;
	uint8_t x444 = 2U;
	int64_t t110 = INT64_MAX;

    t110 = (x441^(x442|(x443&x444)));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1383LL;
	uint8_t x447 = UINT8_MAX;
	int64_t x448 = -740LL;

    t111 = (x445^(x446|(x447&x448)));

    if (t111 != -1401LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MIN;
	int8_t x451 = INT8_MIN;
	int8_t x452 = INT8_MIN;
	int32_t t112 = 50147129;

    t112 = (x449^(x450|(x451&x452)));

    if (t112 != 2147483520) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	int64_t x454 = -699LL;
	volatile uint32_t x456 = 7450U;

    t113 = (x453^(x454|(x455&x456)));

    if (t113 != 735LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = INT64_MIN;
	volatile uint8_t x460 = 57U;
	int64_t t114 = 5366949LL;

    t114 = (x457^(x458|(x459&x460)));

    if (t114 != 9223372036854775741LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	int32_t x462 = INT32_MIN;
	static int64_t x464 = 267929099404314LL;
	uint64_t t115 = 15LLU;

    t115 = (x461^(x462|(x463&x464)));

    if (t115 != 1697938431LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	int16_t x466 = INT16_MIN;
	uint64_t x467 = 5583534765LLU;
	int16_t x468 = -6679;
	uint64_t t116 = 658LLU;

    t116 = (x465^(x466|(x467&x468)));

    if (t116 != 8022LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x469 = UINT16_MAX;
	int8_t x471 = INT8_MIN;
	static volatile int32_t t117 = 53;

    t117 = (x469^(x470|(x471&x472)));

    if (t117 != -43649) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int32_t x474 = -496;
	volatile int64_t t118 = -2145133014088716431LL;

    t118 = (x473^(x474|(x475&x476)));

    if (t118 != 400LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = INT16_MIN;
	int64_t x479 = INT64_MIN;
	static int16_t x480 = INT16_MAX;
	int64_t t119 = -740LL;

    t119 = (x477^(x478|(x479&x480)));

    if (t119 != -2147450881LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 63U;
	int16_t x483 = -1;
	volatile int32_t t120 = -1;

    t120 = (x481^(x482|(x483&x484)));

    if (t120 != -64) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 7435366U;
	int16_t x486 = INT16_MIN;
	uint64_t x487 = UINT64_MAX;
	static volatile uint8_t x488 = UINT8_MAX;
	volatile uint64_t t121 = 7982485257231961166LLU;

    t121 = (x485^(x486|(x487&x488)));

    if (t121 != 18446744073702143129LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x489 = 54090655145LLU;
	static int16_t x490 = -1;
	int16_t x492 = INT16_MAX;
	uint64_t t122 = 3394440479482569058LLU;

    t122 = (x489^(x490|(x491&x492)));

    if (t122 != 18446744019618896470LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x493 = 10U;
	int32_t x494 = -41;
	int32_t x495 = INT32_MIN;
	volatile uint16_t x496 = UINT16_MAX;
	volatile int32_t t123 = 14;

    t123 = (x493^(x494|(x495&x496)));

    if (t123 != -35) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = 23806035;
	uint8_t x498 = UINT8_MAX;
	volatile int32_t x499 = INT32_MIN;
	int64_t t124 = -1192067281938LL;

    t124 = (x497^(x498|(x499&x500)));

    if (t124 != -2123677524LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	int64_t x502 = 342000LL;
	static int64_t x503 = INT64_MAX;
	uint32_t x504 = 162U;
	int64_t t125 = 12369LL;

    t125 = (x501^(x502|(x503&x504)));

    if (t125 != 341773LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 44;
	volatile int8_t x506 = 39;
	uint8_t x507 = 6U;
	int8_t x508 = -1;

    t126 = (x505^(x506|(x507&x508)));

    if (t126 != 11) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x510 = INT16_MAX;
	int8_t x511 = INT8_MAX;
	static int16_t x512 = INT16_MIN;
	volatile int32_t t127 = 83187;

    t127 = (x509^(x510|(x511&x512)));

    if (t127 != 2147450880) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x513 = 2023U;
	int8_t x514 = INT8_MIN;
	uint32_t x515 = UINT32_MAX;
	int8_t x516 = 1;
	volatile uint32_t t128 = 3337U;

    t128 = (x513^(x514|(x515&x516)));

    if (t128 != 4294965350U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x518 = 3105979132728503LL;
	uint16_t x520 = 1U;
	static volatile int64_t t129 = 37525304225041LL;

    t129 = (x517^(x518|(x519&x520)));

    if (t129 != -3105979132728521LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = 61;
	int32_t x522 = INT32_MIN;
	uint32_t t130 = 1U;

    t130 = (x521^(x522|(x523&x524)));

    if (t130 != 4294934589U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = -1762036557127LL;
	int8_t x526 = -2;
	int8_t x527 = INT8_MAX;
	int16_t x528 = 3;
	int64_t t131 = -996566LL;

    t131 = (x525^(x526|(x527&x528)));

    if (t131 != 1762036557126LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int8_t x530 = INT8_MAX;
	int16_t x531 = INT16_MAX;
	static int16_t x532 = -1;

    t132 = (x529^(x530|(x531&x532)));

    if (t132 != 32768) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = UINT16_MAX;
	int32_t x534 = INT32_MIN;
	uint16_t x535 = 162U;
	int16_t x536 = 903;

    t133 = (x533^(x534|(x535&x536)));

    if (t133 != -2147418243) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x538 = INT64_MIN;
	int32_t x539 = -1;
	int32_t x540 = -1;

    t134 = (x537^(x538|(x539&x540)));

    if (t134 != 127LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	uint16_t x542 = UINT16_MAX;
	static uint64_t x543 = UINT64_MAX;
	volatile uint64_t t135 = 850602443LLU;

    t135 = (x541^(x542|(x543&x544)));

    if (t135 != 18446744073709486207LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = INT64_MIN;
	static uint16_t x546 = UINT16_MAX;
	int32_t x547 = -6;
	int64_t x548 = 15505798LL;
	static volatile int64_t t136 = -248000504728410666LL;

    t136 = (x545^(x546|(x547&x548)));

    if (t136 != -9223372036839243777LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 101U;
	static uint8_t x550 = 3U;
	uint64_t x552 = 91296914842444212LLU;
	static volatile uint64_t t137 = 159915588407267LLU;

    t137 = (x549^(x550|(x551&x552)));

    if (t137 != 91296914842444246LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = INT16_MIN;
	static uint8_t x554 = UINT8_MAX;
	static volatile int64_t x555 = -1LL;
	int32_t x556 = -8;
	int64_t t138 = 175345LL;

    t138 = (x553^(x554|(x555&x556)));

    if (t138 != 32767LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MAX;
	volatile int8_t x558 = -1;
	static int64_t x560 = INT64_MIN;
	volatile int64_t t139 = INT64_MIN;

    t139 = (x557^(x558|(x559&x560)));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = 58LL;
	volatile int32_t x563 = INT32_MIN;
	uint8_t x564 = 0U;
	volatile int64_t t140 = 656857266181LL;

    t140 = (x561^(x562|(x563&x564)));

    if (t140 != -59LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 2U;
	int8_t x566 = 41;
	int64_t x567 = -1LL;
	uint8_t x568 = 0U;
	int64_t t141 = -16294LL;

    t141 = (x565^(x566|(x567&x568)));

    if (t141 != 43LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = INT16_MIN;
	int8_t x570 = -13;
	static uint32_t x571 = UINT32_MAX;
	volatile uint32_t t142 = 31U;

    t142 = (x569^(x570|(x571&x572)));

    if (t142 != 32755U) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x573 = 52252946U;
	int32_t x574 = 1;
	uint32_t t143 = 17U;

    t143 = (x573^(x574|(x575&x576)));

    if (t143 != 4242723091U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 1U;
	static uint8_t x578 = 24U;
	volatile int64_t x580 = INT64_MIN;
	int64_t t144 = 1103983428175LL;

    t144 = (x577^(x578|(x579&x580)));

    if (t144 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x582 = INT64_MIN;
	static int16_t x583 = -1;
	int64_t x584 = INT64_MIN;
	int64_t t145 = 16152594LL;

    t145 = (x581^(x582|(x583&x584)));

    if (t145 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int64_t x586 = INT64_MIN;
	volatile int32_t x587 = INT32_MIN;
	volatile uint64_t x588 = UINT64_MAX;
	static uint64_t t146 = 8263560064LLU;

    t146 = (x585^(x586|(x587&x588)));

    if (t146 != 2147450880LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x590 = -1;
	uint32_t x591 = 255U;

    t147 = (x589^(x590|(x591&x592)));

    if (t147 != 4294967267U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -7495;
	static volatile uint16_t x594 = 11U;
	uint8_t x595 = 59U;

    t148 = (x593^(x594|(x595&x596)));

    if (t148 != 18446744073709544066LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 46;
	volatile int64_t x599 = INT64_MIN;
	int64_t x600 = -3381788LL;
	volatile int64_t t149 = 130919723515LL;

    t149 = (x597^(x598|(x599&x600)));

    if (t149 != -46LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x603 = INT16_MIN;
	static uint8_t x604 = UINT8_MAX;
	static volatile int64_t t150 = INT64_MAX;

    t150 = (x601^(x602|(x603&x604)));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int32_t x607 = 766544;
	uint64_t x608 = 2408573365LLU;

    t151 = (x605^(x606|(x607&x608)));

    if (t151 != 2147483647LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	uint32_t x610 = UINT32_MAX;
	static int64_t x611 = INT64_MIN;
	static int8_t x612 = INT8_MIN;
	volatile int64_t t152 = 47LL;

    t152 = (x609^(x610|(x611&x612)));

    if (t152 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = 8;
	static int64_t x614 = -101719371181LL;
	int64_t x616 = -125LL;
	static int64_t t153 = 15114554863866332LL;

    t153 = (x613^(x614|(x615&x616)));

    if (t153 != -37LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x620 = -1;

    t154 = (x617^(x618|(x619&x620)));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x623 = INT64_MIN;
	int8_t x624 = -2;
	volatile int64_t t155 = -16213890764507LL;

    t155 = (x621^(x622|(x623&x624)));

    if (t155 != 9223372036136230253LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -13;
	uint16_t x626 = UINT16_MAX;
	int8_t x627 = INT8_MAX;
	static int16_t x628 = INT16_MIN;
	int32_t t156 = -1;

    t156 = (x625^(x626|(x627&x628)));

    if (t156 != -65524) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -1LL;
	static int8_t x630 = -2;
	int16_t x631 = INT16_MIN;
	static int64_t t157 = -27615093368019615LL;

    t157 = (x629^(x630|(x631&x632)));

    if (t157 != -4294967295LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x633 = 432U;
	uint64_t x636 = 46000LLU;
	volatile uint64_t t158 = 57LLU;

    t158 = (x633^(x634|(x635&x636)));

    if (t158 != 18446744071562113584LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = 61;
	int8_t x638 = -15;
	static uint8_t x639 = 11U;
	uint8_t x640 = 0U;
	int32_t t159 = 7505648;

    t159 = (x637^(x638|(x639&x640)));

    if (t159 != -52) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -348;
	int32_t x642 = -1073047019;
	int64_t x643 = INT64_MIN;
	int64_t x644 = -1LL;
	int64_t t160 = 114732389LL;

    t160 = (x641^(x642|(x643&x644)));

    if (t160 != 1073046705LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -79;
	int16_t x646 = -55;
	int64_t x648 = INT64_MIN;
	volatile int64_t t161 = 143327440740LL;

    t161 = (x645^(x646|(x647&x648)));

    if (t161 != 120LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x649 = UINT32_MAX;
	uint32_t x650 = 2U;
	volatile uint32_t x651 = UINT32_MAX;
	int32_t x652 = INT32_MIN;
	uint32_t t162 = 125216U;

    t162 = (x649^(x650|(x651&x652)));

    if (t162 != 2147483645U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 408U;
	uint8_t x654 = UINT8_MAX;
	static uint32_t x656 = 737311U;
	uint32_t t163 = 8377U;

    t163 = (x653^(x654|(x655&x656)));

    if (t163 != 737639U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -1;
	static uint32_t x658 = 0U;
	uint64_t x659 = 3185133LLU;
	int16_t x660 = 93;
	volatile uint64_t t164 = 0LLU;

    t164 = (x657^(x658|(x659&x660)));

    if (t164 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MAX;
	int32_t x662 = 2909;
	int64_t x663 = -1LL;
	static uint32_t x664 = UINT32_MAX;
	int64_t t165 = 2119450850821829LL;

    t165 = (x661^(x662|(x663&x664)));

    if (t165 != 4294967168LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = -933934;
	volatile uint8_t x667 = 67U;
	int8_t x668 = INT8_MIN;
	volatile uint32_t t166 = 205590U;

    t166 = (x665^(x666|(x667&x668)));

    if (t166 != 933933U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 0LLU;
	int64_t x670 = INT64_MIN;
	int32_t x671 = INT32_MAX;
	volatile int8_t x672 = -1;
	uint64_t t167 = 2512626LLU;

    t167 = (x669^(x670|(x671&x672)));

    if (t167 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint64_t x673 = UINT64_MAX;
	uint64_t x675 = 7898097304183087313LLU;
	static int8_t x676 = 5;

    t168 = (x673^(x674|(x675&x676)));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -4563;
	static int32_t x679 = INT32_MIN;
	static volatile uint64_t x680 = UINT64_MAX;
	volatile uint64_t t169 = 51073394LLU;

    t169 = (x677^(x678|(x679&x680)));

    if (t169 != 4525LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	int64_t x682 = INT64_MIN;
	volatile uint16_t x683 = 1071U;
	uint8_t x684 = UINT8_MAX;

    t170 = (x681^(x682|(x683&x684)));

    if (t170 != 9223372036854743087LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MAX;
	static int8_t x686 = INT8_MIN;
	uint8_t x688 = UINT8_MAX;
	int64_t t171 = -26455566762LL;

    t171 = (x685^(x686|(x687&x688)));

    if (t171 != -32641LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = 113LL;
	static uint32_t x690 = UINT32_MAX;
	static int64_t x691 = INT64_MIN;

    t172 = (x689^(x690|(x691&x692)));

    if (t172 != -9223372032559808626LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MIN;
	int8_t x695 = -1;
	uint16_t x696 = 3334U;
	int64_t t173 = -29169770LL;

    t173 = (x693^(x694|(x695&x696)));

    if (t173 != 9223372036854772473LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = UINT32_MAX;
	volatile uint16_t x698 = 4393U;
	int32_t x699 = -1;
	uint8_t x700 = 7U;

    t174 = (x697^(x698|(x699&x700)));

    if (t174 != 4294962896U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int8_t x702 = INT8_MIN;
	uint16_t x703 = 269U;
	static volatile int32_t x704 = INT32_MIN;

    t175 = (x701^(x702|(x703&x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -14;
	uint32_t x706 = UINT32_MAX;
	volatile int32_t x707 = INT32_MAX;
	int16_t x708 = -1;
	volatile uint32_t t176 = 463573U;

    t176 = (x705^(x706|(x707&x708)));

    if (t176 != 13U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x710 = INT64_MIN;
	uint64_t x711 = UINT64_MAX;
	uint16_t x712 = UINT16_MAX;
	uint64_t t177 = 455176801627727935LLU;

    t177 = (x709^(x710|(x711&x712)));

    if (t177 != 9223372036854841241LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 5700334073LLU;
	static uint16_t x714 = 21598U;
	static uint32_t x715 = UINT32_MAX;
	int16_t x716 = 2046;
	uint64_t t178 = 351LLU;

    t178 = (x713^(x714|(x715&x716)));

    if (t178 != 5700347399LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x718 = 194049U;
	uint16_t x719 = 97U;
	int16_t x720 = 118;
	static uint32_t t179 = 334U;

    t179 = (x717^(x718|(x719&x720)));

    if (t179 != 194145U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = INT8_MIN;
	static uint8_t x723 = UINT8_MAX;
	volatile int32_t t180 = 3;

    t180 = (x721^(x722|(x723&x724)));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x727 = INT32_MIN;

    t181 = (x725^(x726|(x727&x728)));

    if (t181 != 9223372034734001484LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	volatile int16_t x730 = -1;
	volatile uint8_t x732 = UINT8_MAX;
	volatile uint64_t t182 = 233LLU;

    t182 = (x729^(x730|(x731&x732)));

    if (t182 != 32767LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = -1;
	int64_t x735 = 3799LL;
	volatile int64_t x736 = INT64_MIN;
	uint64_t t183 = 660587059724LLU;

    t183 = (x733^(x734|(x735&x736)));

    if (t183 != 18446719799757749603LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x737 = 72071170;
	uint64_t x739 = 1382999619016LLU;
	static uint16_t x740 = 3U;

    t184 = (x737^(x738|(x739&x740)));

    if (t184 != 9223372036926846978LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 30762007886635LLU;
	static uint8_t x742 = UINT8_MAX;
	static uint64_t x743 = UINT64_MAX;
	uint32_t x744 = 21939U;
	volatile uint64_t t185 = 5131058305LLU;

    t185 = (x741^(x742|(x743&x744)));

    if (t185 != 30762007867092LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x745 = INT64_MIN;
	static uint32_t x746 = UINT32_MAX;
	uint16_t x747 = UINT16_MAX;
	static uint64_t x748 = 337LLU;
	volatile uint64_t t186 = 2537LLU;

    t186 = (x745^(x746|(x747&x748)));

    if (t186 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x749 = UINT64_MAX;
	uint8_t x750 = 6U;
	static int32_t x751 = INT32_MAX;
	uint16_t x752 = 62U;
	volatile uint64_t t187 = 5389874969703475479LLU;

    t187 = (x749^(x750|(x751&x752)));

    if (t187 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = -11973;
	int32_t x754 = -1111895;

    t188 = (x753^(x754|(x755&x756)));

    if (t188 != 1104326) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	int16_t x759 = INT16_MAX;
	int8_t x760 = INT8_MIN;
	int32_t t189 = 350783;

    t189 = (x757^(x758|(x759&x760)));

    if (t189 != 32640) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = INT32_MAX;
	int16_t x763 = -1;
	volatile int32_t t190 = -62967138;

    t190 = (x761^(x762|(x763&x764)));

    if (t190 != -2147451533) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x765 = -1;
	int64_t x766 = -262071698LL;
	int8_t x767 = INT8_MIN;
	int64_t x768 = INT64_MIN;
	int64_t t191 = 2978667LL;

    t191 = (x765^(x766|(x767&x768)));

    if (t191 != 262071697LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = INT8_MIN;
	int32_t x770 = 13623;
	int8_t x771 = INT8_MIN;
	uint8_t x772 = 11U;
	volatile int32_t t192 = -8;

    t192 = (x769^(x770|(x771&x772)));

    if (t192 != -13641) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MIN;
	int8_t x774 = INT8_MIN;
	int64_t t193 = 330001893LL;

    t193 = (x773^(x774|(x775&x776)));

    if (t193 != 2147483647LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x777 = -6655;
	int64_t x778 = 1102LL;
	int8_t x779 = -1;
	int16_t x780 = INT16_MIN;

    t194 = (x777^(x778|(x779&x780)));

    if (t194 != 25167LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 1192LLU;
	int8_t x782 = INT8_MIN;
	static int16_t x783 = -17;
	uint8_t x784 = UINT8_MAX;
	volatile uint64_t t195 = 92020347LLU;

    t195 = (x781^(x782|(x783&x784)));

    if (t195 != 18446744073709550407LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = -1;
	int8_t x786 = -1;
	uint8_t x788 = UINT8_MAX;
	int32_t t196 = -250177968;

    t196 = (x785^(x786|(x787&x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	uint8_t x790 = 49U;
	int16_t x791 = -1109;
	volatile int64_t t197 = -6027LL;

    t197 = (x789^(x790|(x791&x792)));

    if (t197 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x795 = -13;
	int32_t x796 = -1;
	static int64_t t198 = -326378432LL;

    t198 = (x793^(x794|(x795&x796)));

    if (t198 != 12LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 27U;
	static uint32_t x798 = UINT32_MAX;
	uint8_t x799 = UINT8_MAX;
	uint8_t x800 = UINT8_MAX;
	volatile uint32_t t199 = 0U;

    t199 = (x797^(x798|(x799&x800)));

    if (t199 != 4294967268U) { NG(); } else { ; }
	
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

