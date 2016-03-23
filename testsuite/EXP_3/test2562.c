
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

volatile int8_t x2 = INT8_MIN;
int8_t x4 = INT8_MAX;
uint64_t x6 = UINT64_MAX;
int16_t x11 = -1;
static int8_t x12 = INT8_MAX;
int8_t x20 = -1;
int8_t x22 = INT8_MAX;
static uint64_t x28 = UINT64_MAX;
uint64_t t6 = 5LLU;
uint32_t x30 = 60013777U;
int64_t x46 = INT64_MAX;
uint32_t x50 = 299U;
int16_t x53 = INT16_MIN;
int64_t x54 = -4920270811381LL;
int8_t x62 = -1;
volatile int32_t t14 = 1;
int64_t x72 = INT64_MAX;
volatile int16_t x75 = -553;
volatile int32_t t17 = 3815;
static int32_t x83 = 26158230;
static int16_t x84 = 436;
uint32_t x85 = 1U;
volatile int64_t t20 = -121LL;
static uint64_t x92 = 515828103854118063LLU;
volatile int32_t t22 = 0;
uint64_t x107 = 215571LLU;
volatile int32_t x109 = -1;
uint16_t x111 = UINT16_MAX;
volatile uint64_t t26 = 29710829505LLU;
uint16_t x120 = UINT16_MAX;
int64_t x122 = INT64_MAX;
int32_t x128 = -1;
uint64_t x140 = UINT64_MAX;
volatile int8_t x143 = INT8_MIN;
static uint64_t x145 = 601364384593LLU;
static int8_t x147 = INT8_MIN;
volatile int64_t t35 = -44210165502674381LL;
static int16_t x164 = INT16_MIN;
volatile int16_t x165 = -1;
volatile int64_t x167 = INT64_MAX;
static uint64_t x171 = UINT64_MAX;
static uint16_t x173 = 21272U;
static uint32_t x174 = 44881U;
static int32_t x188 = INT32_MAX;
uint8_t x190 = 7U;
static uint32_t x191 = UINT32_MAX;
volatile int16_t x192 = INT16_MIN;
uint64_t x200 = UINT64_MAX;
int16_t x209 = -1;
int64_t x225 = INT64_MIN;
int32_t x227 = -1;
int64_t x228 = INT64_MIN;
volatile uint16_t x233 = 0U;
int32_t x235 = INT32_MAX;
volatile uint16_t x237 = 0U;
static int32_t x238 = -1;
static volatile int64_t t55 = -32LL;
static int64_t t57 = -26294LL;
volatile uint32_t t60 = 170058373U;
int16_t x267 = INT16_MAX;
int16_t x272 = -30;
uint64_t x277 = UINT64_MAX;
uint16_t x296 = 67U;
uint8_t x304 = 70U;
static int32_t t69 = 0;
volatile uint32_t x312 = 52U;
volatile int32_t x319 = INT32_MIN;
static int16_t x325 = INT16_MIN;
static uint64_t x333 = 3002600825985978LLU;
uint64_t t75 = 265259586963573020LLU;
volatile uint64_t t76 = 112917655266809LLU;
uint32_t x344 = UINT32_MAX;
uint64_t t77 = 6061842446145LLU;
uint64_t x352 = 183LLU;
int16_t x356 = INT16_MIN;
volatile int64_t x357 = INT64_MIN;
int16_t x360 = -30;
int32_t x367 = INT32_MIN;
int64_t x368 = -1LL;
uint32_t x375 = 1U;
uint64_t x384 = UINT64_MAX;
uint64_t x385 = 41553307827LLU;
volatile int64_t t90 = 16019LL;
uint8_t x397 = UINT8_MAX;
static volatile int64_t t91 = -345983623LL;
uint64_t x403 = 43656408231745956LLU;
int64_t t93 = -376892196291831659LL;
static volatile int8_t x411 = INT8_MIN;
volatile int64_t x415 = -1LL;
uint64_t x425 = 9181144LLU;
static uint64_t x426 = UINT64_MAX;
int64_t x429 = 7LL;
volatile int64_t t99 = -15405LL;
int16_t x437 = -88;
uint32_t t102 = 45181U;
static volatile uint64_t t103 = 31393934119LLU;
int32_t x462 = -15962;
int16_t x467 = 123;
int32_t x475 = INT32_MIN;
volatile uint16_t x486 = 1298U;
uint8_t x488 = UINT8_MAX;
uint16_t x497 = UINT16_MAX;
static uint8_t x514 = UINT8_MAX;
int64_t x515 = 11LL;
int16_t x516 = INT16_MIN;
volatile int16_t x523 = 114;
static int16_t x525 = -1;
static volatile int64_t t119 = 4156396617965917LL;
int64_t x535 = -286707LL;
uint64_t t120 = 1323470234439934899LLU;
int32_t x541 = 3209;
int16_t x542 = INT16_MIN;
uint16_t x549 = 27916U;
static int64_t x554 = 1LL;
int64_t x556 = -647288LL;
static volatile int64_t t125 = 1LL;
uint32_t x562 = UINT32_MAX;
static int16_t x563 = -29;
volatile uint32_t t127 = 47U;
static uint64_t x573 = 6LLU;
int8_t x580 = -1;
int64_t x585 = INT64_MIN;
static volatile int64_t x587 = 1426168031336252846LL;
static uint16_t x595 = 0U;
uint64_t x596 = 0LLU;
int64_t t136 = -578713602085970LL;
static int16_t x615 = INT16_MIN;
uint64_t t140 = 15287779400013LLU;
volatile uint64_t t142 = 83423794446186451LLU;
volatile uint64_t t143 = 40400051949LLU;
volatile int32_t x643 = INT32_MIN;
uint64_t t145 = 3120485829LLU;
uint64_t x650 = UINT64_MAX;
volatile int16_t x657 = INT16_MIN;
int16_t x662 = -5153;
uint16_t x667 = 10U;
uint32_t t150 = 35U;
int8_t x670 = 3;
uint64_t x679 = 4016LLU;
volatile int32_t x687 = INT32_MIN;
uint64_t t155 = 50967LLU;
int8_t x691 = -18;
int32_t x702 = INT32_MIN;
int64_t t160 = -56200714848LL;
static volatile int8_t x710 = INT8_MIN;
static volatile int64_t t161 = 5869354557113LL;
static uint8_t x713 = 3U;
static int16_t x714 = INT16_MIN;
uint8_t x718 = 1U;
int64_t t165 = -33295132827768LL;
static uint8_t x729 = UINT8_MAX;
static uint16_t x730 = 947U;
int8_t x735 = 5;
static int32_t x736 = -1;
volatile int32_t t167 = 22758792;
int16_t x737 = -6562;
volatile int64_t t169 = -87LL;
uint64_t x748 = 262555720504LLU;
uint16_t x751 = 6U;
int8_t x753 = -1;
static int8_t x755 = INT8_MIN;
static int8_t x767 = -1;
int32_t t175 = -9;
uint64_t x773 = 6227851LLU;
uint64_t t177 = 22595600996LLU;
int8_t x785 = INT8_MIN;
int16_t x789 = -1;
static volatile uint16_t x790 = 5U;
int64_t x794 = INT64_MIN;
uint16_t x795 = 711U;
static int64_t t182 = -752295666LL;
static volatile int64_t x804 = -1LL;
uint8_t x807 = 20U;
static int16_t x813 = -81;
volatile uint64_t x816 = 991342389573773LLU;
volatile int64_t x824 = INT64_MAX;
int32_t x826 = -1;
uint32_t x827 = 978580U;
int8_t x831 = 1;
volatile uint16_t x832 = 77U;
static int8_t x849 = 13;
uint16_t x851 = 22271U;
volatile uint32_t t194 = 51U;
uint16_t x860 = 1U;
int64_t t196 = -209053LL;
static int16_t x864 = INT16_MIN;
volatile int64_t t197 = -1111919205980105LL;
volatile int32_t t198 = -1793;
static uint16_t x871 = 2373U;


void f0(void) {
    	uint32_t x1 = 1023U;
	uint64_t x3 = 857920901LLU;
	uint64_t t0 = 1675LLU;

    t0 = ((x1+x2)^(x3^x4));

    if (t0 != 857921157LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 677583U;
	int32_t x7 = 1;
	int16_t x8 = -1;
	uint64_t t1 = 31780LLU;

    t1 = ((x5+x6)^(x7^x8));

    if (t1 != 18446744073708874032LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = UINT16_MAX;
	uint64_t x10 = 2727119618LLU;
	volatile uint64_t t2 = 7025618507826083337LLU;

    t2 = ((x9+x10)^(x11^x12));

    if (t2 != 18446744070982366337LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 16047212U;
	volatile int8_t x14 = INT8_MAX;
	volatile int8_t x15 = INT8_MIN;
	int32_t x16 = -7;
	uint32_t t3 = 952260012U;

    t3 = ((x13+x14)^(x15^x16));

    if (t3 != 16047250U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 5185434U;
	int16_t x18 = -34;
	int64_t x19 = INT64_MIN;
	volatile int64_t t4 = -2481546957262LL;

    t4 = ((x17+x18)^(x19^x20));

    if (t4 != 9223372036849590407LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -645609062356LL;
	int32_t x23 = INT32_MIN;
	uint8_t x24 = UINT8_MAX;
	volatile int64_t t5 = -199285074437502LL;

    t5 = ((x21+x22)^(x23^x24));

    if (t5 != 645028610132LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	uint16_t x26 = 22U;
	static int8_t x27 = INT8_MIN;

    t6 = ((x25+x26)^(x27^x28));

    if (t6 != 106LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = 1116667;
	volatile int32_t x31 = -1;
	static volatile uint8_t x32 = 2U;
	volatile uint32_t t7 = 3759517U;

    t7 = ((x29+x30)^(x31^x32));

    if (t7 != 4233836849U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 7356246U;
	volatile int64_t x34 = 4243813714078LL;
	int32_t x35 = -306658464;
	int64_t x36 = -1LL;
	int64_t t8 = 25871857286793930LL;

    t8 = ((x33+x34)^(x35^x36));

    if (t8 != 4243515095915LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	uint64_t x38 = 4153564LLU;
	static uint32_t x39 = 70559U;
	int64_t x40 = -2019006LL;
	volatile uint64_t t9 = 732949107LLU;

    t9 = ((x37+x38)^(x39^x40));

    if (t9 != 18446744069412438534LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x45 = -1;
	uint64_t x47 = UINT64_MAX;
	uint16_t x48 = UINT16_MAX;
	volatile uint64_t t10 = 200LLU;

    t10 = ((x45+x46)^(x47^x48));

    if (t10 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	static volatile int8_t x51 = -4;
	static volatile int32_t x52 = INT32_MIN;
	static volatile int64_t t11 = -5253369392LL;

    t11 = ((x49+x50)^(x51^x52));

    if (t11 != -9223372034707292457LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x55 = 12675980798LLU;
	uint16_t x56 = 7U;
	volatile uint64_t t12 = 52651679365185LLU;

    t12 = ((x53+x54)^(x55^x56));

    if (t12 != 18446739145680032498LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -7364225239384LL;
	static int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MIN;
	int8_t x60 = -26;
	volatile int64_t t13 = -27577313LL;

    t13 = ((x57+x58)^(x59^x60));

    if (t13 != -7364225272114LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x61 = 1;
	int16_t x63 = INT16_MIN;
	int32_t x64 = INT32_MAX;

    t14 = ((x61+x62)^(x63^x64));

    if (t14 != -2147450881) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x65 = UINT16_MAX;
	int32_t x66 = -1;
	int32_t x67 = INT32_MAX;
	int16_t x68 = -1;
	int32_t t15 = -29165;

    t15 = ((x65+x66)^(x67^x68));

    if (t15 != -2147418114) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MAX;
	volatile int32_t x71 = -1;
	int64_t t16 = 985197LL;

    t16 = ((x69+x70)^(x71^x72));

    if (t16 != -2147483649LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = 19;
	uint16_t x74 = 1U;
	volatile uint8_t x76 = 15U;

    t17 = ((x73+x74)^(x75^x76));

    if (t17 != -564) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = 0U;
	uint32_t x78 = 30U;
	uint32_t x79 = 150896561U;
	uint16_t x80 = 0U;
	volatile uint32_t t18 = 11279169U;

    t18 = ((x77+x78)^(x79^x80));

    if (t18 != 150896559U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = 3569;
	volatile int16_t x82 = -6;
	static volatile int32_t t19 = -27698541;

    t19 = ((x81+x82)^(x83^x84));

    if (t19 != 26159305) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x86 = INT32_MIN;
	static uint16_t x87 = 1529U;
	int64_t x88 = INT64_MIN;

    t20 = ((x85+x86)^(x87^x88));

    if (t20 != -9223372034707290632LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x89 = 954U;
	uint16_t x90 = 19464U;
	int64_t x91 = INT64_MAX;
	volatile uint64_t t21 = 350LLU;

    t21 = ((x89+x90)^(x91^x92));

    if (t21 != 8707543933000672402LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 6249U;
	int8_t x94 = INT8_MIN;
	static volatile uint16_t x95 = UINT16_MAX;
	static int8_t x96 = INT8_MIN;

    t22 = ((x93+x94)^(x95^x96));

    if (t22 != -59498) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = INT32_MIN;
	static uint64_t x102 = 12650LLU;
	int16_t x103 = INT16_MAX;
	uint32_t x104 = UINT32_MAX;
	volatile uint64_t t23 = 1LLU;

    t23 = ((x101+x102)^(x103^x104));

    if (t23 != 18446744071562047850LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x105 = -344;
	uint32_t x106 = 15949928U;
	int32_t x108 = INT32_MAX;
	volatile uint64_t t24 = 65LLU;

    t24 = ((x105+x106)^(x107^x108));

    if (t24 != 2131749628LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x110 = INT16_MIN;
	int32_t x112 = INT32_MAX;
	volatile int32_t t25 = 0;

    t25 = ((x109+x110)^(x111^x112));

    if (t25 != -2147450881) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = 2727LL;
	uint32_t x114 = 42170875U;
	uint8_t x115 = 55U;
	uint64_t x116 = UINT64_MAX;

    t26 = ((x113+x114)^(x115^x116));

    if (t26 != 18446744073667378026LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = INT64_MIN;
	static uint32_t x118 = UINT32_MAX;
	int16_t x119 = INT16_MAX;
	static int64_t t27 = 21LL;

    t27 = ((x117+x118)^(x119^x120));

    if (t27 != -9223372032559841281LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x121 = INT16_MIN;
	int32_t x123 = -1;
	int16_t x124 = -5043;
	int64_t t28 = 7937LL;

    t28 = ((x121+x122)^(x123^x124));

    if (t28 != 9223372036854737997LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MIN;
	uint64_t x126 = 47257121581LLU;
	uint16_t x127 = 0U;
	volatile uint64_t t29 = 6LLU;

    t29 = ((x125+x126)^(x127^x128));

    if (t29 != 18446744026452430162LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x129 = 15U;
	uint16_t x130 = UINT16_MAX;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = INT32_MIN;
	volatile uint32_t t30 = 1U;

    t30 = ((x129+x130)^(x131^x132));

    if (t30 != 2147418097U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x133 = UINT16_MAX;
	static int8_t x134 = INT8_MAX;
	int8_t x135 = INT8_MIN;
	int64_t x136 = 636313LL;
	volatile int64_t t31 = 800763954LL;

    t31 = ((x133+x134)^(x135^x136));

    if (t31 != -570777LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x137 = UINT64_MAX;
	static int8_t x138 = -1;
	uint64_t x139 = 13087248LLU;
	uint64_t t32 = 8074LLU;

    t32 = ((x137+x138)^(x139^x140));

    if (t32 != 13087249LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int16_t x141 = INT16_MIN;
	static int16_t x142 = INT16_MAX;
	int16_t x144 = INT16_MIN;
	static int32_t t33 = -1523;

    t33 = ((x141+x142)^(x143^x144));

    if (t33 != -32641) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x146 = 1U;
	int8_t x148 = 4;
	uint64_t t34 = 96266275980LLU;

    t34 = ((x145+x146)^(x147^x148));

    if (t34 != 18446743472345167062LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x149 = INT64_MAX;
	int32_t x150 = -171101134;
	static int16_t x151 = -1;
	volatile uint32_t x152 = 7171U;

    t35 = ((x149+x150)^(x151^x152));

    if (t35 != 9223372032730912717LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x153 = 4;
	static int16_t x154 = -1;
	uint64_t x155 = 2LLU;
	uint64_t x156 = 358385687LLU;
	volatile uint64_t t36 = 1925022038LLU;

    t36 = ((x153+x154)^(x155^x156));

    if (t36 != 358385686LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x157 = -1LL;
	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = 104U;
	static int64_t x160 = INT64_MAX;
	int64_t t37 = -9LL;

    t37 = ((x157+x158)^(x159^x160));

    if (t37 != 9223372032559808617LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x161 = INT8_MAX;
	static uint64_t x162 = 80LLU;
	int32_t x163 = -1;
	volatile uint64_t t38 = 6912945987198102LLU;

    t38 = ((x161+x162)^(x163^x164));

    if (t38 != 32560LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x166 = -2;
	int8_t x168 = -1;
	volatile int64_t t39 = 6963807397LL;

    t39 = ((x165+x166)^(x167^x168));

    if (t39 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = -1;
	int64_t x170 = 213183883159895LL;
	uint32_t x172 = 19056U;
	volatile uint64_t t40 = 138425128717LLU;

    t40 = ((x169+x170)^(x171^x172));

    if (t40 != 18446530889826376921LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x175 = -1;
	uint64_t x176 = 303LLU;
	volatile uint64_t t41 = 2774213277731619977LLU;

    t41 = ((x173+x174)^(x175^x176));

    if (t41 != 18446744073709485241LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x177 = INT8_MIN;
	uint16_t x178 = 129U;
	uint16_t x179 = 10438U;
	static int8_t x180 = INT8_MIN;
	static volatile int32_t t42 = -957;

    t42 = ((x177+x178)^(x179^x180));

    if (t42 != -10425) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x185 = UINT32_MAX;
	int16_t x186 = INT16_MAX;
	static uint32_t x187 = 18398U;
	uint32_t t43 = 60382215U;

    t43 = ((x185+x186)^(x187^x188));

    if (t43 != 2147469279U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = INT16_MIN;
	uint32_t t44 = 807097686U;

    t44 = ((x189+x190)^(x191^x192));

    if (t44 != 4294967288U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x193 = UINT16_MAX;
	int16_t x194 = INT16_MIN;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = -1;
	int32_t t45 = -997548;

    t45 = ((x193+x194)^(x195^x196));

    if (t45 != -32513) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x197 = UINT64_MAX;
	static int16_t x198 = -5144;
	int8_t x199 = INT8_MIN;
	volatile uint64_t t46 = 339639550035472LLU;

    t46 = ((x197+x198)^(x199^x200));

    if (t46 != 18446744073709546392LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x201 = -1;
	volatile int32_t x202 = -1;
	static uint16_t x203 = 7163U;
	uint64_t x204 = 11LLU;
	static uint64_t t47 = 8LLU;

    t47 = ((x201+x202)^(x203^x204));

    if (t47 != 18446744073709544462LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = INT8_MAX;
	int32_t x206 = 1561;
	volatile int8_t x207 = 0;
	uint16_t x208 = 6U;
	volatile int32_t t48 = 7;

    t48 = ((x205+x206)^(x207^x208));

    if (t48 != 1694) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x210 = 162660913156360LLU;
	int32_t x211 = -1304;
	int32_t x212 = -10798;
	volatile uint64_t t49 = 256744912825295LLU;

    t49 = ((x209+x210)^(x211^x212));

    if (t49 != 162660913167933LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = -12;
	uint8_t x214 = 60U;
	int32_t x215 = -701003282;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t50 = -46247;

    t50 = ((x213+x214)^(x215^x216));

    if (t50 != -701003487) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = INT16_MIN;
	int64_t x218 = -1LL;
	int64_t x219 = -1LL;
	uint64_t x220 = 5260LLU;
	volatile uint64_t t51 = 3538311326670304234LLU;

    t51 = ((x217+x218)^(x219^x220));

    if (t51 != 38028LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x226 = UINT32_MAX;
	int64_t t52 = -10856273LL;

    t52 = ((x225+x226)^(x227^x228));

    if (t52 != -4294967296LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x229 = 314LLU;
	static uint32_t x230 = 7U;
	static int64_t x231 = INT64_MIN;
	uint64_t x232 = 95514975059737971LLU;
	uint64_t t53 = 512939917079715LLU;

    t53 = ((x229+x230)^(x231^x232));

    if (t53 != 9318887011914513458LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x234 = 104U;
	int64_t x236 = INT64_MIN;
	volatile int64_t t54 = 88048808718718LL;

    t54 = ((x233+x234)^(x235^x236));

    if (t54 != -9223372034707292265LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x239 = 36;
	static int64_t x240 = -258807361LL;

    t55 = ((x237+x238)^(x239^x240));

    if (t55 != 258807396LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x241 = 711U;
	uint16_t x242 = 498U;
	static int8_t x243 = 0;
	uint16_t x244 = 49U;
	volatile int32_t t56 = -2336;

    t56 = ((x241+x242)^(x243^x244));

    if (t56 != 1160) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x245 = 193U;
	int16_t x246 = INT16_MIN;
	static uint8_t x247 = UINT8_MAX;
	int64_t x248 = -41619308999183LL;

    t57 = ((x245+x246)^(x247^x248));

    if (t57 != 41619308973519LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MAX;
	uint16_t x251 = 3U;
	int64_t x252 = -454LL;
	int64_t t58 = -3407LL;

    t58 = ((x249+x250)^(x251^x252));

    if (t58 != -9223372036854742586LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x253 = UINT16_MAX;
	int32_t x254 = INT32_MIN;
	int64_t x255 = -414717855LL;
	static int32_t x256 = INT32_MIN;
	int64_t t59 = -1985280LL;

    t59 = ((x253+x254)^(x255^x256));

    if (t59 != -414771298LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x261 = 206U;
	uint32_t x262 = UINT32_MAX;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MAX;

    t60 = ((x261+x262)^(x263^x264));

    if (t60 != 2147516210U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x265 = -1586516273287LL;
	uint16_t x266 = 2U;
	static volatile int32_t x268 = 36;
	int64_t t61 = 3844LL;

    t61 = ((x265+x266)^(x267^x268));

    if (t61 != -1586516285280LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = INT8_MIN;
	volatile int16_t x270 = INT16_MIN;
	volatile int64_t x271 = INT64_MIN;
	int64_t t62 = -7812LL;

    t62 = ((x269+x270)^(x271^x272));

    if (t62 != -9223372036854742942LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x278 = -159112;
	volatile int8_t x279 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;
	uint64_t t63 = 936655LLU;

    t63 = ((x277+x278)^(x279^x280));

    if (t63 != 18446744073709392392LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x281 = -1LL;
	volatile int8_t x282 = -3;
	static int8_t x283 = INT8_MIN;
	uint32_t x284 = UINT32_MAX;
	int64_t t64 = 0LL;

    t64 = ((x281+x282)^(x283^x284));

    if (t64 != -125LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x285 = INT16_MIN;
	int32_t x286 = 133447681;
	int64_t x287 = -1504389304LL;
	int64_t x288 = 171191470214087654LL;
	static volatile int64_t t65 = -2104LL;

    t65 = ((x285+x286)^(x287^x288));

    if (t65 != -171191471190895441LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 12U;
	static int32_t t66 = 0;

    t66 = ((x289+x290)^(x291^x292));

    if (t66 != 115) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x293 = UINT32_MAX;
	int8_t x294 = INT8_MAX;
	static uint32_t x295 = UINT32_MAX;
	uint32_t t67 = 190U;

    t67 = ((x293+x294)^(x295^x296));

    if (t67 != 4294967234U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x297 = -1;
	uint32_t x298 = UINT32_MAX;
	uint16_t x299 = 23537U;
	int32_t x300 = INT32_MAX;
	volatile uint32_t t68 = 164U;

    t68 = ((x297+x298)^(x299^x300));

    if (t68 != 2147507184U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x301 = INT8_MIN;
	static int8_t x302 = -1;
	static int8_t x303 = INT8_MAX;

    t69 = ((x301+x302)^(x303^x304));

    if (t69 != -186) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x309 = UINT64_MAX;
	static int8_t x310 = INT8_MAX;
	int32_t x311 = -1;
	static volatile uint64_t t70 = 14352LLU;

    t70 = ((x309+x310)^(x311^x312));

    if (t70 != 4294967221LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x313 = INT16_MAX;
	int8_t x314 = 1;
	int16_t x315 = INT16_MIN;
	int8_t x316 = -1;
	int32_t t71 = 254;

    t71 = ((x313+x314)^(x315^x316));

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x317 = 1386;
	volatile int16_t x318 = -104;
	uint8_t x320 = 0U;
	int32_t t72 = 13;

    t72 = ((x317+x318)^(x319^x320));

    if (t72 != -2147482366) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x321 = INT32_MAX;
	int64_t x322 = -17182991289156755LL;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MAX;
	volatile int64_t t73 = 4LL;

    t73 = ((x321+x322)^(x323^x324));

    if (t73 != 17182989141703443LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x326 = UINT32_MAX;
	uint8_t x327 = UINT8_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile uint32_t t74 = 105U;

    t74 = ((x325+x326)^(x327^x328));

    if (t74 != 4294934783U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x334 = 23627404U;
	int8_t x335 = -3;
	int64_t x336 = -1LL;

    t75 = ((x333+x334)^(x335^x336));

    if (t75 != 3002600849613380LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = INT32_MIN;
	uint64_t x338 = 1993LLU;
	uint32_t x339 = 10317934U;
	int32_t x340 = -1;

    t76 = ((x337+x338)^(x339^x340));

    if (t76 != 18446744071551748184LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x341 = 376335LLU;
	int16_t x342 = INT16_MIN;
	int8_t x343 = -1;

    t77 = ((x341+x342)^(x343^x344));

    if (t77 != 343567LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x345 = 1U;
	static uint8_t x346 = UINT8_MAX;
	static int32_t x347 = INT32_MIN;
	static uint32_t x348 = UINT32_MAX;
	volatile uint32_t t78 = 573U;

    t78 = ((x345+x346)^(x347^x348));

    if (t78 != 2147483391U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x349 = 132881233LLU;
	int8_t x350 = -1;
	uint32_t x351 = 31U;
	uint64_t t79 = 557443538988177LLU;

    t79 = ((x349+x350)^(x351^x352));

    if (t79 != 132881400LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x353 = 4;
	uint64_t x354 = UINT64_MAX;
	static int8_t x355 = -1;
	volatile uint64_t t80 = 1064827933099LLU;

    t80 = ((x353+x354)^(x355^x356));

    if (t80 != 32764LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x358 = INT32_MAX;
	int64_t x359 = INT64_MAX;
	volatile int64_t t81 = -43821388178636088LL;

    t81 = ((x357+x358)^(x359^x360));

    if (t81 != 2147483618LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x361 = INT8_MIN;
	static uint16_t x362 = 38U;
	static uint64_t x363 = UINT64_MAX;
	static uint8_t x364 = 51U;
	uint64_t t82 = 38225549LLU;

    t82 = ((x361+x362)^(x363^x364));

    if (t82 != 106LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x365 = 87U;
	uint32_t x366 = UINT32_MAX;
	int64_t t83 = 60843902LL;

    t83 = ((x365+x366)^(x367^x368));

    if (t83 != 2147483561LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x369 = 88;
	uint16_t x370 = 53U;
	uint64_t x371 = UINT64_MAX;
	volatile uint32_t x372 = 442608126U;
	static volatile uint64_t t84 = 266111482223LLU;

    t84 = ((x369+x370)^(x371^x372));

    if (t84 != 18446744073266943628LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x373 = UINT64_MAX;
	uint64_t x374 = 12446LLU;
	int16_t x376 = -1;
	uint64_t t85 = 598641524LLU;

    t85 = ((x373+x374)^(x375^x376));

    if (t85 != 4294954851LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x377 = 14;
	static int8_t x378 = -1;
	int8_t x379 = -1;
	int16_t x380 = INT16_MIN;
	volatile int32_t t86 = 9399155;

    t86 = ((x377+x378)^(x379^x380));

    if (t86 != 32754) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x381 = -12805LL;
	static uint16_t x382 = UINT16_MAX;
	uint16_t x383 = 5U;
	static uint64_t t87 = 112584998LLU;

    t87 = ((x381+x382)^(x383^x384));

    if (t87 != 18446744073709498880LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x386 = INT16_MIN;
	volatile int64_t x387 = INT64_MAX;
	static int32_t x388 = INT32_MAX;
	volatile uint64_t t88 = 1744055557931767LLU;

    t88 = ((x385+x386)^(x387^x388));

    if (t88 != 9223371994656188595LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x389 = 1939LL;
	uint64_t x390 = 52931257902181LLU;
	volatile int8_t x391 = INT8_MAX;
	int64_t x392 = INT64_MIN;
	uint64_t t89 = 334282564400LLU;

    t89 = ((x389+x390)^(x391^x392));

    if (t89 != 9223424968112679815LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x393 = 1515614076354287112LL;
	static int32_t x394 = INT32_MAX;
	uint32_t x395 = UINT32_MAX;
	uint8_t x396 = UINT8_MAX;

    t90 = ((x393+x394)^(x395^x396));

    if (t90 != 1515614079116519687LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x398 = -65;
	static int64_t x399 = INT64_MIN;
	int16_t x400 = -1;

    t91 = ((x397+x398)^(x399^x400));

    if (t91 != 9223372036854775617LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x401 = 54047771697LLU;
	int32_t x402 = -1;
	static int8_t x404 = -1;
	uint64_t t92 = 23454797557806565LLU;

    t92 = ((x401+x402)^(x403^x404));

    if (t92 != 18403087650095557227LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x405 = 4893;
	int64_t x406 = -45019585208LL;
	static int32_t x407 = INT32_MAX;
	static int8_t x408 = -1;

    t93 = ((x405+x406)^(x407^x408));

    if (t93 != 43027249253LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x409 = -3;
	int64_t x410 = -1LL;
	static int16_t x412 = -1;
	volatile int64_t t94 = -53031LL;

    t94 = ((x409+x410)^(x411^x412));

    if (t94 != -125LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x413 = 1;
	int8_t x414 = 0;
	int32_t x416 = -17921840;
	static volatile int64_t t95 = 1230LL;

    t95 = ((x413+x414)^(x415^x416));

    if (t95 != 17921838LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x417 = 8959930U;
	volatile uint8_t x418 = UINT8_MAX;
	static int32_t x419 = INT32_MAX;
	int32_t x420 = INT32_MAX;
	volatile uint32_t t96 = 61270855U;

    t96 = ((x417+x418)^(x419^x420));

    if (t96 != 8960185U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x421 = INT32_MIN;
	int64_t x422 = -1LL;
	int64_t x423 = -1LL;
	int64_t x424 = -4877747269550591LL;
	int64_t t97 = -7740022876LL;

    t97 = ((x421+x422)^(x423^x424));

    if (t97 != -4877749417034239LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x427 = 0;
	uint16_t x428 = 694U;
	volatile uint64_t t98 = 115702159437576LLU;

    t98 = ((x425+x426)^(x427^x428));

    if (t98 != 9180513LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x430 = INT8_MIN;
	int64_t x431 = INT64_MIN;
	volatile int64_t x432 = -1LL;

    t99 = ((x429+x430)^(x431^x432));

    if (t99 != -9223372036854775688LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x438 = 480250169LL;
	static int32_t x439 = -1;
	volatile int32_t x440 = INT32_MAX;
	int64_t t100 = -25651469627288479LL;

    t100 = ((x437+x438)^(x439^x440));

    if (t100 != -1667233567LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x441 = INT32_MIN;
	uint16_t x442 = UINT16_MAX;
	static int16_t x443 = -1;
	int16_t x444 = INT16_MIN;
	int32_t t101 = -1871007;

    t101 = ((x441+x442)^(x443^x444));

    if (t101 != -2147450880) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x445 = 1340737115U;
	static int16_t x446 = INT16_MAX;
	static uint32_t x447 = UINT32_MAX;
	int16_t x448 = -1;

    t102 = ((x445+x446)^(x447^x448));

    if (t102 != 1340769882U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x449 = 47U;
	volatile uint32_t x450 = UINT32_MAX;
	int16_t x451 = 803;
	uint64_t x452 = 10LLU;

    t103 = ((x449+x450)^(x451^x452));

    if (t103 != 775LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	volatile int64_t x454 = INT64_MIN;
	static uint32_t x455 = UINT32_MAX;
	int32_t x456 = 41015;
	int64_t t104 = -17278930699475710LL;

    t104 = ((x453+x454)^(x455^x456));

    if (t104 != -9223372032559833033LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x457 = -3;
	uint32_t x458 = 148335U;
	int32_t x459 = INT32_MAX;
	static uint32_t x460 = 29296892U;
	volatile uint32_t t105 = 251397637U;

    t105 = ((x457+x458)^(x459^x460));

    if (t105 != 2118300783U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x461 = 1U;
	static int32_t x463 = INT32_MIN;
	int32_t x464 = -1;
	int32_t t106 = -107;

    t106 = ((x461+x462)^(x463^x464));

    if (t106 != -2147467688) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x465 = 57713185943547363LLU;
	volatile uint64_t x466 = UINT64_MAX;
	int8_t x468 = -55;
	uint64_t t107 = 6146792815375774314LLU;

    t107 = ((x465+x466)^(x467^x468));

    if (t107 != 18389030887766004304LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x473 = INT64_MIN;
	static uint16_t x474 = 104U;
	static volatile uint64_t x476 = 4369917779LLU;
	uint64_t t108 = 4265153325828846678LLU;

    t108 = ((x473+x474)^(x475^x476));

    if (t108 != 9223372030487275323LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x477 = 7671103816486LLU;
	uint8_t x478 = 1U;
	volatile uint16_t x479 = 2618U;
	volatile uint8_t x480 = 0U;
	volatile uint64_t t109 = 21270173134LLU;

    t109 = ((x477+x478)^(x479^x480));

    if (t109 != 7671103818013LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x481 = 939990232LLU;
	int16_t x482 = INT16_MIN;
	uint16_t x483 = UINT16_MAX;
	static int32_t x484 = INT32_MAX;
	volatile uint64_t t110 = 887690127479LLU;

    t110 = ((x481+x482)^(x483^x484));

    if (t110 != 1207540952LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x485 = 441615LL;
	static int32_t x487 = -214275801;
	int64_t t111 = -21791180203LL;

    t111 = ((x485+x486)^(x487^x488));

    if (t111 != -214127623LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x489 = -1;
	uint64_t x490 = 0LLU;
	int64_t x491 = INT64_MIN;
	static int64_t x492 = INT64_MIN;
	volatile uint64_t t112 = UINT64_MAX;

    t112 = ((x489+x490)^(x491^x492));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x498 = 27348U;
	static volatile int32_t x499 = -1;
	int16_t x500 = INT16_MIN;
	int32_t t113 = -11;

    t113 = ((x497+x498)^(x499^x500));

    if (t113 != 70956) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x501 = INT8_MIN;
	uint16_t x502 = 605U;
	int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MIN;
	volatile int32_t t114 = 57415;

    t114 = ((x501+x502)^(x503^x504));

    if (t114 != 477) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x505 = INT64_MIN;
	uint8_t x506 = 1U;
	int32_t x507 = -121;
	uint16_t x508 = UINT16_MAX;
	static int64_t t115 = -8913452700LL;

    t115 = ((x505+x506)^(x507^x508));

    if (t115 != 9223372036854710393LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x513 = INT8_MIN;
	volatile int64_t t116 = -305932059668LL;

    t116 = ((x513+x514)^(x515^x516));

    if (t116 != -32652LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x517 = -5;
	static volatile int64_t x518 = -1LL;
	int8_t x519 = INT8_MAX;
	int16_t x520 = INT16_MIN;
	volatile int64_t t117 = -13073865LL;

    t117 = ((x517+x518)^(x519^x520));

    if (t117 != 32645LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x521 = INT32_MAX;
	uint64_t x522 = UINT64_MAX;
	int64_t x524 = 1618LL;
	volatile uint64_t t118 = 10551786LLU;

    t118 = ((x521+x522)^(x523^x524));

    if (t118 != 2147482078LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x526 = -1;
	static int64_t x527 = -425052141343957618LL;
	int16_t x528 = INT16_MIN;

    t119 = ((x525+x526)^(x527^x528));

    if (t119 != -425052141343939984LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x533 = 6310U;
	volatile uint64_t x534 = UINT64_MAX;
	uint32_t x536 = 21686027U;

    t120 = ((x533+x534)^(x535^x536));

    if (t120 != 18446744073687621539LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x537 = UINT64_MAX;
	volatile uint16_t x538 = 0U;
	volatile int8_t x539 = INT8_MAX;
	volatile int32_t x540 = INT32_MIN;
	volatile uint64_t t121 = 6705375866390LLU;

    t121 = ((x537+x538)^(x539^x540));

    if (t121 != 2147483520LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x543 = INT32_MIN;
	uint32_t x544 = 17596555U;
	uint32_t t122 = 2230U;

    t122 = ((x541+x542)^(x543^x544));

    if (t122 != 2129857538U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x545 = INT8_MIN;
	uint16_t x546 = 5087U;
	int16_t x547 = 2871;
	volatile int8_t x548 = 0;
	static volatile int32_t t123 = 69564045;

    t123 = ((x545+x546)^(x547^x548));

    if (t123 != 6248) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x550 = INT16_MIN;
	volatile uint32_t x551 = 12366U;
	int64_t x552 = INT64_MIN;
	volatile int64_t t124 = -3833LL;

    t124 = ((x549+x550)^(x551^x552));

    if (t124 != 9223372036854766914LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x553 = UINT16_MAX;
	int8_t x555 = INT8_MIN;

    t125 = ((x553+x554)^(x555^x556));

    if (t125 != 581640LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x557 = INT64_MIN;
	int16_t x558 = INT16_MAX;
	uint8_t x559 = UINT8_MAX;
	static uint64_t x560 = UINT64_MAX;
	uint64_t t126 = 44527110283802427LLU;

    t126 = ((x557+x558)^(x559^x560));

    if (t126 != 9223372036854743295LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x561 = INT8_MIN;
	int16_t x564 = INT16_MAX;

    t127 = ((x561+x562)^(x563^x564));

    if (t127 != 32611U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x565 = 372LL;
	int32_t x566 = 622946512;
	int16_t x567 = INT16_MAX;
	int32_t x568 = INT32_MIN;
	volatile int64_t t128 = -29313868847955495LL;

    t128 = ((x565+x566)^(x567^x568));

    if (t128 != -1524558405LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x569 = INT8_MIN;
	static uint32_t x570 = 166296987U;
	uint8_t x571 = UINT8_MAX;
	static volatile int8_t x572 = -2;
	volatile uint32_t t129 = 7U;

    t129 = ((x569+x570)^(x571^x572));

    if (t129 != 4128670234U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x574 = 22U;
	volatile int32_t x575 = -272;
	uint64_t x576 = 0LLU;
	static uint64_t t130 = 64973209027101LLU;

    t130 = ((x573+x574)^(x575^x576));

    if (t130 != 18446744073709551340LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x577 = -232252;
	int8_t x578 = -1;
	int16_t x579 = INT16_MIN;
	volatile int32_t t131 = 458529443;

    t131 = ((x577+x578)^(x579^x580));

    if (t131 != -259268) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x581 = 130U;
	uint8_t x582 = UINT8_MAX;
	uint32_t x583 = UINT32_MAX;
	int32_t x584 = 430886078;
	volatile uint32_t t132 = 167819U;

    t132 = ((x581+x582)^(x583^x584));

    if (t132 != 3864081088U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x586 = 79725LLU;
	int8_t x588 = -1;
	volatile uint64_t t133 = 150791306135118LLU;

    t133 = ((x585+x586)^(x587^x588));

    if (t133 != 7797204005518445884LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x589 = -27;
	volatile int8_t x590 = -1;
	uint16_t x591 = UINT16_MAX;
	static int32_t x592 = -10287;
	volatile int32_t t134 = -22584769;

    t134 = ((x589+x590)^(x591^x592));

    if (t134 != 55242) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x593 = 6449U;
	int64_t x594 = -84115351914292147LL;
	uint64_t t135 = 293804261615LLU;

    t135 = ((x593+x594)^(x595^x596));

    if (t135 != 18362628721795265918LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x597 = -13;
	int64_t x598 = INT64_MAX;
	uint16_t x599 = UINT16_MAX;
	static volatile int8_t x600 = INT8_MIN;

    t136 = ((x597+x598)^(x599^x600));

    if (t136 != -9223372036854710387LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x605 = 3422359944LLU;
	int32_t x606 = -1;
	volatile uint64_t x607 = UINT64_MAX;
	uint16_t x608 = UINT16_MAX;
	static volatile uint64_t t137 = 4497590168LLU;

    t137 = ((x605+x606)^(x607^x608));

    if (t137 != 18446744070287135111LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x609 = 6U;
	int32_t x610 = -215677;
	int16_t x611 = INT16_MIN;
	int64_t x612 = -79776473496894776LL;
	volatile int64_t t138 = 611582696173166490LL;

    t138 = ((x609+x610)^(x611^x612));

    if (t138 != -79776473496684735LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x613 = -1;
	int64_t x614 = -1LL;
	static int8_t x616 = -1;
	int64_t t139 = 227LL;

    t139 = ((x613+x614)^(x615^x616));

    if (t139 != -32767LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x617 = INT32_MAX;
	uint64_t x618 = 6846888948804759641LLU;
	int16_t x619 = INT16_MIN;
	static int32_t x620 = -881973;

    t140 = ((x617+x618)^(x619^x620));

    if (t140 != 6846888950951525011LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x621 = -1;
	static int16_t x622 = -123;
	static int8_t x623 = -1;
	static int16_t x624 = INT16_MAX;
	volatile int32_t t141 = -7268053;

    t141 = ((x621+x622)^(x623^x624));

    if (t141 != 32644) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x625 = 48U;
	uint64_t x626 = UINT64_MAX;
	uint64_t x627 = 6LLU;
	int64_t x628 = INT64_MIN;

    t142 = ((x625+x626)^(x627^x628));

    if (t142 != 9223372036854775849LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x633 = -1LL;
	static uint64_t x634 = 13043913791329LLU;
	volatile uint16_t x635 = 83U;
	volatile int32_t x636 = 7454411;

    t143 = ((x633+x634)^(x635^x636));

    if (t143 != 13043910617592LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x641 = 155595693754083330LLU;
	int64_t x642 = -1LL;
	int16_t x644 = INT16_MIN;
	volatile uint64_t t144 = 250152837LLU;

    t144 = ((x641+x642)^(x643^x644));

    if (t144 != 155595695673665537LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x645 = 56;
	volatile uint8_t x646 = UINT8_MAX;
	int16_t x647 = 1;
	uint64_t x648 = 1516919LLU;

    t145 = ((x645+x646)^(x647^x648));

    if (t145 != 1516609LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x649 = -1LL;
	static int32_t x651 = -1;
	volatile int16_t x652 = INT16_MIN;
	uint64_t t146 = 50063062286757672LLU;

    t146 = ((x649+x650)^(x651^x652));

    if (t146 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x653 = -3936;
	int8_t x654 = INT8_MIN;
	volatile uint16_t x655 = 377U;
	uint16_t x656 = UINT16_MAX;
	int32_t t147 = -259201;

    t147 = ((x653+x654)^(x655^x656));

    if (t147 != -61786) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x658 = INT16_MAX;
	int64_t x659 = 90LL;
	volatile uint64_t x660 = 11566773LLU;
	uint64_t t148 = 1737LLU;

    t148 = ((x657+x658)^(x659^x660));

    if (t148 != 18446744073697984784LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x661 = -1LL;
	int64_t x663 = INT64_MAX;
	int32_t x664 = -1424761;
	int64_t t149 = -9447LL;

    t149 = ((x661+x662)^(x663^x664));

    if (t149 != 9223372036853356198LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x665 = UINT32_MAX;
	static uint32_t x666 = 3U;
	uint16_t x668 = UINT16_MAX;

    t150 = ((x665+x666)^(x667^x668));

    if (t150 != 65527U) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x669 = INT16_MIN;
	int8_t x671 = INT8_MIN;
	uint64_t x672 = 1078008604097373LLU;
	volatile uint64_t t151 = 17LLU;

    t151 = ((x669+x670)^(x671^x672));

    if (t151 != 1078008604067038LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x673 = 6566;
	int64_t x674 = -1LL;
	uint8_t x675 = 0U;
	uint8_t x676 = 1U;
	int64_t t152 = 197809420247LL;

    t152 = ((x673+x674)^(x675^x676));

    if (t152 != 6564LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x677 = 1072772253LL;
	volatile int32_t x678 = INT32_MIN;
	int16_t x680 = INT16_MIN;
	uint64_t t153 = 317835066255LLU;

    t153 = ((x677+x678)^(x679^x680));

    if (t153 != 1074707245LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x681 = 2891494320LLU;
	volatile int8_t x682 = -1;
	volatile uint8_t x683 = 108U;
	static int64_t x684 = -2669828LL;
	uint64_t t154 = 999083543181LLU;

    t154 = ((x681+x682)^(x683^x684));

    if (t154 != 18446744070816526655LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x685 = 3U;
	uint64_t x686 = 1587411LLU;
	uint32_t x688 = UINT32_MAX;

    t155 = ((x685+x686)^(x687^x688));

    if (t155 != 2145896233LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x689 = -360;
	static uint8_t x690 = UINT8_MAX;
	static uint8_t x692 = 2U;
	static int32_t t156 = 5;

    t156 = ((x689+x690)^(x691^x692));

    if (t156 != 123) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x693 = -1;
	static int16_t x694 = INT16_MIN;
	uint8_t x695 = UINT8_MAX;
	int64_t x696 = INT64_MIN;
	int64_t t157 = -3657961312146LL;

    t157 = ((x693+x694)^(x695^x696));

    if (t157 != 9223372036854742784LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x697 = 193U;
	int16_t x698 = -1;
	uint8_t x699 = UINT8_MAX;
	volatile int32_t x700 = INT32_MIN;
	volatile uint32_t t158 = 56168532U;

    t158 = ((x697+x698)^(x699^x700));

    if (t158 != 2147483711U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x701 = UINT8_MAX;
	int16_t x703 = INT16_MIN;
	volatile int32_t x704 = -1;
	volatile int32_t t159 = 318909925;

    t159 = ((x701+x702)^(x703^x704));

    if (t159 != -2147451136) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x705 = UINT16_MAX;
	int64_t x706 = 221223LL;
	static int16_t x707 = -1;
	int64_t x708 = 421LL;

    t160 = ((x705+x706)^(x707^x708));

    if (t160 != -287108LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x709 = 491804U;
	uint8_t x711 = 0U;
	int64_t x712 = -34160066683LL;

    t161 = ((x709+x710)^(x711^x712));

    if (t161 != -34160427239LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x715 = -26;
	static int8_t x716 = -22;
	static volatile int32_t t162 = -655;

    t162 = ((x713+x714)^(x715^x716));

    if (t162 != -32753) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x717 = INT16_MIN;
	static int64_t x719 = INT64_MIN;
	volatile int16_t x720 = INT16_MIN;
	int64_t t163 = 1891LL;

    t163 = ((x717+x718)^(x719^x720));

    if (t163 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x721 = 54946508173690192LL;
	static uint8_t x722 = UINT8_MAX;
	int8_t x723 = INT8_MAX;
	uint16_t x724 = 63U;
	volatile int64_t t164 = -7798596335574LL;

    t164 = ((x721+x722)^(x723^x724));

    if (t164 != 54946508173690383LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x725 = -1LL;
	uint8_t x726 = 3U;
	int64_t x727 = INT64_MIN;
	volatile uint32_t x728 = 1160785U;

    t165 = ((x725+x726)^(x727^x728));

    if (t165 != -9223372036853615021LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x731 = INT8_MIN;
	volatile int16_t x732 = INT16_MIN;
	static int32_t t166 = 20686157;

    t166 = ((x729+x730)^(x731^x732));

    if (t166 != 31538) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x733 = -1956;
	int32_t x734 = -1;

    t167 = ((x733+x734)^(x735^x736));

    if (t167 != 1953) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x738 = 3;
	int8_t x739 = INT8_MIN;
	int16_t x740 = INT16_MAX;
	static volatile int32_t t168 = 106221;

    t168 = ((x737+x738)^(x739^x740));

    if (t168 != 26142) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x741 = -169556622115757438LL;
	uint16_t x742 = 9106U;
	int32_t x743 = INT32_MAX;
	int64_t x744 = -1LL;

    t169 = ((x741+x742)^(x743^x744));

    if (t169 != 169556620286215700LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x745 = INT16_MIN;
	int64_t x746 = -45LL;
	int16_t x747 = INT16_MAX;
	volatile uint64_t t170 = 89375LLU;

    t170 = ((x745+x746)^(x747^x748));

    if (t170 != 18446743811153812244LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x749 = 14U;
	int8_t x750 = INT8_MIN;
	static int8_t x752 = INT8_MAX;
	volatile int32_t t171 = 163954404;

    t171 = ((x749+x750)^(x751^x752));

    if (t171 != -9) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x754 = -1;
	static int64_t x756 = INT64_MIN;
	static int64_t t172 = 113762669LL;

    t172 = ((x753+x754)^(x755^x756));

    if (t172 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x757 = 57U;
	uint16_t x758 = 206U;
	uint64_t x759 = 144942884114LLU;
	uint8_t x760 = 14U;
	uint64_t t173 = 7555LLU;

    t173 = ((x757+x758)^(x759^x760));

    if (t173 != 144942883867LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x761 = 5U;
	static volatile int16_t x762 = -1;
	int8_t x763 = -1;
	volatile int16_t x764 = INT16_MAX;
	int32_t t174 = 702362;

    t174 = ((x761+x762)^(x763^x764));

    if (t174 != -32764) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x765 = INT16_MIN;
	int8_t x766 = 0;
	int32_t x768 = INT32_MIN;

    t175 = ((x765+x766)^(x767^x768));

    if (t175 != -2147450881) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x769 = -34246052948237239LL;
	static uint16_t x770 = UINT16_MAX;
	volatile uint16_t x771 = UINT16_MAX;
	uint8_t x772 = 7U;
	volatile int64_t t176 = -113741977LL;

    t176 = ((x769+x770)^(x771^x772));

    if (t176 != -34246052948190288LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x774 = 3950LL;
	uint16_t x775 = 2U;
	int64_t x776 = INT64_MAX;

    t177 = ((x773+x774)^(x775^x776));

    if (t177 != 9223372036848544004LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x777 = -1462;
	int8_t x778 = -1;
	uint64_t x779 = UINT64_MAX;
	uint16_t x780 = UINT16_MAX;
	static uint64_t t178 = 1554182789LLU;

    t178 = ((x777+x778)^(x779^x780));

    if (t178 != 64073LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x781 = UINT16_MAX;
	uint16_t x782 = 27U;
	static int16_t x783 = -11;
	uint32_t x784 = 8148323U;
	uint32_t t179 = 3U;

    t179 = ((x781+x782)^(x783^x784));

    if (t179 != 4286753420U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x786 = INT32_MAX;
	uint8_t x787 = UINT8_MAX;
	static int64_t x788 = INT64_MIN;
	int64_t t180 = 0LL;

    t180 = ((x785+x786)^(x787^x788));

    if (t180 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x791 = -1;
	int8_t x792 = INT8_MAX;
	int32_t t181 = -423;

    t181 = ((x789+x790)^(x791^x792));

    if (t181 != -124) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x793 = 385U;
	int32_t x796 = INT32_MIN;

    t182 = ((x793+x794)^(x795^x796));

    if (t182 != 9223372034707292998LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x797 = 1U;
	int16_t x798 = -1;
	uint32_t x799 = 7U;
	uint16_t x800 = 31U;
	uint32_t t183 = 394022287U;

    t183 = ((x797+x798)^(x799^x800));

    if (t183 != 24U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x801 = 95U;
	volatile int64_t x802 = INT64_MIN;
	int32_t x803 = 38211339;
	int64_t t184 = -5LL;

    t184 = ((x801+x802)^(x803^x804));

    if (t184 != 9223372036816564395LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x805 = 3730071U;
	int32_t x806 = INT32_MIN;
	int32_t x808 = -1;
	volatile uint32_t t185 = 25U;

    t185 = ((x805+x806)^(x807^x808));

    if (t185 != 2143753596U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x814 = 3679U;
	volatile uint8_t x815 = 77U;
	uint64_t t186 = 2681812184551899LLU;

    t186 = ((x813+x814)^(x815^x816));

    if (t186 != 991342389573326LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x821 = 1429U;
	int64_t x822 = -114213757LL;
	uint32_t x823 = 22U;
	int64_t t187 = -99594432307LL;

    t187 = ((x821+x822)^(x823^x824));

    if (t187 != -9223372036740563471LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x825 = INT16_MIN;
	int32_t x828 = -1;
	uint32_t t188 = 124946682U;

    t188 = ((x825+x826)^(x827^x828));

    if (t188 != 945812U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x829 = INT8_MIN;
	static uint64_t x830 = 916531355926530LLU;
	volatile uint64_t t189 = 86002616548LLU;

    t189 = ((x829+x830)^(x831^x832));

    if (t189 != 916531355926478LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x833 = 14U;
	volatile uint8_t x834 = UINT8_MAX;
	uint32_t x835 = UINT32_MAX;
	volatile int32_t x836 = INT32_MIN;
	volatile uint32_t t190 = 44807392U;

    t190 = ((x833+x834)^(x835^x836));

    if (t190 != 2147483378U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x837 = INT16_MIN;
	int8_t x838 = -1;
	uint32_t x839 = 104488U;
	uint32_t x840 = UINT32_MAX;
	uint32_t t191 = 3U;

    t191 = ((x837+x838)^(x839^x840));

    if (t191 != 71720U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x841 = -1;
	uint16_t x842 = UINT16_MAX;
	static volatile int64_t x843 = -13908515726190LL;
	uint16_t x844 = UINT16_MAX;
	int64_t t192 = -150898269500LL;

    t192 = ((x841+x842)^(x843^x844));

    if (t192 != -13908515726189LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x845 = -45;
	int32_t x846 = -62923;
	int16_t x847 = INT16_MIN;
	int64_t x848 = INT64_MAX;
	int64_t t193 = 510LL;

    t193 = ((x845+x846)^(x847^x848));

    if (t193 != 9223372036854740471LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x850 = 189U;
	volatile uint32_t x852 = 698407U;

    t194 = ((x849+x850)^(x851^x852));

    if (t194 != 720402U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x853 = 26;
	uint8_t x854 = 0U;
	static int32_t x855 = INT32_MIN;
	volatile uint16_t x856 = 91U;
	static volatile int32_t t195 = -1440;

    t195 = ((x853+x854)^(x855^x856));

    if (t195 != -2147483583) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x857 = -37692064LL;
	static uint32_t x858 = 131095461U;
	static uint32_t x859 = 30926976U;

    t196 = ((x857+x858)^(x859^x860));

    if (t196 != 71750020LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x861 = -11;
	static int8_t x862 = -1;
	int64_t x863 = 16612094646238801LL;

    t197 = ((x861+x862)^(x863^x864));

    if (t197 != 16612094646239653LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x865 = 1582;
	int8_t x866 = -1;
	volatile int32_t x867 = INT32_MIN;
	int16_t x868 = INT16_MAX;

    t198 = ((x865+x866)^(x867^x868));

    if (t198 != -2147452462) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x869 = 5296790;
	volatile int16_t x870 = -116;
	uint8_t x872 = UINT8_MAX;
	static volatile int32_t t199 = -1;

    t199 = ((x869+x870)^(x871^x872));

    if (t199 != 5299096) { NG(); } else { ; }
	
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

