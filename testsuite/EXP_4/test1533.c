#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -37LL;
int64_t x4 = -6LL;
int64_t t1 = -980718674LL;
volatile uint8_t x9 = 98U;
int64_t x11 = 5643742LL;
uint8_t x25 = 2U;
int32_t x29 = INT32_MIN;
volatile int8_t x30 = INT8_MIN;
int32_t x33 = 63984116;
int32_t x46 = -563;
static int32_t t11 = -190248065;
int64_t x58 = 18456172LL;
volatile int8_t x63 = -1;
int8_t x67 = 59;
uint64_t x71 = 234461039106315166LLU;
uint16_t x90 = UINT16_MAX;
int32_t x96 = INT32_MAX;
uint8_t x103 = 1U;
static uint32_t x107 = UINT32_MAX;
uint16_t x110 = 171U;
int8_t x114 = INT8_MIN;
volatile int32_t t28 = -810;
int8_t x122 = 0;
int16_t x124 = -1;
int32_t t30 = -825225;
int8_t x129 = INT8_MIN;
int8_t x130 = INT8_MIN;
volatile int32_t x133 = INT32_MAX;
volatile int16_t x138 = INT16_MIN;
volatile uint32_t x143 = 0U;
int64_t x145 = INT64_MIN;
static int16_t x148 = INT16_MIN;
int64_t t36 = 1LL;
volatile uint16_t x149 = UINT16_MAX;
static int32_t t37 = 16671;
volatile int32_t x161 = 0;
int32_t x164 = INT32_MAX;
int8_t x167 = INT8_MIN;
static int64_t x176 = -4030669LL;
int8_t x180 = INT8_MIN;
volatile int8_t x184 = INT8_MAX;
uint64_t t45 = 1065162LLU;
static int16_t x186 = INT16_MAX;
uint16_t x192 = 955U;
int64_t x197 = -193009447853LL;
static int16_t x204 = -3512;
volatile int32_t t51 = 2010565;
volatile int16_t x211 = INT16_MIN;
static int64_t t52 = INT64_MAX;
volatile int64_t x225 = 16585851471760862LL;
int16_t x233 = INT16_MIN;
uint32_t x238 = 1532147794U;
static uint16_t x241 = 2U;
int16_t x242 = -1;
uint32_t x246 = 26186U;
int16_t x249 = 55;
int64_t x253 = INT64_MAX;
volatile int32_t x262 = INT32_MIN;
volatile int64_t x275 = INT64_MIN;
uint64_t t68 = UINT64_MAX;
uint32_t x282 = 40709434U;
uint16_t x291 = 1U;
uint64_t x303 = 11327LLU;
static int16_t x306 = 1844;
volatile int16_t x315 = INT16_MAX;
static int32_t x316 = -1;
int8_t x326 = INT8_MIN;
int32_t t82 = 61;
int64_t x335 = -1LL;
static volatile int64_t x336 = INT64_MIN;
int64_t x354 = -150348956990LL;
int16_t x361 = INT16_MIN;
volatile int32_t t90 = 928;
int64_t x367 = -726853965108902370LL;
static int64_t x377 = INT64_MIN;
volatile uint32_t x383 = 366U;
static int32_t t95 = 4301;
static int64_t x387 = -14LL;
int64_t x390 = INT64_MIN;
uint32_t x393 = UINT32_MAX;
int16_t x394 = INT16_MIN;
int8_t x397 = -5;


void f0(void) {
	volatile int8_t x1 = 49;
	int16_t x3 = -1;
	volatile int64_t t0 = 0LL;

	t0 = (x1|(x2+(x3<=x4)));

	if (t0 != -5LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 41U;
	int64_t x6 = INT64_MIN;
	volatile int64_t x7 = -5395619024648004LL;
	int32_t x8 = INT32_MAX;

	t1 = (x5|(x6+(x7<=x8)));

	if (t1 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -19751;

	t2 = (x9|(x10+(x11<=x12)));

	if (t2 != -32670) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint16_t x14 = 12U;
	static int64_t x15 = INT64_MIN;
	int32_t x16 = -1;
	static int32_t t3 = -42;

	t3 = (x13|(x14+(x15<=x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -174755012825765LL;
	uint64_t x18 = 741535728780736832LLU;
	int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t4 = 3LLU;

	t4 = (x17|(x18+(x19<=x20)));

	if (t4 != 18446594401342717275LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 246223U;
	static int8_t x22 = INT8_MAX;
	int32_t x23 = INT32_MIN;
	static uint8_t x24 = 0U;
	uint32_t t5 = 190855U;

	t5 = (x21|(x22+(x23<=x24)));

	if (t5 != 246223U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = UINT16_MAX;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = -1;
	volatile int32_t t6 = -78;

	t6 = (x25|(x26+(x27<=x28)));

	if (t6 != 65538) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = INT8_MIN;
	int32_t x32 = -1;
	static volatile int32_t t7 = -256977;

	t7 = (x29|(x30+(x31<=x32)));

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	uint32_t x35 = UINT32_MAX;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 6;

	t8 = (x33|(x34+(x35<=x36)));

	if (t8 != -12) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = 513;
	int32_t x38 = -1;
	int8_t x39 = INT8_MAX;
	volatile int16_t x40 = INT16_MAX;
	volatile int32_t t9 = 420700;

	t9 = (x37|(x38+(x39<=x40)));

	if (t9 != 513) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 83247U;
	int64_t x42 = -1LL;
	uint16_t x43 = 3U;
	uint8_t x44 = 0U;
	volatile int64_t t10 = -2412176LL;

	t10 = (x41|(x42+(x43<=x44)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	int16_t x47 = -1;
	uint16_t x48 = UINT16_MAX;

	t11 = (x45|(x46+(x47<=x48)));

	if (t11 != -562) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int16_t x50 = INT16_MIN;
	static int8_t x51 = -1;
	volatile int16_t x52 = INT16_MIN;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x49|(x50+(x51<=x52)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	static int8_t x54 = 20;
	uint16_t x55 = 3828U;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 6030739;

	t13 = (x53|(x54+(x55<=x56)));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 7U;
	volatile uint16_t x59 = 8U;
	int64_t x60 = 0LL;
	volatile int64_t t14 = -14306087175LL;

	t14 = (x57|(x58+(x59<=x60)));

	if (t14 != 18456175LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 7U;
	int16_t x62 = -1;
	int8_t x64 = INT8_MIN;
	int32_t t15 = -4321;

	t15 = (x61|(x62+(x63<=x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 179;
	int8_t x66 = 28;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = -242;

	t16 = (x65|(x66+(x67<=x68)));

	if (t16 != 191) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int64_t x70 = -1LL;
	static volatile int16_t x72 = INT16_MIN;
	static uint64_t t17 = UINT64_MAX;

	t17 = (x69|(x70+(x71<=x72)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = -1LL;
	volatile int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	static int64_t t18 = -87033167140500026LL;

	t18 = (x73|(x74+(x75<=x76)));

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 1U;
	int16_t x78 = INT16_MAX;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = 32U;
	static int32_t t19 = -2093356;

	t19 = (x77|(x78+(x79<=x80)));

	if (t19 != 32769) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int64_t x82 = -3026639167942446078LL;
	volatile uint64_t x83 = 857LLU;
	volatile int64_t x84 = INT64_MAX;
	static int64_t t20 = -352780104LL;

	t20 = (x81|(x82+(x83<=x84)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 1U;
	volatile int32_t x86 = INT32_MAX;
	int8_t x87 = 9;
	int16_t x88 = INT16_MIN;
	int32_t t21 = INT32_MAX;

	t21 = (x85|(x86+(x87<=x88)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 0U;
	int8_t x91 = 0;
	static int32_t x92 = -1;
	int32_t t22 = 393;

	t22 = (x89|(x90+(x91<=x92)));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static int8_t x94 = INT8_MIN;
	int16_t x95 = -1256;
	volatile int64_t t23 = -142858739613367228LL;

	t23 = (x93|(x94+(x95<=x96)));

	if (t23 != -127LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint64_t x98 = UINT64_MAX;
	volatile int8_t x99 = INT8_MIN;
	static int8_t x100 = -5;
	volatile uint64_t t24 = 349914033063173237LLU;

	t24 = (x97|(x98+(x99<=x100)));

	if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	volatile int32_t x102 = -131764778;
	int32_t x104 = INT32_MIN;
	int64_t t25 = -506855LL;

	t25 = (x101|(x102+(x103<=x104)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 5;
	static int32_t x106 = -1477;
	int64_t x108 = INT64_MAX;
	volatile int32_t t26 = 646990;

	t26 = (x105|(x106+(x107<=x108)));

	if (t26 != -1475) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	uint64_t x111 = UINT64_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -17726848;

	t27 = (x109|(x110+(x111<=x112)));

	if (t27 != -85) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int8_t x115 = -32;
	static uint64_t x116 = 347LLU;

	t28 = (x113|(x114+(x115<=x116)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MIN;
	uint32_t x120 = 2669U;
	static int64_t t29 = 356514217058LL;

	t29 = (x117|(x118+(x119<=x120)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 5U;
	int64_t x123 = INT64_MIN;

	t30 = (x121|(x122+(x123<=x124)));

	if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 2;
	uint32_t x126 = 95068U;
	uint8_t x127 = 0U;
	uint16_t x128 = 1855U;
	volatile uint32_t t31 = 15861U;

	t31 = (x125|(x126+(x127<=x128)));

	if (t31 != 95071U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x131 = 25927336310358LL;
	static volatile uint64_t x132 = 119663LLU;
	int32_t t32 = 46;

	t32 = (x129|(x130+(x131<=x132)));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = INT64_MAX;
	static uint16_t x135 = 5278U;
	volatile uint32_t x136 = 1721U;
	static volatile int64_t t33 = INT64_MAX;

	t33 = (x133|(x134+(x135<=x136)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int32_t x139 = INT32_MAX;
	uint16_t x140 = 0U;
	int32_t t34 = -18402285;

	t34 = (x137|(x138+(x139<=x140)));

	if (t34 != -32513) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	static int8_t x142 = -1;
	static int8_t x144 = INT8_MIN;
	uint32_t t35 = UINT32_MAX;

	t35 = (x141|(x142+(x143<=x144)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MIN;

	t36 = (x145|(x146+(x147<=x148)));

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = -1;
	static int64_t x151 = INT64_MIN;
	static int32_t x152 = INT32_MIN;

	t37 = (x149|(x150+(x151<=x152)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 612319227U;
	int8_t x154 = INT8_MIN;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MAX;
	volatile uint32_t t38 = 594593U;

	t38 = (x153|(x154+(x155<=x156)));

	if (t38 != 4294967291U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	static volatile int16_t x158 = INT16_MIN;
	static int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 11247667;

	t39 = (x157|(x158+(x159<=x160)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MIN;
	int32_t x163 = -1;
	volatile int32_t t40 = -259341234;

	t40 = (x161|(x162+(x163<=x164)));

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 7616LLU;
	int64_t x166 = INT64_MIN;
	int64_t x168 = INT64_MIN;
	volatile uint64_t t41 = 19281390554387LLU;

	t41 = (x165|(x166+(x167<=x168)));

	if (t41 != 9223372036854783424LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 59U;
	uint8_t x170 = 124U;
	volatile uint16_t x171 = 410U;
	volatile int16_t x172 = INT16_MIN;
	volatile uint32_t t42 = 2062244025U;

	t42 = (x169|(x170+(x171<=x172)));

	if (t42 != 127U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 89826220U;
	uint32_t x174 = 1782822U;
	static uint64_t x175 = UINT64_MAX;
	static uint32_t t43 = 1U;

	t43 = (x173|(x174+(x175<=x176)));

	if (t43 != 89896878U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 9181481414560451151LLU;
	static int64_t x178 = INT64_MIN;
	int32_t x179 = -152189;
	uint64_t t44 = 11LLU;

	t44 = (x177|(x178+(x179<=x180)));

	if (t44 != 18404853451415226959LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x181 = 30U;
	static volatile uint64_t x182 = 780237545334149702LLU;
	int64_t x183 = INT64_MIN;

	t45 = (x181|(x182+(x183<=x184)));

	if (t45 != 780237545334149727LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 4173168LLU;
	int8_t x187 = -41;
	static int32_t x188 = INT32_MAX;
	volatile uint64_t t46 = 1LLU;

	t46 = (x185|(x186+(x187<=x188)));

	if (t46 != 4173168LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 4072993LL;
	int16_t x190 = 791;
	int64_t x191 = -14217LL;
	int64_t t47 = 0LL;

	t47 = (x189|(x190+(x191<=x192)));

	if (t47 != 4073273LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MAX;
	volatile uint32_t x196 = 241046U;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x193|(x194+(x195<=x196)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x198 = 25U;
	uint64_t x199 = UINT64_MAX;
	static uint16_t x200 = UINT16_MAX;
	volatile int64_t t49 = 377244419521074LL;

	t49 = (x197|(x198+(x199<=x200)));

	if (t49 != -193009447845LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MIN;
	volatile uint64_t x202 = 59298LLU;
	int64_t x203 = INT64_MIN;
	uint64_t t50 = 34955658103LLU;

	t50 = (x201|(x202+(x203<=x204)));

	if (t50 != 18446744073709545379LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MAX;
	volatile int8_t x206 = INT8_MIN;
	uint64_t x207 = 6481393738336LLU;
	int32_t x208 = INT32_MIN;

	t51 = (x205|(x206+(x207<=x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	uint16_t x210 = 3U;
	int8_t x212 = INT8_MAX;

	t52 = (x209|(x210+(x211<=x212)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = UINT32_MAX;
	int16_t x214 = INT16_MAX;
	uint8_t x215 = UINT8_MAX;
	static int64_t x216 = 201988269LL;
	uint32_t t53 = UINT32_MAX;

	t53 = (x213|(x214+(x215<=x216)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	volatile int16_t x218 = -1;
	int8_t x219 = INT8_MIN;
	static volatile uint64_t x220 = UINT64_MAX;
	static volatile int32_t t54 = -4070;

	t54 = (x217|(x218+(x219<=x220)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MAX;
	uint8_t x222 = UINT8_MAX;
	uint64_t x223 = 3292673LLU;
	static volatile int16_t x224 = 73;
	volatile int32_t t55 = INT32_MAX;

	t55 = (x221|(x222+(x223<=x224)));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MAX;
	int8_t x228 = -1;
	int64_t t56 = -622589LL;

	t56 = (x225|(x226+(x227<=x228)));

	if (t56 != 16585851471760895LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = 1120220980013473104LLU;
	static volatile int16_t x230 = -1;
	static int16_t x231 = INT16_MAX;
	int8_t x232 = INT8_MIN;
	static uint64_t t57 = UINT64_MAX;

	t57 = (x229|(x230+(x231<=x232)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x234 = -9004000997146643LL;
	volatile int16_t x235 = 0;
	uint16_t x236 = 31U;
	volatile int64_t t58 = 3482879607LL;

	t58 = (x233|(x234+(x235<=x236)));

	if (t58 != -18LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 1U;
	int8_t x239 = INT8_MIN;
	int32_t x240 = INT32_MAX;
	static uint32_t t59 = 1594499830U;

	t59 = (x237|(x238+(x239<=x240)));

	if (t59 != 1532147795U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x243 = 2354U;
	static int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 3160895;

	t60 = (x241|(x242+(x243<=x244)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = -1LL;
	int16_t x247 = -1;
	volatile uint8_t x248 = 6U;
	static volatile int64_t t61 = 1LL;

	t61 = (x245|(x246+(x247<=x248)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = 133990121LL;
	int32_t x251 = INT32_MIN;
	volatile int16_t x252 = INT16_MIN;
	int64_t t62 = -87580794268825LL;

	t62 = (x249|(x250+(x251<=x252)));

	if (t62 != 133990143LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = 0;
	uint32_t x255 = 1481355U;
	static volatile int16_t x256 = INT16_MIN;
	int64_t t63 = INT64_MAX;

	t63 = (x253|(x254+(x255<=x256)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MAX;
	int64_t x258 = INT64_MIN;
	int32_t x259 = -1;
	int64_t x260 = INT64_MIN;
	volatile int64_t t64 = -1709873745LL;

	t64 = (x257|(x258+(x259<=x260)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -329;
	int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MAX;
	int32_t t65 = -13713;

	t65 = (x261|(x262+(x263<=x264)));

	if (t65 != -329) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x266 = 913870743U;
	int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MAX;
	uint32_t t66 = 96052462U;

	t66 = (x265|(x266+(x267<=x268)));

	if (t66 != 4294967192U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 54U;
	uint32_t x270 = UINT32_MAX;
	int32_t x271 = INT32_MIN;
	int16_t x272 = -1;
	volatile uint32_t t67 = 4187U;

	t67 = (x269|(x270+(x271<=x272)));

	if (t67 != 54U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int64_t x274 = 18482530282LL;
	int64_t x276 = INT64_MIN;

	t68 = (x273|(x274+(x275<=x276)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = -8072595;
	int8_t x278 = -1;
	int8_t x279 = -1;
	volatile int32_t x280 = 107017;
	volatile int32_t t69 = -1;

	t69 = (x277|(x278+(x279<=x280)));

	if (t69 != -8072595) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	int64_t x283 = INT64_MAX;
	static int16_t x284 = -17;
	uint32_t t70 = UINT32_MAX;

	t70 = (x281|(x282+(x283<=x284)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint32_t x286 = 2351U;
	int8_t x287 = INT8_MAX;
	uint8_t x288 = UINT8_MAX;
	uint32_t t71 = 120926132U;

	t71 = (x285|(x286+(x287<=x288)));

	if (t71 != 4294967216U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	uint32_t x290 = 1885304014U;
	uint8_t x292 = 0U;
	uint32_t t72 = UINT32_MAX;

	t72 = (x289|(x290+(x291<=x292)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MAX;
	int16_t x294 = -1;
	int32_t x295 = INT32_MIN;
	volatile int16_t x296 = -5927;
	int64_t t73 = INT64_MAX;

	t73 = (x293|(x294+(x295<=x296)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 1;
	volatile uint32_t x298 = 54242129U;
	int16_t x299 = INT16_MIN;
	volatile uint64_t x300 = 1LLU;
	volatile uint32_t t74 = 422341138U;

	t74 = (x297|(x298+(x299<=x300)));

	if (t74 != 54242129U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = 606LL;
	static uint32_t x302 = UINT32_MAX;
	uint64_t x304 = 1900757326368746663LLU;
	static int64_t t75 = 104921690096017LL;

	t75 = (x301|(x302+(x303<=x304)));

	if (t75 != 606LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MAX;
	uint8_t x307 = 1U;
	uint8_t x308 = 3U;
	volatile int32_t t76 = 26;

	t76 = (x305|(x306+(x307<=x308)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MAX;
	volatile uint16_t x310 = UINT16_MAX;
	static uint64_t x311 = 17LLU;
	int64_t x312 = INT64_MAX;
	volatile int32_t t77 = 1;

	t77 = (x309|(x310+(x311<=x312)));

	if (t77 != 98303) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	int8_t x314 = -1;
	int32_t t78 = 2641395;

	t78 = (x313|(x314+(x315<=x316)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	int16_t x318 = 3;
	int64_t x319 = INT64_MIN;
	static volatile uint16_t x320 = UINT16_MAX;
	static volatile int64_t t79 = INT64_MAX;

	t79 = (x317|(x318+(x319<=x320)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 1;
	int8_t x322 = -1;
	int32_t x323 = -99921;
	int64_t x324 = 0LL;
	volatile int32_t t80 = -36;

	t80 = (x321|(x322+(x323<=x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MAX;
	static int16_t x327 = 0;
	int8_t x328 = -1;
	volatile int64_t t81 = -1678186669054LL;

	t81 = (x325|(x326+(x327<=x328)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = 3U;
	int64_t x331 = -258287181718902LL;
	uint8_t x332 = 56U;

	t82 = (x329|(x330+(x331<=x332)));

	if (t82 != -2147483644) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = -1480311;
	volatile int32_t t83 = 269479;

	t83 = (x333|(x334+(x335<=x336)));

	if (t83 != -5751) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = UINT8_MAX;
	int32_t t84 = -447324978;

	t84 = (x337|(x338+(x339<=x340)));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 796606U;
	static int8_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	int32_t x344 = -12079000;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (x341|(x342+(x343<=x344)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -7;
	volatile int16_t x346 = -1;
	uint8_t x347 = 88U;
	int32_t x348 = INT32_MIN;
	static volatile int32_t t86 = -4212;

	t86 = (x345|(x346+(x347<=x348)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	uint32_t x350 = 27U;
	int16_t x351 = INT16_MAX;
	static int32_t x352 = 350;
	volatile int64_t t87 = 1517914897368LL;

	t87 = (x349|(x350+(x351<=x352)));

	if (t87 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	uint32_t x355 = 0U;
	uint64_t x356 = UINT64_MAX;
	int64_t t88 = -2292277LL;

	t88 = (x353|(x354+(x355<=x356)));

	if (t88 != -150323855361LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = -37;
	int32_t x359 = INT32_MIN;
	int32_t x360 = -1;
	static volatile int32_t t89 = 34818912;

	t89 = (x357|(x358+(x359<=x360)));

	if (t89 != -36) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x362 = 254U;
	static int32_t x363 = -1;
	uint64_t x364 = 14208667353197LLU;

	t90 = (x361|(x362+(x363<=x364)));

	if (t90 != -32514) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	int32_t x366 = 6;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t91 = -1;

	t91 = (x365|(x366+(x367<=x368)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -2699;
	int16_t x370 = -1;
	volatile int64_t x371 = INT64_MIN;
	volatile int8_t x372 = INT8_MIN;
	int32_t t92 = 1685298;

	t92 = (x369|(x370+(x371<=x372)));

	if (t92 != -2699) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	int64_t x374 = INT64_MIN;
	int8_t x375 = -1;
	uint32_t x376 = 1476U;
	int64_t t93 = 34825178LL;

	t93 = (x373|(x374+(x375<=x376)));

	if (t93 != -2147483648LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MAX;
	static volatile uint64_t x380 = 536LLU;
	volatile int64_t t94 = -6785631LL;

	t94 = (x377|(x378+(x379<=x380)));

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 8;
	int16_t x382 = INT16_MIN;
	uint64_t x384 = 355065142065446965LLU;

	t95 = (x381|(x382+(x383<=x384)));

	if (t95 != -32759) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile int32_t x386 = 22;
	int8_t x388 = 1;
	volatile int32_t t96 = 802;

	t96 = (x385|(x386+(x387<=x388)));

	if (t96 != -32745) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 1;
	volatile int64_t x391 = INT64_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile int64_t t97 = 7095709437835LL;

	t97 = (x389|(x390+(x391<=x392)));

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x395 = 0U;
	int64_t x396 = INT64_MAX;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x393|(x394+(x395<=x396)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MAX;
	volatile int8_t x400 = INT8_MIN;
	static int32_t t99 = -37551;

	t99 = (x397|(x398+(x399<=x400)));

	if (t99 != -1) { NG(); } else { ; }
	
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

