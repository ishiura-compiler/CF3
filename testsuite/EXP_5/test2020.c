#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -1LL;
int16_t x16 = INT16_MAX;
int32_t x23 = -1;
uint64_t x28 = 1917967025LLU;
int64_t x29 = INT64_MIN;
int32_t x32 = INT32_MIN;
volatile int64_t t7 = -21LL;
int64_t t8 = -1539332289613489LL;
static uint32_t x39 = 20473786U;
static int64_t x46 = INT64_MIN;
volatile int64_t t11 = -53638965015LL;
int16_t x58 = INT16_MAX;
int32_t x80 = INT32_MIN;
volatile int64_t t19 = 6892122LL;
int64_t x89 = INT64_MIN;
volatile int16_t x91 = -1;
int8_t x95 = -1;
static int16_t x97 = 1;
uint64_t t23 = 2221937794237429LLU;
volatile int32_t x105 = 83;
int64_t x110 = -1716LL;
volatile uint32_t x117 = 112U;
static int8_t x126 = -1;
int8_t x130 = -1;
int8_t x142 = 44;
int16_t x146 = INT16_MIN;
static int8_t x147 = INT8_MAX;
int64_t x150 = INT64_MIN;
volatile uint32_t x152 = UINT32_MAX;
volatile int8_t x163 = INT8_MAX;
int32_t x168 = INT32_MIN;
uint64_t x171 = UINT64_MAX;
uint64_t t40 = 9LLU;
static volatile uint16_t x173 = 58U;
volatile int8_t x184 = -53;
int64_t x186 = -66679270558033LL;
int64_t x192 = INT64_MIN;
int16_t x198 = INT16_MIN;
uint8_t x209 = 0U;
uint16_t x212 = UINT16_MAX;
int16_t x217 = -6;
static volatile int64_t x222 = -1LL;
int16_t x232 = INT16_MAX;
int32_t x233 = 2;
int32_t x236 = INT32_MIN;
uint64_t x239 = 231467888163LLU;
int16_t x243 = INT16_MAX;
volatile uint32_t x244 = 901835932U;
volatile uint8_t x246 = 6U;
static int64_t x255 = INT64_MIN;
int64_t x260 = INT64_MIN;
static uint64_t x263 = 17465LLU;
volatile uint32_t x264 = UINT32_MAX;
uint64_t t62 = 6547189574769LLU;
volatile int64_t x267 = INT64_MIN;
volatile int64_t t63 = 1161LL;
uint8_t x269 = 4U;
int32_t x282 = 122;
uint16_t x288 = 25U;
uint64_t t68 = 52LLU;
volatile int32_t x294 = INT32_MIN;
int16_t x296 = INT16_MIN;
volatile uint32_t x320 = 29U;
volatile int64_t t77 = -17514557LL;
int32_t x343 = -1;
int32_t x345 = INT32_MIN;
static int64_t t83 = 94698466190949309LL;
volatile uint64_t t84 = 2872LLU;
int64_t x354 = INT64_MIN;
static int8_t x355 = 2;
static int16_t x359 = 12512;
int64_t x360 = INT64_MAX;
static uint64_t x372 = UINT64_MAX;
static volatile uint64_t x376 = 3LLU;
static int32_t x391 = INT32_MIN;
volatile int32_t t93 = 89619;
int32_t x393 = -1;
volatile int8_t x404 = INT8_MIN;
int64_t t96 = -17032383929LL;
volatile int8_t x406 = -1;
int8_t x415 = INT8_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = -6778109;
	static int8_t x3 = 9;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 50545202U;

	t0 = (x1%((x2|x3)^x4));

	if (t0 != 4429868U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1650874895747LL;
	int64_t x6 = INT64_MIN;
	int32_t x8 = 21;
	volatile int64_t t1 = -8067702876LL;

	t1 = (x5%((x6|x7)^x8));

	if (t1 != 11LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	static volatile int32_t x10 = INT32_MIN;
	volatile int16_t x11 = INT16_MIN;
	int64_t x12 = 2534384275701LL;
	volatile int64_t t2 = -7361963825871724LL;

	t2 = (x9%((x10|x11)^x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 187;
	int16_t x14 = 1201;
	static uint16_t x15 = 5570U;
	int32_t t3 = 8;

	t3 = (x13%((x14|x15)^x16));

	if (t3 != 187) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	volatile int32_t x18 = -1;
	static uint8_t x19 = UINT8_MAX;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 320531970;

	t4 = (x17%((x18|x19)^x20));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	uint16_t x22 = 22512U;
	uint32_t x24 = 1U;
	volatile int64_t t5 = -23LL;

	t5 = (x21%((x22|x23)^x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = UINT8_MAX;
	int64_t x26 = 228353426299118LL;
	uint8_t x27 = 2U;
	uint64_t t6 = 920LLU;

	t6 = (x25%((x26|x27)^x28));

	if (t6 != 255LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x30 = -8168;
	int32_t x31 = -1637472;

	t7 = (x29%((x30|x31)^x32));

	if (t7 != -104835200LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int16_t x34 = -3947;
	int32_t x35 = INT32_MIN;
	volatile int8_t x36 = -1;

	t8 = (x33%((x34|x35)^x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 0LLU;
	uint64_t x38 = 431451047196LLU;
	volatile int32_t x40 = INT32_MIN;
	uint64_t t9 = 456315351LLU;

	t9 = (x37%((x38|x39)^x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 3;
	uint16_t x42 = 558U;
	volatile int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MIN;
	int64_t t10 = 1872955081760LL;

	t10 = (x41%((x42|x43)^x44));

	if (t10 != 3LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 1U;
	uint8_t x47 = UINT8_MAX;
	int64_t x48 = -1LL;

	t11 = (x45%((x46|x47)^x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = UINT64_MAX;
	volatile int8_t x50 = INT8_MAX;
	static uint8_t x51 = 65U;
	static int16_t x52 = -19;
	volatile uint64_t t12 = 86997640649LLU;

	t12 = (x49%((x50|x51)^x52));

	if (t12 != 109LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 24U;
	int8_t x54 = -6;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -6649;

	t13 = (x53%((x54|x55)^x56));

	if (t13 != 24) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	volatile uint64_t x59 = 15288LLU;
	int32_t x60 = INT32_MIN;
	static uint64_t t14 = 10257446218LLU;

	t14 = (x57%((x58|x59)^x60));

	if (t14 != 2147450880LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -1;
	uint8_t x62 = 1U;
	uint64_t x63 = 2LLU;
	int32_t x64 = 676792398;
	uint64_t t15 = 80LLU;

	t15 = (x61%((x62|x63)^x64));

	if (t15 != 398224775LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -20583136880832573LL;
	int8_t x70 = -13;
	int64_t x71 = -1LL;
	uint16_t x72 = 14U;
	static int64_t t16 = 229678736869LL;

	t16 = (x69%((x70|x71)^x72));

	if (t16 != -3LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 15LLU;
	int64_t x78 = INT64_MAX;
	int64_t x79 = 11LL;
	volatile uint64_t t17 = 635413043LLU;

	t17 = (x77%((x78|x79)^x80));

	if (t17 != 15LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = INT32_MAX;
	volatile uint16_t x82 = 12U;
	volatile uint8_t x83 = 1U;
	uint64_t x84 = 64LLU;
	volatile uint64_t t18 = 262448520779LLU;

	t18 = (x81%((x82|x83)^x84));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x85 = 193216U;
	uint8_t x86 = 33U;
	int64_t x87 = -1LL;
	uint8_t x88 = UINT8_MAX;

	t19 = (x85%((x86|x87)^x88));

	if (t19 != 192LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x90 = 242U;
	int8_t x92 = INT8_MAX;
	volatile int64_t t20 = 111417LL;

	t20 = (x89%((x90|x91)^x92));

	if (t20 != -8192LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	volatile uint16_t x94 = 9U;
	int64_t x96 = INT64_MIN;
	volatile int64_t t21 = 1866LL;

	t21 = (x93%((x94|x95)^x96));

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	uint8_t x100 = UINT8_MAX;
	volatile int64_t t22 = 490182513918257697LL;

	t22 = (x97%((x98|x99)^x100));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 3U;
	uint64_t x102 = 28377869011479060LLU;
	volatile uint64_t x103 = 57836390997226617LLU;
	static int32_t x104 = -1;

	t23 = (x101%((x102|x103)^x104));

	if (t23 != 3LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MAX;
	volatile int32_t x108 = INT32_MIN;
	volatile int64_t t24 = -61331LL;

	t24 = (x105%((x106|x107)^x108));

	if (t24 != 83LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 55;
	uint32_t x111 = 26U;
	volatile int32_t x112 = INT32_MAX;
	static int64_t t25 = -237995443899169719LL;

	t25 = (x109%((x110|x111)^x112));

	if (t25 != 55LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = 80944599LL;
	volatile int32_t x114 = -1;
	static uint16_t x115 = UINT16_MAX;
	int8_t x116 = INT8_MIN;
	static int64_t t26 = -5217LL;

	t26 = (x113%((x114|x115)^x116));

	if (t26 != 6LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x118 = UINT32_MAX;
	int16_t x119 = -1;
	int64_t x120 = -1LL;
	volatile int64_t t27 = 18538LL;

	t27 = (x117%((x118|x119)^x120));

	if (t27 != 112LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int32_t x122 = 0;
	int16_t x123 = INT16_MIN;
	volatile int32_t x124 = INT32_MIN;
	volatile int64_t t28 = 2231241659805LL;

	t28 = (x121%((x122|x123)^x124));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = 1;
	int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MIN;
	volatile int32_t t29 = 62363695;

	t29 = (x125%((x126|x127)^x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MAX;
	static uint16_t x131 = UINT16_MAX;
	static volatile int64_t x132 = INT64_MAX;
	volatile int64_t t30 = 791030834058987803LL;

	t30 = (x129%((x130|x131)^x132));

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = INT32_MAX;
	static int32_t x134 = INT32_MAX;
	uint64_t x135 = 2585279002086750336LLU;
	int64_t x136 = INT64_MIN;
	static volatile uint64_t t31 = 60LLU;

	t31 = (x133%((x134|x135)^x136));

	if (t31 != 2147483647LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = 13376581028LL;
	volatile int32_t x138 = -1;
	uint16_t x139 = 13851U;
	volatile int64_t x140 = INT64_MAX;
	int64_t t32 = 16361838195248LL;

	t32 = (x137%((x138|x139)^x140));

	if (t32 != 13376581028LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x141 = 1U;
	int8_t x143 = 3;
	uint16_t x144 = 0U;
	uint32_t t33 = 4U;

	t33 = (x141%((x142|x143)^x144));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = -1;
	int64_t x148 = INT64_MIN;
	volatile int64_t t34 = 785060147571LL;

	t34 = (x145%((x146|x147)^x148));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = INT32_MIN;
	int16_t x151 = INT16_MIN;
	volatile int64_t t35 = 1141800041974984440LL;

	t35 = (x149%((x150|x151)^x152));

	if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x153 = 2U;
	uint8_t x154 = 0U;
	static int32_t x155 = 37;
	static int16_t x156 = -99;
	int32_t t36 = -80409;

	t36 = (x153%((x154|x155)^x156));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MIN;
	int32_t x159 = INT32_MIN;
	int8_t x160 = -1;
	volatile int32_t t37 = 10764;

	t37 = (x157%((x158|x159)^x160));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = 0;
	volatile int8_t x162 = INT8_MIN;
	static uint32_t x164 = 192U;
	volatile uint32_t t38 = 85597829U;

	t38 = (x161%((x162|x163)^x164));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MAX;
	uint16_t x166 = 9U;
	uint16_t x167 = UINT16_MAX;
	int32_t t39 = 2334936;

	t39 = (x165%((x166|x167)^x168));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	int16_t x170 = INT16_MIN;
	static uint64_t x172 = 62129864615LLU;

	t40 = (x169%((x170|x171)^x172));

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x174 = INT16_MAX;
	static uint16_t x175 = 252U;
	volatile uint16_t x176 = UINT16_MAX;
	volatile int32_t t41 = 20110;

	t41 = (x173%((x174|x175)^x176));

	if (t41 != 58) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = -1;
	int32_t x178 = INT32_MIN;
	uint16_t x179 = UINT16_MAX;
	int32_t x180 = 5;
	volatile int32_t t42 = 830480327;

	t42 = (x177%((x178|x179)^x180));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 21280U;
	volatile uint16_t x182 = 12U;
	uint64_t x183 = 62581078784074042LLU;
	static uint64_t t43 = 122827944221LLU;

	t43 = (x181%((x182|x183)^x184));

	if (t43 != 21280LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = 3274;
	static int32_t x187 = INT32_MIN;
	volatile int16_t x188 = -1;
	int64_t t44 = 387422149049305LL;

	t44 = (x185%((x186|x187)^x188));

	if (t44 != 3274LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	volatile int32_t x191 = INT32_MIN;
	int64_t t45 = 217589416665552LL;

	t45 = (x189%((x190|x191)^x192));

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x193 = -1;
	int32_t x194 = 0;
	int64_t x195 = 70227007LL;
	int64_t x196 = INT64_MIN;
	int64_t t46 = -7933543LL;

	t46 = (x193%((x194|x195)^x196));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = 2;
	uint8_t x199 = UINT8_MAX;
	int32_t x200 = -9191645;
	volatile int32_t t47 = 21199;

	t47 = (x197%((x198|x199)^x200));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x201 = 166LL;
	int64_t x202 = -1LL;
	volatile int16_t x203 = 1;
	int64_t x204 = INT64_MAX;
	volatile int64_t t48 = -119541310LL;

	t48 = (x201%((x202|x203)^x204));

	if (t48 != 166LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x205 = INT8_MIN;
	int32_t x206 = -441;
	volatile int8_t x207 = INT8_MIN;
	static volatile int8_t x208 = -20;
	int32_t t49 = 904;

	t49 = (x205%((x206|x207)^x208));

	if (t49 != -42) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x210 = -1LL;
	int32_t x211 = 42256;
	volatile int64_t t50 = 9916423LL;

	t50 = (x209%((x210|x211)^x212));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x218 = INT8_MIN;
	uint32_t x219 = 333859U;
	int32_t x220 = -43;
	volatile uint32_t t51 = 3601704U;

	t51 = (x217%((x218|x219)^x220));

	if (t51 != 104U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MIN;
	volatile int64_t t52 = 7618712625351900LL;

	t52 = (x221%((x222|x223)^x224));

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -26;
	int8_t x226 = -5;
	int8_t x227 = -1;
	static int32_t x228 = INT32_MIN;
	int32_t t53 = 6561780;

	t53 = (x225%((x226|x227)^x228));

	if (t53 != -26) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = -2570;
	static volatile int8_t x230 = INT8_MIN;
	int64_t x231 = 4431450840426094324LL;
	int64_t t54 = 6743720478594303LL;

	t54 = (x229%((x230|x231)^x232));

	if (t54 != -2570LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x234 = UINT32_MAX;
	int8_t x235 = -1;
	volatile uint32_t t55 = 14U;

	t55 = (x233%((x234|x235)^x236));

	if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x237 = -1;
	uint64_t x238 = UINT64_MAX;
	uint8_t x240 = 0U;
	static uint64_t t56 = 6742094840185LLU;

	t56 = (x237%((x238|x239)^x240));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 2U;
	uint32_t x242 = UINT32_MAX;
	volatile uint32_t t57 = 124627U;

	t57 = (x241%((x242|x243)^x244));

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x245 = INT8_MIN;
	int8_t x247 = 1;
	int32_t x248 = INT32_MAX;
	int32_t t58 = 65;

	t58 = (x245%((x246|x247)^x248));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = 13;
	int8_t x251 = INT8_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t59 = -46841;

	t59 = (x249%((x250|x251)^x252));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x254 = INT32_MIN;
	volatile int32_t x256 = -215602;
	static volatile int64_t t60 = -19149LL;

	t60 = (x253%((x254|x255)^x256));

	if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = INT64_MAX;
	uint32_t x258 = UINT32_MAX;
	uint16_t x259 = UINT16_MAX;
	static volatile int64_t t61 = -16025521581808174LL;

	t61 = (x257%((x258|x259)^x260));

	if (t61 != 4294967294LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = 33859651381436LL;
	int8_t x262 = INT8_MIN;

	t62 = (x261%((x262|x263)^x264));

	if (t62 != 33859651381436LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x265 = -176;
	volatile int64_t x266 = -33563206582LL;
	uint8_t x268 = UINT8_MAX;

	t63 = (x265%((x266|x267)^x268));

	if (t63 != -176LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x270 = 6242121U;
	static uint16_t x271 = UINT16_MAX;
	volatile int64_t x272 = 2215690567LL;
	int64_t t64 = 9559122500646193LL;

	t64 = (x269%((x270|x271)^x272));

	if (t64 != 4LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x273 = INT32_MIN;
	volatile uint16_t x274 = 31U;
	int64_t x275 = -271912172613919988LL;
	int32_t x276 = INT32_MIN;
	volatile int64_t t65 = -4250287035422LL;

	t65 = (x273%((x274|x275)^x276));

	if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x277 = -1;
	volatile int16_t x278 = 24;
	volatile int32_t x279 = INT32_MAX;
	uint32_t x280 = UINT32_MAX;
	uint32_t t66 = 46607U;

	t66 = (x277%((x278|x279)^x280));

	if (t66 != 2147483647U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x281 = 550U;
	uint16_t x283 = UINT16_MAX;
	volatile int8_t x284 = INT8_MAX;
	uint32_t t67 = 6171000U;

	t67 = (x281%((x282|x283)^x284));

	if (t67 != 550U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x285 = UINT16_MAX;
	int8_t x286 = -1;
	uint64_t x287 = 74669LLU;

	t68 = (x285%((x286|x287)^x288));

	if (t68 != 65535LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x289 = UINT8_MAX;
	uint16_t x290 = 1565U;
	int64_t x291 = -5LL;
	static int32_t x292 = -235233;
	volatile int64_t t69 = 28597334LL;

	t69 = (x289%((x290|x291)^x292));

	if (t69 != 255LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x293 = 146U;
	int8_t x295 = INT8_MIN;
	static volatile int32_t t70 = 0;

	t70 = (x293%((x294|x295)^x296));

	if (t70 != 146) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = -25378273854764089LL;
	uint8_t x299 = UINT8_MAX;
	volatile uint32_t x300 = 3202307U;
	volatile int64_t t71 = 4033102910LL;

	t71 = (x297%((x298|x299)^x300));

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x301 = -1;
	int16_t x302 = INT16_MAX;
	uint64_t x303 = 26417951667405LLU;
	uint32_t x304 = 109U;
	uint64_t t72 = 849615LLU;

	t72 = (x301%((x302|x303)^x304));

	if (t72 != 13050743882685LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = 53U;
	volatile int64_t x306 = INT64_MAX;
	static int8_t x307 = 1;
	int16_t x308 = 511;
	int64_t t73 = 14LL;

	t73 = (x305%((x306|x307)^x308));

	if (t73 != 53LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 1U;
	static int16_t x310 = -1;
	volatile int16_t x311 = 7775;
	static int16_t x312 = INT16_MIN;
	int32_t t74 = -154;

	t74 = (x309%((x310|x311)^x312));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = 1LLU;
	static uint64_t x314 = UINT64_MAX;
	volatile int8_t x315 = 1;
	static uint32_t x316 = UINT32_MAX;
	volatile uint64_t t75 = 144075LLU;

	t75 = (x313%((x314|x315)^x316));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 24180U;
	int32_t x318 = INT32_MIN;
	int64_t x319 = INT64_MIN;
	int64_t t76 = -4366483617244LL;

	t76 = (x317%((x318|x319)^x320));

	if (t76 != 24180LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MIN;
	volatile uint8_t x322 = 0U;
	uint16_t x323 = 15U;
	int64_t x324 = 47LL;

	t77 = (x321%((x322|x323)^x324));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x325 = -1;
	int64_t x326 = INT64_MIN;
	volatile int32_t x327 = 0;
	uint16_t x328 = 119U;
	int64_t t78 = 5624LL;

	t78 = (x325%((x326|x327)^x328));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int64_t x330 = 1113934805593573LL;
	int32_t x331 = INT32_MIN;
	volatile int64_t x332 = 63341723660LL;
	volatile uint64_t t79 = 1208121LLU;

	t79 = (x329%((x330|x331)^x332));

	if (t79 != 64037196310LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	volatile uint32_t x334 = 1U;
	int64_t x335 = -1LL;
	int8_t x336 = -57;
	int64_t t80 = -15566102158573LL;

	t80 = (x333%((x334|x335)^x336));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x337 = -1;
	int8_t x338 = INT8_MIN;
	int64_t x339 = -31667795398433693LL;
	int8_t x340 = 52;
	static int64_t t81 = -3LL;

	t81 = (x337%((x338|x339)^x340));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 8276257411LLU;
	uint64_t x342 = UINT64_MAX;
	uint16_t x344 = 1U;
	static uint64_t t82 = 850698627LLU;

	t82 = (x341%((x342|x343)^x344));

	if (t82 != 8276257411LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x346 = INT64_MAX;
	static int32_t x347 = 193;
	int8_t x348 = INT8_MIN;

	t83 = (x345%((x346|x347)^x348));

	if (t83 != -2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x349 = 60U;
	int64_t x350 = -253224LL;
	uint64_t x351 = 22874206379373673LLU;
	volatile uint16_t x352 = UINT16_MAX;

	t84 = (x349%((x350|x351)^x352));

	if (t84 != 60LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MIN;
	static volatile uint32_t x356 = 399266U;
	static int64_t t85 = -260472LL;

	t85 = (x353%((x354|x355)^x356));

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = 9U;
	static uint64_t x358 = UINT64_MAX;
	volatile uint64_t t86 = 8254789190507408651LLU;

	t86 = (x357%((x358|x359)^x360));

	if (t86 != 9LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = UINT64_MAX;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = 1;
	uint16_t x364 = 2284U;
	static volatile uint64_t t87 = 699099499460LLU;

	t87 = (x361%((x362|x363)^x364));

	if (t87 != 5221224LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = 9026;
	uint64_t x366 = 41LLU;
	uint16_t x367 = UINT16_MAX;
	uint8_t x368 = UINT8_MAX;
	static volatile uint64_t t88 = 5030616880540521544LLU;

	t88 = (x365%((x366|x367)^x368));

	if (t88 != 9026LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MAX;
	uint32_t x371 = UINT32_MAX;
	static uint64_t t89 = 19340706244166430LLU;

	t89 = (x369%((x370|x371)^x372));

	if (t89 != 2147483648LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x374 = INT32_MAX;
	int64_t x375 = INT64_MIN;
	uint64_t t90 = 150729428LLU;

	t90 = (x373%((x374|x375)^x376));

	if (t90 != 9223372034707292163LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = INT8_MIN;
	uint64_t x378 = UINT64_MAX;
	int16_t x379 = -1;
	int8_t x380 = INT8_MIN;
	uint64_t t91 = 94904549LLU;

	t91 = (x377%((x378|x379)^x380));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	static int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MIN;
	int64_t x388 = -1LL;
	static int64_t t92 = 2112859955042921768LL;

	t92 = (x385%((x386|x387)^x388));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x389 = 14U;
	int16_t x390 = 1;
	static int16_t x392 = 2429;

	t93 = (x389%((x390|x391)^x392));

	if (t93 != 14) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x394 = INT64_MIN;
	static int64_t x395 = INT64_MAX;
	int16_t x396 = 395;
	int64_t t94 = 12924018LL;

	t94 = (x393%((x394|x395)^x396));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	static int64_t x398 = 372343298345034247LL;
	volatile int64_t x399 = 1279710922670707219LL;
	uint16_t x400 = 3168U;
	int64_t t95 = -98375876191LL;

	t95 = (x397%((x398|x399)^x400));

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MIN;
	int64_t x402 = -47590218498345LL;
	int8_t x403 = 1;

	t96 = (x401%((x402|x403)^x404));

	if (t96 != -6970118612880LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = -4LL;
	uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 1U;
	volatile uint64_t t97 = 33316792LLU;

	t97 = (x405%((x406|x407)^x408));

	if (t97 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x409 = UINT64_MAX;
	volatile int32_t x410 = INT32_MAX;
	uint32_t x411 = 884406U;
	uint8_t x412 = 7U;
	uint64_t t98 = 195215761935017261LLU;

	t98 = (x409%((x410|x411)^x412));

	if (t98 != 255LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = 4532;
	int32_t x414 = 2;
	int16_t x416 = 7080;
	volatile int32_t t99 = -30482;

	t99 = (x413%((x414|x415)^x416));

	if (t99 != 4532) { NG(); } else { ; }
	
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


    return 0;
}

