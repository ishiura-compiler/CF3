#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = 391;
uint32_t x7 = 34379375U;
int32_t t2 = 5;
volatile uint16_t x15 = 473U;
volatile int16_t x20 = INT16_MIN;
static int32_t x24 = 3719;
static volatile int32_t t5 = 6803863;
int32_t x25 = INT32_MIN;
static volatile int32_t t6 = INT32_MIN;
uint8_t x34 = UINT8_MAX;
int16_t x35 = INT16_MIN;
static volatile int32_t t9 = -8774;
int8_t x58 = -1;
int16_t x59 = -73;
uint16_t x63 = UINT16_MAX;
volatile int8_t x64 = INT8_MAX;
int8_t x66 = 1;
int16_t x75 = INT16_MAX;
uint8_t x77 = 2U;
uint16_t x83 = UINT16_MAX;
int32_t t20 = -23918;
int8_t x90 = INT8_MIN;
static uint64_t x94 = 23402LLU;
int32_t t24 = INT32_MIN;
int32_t x105 = -1;
int8_t x106 = INT8_MAX;
int32_t t27 = 36;
static int32_t x116 = INT32_MAX;
uint64_t x122 = UINT64_MAX;
int64_t x138 = 4142369073574LL;
static volatile int32_t x150 = INT32_MIN;
int16_t x153 = INT16_MIN;
volatile int32_t x155 = -91907784;
static int16_t x156 = -1;
uint16_t x164 = 5500U;
volatile int64_t t42 = 1466584452537778658LL;
int16_t x174 = INT16_MIN;
static int32_t t43 = 15;
uint64_t x177 = 12344955LLU;
int16_t x181 = INT16_MIN;
static uint8_t x183 = 24U;
static int32_t t45 = -9658;
static int64_t x187 = INT64_MAX;
int16_t x190 = -1;
int64_t t47 = -6606LL;
int64_t x193 = 25144519526853122LL;
volatile int32_t x196 = INT32_MIN;
int8_t x201 = INT8_MIN;
int16_t x217 = INT16_MIN;
int32_t x221 = INT32_MIN;
volatile int8_t x223 = -26;
volatile int32_t t55 = INT32_MIN;
uint32_t x228 = 96065075U;
static int16_t x232 = -13421;
uint8_t x235 = UINT8_MAX;
uint16_t x236 = UINT16_MAX;
int32_t t58 = 0;
volatile int32_t t59 = 54;
volatile int32_t t60 = 30;
int16_t x251 = INT16_MIN;
static int32_t t62 = 84408;
uint16_t x254 = 3661U;
int16_t x257 = INT16_MIN;
volatile int64_t x266 = -13LL;
uint32_t x267 = 9130U;
static int8_t x268 = -1;
static volatile int64_t x269 = INT64_MIN;
uint16_t x270 = 6817U;
static int16_t x272 = -1;
uint64_t x277 = 1338241LLU;
int64_t x279 = -1LL;
uint8_t x284 = 13U;
int32_t x285 = INT32_MIN;
volatile uint64_t t73 = 292156718802190917LLU;
int32_t x304 = INT32_MIN;
volatile int8_t x306 = -1;
uint8_t x308 = 4U;
static uint32_t x315 = UINT32_MAX;
volatile uint64_t t78 = UINT64_MAX;
volatile uint32_t t79 = 6999994U;
volatile uint8_t x321 = 1U;
int8_t x327 = INT8_MIN;
uint8_t x328 = 39U;
int32_t t81 = INT32_MIN;
uint64_t x333 = 400501101427641LLU;
int8_t x339 = 10;
static volatile int32_t t85 = -450890620;
uint64_t x346 = 0LLU;
int8_t x352 = 32;
int64_t x356 = -1LL;
static uint32_t x358 = 516U;
static int32_t t90 = 0;
volatile uint64_t x371 = UINT64_MAX;
int16_t x373 = -1;
int8_t x377 = INT8_MIN;
int8_t x383 = -3;
uint8_t x384 = 10U;
int8_t x385 = INT8_MAX;
volatile int32_t t96 = 16211;
int16_t x389 = -7363;
uint16_t x392 = 13U;
uint8_t x400 = 54U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int32_t x2 = -1;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MAX;

	t0 = (x1^((x2&x3)==x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -7298;
	uint32_t x6 = 129U;
	static int64_t x8 = -1LL;
	volatile int32_t t1 = -54;

	t1 = (x5^((x6&x7)==x8));

	if (t1 != -7298) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static uint8_t x10 = 1U;
	volatile int64_t x11 = 3199147LL;
	int8_t x12 = 18;

	t2 = (x9^((x10&x11)==x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -2131;
	volatile int8_t x14 = INT8_MIN;
	uint8_t x16 = 1U;
	static int32_t t3 = -2699;

	t3 = (x13^((x14&x15)==x16));

	if (t3 != -2131) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 11U;
	uint64_t x18 = 226691381393841LLU;
	int8_t x19 = -1;
	static volatile int32_t t4 = -672286361;

	t4 = (x17^((x18&x19)==x20));

	if (t4 != 11) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = -1;
	int64_t x23 = INT64_MIN;

	t5 = (x21^((x22&x23)==x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = INT32_MAX;
	volatile int64_t x27 = INT64_MIN;
	int32_t x28 = -1;

	t6 = (x25^((x26&x27)==x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	static int8_t x30 = INT8_MAX;
	int16_t x31 = 14;
	int16_t x32 = -1;
	volatile int32_t t7 = 292207;

	t7 = (x29^((x30&x31)==x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 15122;
	uint8_t x36 = 2U;
	volatile int32_t t8 = 234;

	t8 = (x33^((x34&x35)==x36));

	if (t8 != 15122) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 317U;
	uint8_t x38 = 3U;
	int64_t x39 = -20602497460628LL;
	uint64_t x40 = UINT64_MAX;

	t9 = (x37^((x38&x39)==x40));

	if (t9 != 317) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = -1;
	volatile int16_t x43 = INT16_MIN;
	int16_t x44 = -1504;
	int64_t t10 = INT64_MIN;

	t10 = (x41^((x42&x43)==x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 14435153444231645LLU;
	static volatile int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MAX;
	int16_t x48 = -423;
	volatile uint64_t t11 = 39210768531536LLU;

	t11 = (x45^((x46&x47)==x48));

	if (t11 != 14435153444231645LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile uint64_t x50 = 11LLU;
	int16_t x51 = INT16_MIN;
	static volatile int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -99683;

	t12 = (x49^((x50&x51)==x52));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	volatile int16_t x54 = INT16_MIN;
	int16_t x55 = 2737;
	volatile uint16_t x56 = 1189U;
	static int32_t t13 = -8;

	t13 = (x53^((x54&x55)==x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int64_t x60 = -242LL;
	int32_t t14 = INT32_MAX;

	t14 = (x57^((x58&x59)==x60));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = -1LL;
	static int8_t x62 = 42;
	volatile int64_t t15 = -850133335437LL;

	t15 = (x61^((x62&x63)==x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	static volatile uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MIN;
	int32_t t16 = INT32_MIN;

	t16 = (x65^((x66&x67)==x68));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -7477693197325626LL;
	int32_t x70 = INT32_MAX;
	uint64_t x71 = 57340261303909765LLU;
	int16_t x72 = -883;
	int64_t t17 = -4739700LL;

	t17 = (x69^((x70&x71)==x72));

	if (t17 != -7477693197325626LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint32_t x74 = UINT32_MAX;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = INT32_MIN;

	t18 = (x73^((x74&x75)==x76));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	static uint16_t x79 = UINT16_MAX;
	int16_t x80 = -1;
	volatile int32_t t19 = 875574223;

	t19 = (x77^((x78&x79)==x80));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -50;
	static volatile uint64_t x82 = 420214893LLU;
	int8_t x84 = INT8_MIN;

	t20 = (x81^((x82&x83)==x84));

	if (t20 != -50) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 722005;
	static int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	int64_t x88 = 3142045LL;
	int32_t t21 = 7943;

	t21 = (x85^((x86&x87)==x88));

	if (t21 != 722005) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	volatile uint8_t x91 = 1U;
	static int16_t x92 = INT16_MIN;
	int64_t t22 = 491088926088LL;

	t22 = (x89^((x90&x91)==x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	int16_t x95 = 86;
	uint8_t x96 = 3U;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x93^((x94&x95)==x96));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	static int32_t x99 = -1;
	uint32_t x100 = 738521841U;

	t24 = (x97^((x98&x99)==x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 6492LLU;
	uint16_t x102 = UINT16_MAX;
	static uint32_t x103 = 148393938U;
	int64_t x104 = -1LL;
	uint64_t t25 = 22948721878862LLU;

	t25 = (x101^((x102&x103)==x104));

	if (t25 != 6492LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x107 = INT64_MIN;
	uint8_t x108 = 0U;
	int32_t t26 = 355;

	t26 = (x105^((x106&x107)==x108));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	uint32_t x110 = 1588996503U;
	uint32_t x111 = 1U;
	int32_t x112 = -1;

	t27 = (x109^((x110&x111)==x112));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 1U;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = 22098454373236478LLU;
	volatile int32_t t28 = -177;

	t28 = (x113^((x114&x115)==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	volatile int16_t x118 = -1;
	volatile uint16_t x119 = 0U;
	int8_t x120 = 9;
	volatile int64_t t29 = INT64_MIN;

	t29 = (x117^((x118&x119)==x120));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MAX;
	int32_t x123 = -1;
	static uint64_t x124 = 4989714624048413LLU;
	volatile int32_t t30 = 36;

	t30 = (x121^((x122&x123)==x124));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 13410406327LLU;
	int8_t x126 = INT8_MIN;
	static uint32_t x127 = UINT32_MAX;
	int16_t x128 = 3791;
	volatile uint64_t t31 = 1367120292688226LLU;

	t31 = (x125^((x126&x127)==x128));

	if (t31 != 13410406327LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 39538253652LLU;
	int8_t x130 = INT8_MIN;
	int64_t x131 = -1LL;
	volatile int64_t x132 = 3391362467LL;
	volatile uint64_t t32 = 1021657890781722LLU;

	t32 = (x129^((x130&x131)==x132));

	if (t32 != 39538253652LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static int64_t x134 = 224925426448230201LL;
	int8_t x135 = INT8_MIN;
	static volatile uint8_t x136 = UINT8_MAX;
	static volatile int32_t t33 = 14264;

	t33 = (x133^((x134&x135)==x136));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 118U;
	int32_t x139 = INT32_MIN;
	uint64_t x140 = 8320020909498LLU;
	volatile uint32_t t34 = 28801517U;

	t34 = (x137^((x138&x139)==x140));

	if (t34 != 118U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MIN;
	static int64_t x142 = 1599315611711906861LL;
	static int8_t x143 = 22;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = INT32_MIN;

	t35 = (x141^((x142&x143)==x144));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 6;
	static uint16_t x146 = UINT16_MAX;
	int16_t x147 = -1;
	int32_t x148 = 1154;
	int32_t t36 = -610;

	t36 = (x145^((x146&x147)==x148));

	if (t36 != 6) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = UINT8_MAX;
	int16_t x151 = INT16_MIN;
	uint8_t x152 = 94U;
	volatile int32_t t37 = 23783;

	t37 = (x149^((x150&x151)==x152));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x154 = -1;
	volatile int32_t t38 = -2;

	t38 = (x153^((x154&x155)==x156));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 12081;
	int8_t x158 = 0;
	uint16_t x159 = 1U;
	volatile int32_t x160 = -1;
	volatile int32_t t39 = 0;

	t39 = (x157^((x158&x159)==x160));

	if (t39 != 12081) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint16_t x162 = UINT16_MAX;
	static volatile int32_t x163 = INT32_MIN;
	volatile int32_t t40 = INT32_MIN;

	t40 = (x161^((x162&x163)==x164));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x165 = 1;
	static uint16_t x166 = 26692U;
	uint32_t x167 = 2U;
	uint16_t x168 = 0U;
	volatile int32_t t41 = 1;

	t41 = (x165^((x166&x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = -4338505992272335LL;
	int8_t x170 = -1;
	int8_t x171 = 2;
	int8_t x172 = INT8_MIN;

	t42 = (x169^((x170&x171)==x172));

	if (t42 != -4338505992272335LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -126982;
	uint32_t x175 = 121675U;
	volatile int32_t x176 = -1;

	t43 = (x173^((x174&x175)==x176));

	if (t43 != -126982) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	uint32_t x179 = UINT32_MAX;
	static volatile int8_t x180 = INT8_MAX;
	volatile uint64_t t44 = 73678770LLU;

	t44 = (x177^((x178&x179)==x180));

	if (t44 != 12344955LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x182 = -1;
	int8_t x184 = INT8_MIN;

	t45 = (x181^((x182&x183)==x184));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	static volatile uint64_t x186 = 2087098523748997LLU;
	static int64_t x188 = -2866484036038429341LL;
	volatile int32_t t46 = -194536006;

	t46 = (x185^((x186&x187)==x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1840LL;
	uint32_t x191 = UINT32_MAX;
	static uint16_t x192 = 1844U;

	t47 = (x189^((x190&x191)==x192));

	if (t47 != -1840LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x194 = UINT64_MAX;
	volatile int16_t x195 = -1;
	volatile int64_t t48 = 708967630LL;

	t48 = (x193^((x194&x195)==x196));

	if (t48 != 25144519526853122LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static uint32_t x198 = UINT32_MAX;
	int64_t x199 = -4219689127182LL;
	int64_t x200 = INT64_MIN;
	int32_t t49 = 1;

	t49 = (x197^((x198&x199)==x200));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x202 = 1LL;
	uint32_t x203 = 2694230U;
	static volatile uint32_t x204 = 7443094U;
	int32_t t50 = -735155;

	t50 = (x201^((x202&x203)==x204));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = -1;
	uint32_t x206 = 22U;
	int32_t x207 = INT32_MIN;
	static int64_t x208 = -1LL;
	static int32_t t51 = 1;

	t51 = (x205^((x206&x207)==x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile int8_t x210 = -2;
	uint32_t x211 = 134218279U;
	int8_t x212 = -1;
	int32_t t52 = -118795;

	t52 = (x209^((x210&x211)==x212));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	uint16_t x214 = 40U;
	int32_t x215 = -1;
	int32_t x216 = -1;
	static volatile int64_t t53 = INT64_MIN;

	t53 = (x213^((x214&x215)==x216));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x218 = UINT8_MAX;
	static int32_t x219 = -21373592;
	uint64_t x220 = 1597LLU;
	int32_t t54 = -26568844;

	t54 = (x217^((x218&x219)==x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = -1;
	uint16_t x224 = UINT16_MAX;

	t55 = (x221^((x222&x223)==x224));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int32_t x226 = -1;
	int16_t x227 = INT16_MAX;
	volatile int64_t t56 = INT64_MIN;

	t56 = (x225^((x226&x227)==x228));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	static volatile uint8_t x230 = 3U;
	static int8_t x231 = 1;
	int32_t t57 = 2119;

	t57 = (x229^((x230&x231)==x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	static int64_t x234 = INT64_MAX;

	t58 = (x233^((x234&x235)==x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = 4;
	static int32_t x238 = -5;
	volatile int32_t x239 = INT32_MAX;
	int32_t x240 = -9221;

	t59 = (x237^((x238&x239)==x240));

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 1U;
	static uint8_t x242 = 1U;
	int32_t x243 = -38;
	int8_t x244 = INT8_MIN;

	t60 = (x241^((x242&x243)==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 13908U;
	volatile uint16_t x246 = 2302U;
	uint16_t x247 = 60U;
	volatile int32_t x248 = INT32_MIN;
	int32_t t61 = -3189;

	t61 = (x245^((x246&x247)==x248));

	if (t61 != 13908) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	static int8_t x252 = INT8_MAX;

	t62 = (x249^((x250&x251)==x252));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int32_t x255 = -1;
	int16_t x256 = -1186;
	int32_t t63 = 0;

	t63 = (x253^((x254&x255)==x256));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x258 = INT8_MIN;
	uint16_t x259 = 10U;
	static int32_t x260 = 281;
	volatile int32_t t64 = -11068;

	t64 = (x257^((x258&x259)==x260));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 1277;
	int8_t x262 = 57;
	int32_t x263 = -1;
	uint64_t x264 = 49708111244536127LLU;
	int32_t t65 = 390021;

	t65 = (x261^((x262&x263)==x264));

	if (t65 != 1277) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static int64_t t66 = INT64_MIN;

	t66 = (x265^((x266&x267)==x268));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x271 = INT8_MIN;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x269^((x270&x271)==x272));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = 1;
	int16_t x274 = -1876;
	uint32_t x275 = UINT32_MAX;
	volatile uint32_t x276 = UINT32_MAX;
	int32_t t68 = 11;

	t68 = (x273^((x274&x275)==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 966U;
	static volatile int16_t x280 = -14;
	volatile uint64_t t69 = 447288676206111468LLU;

	t69 = (x277^((x278&x279)==x280));

	if (t69 != 1338241LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MIN;
	uint16_t x283 = UINT16_MAX;
	int32_t t70 = INT32_MIN;

	t70 = (x281^((x282&x283)==x284));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = 0LLU;
	int32_t x287 = INT32_MAX;
	int32_t x288 = 336712;
	static volatile int32_t t71 = INT32_MIN;

	t71 = (x285^((x286&x287)==x288));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 161;
	int16_t x290 = INT16_MIN;
	static uint8_t x291 = 20U;
	uint64_t x292 = UINT64_MAX;
	static volatile int32_t t72 = -1733;

	t72 = (x289^((x290&x291)==x292));

	if (t72 != 161) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 39331843609531LLU;
	int16_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	volatile int64_t x296 = 514090096109213LL;

	t73 = (x293^((x294&x295)==x296));

	if (t73 != 39331843609531LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	static int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	int16_t x300 = 2686;
	static int64_t t74 = -2943LL;

	t74 = (x297^((x298&x299)==x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile int32_t x302 = 5;
	int32_t x303 = -404761175;
	int32_t t75 = INT32_MIN;

	t75 = (x301^((x302&x303)==x304));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 768667U;
	volatile int32_t x307 = -6;
	uint32_t t76 = 0U;

	t76 = (x305^((x306&x307)==x308));

	if (t76 != 768667U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	static uint64_t x310 = 138946817LLU;
	int8_t x311 = -24;
	int32_t x312 = 43;
	int32_t t77 = INT32_MIN;

	t77 = (x309^((x310&x311)==x312));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	uint16_t x314 = 46U;
	int8_t x316 = -2;

	t78 = (x313^((x314&x315)==x316));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 10U;
	int8_t x318 = INT8_MAX;
	int16_t x319 = 5355;
	static uint32_t x320 = 18958594U;

	t79 = (x317^((x318&x319)==x320));

	if (t79 != 10U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = UINT64_MAX;
	int16_t x323 = -1;
	volatile int8_t x324 = 43;
	int32_t t80 = -1109981;

	t80 = (x321^((x322&x323)==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	static volatile int16_t x326 = INT16_MAX;

	t81 = (x325^((x326&x327)==x328));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int8_t x330 = INT8_MIN;
	int32_t x331 = INT32_MIN;
	static int16_t x332 = 0;
	static int32_t t82 = -262465345;

	t82 = (x329^((x330&x331)==x332));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x334 = -1;
	volatile int64_t x335 = -1LL;
	volatile int8_t x336 = -2;
	volatile uint64_t t83 = 122695LLU;

	t83 = (x333^((x334&x335)==x336));

	if (t83 != 400501101427641LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	int16_t x338 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;
	static int32_t t84 = INT32_MAX;

	t84 = (x337^((x338&x339)==x340));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 29;
	static volatile uint8_t x342 = 53U;
	int16_t x343 = -1;
	volatile int64_t x344 = INT64_MIN;

	t85 = (x341^((x342&x343)==x344));

	if (t85 != 29) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 308281LLU;
	int64_t x347 = INT64_MAX;
	static volatile int32_t x348 = -1;
	uint64_t t86 = 426133492962067476LLU;

	t86 = (x345^((x346&x347)==x348));

	if (t86 != 308281LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = -8191716LL;
	static int64_t x350 = INT64_MAX;
	uint8_t x351 = 50U;
	static int64_t t87 = 41LL;

	t87 = (x349^((x350&x351)==x352));

	if (t87 != -8191716LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x353 = 113U;
	int16_t x354 = INT16_MAX;
	uint16_t x355 = 3U;
	int32_t t88 = 78;

	t88 = (x353^((x354&x355)==x356));

	if (t88 != 113) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 9U;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MAX;
	volatile uint32_t t89 = 69U;

	t89 = (x357^((x358&x359)==x360));

	if (t89 != 9U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 5U;
	volatile int64_t x362 = 1LL;
	volatile uint32_t x363 = 991858977U;
	volatile int32_t x364 = -760;

	t90 = (x361^((x362&x363)==x364));

	if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 3;
	static int8_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = -589828115LL;
	int32_t t91 = -27;

	t91 = (x365^((x366&x367)==x368));

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 2U;
	int16_t x370 = -2;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 662;

	t92 = (x369^((x370&x371)==x372));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = 118071680508LL;
	int16_t x376 = -1;
	volatile int32_t t93 = -37;

	t93 = (x373^((x374&x375)==x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	uint32_t x380 = 0U;
	static int32_t t94 = 322088298;

	t94 = (x377^((x378&x379)==x380));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -3;
	static int16_t x382 = INT16_MIN;
	int32_t t95 = 1;

	t95 = (x381^((x382&x383)==x384));

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MIN;
	uint32_t x387 = 0U;
	uint32_t x388 = 34U;

	t96 = (x385^((x386&x387)==x388));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x390 = 41285180680LLU;
	int16_t x391 = INT16_MIN;
	volatile int32_t t97 = -983;

	t97 = (x389^((x390&x391)==x392));

	if (t97 != -7363) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 2903U;
	uint64_t x394 = 60352LLU;
	uint32_t x395 = 273196534U;
	uint64_t x396 = UINT64_MAX;
	int32_t t98 = -990230;

	t98 = (x393^((x394&x395)==x396));

	if (t98 != 2903) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MAX;
	int32_t x398 = INT32_MAX;
	volatile int64_t x399 = -1LL;
	static volatile int32_t t99 = -752529609;

	t99 = (x397^((x398&x399)==x400));

	if (t99 != 32767) { NG(); } else { ; }
	
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

