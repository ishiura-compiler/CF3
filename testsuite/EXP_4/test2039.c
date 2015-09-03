#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x7 = -1050610LL;
int8_t x10 = -1;
static int8_t x11 = -1;
int16_t x13 = 0;
int32_t x20 = 1785298;
uint16_t x24 = 15U;
static int8_t x26 = -16;
int64_t x32 = -1LL;
volatile int64_t t8 = 553LL;
static int16_t x40 = INT16_MIN;
int8_t x44 = -1;
int32_t t10 = -137449;
uint8_t x48 = 26U;
int64_t x49 = INT64_MIN;
int32_t x51 = INT32_MAX;
int64_t x52 = INT64_MAX;
int64_t t12 = -329092098LL;
int8_t x53 = 23;
static int8_t x57 = -1;
static volatile uint64_t t15 = 125521577445LLU;
volatile uint32_t t16 = 453350U;
volatile uint64_t t18 = 141033425524LLU;
int64_t x77 = INT64_MIN;
uint64_t t19 = 10186LLU;
int64_t x82 = -1LL;
int64_t x84 = -1LL;
volatile int64_t t20 = -238LL;
int32_t x86 = 1;
volatile int32_t x103 = -24093102;
static int32_t x105 = INT32_MIN;
static uint64_t t27 = 112256673713345082LLU;
int8_t x113 = -1;
static volatile int16_t x115 = -3;
int32_t x118 = -1;
int32_t x119 = 214462746;
int16_t x120 = INT16_MIN;
int16_t x122 = -5301;
int8_t x130 = -1;
static volatile uint32_t t32 = 57U;
int8_t x135 = INT8_MIN;
int64_t t34 = 61284893489306698LL;
volatile uint64_t x146 = UINT64_MAX;
volatile uint64_t t35 = 59070547705141LLU;
volatile uint8_t x159 = 5U;
uint8_t x163 = 5U;
static uint8_t x164 = 7U;
static volatile int32_t x165 = -1;
int64_t x166 = -13799046625874983LL;
int16_t x171 = -6460;
int32_t t41 = -12;
uint64_t x185 = 1625LLU;
static volatile uint64_t t43 = 446450244477410992LLU;
volatile int32_t x190 = INT32_MIN;
volatile uint32_t t44 = 18085U;
uint8_t x202 = 6U;
int16_t x204 = INT16_MIN;
uint16_t x209 = UINT16_MAX;
uint32_t x210 = UINT32_MAX;
int16_t x215 = -1;
uint32_t x216 = 31465U;
uint32_t t50 = 91539U;
int32_t x219 = 91;
volatile int16_t x222 = 1;
int64_t x223 = INT64_MIN;
int32_t x228 = INT32_MAX;
int64_t x231 = -1LL;
static int16_t x232 = INT16_MIN;
int8_t x243 = INT8_MAX;
uint64_t x247 = 1433306085203690LLU;
uint8_t x261 = 1U;
int16_t x266 = -761;
int8_t x270 = -7;
uint32_t x271 = 94749U;
static int32_t x277 = INT32_MIN;
uint32_t x279 = 414433U;
volatile uint32_t t65 = 108827744U;
volatile int16_t x283 = 1;
static volatile uint64_t t66 = 468394858515674LLU;
int16_t x289 = INT16_MAX;
int32_t x299 = INT32_MIN;
uint8_t x302 = UINT8_MAX;
static int64_t x303 = -917893866018253086LL;
static volatile int64_t t70 = 2303067766668934942LL;
int64_t x305 = -1LL;
int64_t x307 = -1LL;
volatile uint64_t t72 = 29LLU;
volatile int16_t x323 = INT16_MIN;
int32_t x329 = -695;
static int64_t x330 = INT64_MIN;
uint16_t x334 = 3630U;
int32_t x335 = 879;
uint64_t x336 = 330714694849215546LLU;
uint16_t x343 = UINT16_MAX;
volatile uint64_t t78 = 1517098137LLU;
volatile uint32_t x352 = UINT32_MAX;
volatile int16_t x358 = -22;
int8_t x360 = -41;
volatile uint64_t x363 = 1322316LLU;
uint32_t t82 = 1347247234U;
uint16_t x369 = 1220U;
volatile int32_t t83 = -11969;
int16_t x383 = INT16_MAX;
int32_t x385 = INT32_MIN;
volatile int32_t t87 = -2368;
int8_t x389 = 2;
volatile uint16_t x399 = 30U;
volatile uint16_t x400 = 24602U;
int64_t x403 = INT64_MAX;
volatile int16_t x405 = -1;
int64_t t92 = -320062LL;
volatile uint32_t x414 = 59U;
int64_t x417 = -1LL;
uint32_t x419 = UINT32_MAX;
int8_t x422 = INT8_MIN;
int8_t x423 = INT8_MAX;
volatile int64_t t95 = 250005817157010LL;
uint8_t x428 = UINT8_MAX;
volatile uint64_t x429 = 8588199LLU;
uint64_t x434 = 25307988742128680LLU;
int16_t x435 = -1;
uint64_t t98 = 2790858LLU;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int8_t x2 = INT8_MIN;
	volatile int16_t x3 = INT16_MAX;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 10;

	t0 = (x1&(x2+(x3^x4)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 11517116162362LLU;
	int16_t x6 = INT16_MIN;
	uint16_t x8 = 636U;
	static volatile uint64_t t1 = 96LLU;

	t1 = (x5&(x6+(x7^x8)));

	if (t1 != 11517115113522LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 1706LLU;
	volatile int8_t x12 = INT8_MAX;
	uint64_t t2 = 3731122889351LLU;

	t2 = (x9&(x10+(x11^x12)));

	if (t2 != 1578LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -1;
	int64_t x15 = -1LL;
	static uint32_t x16 = 42365U;
	int64_t t3 = 143038546752LL;

	t3 = (x13&(x14+(x15^x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	uint32_t x18 = 43U;
	static int64_t x19 = -53975LL;
	int64_t t4 = 7710666568LL;

	t4 = (x17&(x18+(x19^x20)));

	if (t4 != -1830618LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	static volatile uint32_t x22 = UINT32_MAX;
	volatile int8_t x23 = -2;
	uint32_t t5 = 0U;

	t5 = (x21&(x22+(x23^x24)));

	if (t5 != 2147483648U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 152277612080953092LLU;
	int64_t x27 = 33224448987119LL;
	static volatile int8_t x28 = -1;
	uint64_t t6 = 588104966390294428LLU;

	t6 = (x25&(x26+(x27^x28)));

	if (t6 != 152244462796681216LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = -1;
	uint32_t x31 = 246U;
	volatile int64_t t7 = INT64_MIN;

	t7 = (x29&(x30+(x31^x32)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	static int8_t x34 = -1;
	volatile uint8_t x35 = UINT8_MAX;
	int64_t x36 = -29975LL;

	t8 = (x33&(x34+(x35^x36)));

	if (t8 != 4294937109LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MAX;
	volatile int64_t x39 = 15LL;
	static volatile int64_t t9 = -332204905145743528LL;

	t9 = (x37&(x38+(x39^x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int32_t x42 = 6342589;
	static uint16_t x43 = UINT16_MAX;

	t10 = (x41&(x42+(x43^x44)));

	if (t10 != 6277053) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint8_t x46 = UINT8_MAX;
	volatile uint8_t x47 = UINT8_MAX;
	volatile int32_t t11 = 7;

	t11 = (x45&(x46+(x47^x48)));

	if (t11 != 228) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;

	t12 = (x49&(x50+(x51^x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x54 = -36;
	volatile int32_t x55 = -1;
	uint64_t x56 = 91171884374666966LLU;
	uint64_t t13 = 2256963259216751LLU;

	t13 = (x53&(x54+(x55^x56)));

	if (t13 != 5LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x58 = 1310145437786617587LLU;
	static uint64_t x59 = 3624929740028LLU;
	static int32_t x60 = INT32_MIN;
	uint64_t t14 = 1224050302711317475LLU;

	t14 = (x57&(x58+(x59^x60)));

	if (t14 != 1310141814959045615LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 724LLU;
	int8_t x62 = INT8_MIN;
	volatile int64_t x63 = INT64_MIN;
	int32_t x64 = -1;

	t15 = (x61&(x62+(x63^x64)));

	if (t15 != 596LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	static uint32_t x66 = 27656U;
	int32_t x67 = -1;
	int16_t x68 = 687;

	t16 = (x65&(x66+(x67^x68)));

	if (t16 != 26968U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int8_t x70 = -6;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = 59U;
	volatile int64_t t17 = INT64_MIN;

	t17 = (x69&(x70+(x71^x72)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MIN;
	static volatile int16_t x74 = -1;
	volatile uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MAX;

	t18 = (x73&(x74+(x75^x76)));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = UINT8_MAX;
	int32_t x79 = 38332;
	uint64_t x80 = 10166LLU;

	t19 = (x77&(x78+(x79^x80)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MIN;
	static uint8_t x83 = 0U;

	t20 = (x81&(x82+(x83^x84)));

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 8598U;
	static volatile int32_t x87 = -162411;
	uint32_t x88 = 16U;
	uint32_t t21 = 12342U;

	t21 = (x85&(x86+(x87^x88)));

	if (t21 != 390U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	uint64_t x90 = 569002716296985LLU;
	uint32_t x91 = 72230502U;
	uint64_t x92 = 6200LLU;
	volatile uint64_t t22 = 73928254LLU;

	t22 = (x89&(x90+(x91^x92)));

	if (t22 != 569002788533623LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	int64_t x94 = -8789577927370LL;
	uint64_t x95 = 28219580883182LLU;
	int64_t x96 = INT64_MIN;
	static uint64_t t23 = 3454710LLU;

	t23 = (x93&(x94+(x95^x96)));

	if (t23 != 3865876004LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 31LLU;
	int64_t x98 = -1LL;
	static int64_t x99 = -1LL;
	int8_t x100 = INT8_MIN;
	uint64_t t24 = 77LLU;

	t24 = (x97&(x98+(x99^x100)));

	if (t24 != 30LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 7787760233LLU;
	static volatile int32_t x102 = INT32_MIN;
	int64_t x104 = INT64_MIN;
	uint64_t t25 = 115LLU;

	t25 = (x101&(x102+(x103^x104)));

	if (t25 != 5637163584LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x106 = INT32_MIN;
	static volatile uint32_t x107 = UINT32_MAX;
	volatile int8_t x108 = -1;
	uint32_t t26 = 1283U;

	t26 = (x105&(x106+(x107^x108)));

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 96649760LLU;
	volatile int8_t x110 = INT8_MIN;
	static int64_t x111 = INT64_MIN;
	int16_t x112 = -5;

	t27 = (x109&(x110+(x111^x112)));

	if (t27 != 96649760LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x114 = UINT32_MAX;
	uint16_t x116 = UINT16_MAX;
	uint32_t t28 = 3U;

	t28 = (x113&(x114+(x115^x116)));

	if (t28 != 4294901761U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = UINT16_MAX;
	int32_t t29 = 406;

	t29 = (x117&(x118+(x119^x120)));

	if (t29 != 61721) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int32_t x123 = INT32_MIN;
	volatile uint64_t x124 = 7LLU;
	volatile uint64_t t30 = 24427465836743141LLU;

	t30 = (x121&(x122+(x123^x124)));

	if (t30 != 18446744071562062674LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = 31;
	volatile int16_t x126 = 15;
	static int16_t x127 = 13;
	volatile int8_t x128 = INT8_MIN;
	static int32_t t31 = -54;

	t31 = (x125&(x126+(x127^x128)));

	if (t31 != 28) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static uint32_t x131 = 13047868U;
	uint32_t x132 = 581377U;

	t32 = (x129&(x130+(x131^x132)));

	if (t32 != 13598720U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x133 = INT16_MIN;
	int8_t x134 = -1;
	static volatile int8_t x136 = -1;
	volatile int32_t t33 = -3386;

	t33 = (x133&(x134+(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = 115LL;
	int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;

	t34 = (x141&(x142+(x143^x144)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -1186;
	int16_t x147 = -1;
	static int64_t x148 = -3561206195232073LL;

	t35 = (x145&(x146+(x147^x148)));

	if (t35 != 3561206195231046LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x149 = 1U;
	volatile uint8_t x150 = UINT8_MAX;
	int32_t x151 = 0;
	int32_t x152 = 1510;
	static volatile int32_t t36 = -9717;

	t36 = (x149&(x150+(x151^x152)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x153 = UINT8_MAX;
	volatile uint32_t x154 = 498752419U;
	int64_t x155 = INT64_MIN;
	int16_t x156 = 895;
	volatile int64_t t37 = -808714941LL;

	t37 = (x153&(x154+(x155^x156)));

	if (t37 != 34LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x157 = INT32_MIN;
	uint8_t x158 = 1U;
	static int64_t x160 = -1LL;
	static volatile int64_t t38 = 3536984318264LL;

	t38 = (x157&(x158+(x159^x160)));

	if (t38 != -2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MIN;
	int8_t x162 = -1;
	volatile int32_t t39 = -94;

	t39 = (x161&(x162+(x163^x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x167 = 127686;
	static uint32_t x168 = 2727483U;
	volatile int64_t t40 = 40161512LL;

	t40 = (x165&(x166+(x167^x168)));

	if (t40 != -13799046623225642LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x169 = 9U;
	int16_t x170 = INT16_MAX;
	int32_t x172 = INT32_MAX;

	t41 = (x169&(x170+(x171^x172)));

	if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x181 = 3U;
	volatile int32_t x182 = -24234408;
	static volatile int32_t x183 = 888776;
	int8_t x184 = 13;
	volatile int32_t t42 = -25539;

	t42 = (x181&(x182+(x183^x184)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = 3353;
	uint8_t x187 = UINT8_MAX;
	static int8_t x188 = 2;

	t43 = (x185&(x186+(x187^x188)));

	if (t43 != 1552LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x189 = UINT8_MAX;
	uint32_t x191 = UINT32_MAX;
	int8_t x192 = INT8_MAX;

	t44 = (x189&(x190+(x191^x192)));

	if (t44 != 128U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	int64_t x195 = 16LL;
	volatile uint16_t x196 = 9732U;
	int64_t t45 = -1400934627887498LL;

	t45 = (x193&(x194+(x195^x196)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x197 = 8494410472LLU;
	static int64_t x198 = -1LL;
	volatile int8_t x199 = 17;
	volatile uint32_t x200 = 268919703U;
	uint64_t t46 = 1868875974505102207LLU;

	t46 = (x197&(x198+(x199^x200)));

	if (t46 != 268853888LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = 1832376;
	static volatile uint16_t x203 = 8U;
	static volatile int32_t t47 = 7395583;

	t47 = (x201&(x202+(x203^x204)));

	if (t47 != 1802248) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 109U;
	int8_t x206 = 13;
	int32_t x207 = -1;
	int16_t x208 = INT16_MAX;
	int32_t t48 = -107768214;

	t48 = (x205&(x206+(x207^x208)));

	if (t48 != 13) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x211 = -1;
	volatile int16_t x212 = 1;
	volatile uint32_t t49 = 14U;

	t49 = (x209&(x210+(x211^x212)));

	if (t49 != 65533U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x213 = 1U;
	volatile int16_t x214 = -1;

	t50 = (x213&(x214+(x215^x216)));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -14;
	uint16_t x218 = 103U;
	int8_t x220 = -1;
	volatile int32_t t51 = -1349;

	t51 = (x217&(x218+(x219^x220)));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x221 = UINT64_MAX;
	static volatile uint16_t x224 = 1U;
	volatile uint64_t t52 = 362451958LLU;

	t52 = (x221&(x222+(x223^x224)));

	if (t52 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	static uint32_t x226 = UINT32_MAX;
	int16_t x227 = INT16_MIN;
	uint32_t t53 = 1U;

	t53 = (x225&(x226+(x227^x228)));

	if (t53 != 2147516288U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = 0U;
	int64_t x230 = 40991757LL;
	volatile int64_t t54 = 237061LL;

	t54 = (x229&(x230+(x231^x232)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = UINT64_MAX;
	int16_t x234 = INT16_MIN;
	volatile int8_t x235 = -1;
	volatile int16_t x236 = -1;
	uint64_t t55 = 57077049728179772LLU;

	t55 = (x233&(x234+(x235^x236)));

	if (t55 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MIN;
	volatile uint64_t x242 = 26796569672LLU;
	uint16_t x244 = UINT16_MAX;
	uint64_t t56 = 1248LLU;

	t56 = (x241&(x242+(x243^x244)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = UINT64_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	volatile uint16_t x248 = UINT16_MAX;
	static volatile uint64_t t57 = 3222371150102LLU;

	t57 = (x245&(x246+(x247^x248)));

	if (t57 != 1433306085253652LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x249 = 493U;
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = INT16_MIN;
	volatile int32_t x252 = INT32_MAX;
	int32_t t58 = 938307693;

	t58 = (x249&(x250+(x251^x252)));

	if (t58 != 492) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MAX;
	static int64_t x254 = -1LL;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t59 = -87545498402LL;

	t59 = (x253&(x254+(x255^x256)));

	if (t59 != 127LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = -17538LL;
	volatile int32_t x258 = -1;
	volatile int16_t x259 = -15;
	int64_t x260 = 59917LL;
	int64_t t60 = -377149146765230LL;

	t60 = (x257&(x258+(x259^x260)));

	if (t60 != -61062LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x262 = 2;
	static int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MIN;
	int64_t t61 = -380538291140LL;

	t61 = (x261&(x262+(x263^x264)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = 11U;
	int8_t x267 = -1;
	int16_t x268 = INT16_MIN;
	int32_t t62 = 4077076;

	t62 = (x265&(x266+(x267^x268)));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -1LL;
	int32_t x272 = 652483;
	volatile int64_t t63 = 1074987656671295LL;

	t63 = (x269&(x270+(x271^x272)));

	if (t63 != 558807LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 38;
	uint8_t x274 = 0U;
	volatile uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MAX;
	volatile int64_t t64 = 5627018LL;

	t64 = (x273&(x274+(x275^x276)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x278 = 0;
	int8_t x280 = INT8_MIN;

	t65 = (x277&(x278+(x279^x280)));

	if (t65 != 2147483648U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x281 = 16291573U;
	int32_t x282 = INT32_MIN;
	uint64_t x284 = UINT64_MAX;

	t66 = (x281&(x282+(x283^x284)));

	if (t66 != 16291572LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x290 = -122;
	volatile int16_t x291 = -1;
	uint64_t x292 = 69379895LLU;
	volatile uint64_t t67 = 2431999368LLU;

	t67 = (x289&(x290+(x291^x292)));

	if (t67 != 22606LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	static volatile int8_t x294 = INT8_MIN;
	uint32_t x295 = 33292420U;
	static uint8_t x296 = 101U;
	volatile uint32_t t68 = 715151U;

	t68 = (x293&(x294+(x295^x296)));

	if (t68 != 33292288U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = -1667;
	uint64_t x298 = 118LLU;
	int8_t x300 = INT8_MAX;
	uint64_t t69 = 488108995212340903LLU;

	t69 = (x297&(x298+(x299^x300)));

	if (t69 != 18446744071562068085LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x301 = 0U;
	int64_t x304 = INT64_MIN;

	t70 = (x301&(x302+(x303^x304)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x306 = 82U;
	static uint32_t x308 = 2875U;
	int64_t t71 = -15303142964858LL;

	t71 = (x305&(x306+(x307^x308)));

	if (t71 != -2794LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MIN;
	volatile uint64_t x318 = UINT64_MAX;
	int16_t x319 = 12;
	uint32_t x320 = 213U;

	t72 = (x317&(x318+(x319^x320)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x321 = 193751465U;
	int32_t x322 = INT32_MIN;
	volatile int8_t x324 = -1;
	static uint32_t t73 = 1795797280U;

	t73 = (x321&(x322+(x323^x324)));

	if (t73 != 27049U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x331 = 1714827LLU;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t74 = 16489859615749LLU;

	t74 = (x329&(x330+(x331^x332)));

	if (t74 != 9223372034709006345LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = 4170164;
	uint64_t t75 = 871841255720681LLU;

	t75 = (x333&(x334+(x335^x336)));

	if (t75 != 3998080LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = 33U;
	int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MAX;
	static int32_t x340 = INT32_MIN;
	int64_t t76 = -226992235557318883LL;

	t76 = (x337&(x338+(x339^x340)));

	if (t76 != 33LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = -1764LL;
	int32_t x342 = -780061263;
	static int8_t x344 = INT8_MIN;
	int64_t t77 = 636760988949700LL;

	t77 = (x341&(x342+(x343^x344)));

	if (t77 != -780128240LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = -1;
	int64_t x346 = -1LL;
	int64_t x347 = INT64_MIN;
	static uint64_t x348 = 1541433266844981LLU;

	t78 = (x345&(x346+(x347^x348)));

	if (t78 != 9224913470121620788LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = INT16_MAX;
	static int32_t x350 = 5888;
	int8_t x351 = -36;
	volatile uint32_t t79 = 3U;

	t79 = (x349&(x350+(x351^x352)));

	if (t79 != 5923U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = -1;
	static uint8_t x359 = 1U;
	int32_t t80 = -31667;

	t80 = (x357&(x358+(x359^x360)));

	if (t80 != -64) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = INT8_MAX;
	uint64_t x362 = UINT64_MAX;
	static int32_t x364 = 19973295;
	uint64_t t81 = 3872576961LLU;

	t81 = (x361&(x362+(x363^x364)));

	if (t81 != 98LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x365 = 5245U;
	int16_t x366 = INT16_MIN;
	static volatile uint8_t x367 = UINT8_MAX;
	volatile uint8_t x368 = 3U;

	t82 = (x365&(x366+(x367^x368)));

	if (t82 != 124U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x370 = 0;
	volatile int8_t x371 = 1;
	volatile int16_t x372 = 962;

	t83 = (x369&(x370+(x371^x372)));

	if (t83 != 192) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x374 = INT64_MAX;
	int32_t x375 = -1;
	static uint64_t x376 = UINT64_MAX;
	volatile uint64_t t84 = 8722LLU;

	t84 = (x373&(x374+(x375^x376)));

	if (t84 != 255LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x377 = 0U;
	int32_t x378 = -911439;
	static int32_t x379 = -472754;
	int8_t x380 = 8;
	volatile int32_t t85 = -13;

	t85 = (x377&(x378+(x379^x380)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x381 = -637164343430LL;
	uint64_t x382 = 311442364316197237LLU;
	static volatile uint8_t x384 = 1U;
	uint64_t t86 = 9LLU;

	t86 = (x381&(x382+(x383^x384)));

	if (t86 != 311442347118535026LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x386 = -92;
	static int32_t x387 = -59037108;
	int8_t x388 = -3;

	t87 = (x385&(x386+(x387^x388)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x390 = -8;
	static int8_t x391 = INT8_MIN;
	uint16_t x392 = 62U;
	int32_t t88 = 0;

	t88 = (x389&(x390+(x391^x392)));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x393 = 3378U;
	int64_t x394 = INT64_MIN;
	volatile uint16_t x395 = UINT16_MAX;
	static uint8_t x396 = 2U;
	volatile int64_t t89 = 0LL;

	t89 = (x393&(x394+(x395^x396)));

	if (t89 != 3376LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x397 = -7442821461LL;
	uint8_t x398 = UINT8_MAX;
	static int64_t t90 = 18093995078LL;

	t90 = (x397&(x398+(x399^x400)));

	if (t90 != 3LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x401 = UINT64_MAX;
	int32_t x402 = INT32_MIN;
	uint32_t x404 = 372189U;
	volatile uint64_t t91 = 4150LLU;

	t91 = (x401&(x402+(x403^x404)));

	if (t91 != 9223372034706919970LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MIN;

	t92 = (x405&(x406+(x407^x408)));

	if (t92 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x415 = -1LL;
	uint8_t x416 = UINT8_MAX;
	static uint64_t t93 = 12LLU;

	t93 = (x413&(x414+(x415^x416)));

	if (t93 != 18446744073709551419LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x418 = UINT8_MAX;
	int32_t x420 = -1;
	int64_t t94 = 11LL;

	t94 = (x417&(x418+(x419^x420)));

	if (t94 != 255LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x421 = INT32_MAX;
	int64_t x424 = INT64_MAX;

	t95 = (x421&(x422+(x423^x424)));

	if (t95 != 2147483392LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x425 = 1U;
	volatile int16_t x426 = 1319;
	uint8_t x427 = UINT8_MAX;
	static int32_t t96 = 47;

	t96 = (x425&(x426+(x427^x428)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x430 = INT32_MIN;
	int8_t x431 = 0;
	static int64_t x432 = -1LL;
	volatile uint64_t t97 = 43790890720535057LLU;

	t97 = (x429&(x430+(x431^x432)));

	if (t97 != 8588199LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x433 = 64U;
	int32_t x436 = INT32_MIN;

	t98 = (x433&(x434+(x435^x436)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x437 = 239U;
	int8_t x438 = 0;
	int8_t x439 = -1;
	uint32_t x440 = UINT32_MAX;
	static volatile uint32_t t99 = 919939757U;

	t99 = (x437&(x438+(x439^x440)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

