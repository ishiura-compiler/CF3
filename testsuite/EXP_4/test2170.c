
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

volatile int16_t x1 = INT16_MIN;
volatile uint8_t x2 = 1U;
static int32_t x3 = INT32_MIN;
static int32_t x4 = INT32_MIN;
volatile uint64_t x5 = UINT64_MAX;
volatile uint64_t t1 = 1327714LLU;
uint32_t t2 = 58514U;
static uint64_t x16 = 139690720085040LLU;
volatile uint8_t x17 = 37U;
int64_t x27 = 0LL;
static uint32_t x37 = 53727U;
uint32_t x41 = 559705133U;
static int8_t x49 = -11;
uint32_t x59 = 14U;
volatile int8_t x67 = -1;
uint16_t x70 = UINT16_MAX;
int32_t t18 = 7;
int16_t x89 = -1;
uint64_t x90 = UINT64_MAX;
uint64_t t20 = 1275806571898LLU;
uint8_t x95 = 0U;
int32_t x100 = 171167081;
uint32_t x101 = UINT32_MAX;
volatile int64_t x103 = -7LL;
int64_t x108 = INT64_MAX;
volatile int32_t x109 = -1;
static volatile int64_t x115 = INT64_MIN;
uint8_t x117 = UINT8_MAX;
int16_t x118 = -1715;
volatile int16_t x120 = INT16_MIN;
uint16_t x121 = UINT16_MAX;
int16_t x122 = -1;
volatile int16_t x128 = INT16_MIN;
int8_t x142 = INT8_MIN;
volatile int64_t t33 = -272003456031104707LL;
uint64_t t34 = 237LLU;
int32_t x155 = -25964;
int16_t x169 = INT16_MIN;
volatile uint64_t x174 = 767233529031237474LLU;
static uint16_t x177 = 12U;
volatile int64_t x179 = INT64_MAX;
int16_t x192 = -110;
static volatile int32_t t41 = -942930132;
uint32_t x197 = 98U;
volatile uint64_t t44 = 15535517LLU;
int32_t x205 = INT32_MAX;
int32_t x215 = INT32_MIN;
int16_t x218 = INT16_MIN;
int8_t x229 = INT8_MAX;
static int16_t x233 = 27;
int8_t x234 = INT8_MIN;
int64_t x238 = -2LL;
int16_t x239 = 1;
int8_t x245 = -1;
int8_t x247 = INT8_MIN;
int8_t x259 = -61;
static uint8_t x265 = UINT8_MAX;
volatile uint16_t x266 = 7U;
static uint16_t x270 = 18U;
volatile int16_t x278 = INT16_MAX;
static uint16_t x282 = 3U;
static int32_t x285 = INT32_MAX;
int8_t x290 = INT8_MAX;
volatile int16_t x291 = INT16_MIN;
static int32_t x294 = INT32_MIN;
uint16_t x296 = 51U;
uint32_t x300 = 370040U;
volatile int64_t t67 = -559314229365LL;
int16_t x316 = 867;
uint64_t t71 = 121653900385786LLU;
uint64_t t73 = 450459LLU;
static int64_t x330 = INT64_MIN;
volatile int64_t t75 = -1179734968626359539LL;
static int64_t x336 = INT64_MIN;
int32_t x342 = -89531;
uint64_t x343 = 23982019890LLU;
int8_t x346 = -27;
uint16_t x348 = 8742U;
static int16_t x352 = INT16_MIN;
static uint32_t t79 = 4150U;
int8_t x354 = 0;
static int8_t x355 = -1;
int16_t x363 = -19;
int64_t t82 = -25649601324LL;
static volatile int16_t x366 = INT16_MIN;
static int8_t x367 = INT8_MIN;
volatile int64_t x372 = -1LL;
volatile uint32_t x373 = 14418776U;
static int8_t x376 = -5;
volatile uint32_t t85 = 8582406U;
uint8_t x380 = 3U;
static int16_t x385 = INT16_MIN;
int16_t x388 = INT16_MAX;
uint32_t t88 = 17U;
uint64_t x397 = 3737681824001300317LLU;
static uint64_t t91 = 2377864643850028721LLU;
static int8_t x401 = -51;
uint32_t x407 = 786326U;
static int16_t x412 = -1;
int16_t x420 = 28;
uint32_t x421 = UINT32_MAX;
int32_t x422 = INT32_MIN;
volatile int64_t t97 = -71741866407610458LL;
int16_t x436 = INT16_MIN;
uint64_t x443 = 213LLU;
static uint32_t x444 = UINT32_MAX;
uint8_t x446 = UINT8_MAX;
static int8_t x447 = INT8_MIN;
static volatile uint32_t x453 = UINT32_MAX;
static int8_t x455 = INT8_MAX;
volatile uint8_t x457 = UINT8_MAX;
uint16_t x471 = UINT16_MAX;
static uint8_t x476 = 113U;
volatile int32_t t106 = 846;
uint64_t t107 = 2208848962LLU;
volatile uint32_t t109 = 6670148U;
int8_t x489 = INT8_MIN;
volatile int8_t x504 = INT8_MIN;
int32_t x512 = 0;
uint8_t x514 = 37U;
uint16_t x521 = UINT16_MAX;
uint64_t x523 = UINT64_MAX;
volatile uint64_t t119 = 57918878LLU;
uint32_t x532 = UINT32_MAX;
uint32_t x535 = 2825U;
volatile int64_t t121 = 7727754723LL;
int64_t x537 = -1LL;
volatile int64_t t122 = -2074625456322LL;
static volatile int8_t x545 = -1;
int16_t x555 = INT16_MIN;
volatile int64_t t126 = 130129715967777211LL;
int64_t t127 = -3415787791344LL;
int8_t x561 = 13;
int8_t x562 = INT8_MAX;
int32_t x563 = 15;
int64_t x572 = INT64_MIN;
volatile uint64_t t130 = 12793275878LLU;
static int32_t x577 = -1;
int64_t x581 = -53LL;
static int32_t x596 = INT32_MIN;
volatile int64_t t137 = -79905593354875965LL;
int64_t x611 = INT64_MIN;
int8_t x615 = INT8_MIN;
volatile int64_t x616 = INT64_MIN;
int16_t x617 = INT16_MIN;
uint32_t x629 = 608U;
volatile uint64_t x630 = UINT64_MAX;
int16_t x631 = INT16_MIN;
int16_t x635 = INT16_MAX;
static int32_t x644 = -1;
int8_t x645 = 1;
uint8_t x648 = 22U;
int32_t t147 = -813388;
uint32_t x649 = 69U;
uint64_t t148 = 1826515174561042191LLU;
uint64_t t149 = 5870127116063LLU;
int16_t x662 = INT16_MIN;
int64_t x663 = -1LL;
uint64_t x678 = 99253549575621247LLU;
int16_t x686 = 981;
int64_t x689 = INT64_MIN;
static int16_t x690 = 83;
uint16_t x691 = UINT16_MAX;
static int64_t t157 = 825LL;
static volatile uint64_t x693 = UINT64_MAX;
int8_t x696 = INT8_MIN;
uint16_t x698 = 31U;
int8_t x702 = 9;
int64_t t160 = 39590249LL;
int8_t x706 = INT8_MAX;
volatile uint64_t t163 = 258747583828LLU;
uint16_t x717 = UINT16_MAX;
volatile uint16_t x721 = 10U;
volatile uint64_t t166 = 411638LLU;
uint64_t x732 = 1712906574LLU;
int64_t x737 = INT64_MAX;
int8_t x738 = INT8_MIN;
volatile int64_t x742 = -1LL;
static uint64_t x747 = UINT64_MAX;
uint16_t x748 = UINT16_MAX;
volatile uint64_t t172 = 19356095013LLU;
int8_t x753 = INT8_MIN;
static uint8_t x756 = UINT8_MAX;
uint16_t x758 = UINT16_MAX;
static uint32_t x759 = 150U;
volatile int64_t t175 = -3270LL;
int8_t x774 = -27;
int16_t x775 = INT16_MAX;
uint32_t x781 = 91696U;
uint64_t t180 = 623242195975507LLU;
volatile uint32_t x787 = 1437U;
static int64_t t181 = -13LL;
volatile int64_t x791 = 992407379219986496LL;
static uint64_t x792 = 8430044722594483377LLU;
uint8_t x794 = 17U;
int32_t x796 = INT32_MAX;
uint64_t x805 = 2620888617435189LLU;
static uint32_t x806 = 737426360U;
static volatile int32_t x810 = INT32_MIN;
static int16_t x814 = INT16_MIN;
uint16_t x816 = 54U;
int32_t t188 = 9291773;
static uint64_t x817 = 6733674198LLU;
static volatile uint16_t x818 = 3732U;
int8_t x819 = -1;
int64_t x831 = 1866677721594LL;
uint16_t x833 = 990U;
int8_t x838 = 15;
volatile int64_t t193 = 202493LL;
uint32_t t194 = 52788519U;
int64_t x846 = INT64_MAX;
int32_t x849 = -287;
uint8_t x853 = UINT8_MAX;
uint16_t x859 = UINT16_MAX;
static int32_t x864 = INT32_MAX;


void f0(void) {
    	int32_t t0 = -905;

    t0 = (x1^(x2+(x3&x4)));

    if (t0 != 2147450881) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x6 = UINT32_MAX;
	uint8_t x7 = 10U;
	uint32_t x8 = UINT32_MAX;

    t1 = (x5^(x6+(x7&x8)));

    if (t1 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 36U;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = 1743U;

    t2 = (x9^(x10+(x11&x12)));

    if (t2 != 4294967259U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 1558913443706444959LL;
	int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MIN;
	static uint64_t t3 = 967818910311179993LLU;

    t3 = (x13^(x14+(x15&x16)));

    if (t3 != 1558844190451554528LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x18 = 0;
	int8_t x19 = -31;
	volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 15201933571228032LL;

    t4 = (x17^(x18+(x19&x20)));

    if (t4 != -9223372036854775771LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x25 = 21545;
	int64_t x26 = INT64_MAX;
	uint64_t x28 = 4701636442LLU;
	static uint64_t t5 = 432834LLU;

    t5 = (x25^(x26+(x27&x28)));

    if (t5 != 9223372036854754262LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = -1;
	int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MAX;
	uint64_t x32 = 98411960373375LLU;
	volatile uint64_t t6 = 3149079566116683LLU;

    t6 = (x29^(x30+(x31&x32)));

    if (t6 != 18446645659601694593LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x38 = 1506653U;
	int8_t x39 = 1;
	int64_t x40 = -7018583LL;
	int64_t t7 = -61583364074LL;

    t7 = (x37^(x38+(x39&x40)));

    if (t7 != 1453185LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = INT8_MAX;
	volatile uint16_t x43 = UINT16_MAX;
	static int64_t x44 = INT64_MIN;
	int64_t t8 = 15886LL;

    t8 = (x41^(x42+(x43&x44)));

    if (t8 != 559705170LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = 1;
	int8_t x46 = 1;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MIN;
	int32_t t9 = INT32_MIN;

    t9 = (x45^(x46+(x47&x48)));

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x50 = INT8_MAX;
	int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MAX;
	static volatile int64_t t10 = -3103201345248240LL;

    t10 = (x49^(x50+(x51&x52)));

    if (t10 != -118LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = -430LL;
	static volatile uint64_t x54 = 25903789489292097LLU;
	static int16_t x55 = INT16_MAX;
	int16_t x56 = -1;
	volatile uint64_t t11 = 2313442240896732LLU;

    t11 = (x53^(x54+(x55&x56)));

    if (t11 != 18420840284220226834LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x57 = INT16_MAX;
	int8_t x58 = INT8_MIN;
	uint16_t x60 = 23003U;
	uint32_t t12 = 174U;

    t12 = (x57^(x58+(x59&x60)));

    if (t12 != 4294934645U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x61 = UINT16_MAX;
	int64_t x62 = 3123235420919LL;
	uint64_t x63 = UINT64_MAX;
	uint64_t x64 = 8065LLU;
	static uint64_t t13 = 1852275242889501LLU;

    t13 = (x61^(x62+(x63&x64)));

    if (t13 != 3123235415431LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = -1;
	int8_t x66 = INT8_MIN;
	uint16_t x68 = UINT16_MAX;
	static int32_t t14 = -709;

    t14 = (x65^(x66+(x67&x68)));

    if (t14 != -65408) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x69 = INT16_MAX;
	int32_t x71 = INT32_MAX;
	static uint16_t x72 = UINT16_MAX;
	int32_t t15 = -5170;

    t15 = (x69^(x70+(x71&x72)));

    if (t15 != 98305) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x73 = UINT32_MAX;
	static int16_t x74 = INT16_MIN;
	uint16_t x75 = 2U;
	int16_t x76 = 19;
	uint32_t t16 = 0U;

    t16 = (x73^(x74+(x75&x76)));

    if (t16 != 32765U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = -22LL;
	int64_t x78 = 366709LL;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MAX;
	volatile int64_t t17 = 2165935803394304LL;

    t17 = (x77^(x78+(x79&x80)));

    if (t17 != -399458LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = -254;
	static uint16_t x82 = 359U;
	static int16_t x83 = -5627;
	int16_t x84 = INT16_MIN;

    t18 = (x81^(x82+(x83&x84)));

    if (t18 != 32357) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = 36U;
	uint16_t x86 = 32U;
	volatile int64_t x87 = INT64_MIN;
	uint64_t x88 = 85122243573286335LLU;
	static uint64_t t19 = 273LLU;

    t19 = (x85^(x86+(x87&x88)));

    if (t19 != 4LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x91 = -1LL;
	int32_t x92 = INT32_MAX;

    t20 = (x89^(x90+(x91&x92)));

    if (t20 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x93 = UINT8_MAX;
	int8_t x94 = 0;
	uint64_t x96 = 5210577LLU;
	static volatile uint64_t t21 = 1952245321898719499LLU;

    t21 = (x93^(x94+(x95&x96)));

    if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x97 = 63U;
	int8_t x98 = -27;
	uint8_t x99 = 5U;
	int32_t t22 = -10368;

    t22 = (x97^(x98+(x99&x100)));

    if (t22 != -39) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x102 = INT16_MIN;
	int32_t x104 = INT32_MIN;
	volatile int64_t t23 = 405LL;

    t23 = (x101^(x102+(x103&x104)));

    if (t23 != -2147450881LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = 18819U;
	int8_t x106 = INT8_MIN;
	int16_t x107 = 9;
	volatile int64_t t24 = -13LL;

    t24 = (x105^(x106+(x107&x108)));

    if (t24 != -18934LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x110 = -1;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = -1;
	volatile uint32_t t25 = 209U;

    t25 = (x109^(x110+(x111&x112)));

    if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = 12973018U;
	uint16_t x114 = UINT16_MAX;
	uint64_t x116 = 28LLU;
	volatile uint64_t t26 = 3788081LLU;

    t26 = (x113^(x114+(x115&x116)));

    if (t26 != 12913701LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x119 = -1;
	volatile int32_t t27 = -257373243;

    t27 = (x117^(x118+(x119&x120)));

    if (t27 != -34382) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x123 = INT8_MAX;
	static int64_t x124 = INT64_MAX;
	volatile int64_t t28 = -18375668LL;

    t28 = (x121^(x122+(x123&x124)));

    if (t28 != 65409LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x125 = -1LL;
	static volatile int64_t x126 = 1840990557LL;
	int32_t x127 = INT32_MIN;
	int64_t t29 = 3390719179420370LL;

    t29 = (x125^(x126+(x127&x128)));

    if (t29 != 306493090LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = 1680034424509131923LL;
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MIN;
	uint64_t x136 = 1913LLU;
	static volatile uint64_t t30 = 70424022761LLU;

    t30 = (x133^(x134+(x135&x136)));

    if (t30 != 1680034424509065836LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x137 = 196U;
	int16_t x138 = INT16_MAX;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = -761674986985LL;
	int64_t t31 = 11816766596133LL;

    t31 = (x137^(x138+(x139&x140)));

    if (t31 != 2829224658LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x141 = 735821LL;
	int16_t x143 = 0;
	static volatile int16_t x144 = INT16_MIN;
	volatile int64_t t32 = 10336038LL;

    t32 = (x141^(x142+(x143&x144)));

    if (t32 != -735795LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x145 = UINT32_MAX;
	int64_t x146 = 3852LL;
	int64_t x147 = -4803709305342LL;
	static uint16_t x148 = 19273U;

    t33 = (x145^(x146+(x147&x148)));

    if (t33 != 4294944499LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x149 = INT64_MAX;
	uint64_t x150 = 33092732251LLU;
	volatile int64_t x151 = -1485103LL;
	uint16_t x152 = 470U;

    t34 = (x149^(x150+(x151&x152)));

    if (t34 != 9223372003762043348LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x153 = 171U;
	uint32_t x154 = 14U;
	int8_t x156 = INT8_MIN;
	uint32_t t35 = 3209U;

    t35 = (x153^(x154+(x155&x156)));

    if (t35 != 4294941221U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x157 = 85U;
	int8_t x158 = INT8_MIN;
	int32_t x159 = -1;
	uint32_t x160 = 2U;
	static volatile uint32_t t36 = 4U;

    t36 = (x157^(x158+(x159&x160)));

    if (t36 != 4294967255U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x170 = UINT64_MAX;
	static int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MIN;
	volatile uint64_t t37 = 75274353LLU;

    t37 = (x169^(x170+(x171&x172)));

    if (t37 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x173 = INT16_MIN;
	volatile int8_t x175 = INT8_MIN;
	static int32_t x176 = INT32_MAX;
	uint64_t t38 = 12881207821428LLU;

    t38 = (x173^(x174+(x175&x176)));

    if (t38 != 17679510542530813666LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x178 = -1;
	int8_t x180 = INT8_MAX;
	volatile int64_t t39 = -4986487LL;

    t39 = (x177^(x178+(x179&x180)));

    if (t39 != 114LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = 1;
	int8_t x182 = INT8_MIN;
	uint16_t x183 = UINT16_MAX;
	uint16_t x184 = 5625U;
	volatile int32_t t40 = 7556;

    t40 = (x181^(x182+(x183&x184)));

    if (t40 != 5496) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x189 = -1378;
	volatile uint8_t x190 = 7U;
	static volatile int8_t x191 = INT8_MIN;

    t41 = (x189^(x190+(x191&x192)));

    if (t41 != 1305) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x193 = INT16_MAX;
	volatile int8_t x194 = -1;
	uint64_t x195 = 65142380LLU;
	uint64_t x196 = 3LLU;
	volatile uint64_t t42 = 463685057827131LLU;

    t42 = (x193^(x194+(x195&x196)));

    if (t42 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x198 = INT16_MIN;
	uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 514835318061642LLU;
	static uint64_t t43 = 411620070517512LLU;

    t43 = (x197^(x198+(x199&x200)));

    if (t43 != 514835318028840LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x201 = UINT32_MAX;
	static volatile uint64_t x202 = UINT64_MAX;
	int64_t x203 = 5700656500502318LL;
	static int64_t x204 = INT64_MIN;

    t44 = (x201^(x202+(x203&x204)));

    if (t44 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x206 = INT32_MAX;
	int32_t x207 = 612;
	static volatile int16_t x208 = INT16_MIN;
	static int32_t t45 = -1;

    t45 = (x205^(x206+(x207&x208)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x209 = -1;
	uint8_t x210 = UINT8_MAX;
	static uint16_t x211 = UINT16_MAX;
	int32_t x212 = -1;
	volatile int32_t t46 = 9;

    t46 = (x209^(x210+(x211&x212)));

    if (t46 != -65791) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = -1;
	int16_t x214 = INT16_MAX;
	int8_t x216 = 0;
	static int32_t t47 = -47173050;

    t47 = (x213^(x214+(x215&x216)));

    if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x217 = -1;
	int16_t x219 = INT16_MIN;
	static int16_t x220 = 3931;
	int32_t t48 = 307201;

    t48 = (x217^(x218+(x219&x220)));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x221 = INT32_MAX;
	int16_t x222 = 7291;
	volatile uint32_t x223 = 1741U;
	static int64_t x224 = INT64_MIN;
	int64_t t49 = -466LL;

    t49 = (x221^(x222+(x223&x224)));

    if (t49 != 2147476356LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x225 = UINT8_MAX;
	static int8_t x226 = -1;
	static int64_t x227 = 117784217732616LL;
	static int32_t x228 = INT32_MIN;
	static volatile int64_t t50 = 147031367699554LL;

    t50 = (x225^(x226+(x227&x228)));

    if (t50 != 117783035641600LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x230 = 14U;
	int16_t x231 = 402;
	volatile uint16_t x232 = UINT16_MAX;
	int32_t t51 = -58057;

    t51 = (x229^(x230+(x231&x232)));

    if (t51 != 479) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x235 = -29;
	uint64_t x236 = 0LLU;
	volatile uint64_t t52 = 7764767827478508767LLU;

    t52 = (x233^(x234+(x235&x236)));

    if (t52 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x237 = -1LL;
	volatile int8_t x240 = INT8_MIN;
	volatile int64_t t53 = -11060224LL;

    t53 = (x237^(x238+(x239&x240)));

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x241 = INT32_MIN;
	static int64_t x242 = -1LL;
	volatile int32_t x243 = INT32_MAX;
	int8_t x244 = -1;
	volatile int64_t t54 = -656592157628435LL;

    t54 = (x241^(x242+(x243&x244)));

    if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x246 = INT16_MIN;
	static volatile int8_t x248 = INT8_MIN;
	static int32_t t55 = 17;

    t55 = (x245^(x246+(x247&x248)));

    if (t55 != 32895) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x249 = 5360;
	int32_t x250 = -7117;
	int32_t x251 = -15199057;
	int8_t x252 = 3;
	int32_t t56 = 26834;

    t56 = (x249^(x250+(x251&x252)));

    if (t56 != -3898) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x253 = INT16_MIN;
	int64_t x254 = INT64_MIN;
	uint32_t x255 = UINT32_MAX;
	static uint64_t x256 = 22181956348LLU;
	volatile uint64_t t57 = 836LLU;

    t57 = (x253^(x254+(x255&x256)));

    if (t57 != 9223372036147661564LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x257 = -1;
	volatile int32_t x258 = -1;
	volatile uint32_t x260 = 31U;
	volatile uint32_t t58 = 224252U;

    t58 = (x257^(x258+(x259&x260)));

    if (t58 != 4294967293U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x267 = -5;
	int32_t x268 = 16566153;
	int32_t t59 = -5950603;

    t59 = (x265^(x266+(x267&x268)));

    if (t59 != 16566127) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint32_t x269 = 180051704U;
	uint16_t x271 = 204U;
	uint64_t x272 = 5083580039870789755LLU;
	static uint64_t t60 = 3LLU;

    t60 = (x269^(x270+(x271&x272)));

    if (t60 != 180051618LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x273 = 5289040783368557626LLU;
	volatile int8_t x274 = INT8_MAX;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MAX;
	volatile uint64_t t61 = 7LLU;

    t61 = (x273^(x274+(x275&x276)));

    if (t61 != 5289040783368557637LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = -1;
	int64_t x279 = -1LL;
	uint32_t x280 = 6U;
	static volatile int64_t t62 = 42142238LL;

    t62 = (x277^(x278+(x279&x280)));

    if (t62 != -32774LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x281 = UINT16_MAX;
	uint8_t x283 = 3U;
	int64_t x284 = 1635LL;
	static volatile int64_t t63 = -650692389LL;

    t63 = (x281^(x282+(x283&x284)));

    if (t63 != 65529LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x286 = -1;
	volatile int8_t x287 = INT8_MAX;
	volatile int8_t x288 = -27;
	int32_t t64 = 44;

    t64 = (x285^(x286+(x287&x288)));

    if (t64 != 2147483547) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x289 = -477773;
	uint64_t x292 = UINT64_MAX;
	uint64_t t65 = 6LLU;

    t65 = (x289^(x290+(x291&x292)));

    if (t65 != 472524LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x293 = -1;
	int16_t x295 = -3;
	int32_t t66 = 126959120;

    t66 = (x293^(x294+(x295&x296)));

    if (t66 != 2147483598) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x297 = -1LL;
	uint16_t x298 = UINT16_MAX;
	uint8_t x299 = UINT8_MAX;

    t67 = (x297^(x298+(x299&x300)));

    if (t67 != -65656LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x301 = INT8_MIN;
	volatile int64_t x302 = -26559654LL;
	uint64_t x303 = 2382LLU;
	volatile int8_t x304 = -1;
	volatile uint64_t t68 = 8349186796986LLU;

    t68 = (x301^(x302+(x303&x304)));

    if (t68 != 26557224LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x305 = INT8_MAX;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t69 = -445;

    t69 = (x305^(x306+(x307&x308)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x309 = INT8_MAX;
	int32_t x310 = -1;
	volatile uint16_t x311 = 8U;
	int64_t x312 = INT64_MIN;
	int64_t t70 = 9LL;

    t70 = (x309^(x310+(x311&x312)));

    if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x313 = -1;
	static int16_t x314 = INT16_MIN;
	uint64_t x315 = 0LLU;

    t71 = (x313^(x314+(x315&x316)));

    if (t71 != 32767LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x317 = INT64_MAX;
	uint32_t x318 = 14515644U;
	uint64_t x319 = 7LLU;
	static int64_t x320 = INT64_MIN;
	static volatile uint64_t t72 = 5811498LLU;

    t72 = (x317^(x318+(x319&x320)));

    if (t72 != 9223372036840260163LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MIN;
	int8_t x323 = -6;
	uint64_t x324 = 2830LLU;

    t73 = (x321^(x322+(x323&x324)));

    if (t73 != 9223372036854772874LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x325 = 605202;
	volatile int32_t x326 = 89552949;
	int64_t x327 = -73645LL;
	int32_t x328 = -194788405;
	volatile int64_t t74 = 185307588354LL;

    t74 = (x325^(x326+(x327&x328)));

    if (t74 != -105905046LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x329 = 5071200;
	static int64_t x331 = INT64_MAX;
	static int8_t x332 = -1;

    t75 = (x329^(x330+(x331&x332)));

    if (t75 != -5071201LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x333 = -1;
	int64_t x334 = 244437500931LL;
	uint64_t x335 = UINT64_MAX;
	uint64_t t76 = 22025367420LLU;

    t76 = (x333^(x334+(x335&x336)));

    if (t76 != 9223371792417274876LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x341 = -951861;
	int64_t x344 = INT64_MIN;
	volatile uint64_t t77 = 106070107LLU;

    t77 = (x341^(x342+(x343&x344)));

    if (t77 != 1039246LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x345 = -1LL;
	uint32_t x347 = 26335093U;
	volatile int64_t t78 = 0LL;

    t78 = (x345^(x346+(x347&x348)));

    if (t78 != -522LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x349 = INT16_MIN;
	static int16_t x350 = INT16_MIN;
	uint32_t x351 = 407U;

    t79 = (x349^(x350+(x351&x352)));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x353 = INT8_MAX;
	int8_t x356 = -1;
	int32_t t80 = 336;

    t80 = (x353^(x354+(x355&x356)));

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MIN;
	volatile int32_t x359 = 383007352;
	volatile int32_t x360 = -1;
	int64_t t81 = -1LL;

    t81 = (x357^(x358+(x359&x360)));

    if (t81 != -9223372036471768441LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x361 = INT8_MIN;
	int8_t x362 = -1;
	volatile int64_t x364 = -3LL;

    t82 = (x361^(x362+(x363&x364)));

    if (t82 != 108LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x365 = INT32_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t83 = 180463;

    t83 = (x365^(x366+(x367&x368)));

    if (t83 != 2147451008) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x369 = -1LL;
	static int32_t x370 = 852;
	int8_t x371 = 2;
	volatile int64_t t84 = -499303108712LL;

    t84 = (x369^(x370+(x371&x372)));

    if (t84 != -855LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x374 = INT16_MIN;
	volatile uint16_t x375 = 800U;

    t85 = (x373^(x374+(x375&x376)));

    if (t85 != 4280516728U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x377 = INT16_MAX;
	volatile int32_t x378 = -55251284;
	uint64_t x379 = 11756293LLU;
	static volatile uint64_t t86 = 6154245916474LLU;

    t86 = (x377^(x378+(x379&x380)));

    if (t86 != 18446744073654276434LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x381 = -1;
	uint16_t x382 = 62U;
	volatile uint32_t x383 = UINT32_MAX;
	uint64_t x384 = UINT64_MAX;
	uint64_t t87 = 3530140921LLU;

    t87 = (x381^(x382+(x383&x384)));

    if (t87 != 18446744069414584258LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x386 = UINT8_MAX;
	volatile uint32_t x387 = UINT32_MAX;

    t88 = (x385^(x386+(x387&x388)));

    if (t88 != 4294902014U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x389 = 1927LL;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = 6195347602509LLU;
	static int64_t x392 = -61LL;
	uint64_t t89 = 191912087012LLU;

    t89 = (x389^(x390+(x391&x392)));

    if (t89 != 6193200118726LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x393 = INT32_MIN;
	uint32_t x394 = 3U;
	static int16_t x395 = 0;
	int64_t x396 = -26022698166162792LL;
	int64_t t90 = 594757508760LL;

    t90 = (x393^(x394+(x395&x396)));

    if (t90 != -2147483645LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x398 = 10U;
	int8_t x399 = -1;
	static volatile int32_t x400 = INT32_MIN;

    t91 = (x397^(x398+(x399&x400)));

    if (t91 != 14709062250615281495LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x402 = -3;
	uint32_t x403 = 15114877U;
	int8_t x404 = INT8_MIN;
	uint32_t t92 = 106U;

    t92 = (x401^(x402+(x403&x404)));

    if (t92 != 4279852592U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x405 = INT8_MIN;
	volatile uint16_t x406 = UINT16_MAX;
	volatile uint32_t x408 = 404937061U;
	volatile uint32_t t93 = 1847U;

    t93 = (x405^(x406+(x407&x408)));

    if (t93 != 4294715011U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x409 = INT32_MIN;
	int32_t x410 = -1;
	uint16_t x411 = 286U;
	static int32_t t94 = 19109385;

    t94 = (x409^(x410+(x411&x412)));

    if (t94 != -2147483363) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x417 = 1257725;
	int16_t x418 = -426;
	int8_t x419 = INT8_MIN;
	static int32_t t95 = -68;

    t95 = (x417^(x418+(x419&x420)));

    if (t95 != -1257813) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x423 = INT32_MAX;
	int8_t x424 = INT8_MAX;
	uint32_t t96 = 10U;

    t96 = (x421^(x422+(x423&x424)));

    if (t96 != 2147483520U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x425 = 2U;
	volatile int32_t x426 = 758191591;
	static int8_t x427 = INT8_MAX;
	int64_t x428 = INT64_MIN;

    t97 = (x425^(x426+(x427&x428)));

    if (t97 != 758191589LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x433 = INT32_MIN;
	volatile int64_t x434 = 191295066053LL;
	int64_t x435 = 642LL;
	static volatile int64_t t98 = 7328947825LL;

    t98 = (x433^(x434+(x435&x436)));

    if (t98 != -193104506939LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x437 = -107;
	uint64_t x438 = 10LLU;
	int8_t x439 = 7;
	uint32_t x440 = 119286U;
	volatile uint64_t t99 = 127763LLU;

    t99 = (x437^(x438+(x439&x440)));

    if (t99 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x441 = UINT16_MAX;
	int64_t x442 = INT64_MIN;
	static volatile uint64_t t100 = 77004051LLU;

    t100 = (x441^(x442+(x443&x444)));

    if (t100 != 9223372036854841130LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x445 = INT32_MIN;
	volatile uint32_t x448 = 21598593U;
	uint32_t t101 = 618450456U;

    t101 = (x445^(x446+(x447&x448)));

    if (t101 != 2169082495U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x454 = INT8_MAX;
	uint32_t x456 = 151472909U;
	uint32_t t102 = 67331550U;

    t102 = (x453^(x454+(x455&x456)));

    if (t102 != 4294967155U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x458 = 445LLU;
	int64_t x459 = INT64_MAX;
	int32_t x460 = INT32_MIN;
	static uint64_t t103 = 6736228418617023344LLU;

    t103 = (x457^(x458+(x459&x460)));

    if (t103 != 9223372034707292482LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x461 = UINT64_MAX;
	int8_t x462 = -1;
	static int32_t x463 = INT32_MAX;
	volatile int32_t x464 = INT32_MIN;
	volatile uint64_t t104 = 2454340724590272LLU;

    t104 = (x461^(x462+(x463&x464)));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x469 = 489540079LL;
	static volatile int8_t x470 = -1;
	int16_t x472 = INT16_MAX;
	volatile int64_t t105 = 706330604LL;

    t105 = (x469^(x470+(x471&x472)));

    if (t105 != 489534993LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x473 = -3;
	int16_t x474 = 52;
	volatile int8_t x475 = INT8_MAX;

    t106 = (x473^(x474+(x475&x476)));

    if (t106 != -168) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x477 = INT32_MAX;
	uint64_t x478 = 78LLU;
	int64_t x479 = -1LL;
	volatile int8_t x480 = -1;

    t107 = (x477^(x478+(x479&x480)));

    if (t107 != 2147483570LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MIN;
	volatile int8_t x483 = INT8_MAX;
	uint16_t x484 = 1U;
	volatile int32_t t108 = -44109;

    t108 = (x481^(x482+(x483&x484)));

    if (t108 != 2147450881) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x485 = UINT32_MAX;
	volatile int8_t x486 = INT8_MIN;
	volatile uint32_t x487 = 12092U;
	int16_t x488 = INT16_MAX;

    t109 = (x485^(x486+(x487&x488)));

    if (t109 != 4294955331U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x490 = -1;
	int16_t x491 = INT16_MAX;
	int64_t x492 = -49706673744636LL;
	volatile int64_t t110 = -8618223691653164LL;

    t110 = (x489^(x490+(x491&x492)));

    if (t110 != -21885LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x493 = 2419908931712561LLU;
	static int32_t x494 = -1;
	int64_t x495 = -13986945799202464LL;
	int8_t x496 = 1;
	static uint64_t t111 = 15LLU;

    t111 = (x493^(x494+(x495&x496)));

    if (t111 != 18444324164777839054LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x497 = 494;
	int32_t x498 = INT32_MIN;
	static uint64_t x499 = 1651097413921LLU;
	int64_t x500 = INT64_MIN;
	volatile uint64_t t112 = 0LLU;

    t112 = (x497^(x498+(x499&x500)));

    if (t112 != 18446744071562068462LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x501 = 5279LL;
	volatile uint8_t x502 = 2U;
	volatile int64_t x503 = INT64_MIN;
	volatile int64_t t113 = 15274LL;

    t113 = (x501^(x502+(x503&x504)));

    if (t113 != -9223372036854770531LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x505 = 0U;
	int16_t x506 = INT16_MIN;
	static int8_t x507 = 0;
	static uint8_t x508 = UINT8_MAX;
	volatile int32_t t114 = 128869992;

    t114 = (x505^(x506+(x507&x508)));

    if (t114 != -32768) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x509 = -1;
	int16_t x510 = -10;
	static volatile int8_t x511 = 10;
	volatile int32_t t115 = 14340;

    t115 = (x509^(x510+(x511&x512)));

    if (t115 != 9) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x513 = 10081;
	volatile uint16_t x515 = 31U;
	int32_t x516 = 0;
	static volatile int32_t t116 = -851;

    t116 = (x513^(x514+(x515&x516)));

    if (t116 != 10052) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x517 = 0;
	int32_t x518 = -1;
	static int16_t x519 = INT16_MAX;
	int64_t x520 = INT64_MIN;
	volatile int64_t t117 = 89037353LL;

    t117 = (x517^(x518+(x519&x520)));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x522 = 3663526992LLU;
	int16_t x524 = 4;
	static uint64_t t118 = 24697890LLU;

    t118 = (x521^(x522+(x523&x524)));

    if (t118 != 3663463339LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x525 = INT64_MIN;
	uint64_t x526 = UINT64_MAX;
	int8_t x527 = INT8_MIN;
	uint64_t x528 = 19583LLU;

    t119 = (x525^(x526+(x527&x528)));

    if (t119 != 9223372036854795263LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x529 = 1075LLU;
	uint64_t x530 = 450LLU;
	volatile int8_t x531 = -1;
	static volatile uint64_t t120 = 56839152271499LLU;

    t120 = (x529^(x530+(x531&x532)));

    if (t120 != 4294968818LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x533 = -127LL;
	int16_t x534 = -73;
	uint32_t x536 = 117U;

    t121 = (x533^(x534+(x535&x536)));

    if (t121 != -4294967239LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x538 = INT32_MIN;
	volatile uint32_t x539 = UINT32_MAX;
	volatile int64_t x540 = -1LL;

    t122 = (x537^(x538+(x539&x540)));

    if (t122 != -2147483648LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = INT32_MIN;
	static volatile int32_t x542 = INT32_MIN;
	uint64_t x543 = 14575417705736316LLU;
	volatile uint64_t x544 = 112685571824LLU;
	volatile uint64_t t123 = 3LLU;

    t123 = (x541^(x542+(x543&x544)));

    if (t123 != 18446744065665206384LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x546 = INT16_MIN;
	static int32_t x547 = INT32_MIN;
	int16_t x548 = 26;
	static volatile int32_t t124 = 906;

    t124 = (x545^(x546+(x547&x548)));

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x549 = INT16_MAX;
	int64_t x550 = -22LL;
	uint64_t x551 = 781608168685841LLU;
	uint16_t x552 = UINT16_MAX;
	volatile uint64_t t125 = 8703458475561276LLU;

    t125 = (x549^(x550+(x551&x552)));

    if (t125 != 65284LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x553 = INT64_MIN;
	volatile uint32_t x554 = UINT32_MAX;
	volatile int32_t x556 = -1;

    t126 = (x553^(x554+(x555&x556)));

    if (t126 != -9223372032559841281LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x557 = 5353349LL;
	uint16_t x558 = 12336U;
	int16_t x559 = -1;
	uint8_t x560 = UINT8_MAX;

    t127 = (x557^(x558+(x559&x560)));

    if (t127 != 5349034LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x564 = -253;
	int32_t t128 = -314390036;

    t128 = (x561^(x562+(x563&x564)));

    if (t128 != 143) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x569 = -1LL;
	static uint16_t x570 = 1027U;
	int8_t x571 = INT8_MAX;
	volatile int64_t t129 = 14617LL;

    t129 = (x569^(x570+(x571&x572)));

    if (t129 != -1028LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x573 = INT32_MAX;
	uint64_t x574 = 17576919245017LLU;
	int32_t x575 = INT32_MIN;
	int32_t x576 = INT32_MAX;

    t130 = (x573^(x574+(x575&x576)));

    if (t130 != 17575240589094LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x578 = UINT16_MAX;
	int16_t x579 = INT16_MIN;
	uint32_t x580 = UINT32_MAX;
	uint32_t t131 = 1705029205U;

    t131 = (x577^(x578+(x579&x580)));

    if (t131 != 4294934528U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x582 = INT64_MIN;
	int16_t x583 = 3;
	static int32_t x584 = 0;
	volatile int64_t t132 = 53210373LL;

    t132 = (x581^(x582+(x583&x584)));

    if (t132 != 9223372036854775755LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	volatile int32_t x586 = -1;
	static int32_t x587 = INT32_MAX;
	uint64_t x588 = 117312962178422968LLU;
	volatile uint64_t t133 = 196224705753185751LLU;

    t133 = (x585^(x586+(x587&x588)));

    if (t133 != 2177787720LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x593 = -7468;
	int32_t x594 = 1924717;
	uint32_t x595 = 1666887U;
	uint32_t t134 = 3010993U;

    t134 = (x593^(x594+(x595&x596)));

    if (t134 != 4293049529U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x597 = INT16_MAX;
	volatile int32_t x598 = 48;
	int64_t x599 = INT64_MIN;
	int64_t x600 = INT64_MIN;
	int64_t t135 = -50256LL;

    t135 = (x597^(x598+(x599&x600)));

    if (t135 != -9223372036854743089LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x601 = -1;
	int64_t x602 = -1620525745842LL;
	int32_t x603 = 0;
	volatile int8_t x604 = INT8_MIN;
	volatile int64_t t136 = -296LL;

    t136 = (x601^(x602+(x603&x604)));

    if (t136 != 1620525745841LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x605 = INT16_MIN;
	uint32_t x606 = 5861U;
	int32_t x607 = -1;
	static int64_t x608 = -25LL;

    t137 = (x605^(x606+(x607&x608)));

    if (t137 != -26932LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x609 = INT32_MAX;
	static uint16_t x610 = 439U;
	static volatile int64_t x612 = -1LL;
	static int64_t t138 = 2324365232905LL;

    t138 = (x609^(x610+(x611&x612)));

    if (t138 != -9223372034707292600LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint32_t x613 = 1700304721U;
	static uint32_t x614 = UINT32_MAX;
	volatile int64_t t139 = -2719527199455LL;

    t139 = (x613^(x614+(x615&x616)));

    if (t139 != -9223372034260113234LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x618 = INT8_MAX;
	uint32_t x619 = 525U;
	uint16_t x620 = UINT16_MAX;
	static volatile uint32_t t140 = 15730588U;

    t140 = (x617^(x618+(x619&x620)));

    if (t140 != 4294935180U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x621 = INT32_MIN;
	uint32_t x622 = UINT32_MAX;
	uint16_t x623 = 16U;
	static volatile uint16_t x624 = UINT16_MAX;
	uint32_t t141 = 176130832U;

    t141 = (x621^(x622+(x623&x624)));

    if (t141 != 2147483663U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x625 = 7683LLU;
	volatile int16_t x626 = INT16_MIN;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = 5;
	uint64_t t142 = 2055LLU;

    t142 = (x625^(x626+(x627&x628)));

    if (t142 != 18446744073709526534LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x632 = UINT8_MAX;
	volatile uint64_t t143 = 3657461745051LLU;

    t143 = (x629^(x630+(x631&x632)));

    if (t143 != 18446744073709551007LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x633 = 10863630408LL;
	int64_t x634 = INT64_MIN;
	static uint8_t x636 = UINT8_MAX;
	volatile int64_t t144 = -2LL;

    t144 = (x633^(x634+(x635&x636)));

    if (t144 != -9223372025991145289LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x637 = -1;
	int16_t x638 = -1;
	uint64_t x639 = 75LLU;
	static volatile int32_t x640 = INT32_MIN;
	volatile uint64_t t145 = 2644366909975LLU;

    t145 = (x637^(x638+(x639&x640)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x641 = UINT8_MAX;
	int16_t x642 = INT16_MIN;
	int8_t x643 = 36;
	int32_t t146 = -3022232;

    t146 = (x641^(x642+(x643&x644)));

    if (t146 != -32549) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x646 = UINT16_MAX;
	uint16_t x647 = UINT16_MAX;

    t147 = (x645^(x646+(x647&x648)));

    if (t147 != 65556) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x650 = INT64_MAX;
	uint64_t x651 = UINT64_MAX;
	int32_t x652 = -1;

    t148 = (x649^(x650+(x651&x652)));

    if (t148 != 9223372036854775739LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x653 = INT32_MIN;
	uint8_t x654 = 7U;
	uint64_t x655 = 8311320164696LLU;
	static uint64_t x656 = UINT64_MAX;

    t149 = (x653^(x654+(x655&x656)));

    if (t149 != 18446735761358797151LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x657 = 6;
	int32_t x658 = -1;
	volatile int32_t x659 = -1;
	static volatile int8_t x660 = INT8_MIN;
	volatile int32_t t150 = 8940;

    t150 = (x657^(x658+(x659&x660)));

    if (t150 != -135) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x661 = 0U;
	int32_t x664 = 6765563;
	int64_t t151 = -57915773LL;

    t151 = (x661^(x662+(x663&x664)));

    if (t151 != 6732795LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x665 = INT32_MAX;
	int32_t x666 = 3288894;
	int32_t x667 = 4;
	int32_t x668 = 2738;
	static volatile int32_t t152 = 443811369;

    t152 = (x665^(x666+(x667&x668)));

    if (t152 != 2144194753) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x669 = 140U;
	uint32_t x670 = 1046414097U;
	uint8_t x671 = 8U;
	int64_t x672 = INT64_MIN;
	int64_t t153 = 3358686968767LL;

    t153 = (x669^(x670+(x671&x672)));

    if (t153 != 1046414237LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x673 = -1;
	int32_t x674 = -1;
	uint64_t x675 = 8163957LLU;
	int8_t x676 = 1;
	volatile uint64_t t154 = UINT64_MAX;

    t154 = (x673^(x674+(x675&x676)));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x677 = INT16_MIN;
	int32_t x679 = -1;
	int64_t x680 = -1LL;
	volatile uint64_t t155 = 30523362082492LLU;

    t155 = (x677^(x678+(x679&x680)));

    if (t155 != 18347490524133935742LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x685 = 13U;
	volatile int64_t x687 = -1LL;
	int8_t x688 = -2;
	static int64_t t156 = -7200LL;

    t156 = (x685^(x686+(x687&x688)));

    if (t156 != 990LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x692 = 13U;

    t157 = (x689^(x690+(x691&x692)));

    if (t157 != -9223372036854775712LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x694 = -1;
	int16_t x695 = INT16_MIN;
	volatile uint64_t t158 = 9795662LLU;

    t158 = (x693^(x694+(x695&x696)));

    if (t158 != 32768LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x697 = 483U;
	int16_t x699 = INT16_MIN;
	uint32_t x700 = 53896507U;
	volatile uint32_t t159 = 84U;

    t159 = (x697^(x698+(x699&x700)));

    if (t159 != 53871100U) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x701 = 124U;
	volatile uint8_t x703 = UINT8_MAX;
	static volatile int64_t x704 = -1LL;

    t160 = (x701^(x702+(x703&x704)));

    if (t160 != 372LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x705 = 2203;
	static uint64_t x707 = 172504995LLU;
	uint16_t x708 = 29U;
	volatile uint64_t t161 = 62929LLU;

    t161 = (x705^(x706+(x707&x708)));

    if (t161 != 2075LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x709 = INT64_MIN;
	volatile uint8_t x710 = 110U;
	uint64_t x711 = UINT64_MAX;
	int64_t x712 = -1LL;
	uint64_t t162 = 4897LLU;

    t162 = (x709^(x710+(x711&x712)));

    if (t162 != 9223372036854775917LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x713 = -1;
	uint64_t x714 = UINT64_MAX;
	volatile uint64_t x715 = 11263163524742534LLU;
	int32_t x716 = -1082;

    t163 = (x713^(x714+(x715&x716)));

    if (t163 != 18435480910184810106LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x718 = 6554U;
	int16_t x719 = 6;
	volatile uint32_t x720 = 2U;
	volatile uint32_t t164 = 154576U;

    t164 = (x717^(x718+(x719&x720)));

    if (t164 != 58979U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x722 = INT16_MAX;
	int16_t x723 = 41;
	int32_t x724 = INT32_MIN;
	static volatile int32_t t165 = 132513;

    t165 = (x721^(x722+(x723&x724)));

    if (t165 != 32757) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x725 = 4013239612750044395LLU;
	int16_t x726 = -1;
	static volatile int64_t x727 = -15428520013LL;
	int64_t x728 = -1LL;

    t166 = (x725^(x726+(x727&x728)));

    if (t166 != 14433504462848748377LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x729 = UINT32_MAX;
	static uint32_t x730 = UINT32_MAX;
	volatile uint64_t x731 = UINT64_MAX;
	volatile uint64_t t167 = 585511LLU;

    t167 = (x729^(x730+(x731&x732)));

    if (t167 != 6877028018LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x733 = UINT16_MAX;
	static int8_t x734 = INT8_MIN;
	int8_t x735 = INT8_MIN;
	static int8_t x736 = -1;
	volatile int32_t t168 = 297;

    t168 = (x733^(x734+(x735&x736)));

    if (t168 != -65281) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x739 = 14705575LLU;
	static int32_t x740 = -369636233;
	static uint64_t t169 = 124258388435154LLU;

    t169 = (x737^(x738+(x739&x740)));

    if (t169 != 9223372036840079448LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x741 = -231;
	uint16_t x743 = 6836U;
	int32_t x744 = -1;
	int64_t t170 = -1LL;

    t170 = (x741^(x742+(x743&x744)));

    if (t170 != -6742LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x745 = INT64_MIN;
	static int16_t x746 = INT16_MIN;
	volatile uint64_t t171 = 48968007659288LLU;

    t171 = (x745^(x746+(x747&x748)));

    if (t171 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x749 = UINT8_MAX;
	volatile uint64_t x750 = 18133LLU;
	static int64_t x751 = -1LL;
	int16_t x752 = 24;

    t172 = (x749^(x750+(x751&x752)));

    if (t172 != 17938LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x754 = 0U;
	volatile int8_t x755 = INT8_MIN;
	volatile int32_t t173 = -3394321;

    t173 = (x753^(x754+(x755&x756)));

    if (t173 != -256) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x757 = INT16_MIN;
	int8_t x760 = INT8_MIN;
	uint32_t t174 = 33U;

    t174 = (x757^(x758+(x759&x760)));

    if (t174 != 4294869119U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x761 = -2131411926410LL;
	static int32_t x762 = INT32_MAX;
	int16_t x763 = INT16_MIN;
	int64_t x764 = 11132447LL;

    t175 = (x761^(x762+(x763&x764)));

    if (t175 != -2133569405559LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x765 = INT32_MAX;
	static volatile int32_t x766 = INT32_MAX;
	volatile int16_t x767 = INT16_MIN;
	int32_t x768 = INT32_MIN;
	int32_t t176 = INT32_MIN;

    t176 = (x765^(x766+(x767&x768)));

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x769 = -1;
	static uint16_t x770 = 220U;
	volatile uint8_t x771 = 6U;
	static volatile int8_t x772 = INT8_MIN;
	volatile int32_t t177 = 25416;

    t177 = (x769^(x770+(x771&x772)));

    if (t177 != -221) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x773 = -1;
	volatile uint8_t x776 = UINT8_MAX;
	int32_t t178 = 67095392;

    t178 = (x773^(x774+(x775&x776)));

    if (t178 != -229) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x777 = -1511;
	uint64_t x778 = 118886748LLU;
	int32_t x779 = -1;
	int64_t x780 = -106152832902LL;
	volatile uint64_t t179 = 79886856407981LLU;

    t179 = (x777^(x778+(x779&x780)));

    if (t179 != 106033945551LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x782 = UINT8_MAX;
	static int16_t x783 = 1864;
	uint64_t x784 = 112504601LLU;

    t180 = (x781^(x782+(x783&x784)));

    if (t180 != 93751LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x785 = INT32_MAX;
	static int64_t x786 = INT64_MIN;
	int16_t x788 = INT16_MIN;

    t181 = (x785^(x786+(x787&x788)));

    if (t181 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x789 = 0U;
	volatile int16_t x790 = -5;
	volatile uint64_t t182 = 1LLU;

    t182 = (x789^(x790+(x791&x792)));

    if (t182 != 343831583060527099LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x793 = 1LL;
	uint32_t x795 = 14212068U;
	int64_t t183 = 16612437432312LL;

    t183 = (x793^(x794+(x795&x796)));

    if (t183 != 14212084LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x797 = INT16_MAX;
	volatile int8_t x798 = 11;
	int8_t x799 = 2;
	volatile int16_t x800 = -2948;
	int32_t t184 = 6481071;

    t184 = (x797^(x798+(x799&x800)));

    if (t184 != 32756) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x802 = -10468;
	static int32_t x803 = INT32_MAX;
	volatile int32_t x804 = 60647;
	volatile int32_t t185 = -123;

    t185 = (x801^(x802+(x803&x804)));

    if (t185 != -50301) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x807 = INT16_MIN;
	static volatile int16_t x808 = INT16_MIN;
	volatile uint64_t t186 = 6LLU;

    t186 = (x805^(x806+(x807&x808)));

    if (t186 != 2620887911791501LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x809 = -1;
	static int8_t x811 = -1;
	volatile int64_t x812 = -1LL;
	volatile int64_t t187 = 288LL;

    t187 = (x809^(x810+(x811&x812)));

    if (t187 != 2147483648LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x813 = -21;
	int16_t x815 = 2338;

    t188 = (x813^(x814+(x815&x816)));

    if (t188 != 32713) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x820 = 10U;
	volatile uint64_t t189 = 4063769LLU;

    t189 = (x817^(x818+(x819&x820)));

    if (t189 != 6733674568LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x825 = INT32_MIN;
	uint8_t x826 = 7U;
	int64_t x827 = 1377759509121981164LL;
	int16_t x828 = -351;
	static volatile int64_t t190 = -75614677LL;

    t190 = (x825^(x826+(x827&x828)));

    if (t190 != -1377759508614227289LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x829 = INT64_MIN;
	uint16_t x830 = UINT16_MAX;
	static uint32_t x832 = UINT32_MAX;
	volatile int64_t t191 = 528407293657366LL;

    t191 = (x829^(x830+(x831&x832)));

    if (t191 != -9223372034192795143LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x834 = 1153U;
	int8_t x835 = INT8_MIN;
	int64_t x836 = 908771496956LL;
	static volatile int64_t t192 = 2163326LL;

    t192 = (x833^(x834+(x835&x836)));

    if (t192 != 908771498975LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x837 = 172368032U;
	int16_t x839 = INT16_MIN;
	int64_t x840 = 228166903LL;

    t193 = (x837^(x838+(x839&x840)));

    if (t193 != 132096175LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x841 = 9626769U;
	int8_t x842 = -1;
	static uint32_t x843 = 120731640U;
	int32_t x844 = 43944057;

    t194 = (x841^(x842+(x843&x844)));

    if (t194 != 42001638U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x845 = UINT16_MAX;
	volatile int64_t x847 = INT64_MIN;
	static int16_t x848 = INT16_MAX;
	volatile int64_t t195 = -26164LL;

    t195 = (x845^(x846+(x847&x848)));

    if (t195 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x850 = -1;
	int32_t x851 = 1;
	int32_t x852 = -1;
	int32_t t196 = -20148872;

    t196 = (x849^(x850+(x851&x852)));

    if (t196 != -287) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x854 = UINT16_MAX;
	volatile uint32_t x855 = 10542017U;
	volatile int32_t x856 = -810;
	volatile uint32_t t197 = 0U;

    t197 = (x853^(x854+(x855&x856)));

    if (t197 != 10606656U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x857 = UINT32_MAX;
	static volatile uint8_t x858 = 26U;
	int64_t x860 = INT64_MIN;
	volatile int64_t t198 = 56094488714LL;

    t198 = (x857^(x858+(x859&x860)));

    if (t198 != 4294967269LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x861 = 11LLU;
	int32_t x862 = -39;
	uint16_t x863 = UINT16_MAX;
	volatile uint64_t t199 = 26197LLU;

    t199 = (x861^(x862+(x863&x864)));

    if (t199 != 65491LLU) { NG(); } else { ; }
	
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

