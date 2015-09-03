#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MAX;
int32_t x5 = INT32_MIN;
volatile int64_t x17 = INT64_MIN;
uint32_t x18 = 39617228U;
int32_t x26 = 3039180;
uint64_t x27 = 786526214158948446LLU;
uint64_t x28 = UINT64_MAX;
volatile uint8_t x35 = 75U;
volatile int64_t t8 = -1LL;
uint64_t t9 = 6192494337927LLU;
static int64_t x44 = INT64_MIN;
static int64_t t10 = -12082467084LL;
static uint16_t x48 = 2U;
volatile uint64_t x51 = 4LLU;
static uint8_t x54 = UINT8_MAX;
static int16_t x56 = -1;
uint8_t x61 = 4U;
volatile int64_t x64 = -1LL;
int32_t x80 = INT32_MAX;
uint16_t x82 = 13502U;
volatile int64_t x83 = INT64_MIN;
uint64_t x84 = 217421911879492LLU;
static int32_t x85 = 6915627;
static uint64_t t21 = 5LLU;
uint32_t x100 = 1365U;
volatile int64_t x102 = INT64_MIN;
int16_t x103 = -24;
int16_t x105 = 13372;
uint8_t x107 = UINT8_MAX;
volatile int64_t x108 = -1LL;
uint16_t x109 = 1512U;
int32_t x110 = -112773;
int8_t x113 = INT8_MIN;
uint64_t x115 = 545LLU;
volatile int32_t t30 = -61773777;
uint16_t x127 = UINT16_MAX;
int32_t x130 = INT32_MIN;
uint64_t x131 = 2260LLU;
int64_t x143 = -259970089290763LL;
uint16_t x144 = UINT16_MAX;
int16_t x151 = -2;
int32_t x154 = INT32_MIN;
volatile uint8_t x159 = 2U;
int64_t t39 = -14LL;
uint16_t x164 = UINT16_MAX;
static volatile int8_t x168 = -1;
int64_t x175 = -3788813144738196LL;
volatile uint32_t x181 = 30397U;
uint16_t x182 = 915U;
int32_t x188 = 272;
static int16_t x192 = INT16_MIN;
int8_t x195 = -5;
uint64_t x196 = UINT64_MAX;
int64_t x197 = 396778298LL;
int64_t t49 = -10663800326631742LL;
static int16_t x203 = INT16_MIN;
uint64_t x213 = 910965585554861LLU;
uint32_t x219 = 123380U;
int64_t x230 = INT64_MIN;
int64_t t59 = 106147649024612884LL;
static uint64_t x242 = UINT64_MAX;
static volatile uint64_t t60 = 0LLU;
int64_t x245 = INT64_MIN;
static int32_t x248 = -1;
static int64_t t61 = INT64_MAX;
int8_t x260 = INT8_MIN;
static volatile int32_t t64 = -612;
uint16_t x262 = 33U;
int8_t x265 = INT8_MIN;
int32_t x266 = -16371;
int16_t x267 = -1;
static int32_t t66 = -119800787;
int8_t x269 = -1;
uint16_t x270 = 5492U;
int8_t x277 = INT8_MIN;
static uint64_t x281 = 130291951LLU;
int8_t x283 = -1;
static int32_t x288 = INT32_MAX;
volatile uint64_t t72 = 331LLU;
uint64_t t73 = 524237540736LLU;
volatile int32_t t74 = -462277210;
static uint64_t x306 = 1LLU;
static int8_t x308 = -1;
int32_t x310 = INT32_MAX;
static int64_t t77 = -894641673390196276LL;
int64_t x314 = INT64_MIN;
volatile int8_t x316 = -1;
int8_t x318 = INT8_MIN;
volatile uint64_t t79 = 4072319LLU;
int8_t x323 = INT8_MAX;
static int8_t x324 = INT8_MIN;
volatile int64_t t81 = 12665LL;
static volatile uint16_t x329 = 12475U;
int32_t x336 = 21;
int64_t t83 = -1603955337743526090LL;
static int32_t x340 = INT32_MIN;
int32_t x345 = -1;
int16_t x348 = 476;
volatile int32_t x350 = -11;
volatile uint32_t x355 = UINT32_MAX;
uint8_t x356 = 35U;
volatile int16_t x357 = -155;
static int16_t x365 = INT16_MIN;
uint64_t x369 = 14421500749LLU;
volatile int8_t x383 = -1;


void f0(void) {
	int16_t x2 = -233;
	uint64_t x3 = 281000875652113LLU;
	volatile uint32_t x4 = 441510415U;
	uint64_t t0 = 139263525LLU;

	t0 = (x1^((x2|x3)&x4));

	if (t0 != 441510520LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	int8_t x7 = INT8_MIN;
	int8_t x8 = -1;
	static int64_t t1 = 319LL;

	t1 = (x5^((x6|x7)&x8));

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 809;
	volatile int64_t x10 = -13284261826733LL;
	static uint8_t x11 = 6U;
	uint32_t x12 = 12U;
	int64_t t2 = -1LL;

	t2 = (x9^((x10|x11)&x12));

	if (t2 != 813LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = 15429LL;
	uint32_t x15 = UINT32_MAX;
	int64_t x16 = -1LL;
	volatile int64_t t3 = 1408LL;

	t3 = (x13^((x14|x15)&x16));

	if (t3 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x19 = UINT16_MAX;
	static volatile uint16_t x20 = 4882U;
	volatile int64_t t4 = 3454969LL;

	t4 = (x17^((x18|x19)&x20));

	if (t4 != -9223372036854770926LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint64_t x22 = 11836LLU;
	static int16_t x23 = -1;
	static int64_t x24 = 5574105442158981LL;
	static uint64_t t5 = 4019829585968LLU;

	t5 = (x21^((x22|x23)&x24));

	if (t5 != 18441169968267392634LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 59123U;
	volatile uint64_t t6 = 24LLU;

	t6 = (x25^((x26|x27)&x28));

	if (t6 != 786526214159251757LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	uint32_t x30 = 893889003U;
	int32_t x31 = INT32_MAX;
	static int32_t x32 = INT32_MIN;
	uint64_t t7 = UINT64_MAX;

	t7 = (x29^((x30|x31)&x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 0;
	volatile int64_t x34 = INT64_MIN;
	int16_t x36 = -42;

	t8 = (x33^((x34|x35)&x36));

	if (t8 != -9223372036854775742LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = UINT8_MAX;
	volatile int64_t x38 = 8LL;
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = -17;

	t9 = (x37^((x38|x39)&x40));

	if (t9 != 18446744073709551376LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MIN;

	t10 = (x41^((x42|x43)&x44));

	if (t10 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MAX;
	static int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MAX;
	int32_t t11 = 130915230;

	t11 = (x45^((x46|x47)&x48));

	if (t11 != 2147483645) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x49 = INT8_MIN;
	volatile uint64_t x50 = UINT64_MAX;
	int16_t x52 = INT16_MAX;
	uint64_t t12 = 2829404492882471LLU;

	t12 = (x49^((x50|x51)&x52));

	if (t12 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 62998U;
	int32_t x55 = INT32_MAX;
	volatile uint32_t t13 = 209118316U;

	t13 = (x53^((x54|x55)&x56));

	if (t13 != 2147420649U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 141666;
	volatile int64_t x58 = 3016LL;
	int32_t x59 = -88;
	volatile int8_t x60 = INT8_MAX;
	int64_t t14 = -741246LL;

	t14 = (x57^((x58|x59)&x60));

	if (t14 != 141578LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = 381485449;
	volatile int16_t x63 = -1;
	int64_t t15 = 3LL;

	t15 = (x61^((x62|x63)&x64));

	if (t15 != -5LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	volatile uint32_t x66 = 10851625U;
	uint64_t x67 = 115LLU;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t16 = 209354316793LLU;

	t16 = (x65^((x66|x67)&x68));

	if (t16 != 255LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	uint8_t x70 = UINT8_MAX;
	int16_t x71 = 952;
	uint32_t x72 = 3336U;
	static int64_t t17 = 3LL;

	t17 = (x69^((x70|x71)&x72));

	if (t17 != -9223372036854775544LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = -1;
	int32_t x76 = INT32_MAX;
	volatile uint32_t t18 = 200825339U;

	t18 = (x73^((x74|x75)&x76));

	if (t18 != 2147418112U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MAX;
	int8_t x79 = -1;
	uint64_t t19 = 52LLU;

	t19 = (x77^((x78|x79)&x80));

	if (t19 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	volatile uint64_t t20 = 360669816LLU;

	t20 = (x81^((x82|x83)&x84));

	if (t20 != 23547LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MIN;
	uint64_t x87 = 52635LLU;
	static int32_t x88 = 30;

	t21 = (x85^((x86|x87)&x88));

	if (t21 != 6915633LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = 3446595;
	static int16_t x90 = -1443;
	int64_t x91 = 23483324845LL;
	uint16_t x92 = 11785U;
	static volatile int64_t t22 = -1LL;

	t22 = (x89^((x90|x91)&x92));

	if (t22 != 3456330LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	static uint64_t x94 = 3599890187817708LLU;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = -11;
	uint64_t t23 = 224819LLU;

	t23 = (x93^((x94|x95)&x96));

	if (t23 != 18443144183521673226LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 1U;
	int64_t x98 = INT64_MIN;
	static int16_t x99 = INT16_MIN;
	volatile int64_t t24 = 3253678LL;

	t24 = (x97^((x98|x99)&x100));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint16_t x104 = 2580U;
	volatile int64_t t25 = -12845043LL;

	t25 = (x101^((x102|x103)&x104));

	if (t25 != -2688LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MAX;
	int64_t t26 = 20298545344466LL;

	t26 = (x105^((x106|x107)&x108));

	if (t26 != 13507LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x111 = 942996053LLU;
	int32_t x112 = INT32_MIN;
	volatile uint64_t t27 = 553915542797703LLU;

	t27 = (x109^((x110|x111)&x112));

	if (t27 != 18446744071562069480LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x114 = UINT32_MAX;
	volatile int16_t x116 = INT16_MIN;
	uint64_t t28 = 3228810011LLU;

	t28 = (x113^((x114|x115)&x116));

	if (t28 != 18446744069414616960LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint64_t x118 = UINT64_MAX;
	static int16_t x119 = -1;
	int8_t x120 = -1;
	volatile uint64_t t29 = 113060870917130LLU;

	t29 = (x117^((x118|x119)&x120));

	if (t29 != 2147483647LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 3;
	static int8_t x122 = INT8_MAX;
	static uint16_t x123 = 288U;
	int32_t x124 = -27225449;

	t30 = (x121^((x122|x123)&x124));

	if (t30 != 20) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int32_t x126 = 61703;
	static int32_t x128 = -1;
	volatile int32_t t31 = -6112663;

	t31 = (x125^((x126|x127)&x128));

	if (t31 != -32769) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int16_t x132 = -15153;
	volatile uint64_t t32 = 75574458695741907LLU;

	t32 = (x129^((x130|x131)&x132));

	if (t32 != 9223372034707292356LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MIN;
	int16_t x136 = 7715;
	static uint64_t t33 = 2031153023357503699LLU;

	t33 = (x133^((x134|x135)&x136));

	if (t33 != 18446744073709543843LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	volatile int8_t x139 = -26;
	int32_t x140 = INT32_MIN;
	static int32_t t34 = 493214;

	t34 = (x137^((x138|x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	static volatile int16_t x142 = INT16_MAX;
	volatile int64_t t35 = 1LL;

	t35 = (x141^((x142|x143)&x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = 911;
	volatile int16_t x146 = -29;
	int16_t x147 = -1;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 197;

	t36 = (x145^((x146|x147)&x148));

	if (t36 != -2147482737) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 40U;
	int64_t x150 = -928340LL;
	int32_t x152 = INT32_MAX;
	volatile int64_t t37 = 349064LL;

	t37 = (x149^((x150|x151)&x152));

	if (t37 != 2147483606LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MIN;
	uint64_t t38 = 7852508063LLU;

	t38 = (x153^((x154|x155)&x156));

	if (t38 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	volatile int8_t x158 = INT8_MIN;
	int8_t x160 = -1;

	t39 = (x157^((x158|x159)&x160));

	if (t39 != 125LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	uint8_t x162 = 3U;
	volatile int64_t x163 = -44842800078454063LL;
	int64_t t40 = -49LL;

	t40 = (x161^((x162|x163)&x164));

	if (t40 != -9223372036854775085LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 2U;
	int32_t x166 = INT32_MAX;
	int32_t x167 = INT32_MIN;
	static volatile int32_t t41 = -1005280363;

	t41 = (x165^((x166|x167)&x168));

	if (t41 != -3) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 7U;
	int64_t x170 = INT64_MAX;
	int64_t x171 = INT64_MAX;
	static int32_t x172 = -1;
	int64_t t42 = -5LL;

	t42 = (x169^((x170|x171)&x172));

	if (t42 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 16195138538658LL;
	volatile uint32_t x174 = 285361301U;
	volatile uint64_t x176 = 263112031432366232LLU;
	uint64_t t43 = 98LLU;

	t43 = (x173^((x174|x175)&x176));

	if (t43 != 261926358309575738LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 215985U;
	volatile int16_t x178 = INT16_MIN;
	uint64_t x179 = 1452304LLU;
	volatile int8_t x180 = -30;
	static uint64_t t44 = 233364LLU;

	t44 = (x177^((x178|x179)&x180));

	if (t44 != 18446744073709347505LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x183 = -1LL;
	static int64_t x184 = 249713389LL;
	volatile int64_t t45 = 3215530208060LL;

	t45 = (x181^((x182|x183)&x184));

	if (t45 != 249701456LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = UINT8_MAX;
	static int8_t x186 = -1;
	int8_t x187 = -9;
	volatile int32_t t46 = -456;

	t46 = (x185^((x186|x187)&x188));

	if (t46 != 495) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 109;
	volatile uint8_t x190 = UINT8_MAX;
	int8_t x191 = INT8_MIN;
	volatile int32_t t47 = 250713;

	t47 = (x189^((x190|x191)&x192));

	if (t47 != -32659) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	static int16_t x194 = INT16_MAX;
	uint64_t t48 = 4343158429283LLU;

	t48 = (x193^((x194|x195)&x196));

	if (t48 != 2147483647LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x198 = 102638U;
	volatile int8_t x199 = -1;
	static int8_t x200 = -3;

	t49 = (x197^((x198|x199)&x200));

	if (t49 != 3898188999LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x201 = UINT8_MAX;
	static int64_t x202 = -1LL;
	int8_t x204 = 1;
	int64_t t50 = -149LL;

	t50 = (x201^((x202|x203)&x204));

	if (t50 != 254LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 1409;
	volatile int16_t x206 = -3;
	volatile int8_t x207 = INT8_MIN;
	uint64_t x208 = 16777697311183LLU;
	volatile uint64_t t51 = 1926LLU;

	t51 = (x205^((x206|x207)&x208));

	if (t51 != 16777697311820LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x209 = INT16_MIN;
	int16_t x210 = 16;
	int32_t x211 = INT32_MAX;
	int32_t x212 = -40301423;
	volatile int32_t t52 = -1;

	t52 = (x209^((x210|x211)&x212));

	if (t52 != -2107208559) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	volatile int32_t x215 = -1;
	int16_t x216 = -1;
	volatile uint64_t t53 = 0LLU;

	t53 = (x213^((x214|x215)&x216));

	if (t53 != 18445833108123996754LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 7LLU;
	static int16_t x218 = INT16_MIN;
	int8_t x220 = -1;
	uint64_t t54 = 3089LLU;

	t54 = (x217^((x218|x219)&x220));

	if (t54 != 4294959603LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int32_t x222 = INT32_MIN;
	int64_t x223 = -241400782LL;
	int64_t x224 = INT64_MIN;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x221^((x222|x223)&x224));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = 303;
	static volatile int16_t x226 = -919;
	int8_t x227 = -1;
	static int64_t x228 = -1LL;
	int64_t t56 = -1LL;

	t56 = (x225^((x226|x227)&x228));

	if (t56 != -304LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	static uint32_t x231 = 166U;
	volatile int32_t x232 = INT32_MIN;
	volatile int64_t t57 = -576337437487130176LL;

	t57 = (x229^((x230|x231)&x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int8_t x234 = INT8_MIN;
	int32_t x235 = 33;
	static int32_t x236 = INT32_MIN;
	int32_t t58 = -30111;

	t58 = (x233^((x234|x235)&x236));

	if (t58 != -2147483521) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -49;
	static int16_t x238 = -553;
	static int16_t x239 = 0;
	static int64_t x240 = 542441381019542330LL;

	t59 = (x237^((x238|x239)&x240));

	if (t59 != -542441381019541795LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 3U;
	static int8_t x243 = INT8_MIN;
	int8_t x244 = INT8_MIN;

	t60 = (x241^((x242|x243)&x244));

	if (t60 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -340;
	int8_t x247 = -1;

	t61 = (x245^((x246|x247)&x248));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MAX;
	volatile int16_t x251 = 0;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t62 = 302249596844LLU;

	t62 = (x249^((x250|x251)&x252));

	if (t62 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -1LL;
	int32_t x254 = -1976;
	int32_t x255 = INT32_MAX;
	int8_t x256 = 1;
	volatile int64_t t63 = 14815803LL;

	t63 = (x253^((x254|x255)&x256));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	uint8_t x258 = UINT8_MAX;
	uint16_t x259 = 5U;

	t64 = (x257^((x258|x259)&x260));

	if (t64 != -32640) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = UINT32_MAX;
	int8_t x263 = INT8_MIN;
	volatile int16_t x264 = INT16_MIN;
	volatile uint32_t t65 = 8275413U;

	t65 = (x261^((x262|x263)&x264));

	if (t65 != 32767U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x268 = 1;

	t66 = (x265^((x266|x267)&x268));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x271 = UINT64_MAX;
	int64_t x272 = -1233LL;
	volatile uint64_t t67 = 279720LLU;

	t67 = (x269^((x270|x271)&x272));

	if (t67 != 1232LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = -1LL;
	uint32_t x274 = UINT32_MAX;
	static uint32_t x275 = 75023145U;
	int32_t x276 = -1;
	int64_t t68 = -6070971690801685LL;

	t68 = (x273^((x274|x275)&x276));

	if (t68 != -4294967296LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x278 = INT64_MIN;
	int32_t x279 = -684721;
	int16_t x280 = INT16_MIN;
	volatile int64_t t69 = -70978809394528087LL;

	t69 = (x277^((x278|x279)&x280));

	if (t69 != 688000LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x282 = -1LL;
	int8_t x284 = INT8_MAX;
	uint64_t t70 = 15097LLU;

	t70 = (x281^((x282|x283)&x284));

	if (t70 != 130291856LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	static int8_t x286 = INT8_MAX;
	int64_t x287 = INT64_MIN;
	int64_t t71 = -127507278LL;

	t71 = (x285^((x286|x287)&x288));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	uint64_t x290 = 3404LLU;
	int16_t x291 = -73;
	static int64_t x292 = 750298593LL;

	t72 = (x289^((x290|x291)&x292));

	if (t72 != 750298398LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = 19718467738LLU;
	uint64_t x296 = 124749438402LLU;

	t73 = (x293^((x294|x295)&x296));

	if (t73 != 19276672893LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 15836;
	int32_t x298 = -17865155;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = UINT16_MAX;

	t74 = (x297^((x298|x299)&x300));

	if (t74 != 23521) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int16_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	volatile int32_t x304 = -1;
	uint32_t t75 = 15U;

	t75 = (x301^((x302|x303)&x304));

	if (t75 != 4294934528U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 1U;
	int16_t x307 = -1;
	volatile uint64_t t76 = 1763156454536230683LLU;

	t76 = (x305^((x306|x307)&x308));

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = -1LL;
	uint8_t x311 = 7U;
	uint32_t x312 = 46200U;

	t77 = (x309^((x310|x311)&x312));

	if (t77 != -46201LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = -1;
	static int8_t x315 = INT8_MAX;
	int64_t t78 = 52571676LL;

	t78 = (x313^((x314|x315)&x316));

	if (t78 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 23512140445226LLU;
	int8_t x319 = INT8_MAX;
	int64_t x320 = -1LL;

	t79 = (x317^((x318|x319)&x320));

	if (t79 != 18446720561569106389LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 11846;
	int16_t x322 = INT16_MAX;
	volatile int32_t t80 = -38;

	t80 = (x321^((x322|x323)&x324));

	if (t80 != 20934) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MIN;
	static volatile int16_t x328 = -58;

	t81 = (x325^((x326|x327)&x328));

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = UINT8_MAX;
	int16_t x331 = INT16_MIN;
	volatile uint32_t x332 = 569U;
	uint32_t t82 = 779U;

	t82 = (x329^((x330|x331)&x332));

	if (t82 != 12418U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = -1;
	volatile int64_t x334 = INT64_MAX;
	volatile int32_t x335 = INT32_MAX;

	t83 = (x333^((x334|x335)&x336));

	if (t83 != -22LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 204U;
	int8_t x338 = INT8_MIN;
	static int64_t x339 = INT64_MAX;
	volatile int64_t t84 = 21286910506793959LL;

	t84 = (x337^((x338|x339)&x340));

	if (t84 != -2147483444LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = 52U;
	static int8_t x342 = -30;
	int64_t x343 = 128041434LL;
	int16_t x344 = INT16_MIN;
	volatile int64_t t85 = 18492082325LL;

	t85 = (x341^((x342|x343)&x344));

	if (t85 != -32716LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = UINT64_MAX;
	int64_t x347 = INT64_MIN;
	uint64_t t86 = 145590501135152444LLU;

	t86 = (x345^((x346|x347)&x348));

	if (t86 != 18446744073709551139LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x349 = INT16_MIN;
	static volatile uint16_t x351 = 10151U;
	int32_t x352 = -1;
	int32_t t87 = 413697149;

	t87 = (x349^((x350|x351)&x352));

	if (t87 != 32759) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	volatile int64_t t88 = -3983426LL;

	t88 = (x353^((x354|x355)&x356));

	if (t88 != -2147483613LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MIN;
	int16_t x359 = -16379;
	static uint32_t x360 = UINT32_MAX;
	volatile int64_t t89 = -3342195889523LL;

	t89 = (x357^((x358|x359)&x360));

	if (t89 != -4294951072LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -9511387LL;
	uint64_t x362 = 1411LLU;
	uint16_t x363 = UINT16_MAX;
	static uint8_t x364 = 13U;
	volatile uint64_t t90 = 252LLU;

	t90 = (x361^((x362|x363)&x364));

	if (t90 != 18446744073700040232LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MAX;
	int8_t x367 = INT8_MIN;
	uint32_t x368 = 122398873U;
	volatile int64_t t91 = -7210LL;

	t91 = (x365^((x366|x367)&x368));

	if (t91 != -122410855LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x370 = INT64_MIN;
	volatile int16_t x371 = INT16_MAX;
	static volatile int64_t x372 = INT64_MIN;
	uint64_t t92 = 90298738683980LLU;

	t92 = (x369^((x370|x371)&x372));

	if (t92 != 9223372051276276557LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 12U;
	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = INT32_MIN;
	uint64_t x376 = 3114440320450LLU;
	static uint64_t t93 = 116943583216LLU;

	t93 = (x373^((x374|x375)&x376));

	if (t93 != 3114440320396LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = 5;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = 13226099516LLU;
	uint64_t t94 = 156LLU;

	t94 = (x377^((x378|x379)&x380));

	if (t94 != 18446744060824649604LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	uint64_t x382 = 65LLU;
	int64_t x384 = 88042922534LL;
	volatile uint64_t t95 = 24232LLU;

	t95 = (x381^((x382|x383)&x384));

	if (t95 != 18446743985666629081LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = 538248536225024LL;
	static int64_t x387 = INT64_MIN;
	int16_t x388 = 17;
	volatile int64_t t96 = 1548689977173186087LL;

	t96 = (x385^((x386|x387)&x388));

	if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 11U;
	static volatile int64_t x390 = INT64_MIN;
	static int64_t x391 = -1LL;
	int8_t x392 = INT8_MIN;
	int64_t t97 = 586674LL;

	t97 = (x389^((x390|x391)&x392));

	if (t97 != -117LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x394 = 14450312LLU;
	int64_t x395 = -62405234LL;
	int64_t x396 = -4880LL;
	volatile uint64_t t98 = 512781LLU;

	t98 = (x393^((x394|x395)&x396));

	if (t98 != 52433664LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = INT64_MIN;
	static volatile int32_t x398 = INT32_MAX;
	uint16_t x399 = 192U;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t99 = 651937348265442717LLU;

	t99 = (x397^((x398|x399)&x400));

	if (t99 != 9223372039002259455LLU) { NG(); } else { ; }
	
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

