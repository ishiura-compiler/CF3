#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = INT32_MIN;
static volatile int32_t x5 = INT32_MIN;
uint8_t x8 = 1U;
volatile uint32_t t3 = 58U;
volatile uint64_t x17 = UINT64_MAX;
int8_t x24 = INT8_MIN;
volatile int8_t x29 = INT8_MIN;
volatile uint64_t t7 = 107563406700691214LLU;
static int16_t x39 = INT16_MAX;
int16_t x42 = INT16_MIN;
uint64_t x57 = 10861211619LLU;
uint64_t t14 = 50452605654832LLU;
int32_t x64 = 93530046;
int32_t x66 = INT32_MAX;
volatile uint16_t x73 = UINT16_MAX;
int16_t x74 = 1;
int16_t x77 = INT16_MIN;
int64_t x86 = -1LL;
static volatile int32_t x91 = -1;
int8_t x93 = -7;
int32_t x94 = -1;
uint16_t x106 = 500U;
int32_t x108 = INT32_MIN;
static int16_t x111 = INT16_MIN;
uint64_t t27 = 5390LLU;
uint64_t x116 = 66899761377554887LLU;
uint64_t t28 = UINT64_MAX;
volatile uint32_t t29 = UINT32_MAX;
uint8_t x126 = 1U;
int64_t x130 = -4455487895195760491LL;
int64_t t32 = 10014539273609026LL;
static volatile uint32_t x133 = 34530545U;
uint32_t t33 = 238621791U;
int8_t x138 = -1;
int16_t x145 = 4632;
int8_t x150 = -3;
int8_t x156 = INT8_MIN;
int32_t x159 = INT32_MAX;
uint32_t x162 = UINT32_MAX;
volatile uint32_t t40 = 87U;
uint8_t x165 = 103U;
static int8_t x168 = -29;
volatile uint8_t x169 = 1U;
int32_t x170 = -1;
int32_t t42 = 1;
volatile uint8_t x174 = UINT8_MAX;
int64_t t45 = 7432816191LL;
static volatile int16_t x200 = -1;
static volatile uint64_t t49 = 259289LLU;
static int32_t x201 = INT32_MAX;
volatile int32_t t51 = 39785;
int32_t x209 = -30202150;
volatile int64_t t53 = 23LL;
int32_t x224 = -5;
volatile uint8_t x227 = 2U;
volatile int64_t t56 = 8513129576LL;
int64_t x229 = INT64_MIN;
int64_t t57 = -510151974LL;
int8_t x234 = INT8_MIN;
volatile int16_t x235 = INT16_MAX;
uint64_t x239 = 272832462697453LLU;
static uint64_t t61 = UINT64_MAX;
static volatile uint32_t x251 = 507081U;
int16_t x252 = INT16_MAX;
volatile int64_t x258 = -6900087658LL;
int64_t x265 = -7296LL;
uint32_t x266 = 1733514170U;
int8_t x267 = INT8_MIN;
uint16_t x270 = UINT16_MAX;
uint8_t x274 = 5U;
static int32_t x283 = INT32_MIN;
uint64_t t70 = 34413108280798LLU;
int16_t x288 = INT16_MIN;
volatile int64_t t72 = 48LL;
volatile uint32_t t73 = 5168U;
volatile int64_t x319 = INT64_MIN;
uint16_t x326 = UINT16_MAX;
uint32_t x333 = UINT32_MAX;
int8_t x335 = INT8_MAX;
static int8_t x336 = INT8_MAX;
static volatile int8_t x338 = -1;
uint64_t t84 = UINT64_MAX;
int32_t x341 = INT32_MIN;
static int32_t x342 = INT32_MIN;
volatile uint32_t t85 = 590875U;
int32_t x356 = -1;
int32_t x365 = INT32_MAX;
int8_t x368 = -1;
int16_t x369 = 10;
int16_t x370 = -1;
int8_t x371 = 42;
int32_t x372 = INT32_MIN;
int32_t t95 = -10848053;
uint64_t x390 = UINT64_MAX;
int32_t x393 = INT32_MIN;
uint8_t x400 = 15U;


void f0(void) {
	int16_t x2 = -3692;
	static int16_t x3 = -1;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = 518851779LL;

	t0 = (x1|(x2^(x3|x4)));

	if (t0 != -2147479957LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	uint64_t x7 = UINT64_MAX;
	uint64_t t1 = 24205428505LLU;

	t1 = (x5|(x6^(x7|x8)));

	if (t1 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	uint64_t x11 = UINT64_MAX;
	volatile uint16_t x12 = UINT16_MAX;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x9|(x10^(x11|x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint32_t x14 = UINT32_MAX;
	int8_t x15 = -7;
	volatile uint8_t x16 = 14U;

	t3 = (x13|(x14^(x15|x16)));

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -13;
	uint64_t x19 = 26125LLU;
	int32_t x20 = -1;
	uint64_t t4 = UINT64_MAX;

	t4 = (x17|(x18^(x19|x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 2U;
	static int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MIN;
	static volatile int64_t t5 = 88007387494886LL;

	t5 = (x21|(x22^(x23|x24)));

	if (t5 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 712401U;
	volatile uint32_t x26 = 1505U;
	static int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -26902589479029LL;

	t6 = (x25|(x26^(x27|x28)));

	if (t6 != -9223372036854063137LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = UINT8_MAX;
	volatile uint64_t x31 = 424803029865819LLU;
	static uint16_t x32 = 86U;

	t7 = (x29|(x30^(x31|x32)));

	if (t7 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 1;
	volatile int64_t x34 = INT64_MAX;
	static volatile uint16_t x35 = 27755U;
	uint8_t x36 = UINT8_MAX;
	static volatile int64_t t8 = 270571733LL;

	t8 = (x33|(x34^(x35|x36)));

	if (t8 != 9223372036854747905LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	int8_t x38 = -1;
	int32_t x40 = INT32_MIN;
	int32_t t9 = INT32_MAX;

	t9 = (x37|(x38^(x39|x40)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = -60LL;
	uint16_t x43 = 53U;
	uint16_t x44 = UINT16_MAX;
	int64_t t10 = -15LL;

	t10 = (x41|(x42^(x43|x44)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = -20;
	static volatile uint32_t x46 = UINT32_MAX;
	volatile int8_t x47 = -1;
	uint32_t x48 = 13U;
	volatile uint32_t t11 = 29945U;

	t11 = (x45|(x46^(x47|x48)));

	if (t11 != 4294967276U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 13774U;
	int16_t x50 = -2832;
	static int16_t x51 = -1;
	uint64_t x52 = 3789378LLU;
	static uint64_t t12 = 8448462419272770911LLU;

	t12 = (x49|(x50^(x51|x52)));

	if (t12 != 16335LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 1U;
	static volatile uint16_t x54 = 4U;
	int16_t x55 = INT16_MIN;
	volatile int64_t x56 = INT64_MAX;
	int64_t t13 = 3558939210961LL;

	t13 = (x53|(x54^(x55|x56)));

	if (t13 != -5LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = 925;
	static uint32_t x59 = 1U;
	static int16_t x60 = -53;

	t14 = (x57|(x58^(x59|x60)));

	if (t14 != 12884901879LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -4629;
	int16_t x62 = -1;
	int32_t x63 = INT32_MAX;
	volatile int32_t t15 = 4;

	t15 = (x61|(x62^(x63|x64)));

	if (t15 != -4629) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1143U;
	int16_t x67 = -1;
	int8_t x68 = 3;
	int32_t t16 = 4893714;

	t16 = (x65|(x66^(x67|x68)));

	if (t16 != -2147482505) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = UINT8_MAX;
	uint32_t x70 = 126U;
	int16_t x71 = -1;
	int8_t x72 = INT8_MIN;
	uint32_t t17 = UINT32_MAX;

	t17 = (x69|(x70^(x71|x72)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x75 = INT64_MAX;
	volatile uint16_t x76 = 63U;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x73|(x74^(x75|x76)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = 39191902664993582LL;
	static int64_t x79 = INT64_MIN;
	static volatile int32_t x80 = 5360491;
	static volatile int64_t t19 = 10063LL;

	t19 = (x77|(x78^(x79|x80)));

	if (t19 != -8123LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1568495931LL;
	int16_t x82 = INT16_MAX;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MAX;
	volatile int64_t t20 = -3861504427279797LL;

	t20 = (x81|(x82^(x83|x84)));

	if (t20 != -22843LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	volatile int64_t x87 = INT64_MIN;
	uint64_t x88 = 6230403073093102794LLU;
	uint64_t t21 = 4LLU;

	t21 = (x85|(x86^(x87|x88)));

	if (t21 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = UINT64_MAX;
	static int64_t x90 = -1LL;
	static int8_t x92 = -23;
	static volatile uint64_t t22 = UINT64_MAX;

	t22 = (x89|(x90^(x91|x92)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x95 = -273028LL;
	volatile int8_t x96 = 0;
	volatile int64_t t23 = -164096910502279428LL;

	t23 = (x93|(x94^(x95|x96)));

	if (t23 != -5LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 1U;
	uint64_t x98 = UINT64_MAX;
	int64_t x99 = -1LL;
	int64_t x100 = INT64_MIN;
	volatile uint64_t t24 = 49837208188684413LLU;

	t24 = (x97|(x98^(x99|x100)));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = 63;
	uint32_t x102 = 283U;
	uint16_t x103 = 478U;
	uint32_t x104 = 8310195U;
	static volatile uint32_t t25 = 13448462U;

	t25 = (x101|(x102^(x103|x104)));

	if (t25 != 8310015U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = -1;
	uint32_t x107 = 800U;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = (x105|(x106^(x107|x108)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 17005591063LLU;
	int8_t x110 = INT8_MAX;
	int32_t x112 = -294;

	t27 = (x109|(x110^(x111|x112)));

	if (t27 != 18446744073709551287LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	volatile uint8_t x114 = UINT8_MAX;
	int32_t x115 = INT32_MIN;

	t28 = (x113|(x114^(x115|x116)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int32_t x118 = -1;
	int8_t x119 = INT8_MAX;
	int32_t x120 = -1;

	t29 = (x117|(x118^(x119|x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	int16_t x122 = -1;
	static uint8_t x123 = UINT8_MAX;
	static int32_t x124 = -1;
	int64_t t30 = INT64_MIN;

	t30 = (x121|(x122^(x123|x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int64_t x127 = -10491537240161948LL;
	static uint64_t x128 = 5075186756412LLU;
	volatile uint64_t t31 = 2551393633031770LLU;

	t31 = (x125|(x126^(x127|x128)));

	if (t31 != 18446744073709529981LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = 0;
	int8_t x131 = INT8_MAX;
	volatile int64_t x132 = -1LL;

	t32 = (x129|(x130^(x131|x132)));

	if (t32 != 4455487895195760490LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x134 = 30U;
	volatile uint32_t x135 = UINT32_MAX;
	uint16_t x136 = UINT16_MAX;

	t33 = (x133|(x134^(x135|x136)));

	if (t33 != 4294967281U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 8U;
	int16_t x139 = -1;
	static int16_t x140 = INT16_MIN;
	int32_t t34 = 16;

	t34 = (x137|(x138^(x139|x140)));

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 6256714LLU;
	volatile uint64_t x142 = 2886657568298LLU;
	static int32_t x143 = -368;
	int8_t x144 = INT8_MIN;
	static uint64_t t35 = 1071321340657LLU;

	t35 = (x141|(x142^(x143|x144)));

	if (t35 != 18446741187053189626LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = 1LLU;
	int8_t x147 = -1;
	int64_t x148 = INT64_MIN;
	uint64_t t36 = 20972667LLU;

	t36 = (x145|(x146^(x147|x148)));

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = 2536U;
	volatile int64_t t37 = -951417378LL;

	t37 = (x149|(x150^(x151|x152)));

	if (t37 != -2539LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 77U;
	int16_t x154 = 7320;
	int16_t x155 = INT16_MIN;
	static int32_t t38 = -123950333;

	t38 = (x153|(x154^(x155|x156)));

	if (t38 != -7331) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MAX;
	volatile int64_t x158 = 1914LL;
	int32_t x160 = -24051662;
	int64_t t39 = 835995921LL;

	t39 = (x157|(x158^(x159|x160)));

	if (t39 != -1793LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -7;
	int8_t x163 = -50;
	static uint16_t x164 = UINT16_MAX;

	t40 = (x161|(x162^(x163|x164)));

	if (t40 != 4294967289U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = 27191670839993928LL;
	uint16_t x167 = 37U;
	int64_t t41 = -61307613361054836LL;

	t41 = (x165|(x166^(x167|x168)));

	if (t41 != -27191670839993873LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x171 = INT8_MAX;
	int32_t x172 = INT32_MIN;

	t42 = (x169|(x170^(x171|x172)));

	if (t42 != 2147483521) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = -1;
	int64_t x175 = 8173LL;
	uint16_t x176 = UINT16_MAX;
	int64_t t43 = 106302633471375LL;

	t43 = (x173|(x174^(x175|x176)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 12U;
	int32_t x178 = INT32_MAX;
	static int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MAX;
	static volatile int32_t t44 = 53922;

	t44 = (x177|(x178^(x179|x180)));

	if (t44 != 12) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = 11;
	uint32_t x182 = 197906724U;
	static int8_t x183 = 1;
	int64_t x184 = 70562027283988791LL;

	t45 = (x181|(x182^(x183|x184)));

	if (t45 != 70562027121086491LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	int8_t x186 = INT8_MIN;
	uint16_t x187 = 14444U;
	static uint16_t x188 = 118U;
	volatile int32_t t46 = 0;

	t46 = (x185|(x186^(x187|x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	uint32_t x190 = 13723253U;
	uint8_t x191 = 4U;
	int16_t x192 = INT16_MAX;
	volatile uint32_t t47 = 84U;

	t47 = (x189|(x190^(x191|x192)));

	if (t47 != 4294967178U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 4392642425551123461LLU;
	int32_t x194 = 28;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = 196LLU;
	uint64_t t48 = 2795420676066584816LLU;

	t48 = (x193|(x194^(x195|x196)));

	if (t48 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	static int8_t x198 = -62;
	volatile uint64_t x199 = 62378065285LLU;

	t49 = (x197|(x198^(x199|x200)));

	if (t49 != 18446744071562068029LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MAX;
	static int32_t x204 = 29250047;
	volatile int32_t t50 = -2;

	t50 = (x201|(x202^(x203|x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = -1;
	int32_t x206 = -1;
	volatile uint16_t x207 = 28209U;
	int32_t x208 = -1;

	t51 = (x205|(x206^(x207|x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x210 = 0;
	int64_t x211 = -1206803261369324282LL;
	int16_t x212 = INT16_MIN;
	int64_t t52 = -2204570389330957495LL;

	t52 = (x209|(x210^(x211|x212)));

	if (t52 != -4130LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 11U;
	int32_t x214 = INT32_MIN;
	static int64_t x215 = INT64_MAX;
	static int64_t x216 = INT64_MIN;

	t53 = (x213|(x214^(x215|x216)));

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 979;
	int32_t x218 = INT32_MIN;
	uint64_t x219 = 146168LLU;
	int16_t x220 = INT16_MIN;
	static uint64_t t54 = 4141760771569358LLU;

	t54 = (x217|(x218^(x219|x220)));

	if (t54 != 2147466235LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 103U;
	static uint8_t x222 = UINT8_MAX;
	int64_t x223 = -134LL;
	int64_t t55 = 1042985389705640988LL;

	t55 = (x221|(x222^(x223|x224)));

	if (t55 != -153LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x225 = 0;
	int16_t x226 = 2;
	volatile int64_t x228 = 0LL;

	t56 = (x225|(x226^(x227|x228)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MIN;

	t57 = (x229|(x230^(x231|x232)));

	if (t57 != -65409LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MIN;
	static int64_t x236 = -37LL;
	volatile int64_t t58 = 367842594733440LL;

	t58 = (x233|(x234^(x235|x236)));

	if (t58 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	static volatile uint64_t x238 = UINT64_MAX;
	int32_t x240 = INT32_MAX;
	static volatile uint64_t t59 = 29081855640384473LLU;

	t59 = (x237|(x238^(x239|x240)));

	if (t59 != 18446471240207040767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	volatile uint8_t x242 = UINT8_MAX;
	volatile uint16_t x243 = UINT16_MAX;
	uint16_t x244 = 469U;
	static volatile int32_t t60 = INT32_MAX;

	t60 = (x241|(x242^(x243|x244)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	volatile uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MAX;
	uint64_t x248 = UINT64_MAX;

	t61 = (x245|(x246^(x247|x248)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int32_t x250 = 99;
	volatile int64_t t62 = INT64_MAX;

	t62 = (x249|(x250^(x251|x252)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static volatile int64_t x254 = INT64_MAX;
	volatile int64_t x255 = -1LL;
	int16_t x256 = INT16_MIN;
	volatile int64_t t63 = 38672LL;

	t63 = (x253|(x254^(x255|x256)));

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	uint32_t x259 = 46U;
	uint8_t x260 = 121U;
	static volatile int64_t t64 = 20LL;

	t64 = (x257|(x258^(x259|x260)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x261 = -12;
	volatile uint32_t x262 = UINT32_MAX;
	int32_t x263 = INT32_MIN;
	int8_t x264 = 1;
	static uint32_t t65 = 247645U;

	t65 = (x261|(x262^(x263|x264)));

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x268 = 1;
	int64_t t66 = 96946546596LL;

	t66 = (x265|(x266^(x267|x268)));

	if (t66 != -4165LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 1396LLU;
	int32_t x271 = -56;
	int16_t x272 = INT16_MAX;
	static volatile uint64_t t67 = 358LLU;

	t67 = (x269|(x270^(x271|x272)));

	if (t67 != 18446744073709487476LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 239U;
	int32_t x275 = -1;
	volatile int32_t x276 = -1;
	uint32_t t68 = UINT32_MAX;

	t68 = (x273|(x274^(x275|x276)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 352LL;
	volatile int64_t x278 = -1LL;
	volatile int32_t x279 = -1;
	volatile uint16_t x280 = 116U;
	volatile int64_t t69 = -1LL;

	t69 = (x277|(x278^(x279|x280)));

	if (t69 != 352LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x281 = 6226385LLU;
	int16_t x282 = -1;
	int64_t x284 = -1LL;

	t70 = (x281|(x282^(x283|x284)));

	if (t70 != 6226385LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	uint16_t x286 = 1U;
	volatile int16_t x287 = INT16_MIN;
	volatile int32_t t71 = 0;

	t71 = (x285|(x286^(x287|x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	volatile int64_t x290 = -1LL;
	static volatile int64_t x291 = -1LL;
	int8_t x292 = -1;

	t72 = (x289|(x290^(x291|x292)));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = 10U;
	volatile int8_t x294 = INT8_MIN;
	volatile uint32_t x295 = UINT32_MAX;
	uint8_t x296 = 6U;

	t73 = (x293|(x294^(x295|x296)));

	if (t73 != 127U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	volatile int32_t x298 = -9;
	static volatile int16_t x299 = 11607;
	uint8_t x300 = UINT8_MAX;
	static int64_t t74 = -2583475425745355LL;

	t74 = (x297|(x298^(x299|x300)));

	if (t74 != -11768LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MIN;
	volatile uint8_t x303 = UINT8_MAX;
	static int8_t x304 = INT8_MIN;
	int64_t t75 = 11971827673417858LL;

	t75 = (x301|(x302^(x303|x304)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int8_t x306 = -1;
	uint16_t x307 = 7U;
	int32_t x308 = -1;
	uint32_t t76 = UINT32_MAX;

	t76 = (x305|(x306^(x307|x308)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 119;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MAX;
	volatile uint64_t t77 = 940LLU;

	t77 = (x309|(x310^(x311|x312)));

	if (t77 != 2147483639LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = 1524574331513LL;
	volatile int64_t x314 = 335164375983396LL;
	int16_t x315 = -1;
	int64_t x316 = 663LL;
	int64_t t78 = -449LL;

	t78 = (x313|(x314^(x315|x316)));

	if (t78 != -334887324239109LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;
	static volatile uint64_t t79 = 10130448LLU;

	t79 = (x317|(x318^(x319|x320)));

	if (t79 != 4294967295LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -1120;
	int16_t x322 = INT16_MAX;
	int64_t x323 = INT64_MAX;
	int32_t x324 = INT32_MIN;
	int64_t t80 = -30715343LL;

	t80 = (x321|(x322^(x323|x324)));

	if (t80 != -1120LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MAX;
	volatile uint64_t x327 = 35555041675442248LLU;
	int64_t x328 = -1LL;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x325|(x326^(x327|x328)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 126U;
	volatile int64_t x330 = 293920LL;
	uint16_t x331 = 0U;
	int8_t x332 = INT8_MAX;
	volatile int64_t t82 = 147582670246LL;

	t82 = (x329|(x330^(x331|x332)));

	if (t82 != 294015LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x334 = 517945061767596LL;
	static volatile int64_t t83 = 757028471817LL;

	t83 = (x333|(x334^(x335|x336)));

	if (t83 != 517947286093823LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int32_t x339 = -260;
	uint64_t x340 = UINT64_MAX;

	t84 = (x337|(x338^(x339|x340)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x343 = INT8_MIN;
	volatile uint32_t x344 = 54U;

	t85 = (x341|(x342^(x343|x344)));

	if (t85 != 4294967222U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = -822;
	int64_t x347 = -20152LL;
	uint64_t x348 = 137854741085LLU;
	volatile uint64_t t86 = 8635242248LLU;

	t86 = (x345|(x346^(x347|x348)));

	if (t86 != 4294967295LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x349 = INT64_MIN;
	uint32_t x350 = 9492235U;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = 3186U;
	int64_t t87 = 2LL;

	t87 = (x349|(x350^(x351|x352)));

	if (t87 != -9223372036845282439LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MIN;
	int64_t t88 = INT64_MAX;

	t88 = (x353|(x354^(x355|x356)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	uint8_t x358 = 68U;
	volatile uint16_t x359 = UINT16_MAX;
	int32_t x360 = INT32_MIN;
	static int32_t t89 = 125329;

	t89 = (x357|(x358^(x359|x360)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MAX;
	volatile int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MAX;
	int8_t x364 = -22;
	volatile int64_t t90 = INT64_MAX;

	t90 = (x361|(x362^(x363|x364)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MAX;
	int64_t t91 = 10314874LL;

	t91 = (x365|(x366^(x367|x368)));

	if (t91 != 2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t t92 = 134876890;

	t92 = (x369|(x370^(x371|x372)));

	if (t92 != 2147483615) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = -1;
	int64_t x374 = INT64_MAX;
	int8_t x375 = INT8_MIN;
	int8_t x376 = 4;
	volatile int64_t t93 = 316215239447LL;

	t93 = (x373|(x374^(x375|x376)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	int16_t x378 = 1;
	static int64_t x379 = INT64_MAX;
	int64_t x380 = INT64_MIN;
	volatile int64_t t94 = -1059949992673286737LL;

	t94 = (x377|(x378^(x379|x380)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = INT8_MAX;
	int16_t x382 = -2656;
	static int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MAX;

	t95 = (x381|(x382^(x383|x384)));

	if (t95 != 2687) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = -1;
	int64_t x386 = -77396315419LL;
	int32_t x387 = INT32_MAX;
	int32_t x388 = INT32_MAX;
	int64_t t96 = 6440118235LL;

	t96 = (x385|(x386^(x387|x388)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = 79843LL;
	int8_t x391 = INT8_MIN;
	int8_t x392 = -1;
	uint64_t t97 = 2624084762705685147LLU;

	t97 = (x389|(x390^(x391|x392)));

	if (t97 != 79843LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = 1081U;
	uint8_t x395 = 6U;
	int8_t x396 = INT8_MAX;
	volatile int32_t t98 = -9497;

	t98 = (x393|(x394^(x395|x396)));

	if (t98 != -2147482554) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 0U;
	static uint16_t x398 = 2U;
	int8_t x399 = INT8_MIN;
	int32_t t99 = 772589;

	t99 = (x397|(x398^(x399|x400)));

	if (t99 != -115) { NG(); } else { ; }
	
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

