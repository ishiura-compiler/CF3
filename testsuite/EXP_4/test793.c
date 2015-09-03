#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x4 = 270432170U;
volatile int8_t x10 = INT8_MIN;
int8_t x25 = INT8_MAX;
int32_t x36 = 119765;
int64_t x37 = INT64_MAX;
static int64_t x48 = -1LL;
int32_t x50 = -1;
static volatile int64_t x59 = INT64_MIN;
static volatile int32_t t15 = 14022392;
int8_t x68 = INT8_MIN;
uint64_t t16 = 15LLU;
int64_t x69 = -17913412175182863LL;
int32_t x71 = -1;
volatile int64_t t17 = -2119715324756LL;
int32_t x75 = -1;
int32_t x81 = 17682705;
int8_t x84 = INT8_MAX;
volatile int32_t t20 = -118;
uint16_t x85 = UINT16_MAX;
int32_t x87 = INT32_MIN;
uint32_t x91 = UINT32_MAX;
volatile uint32_t t23 = 1U;
volatile int32_t x102 = -1;
int64_t x108 = INT64_MAX;
int16_t x110 = INT16_MIN;
int64_t x112 = INT64_MIN;
int64_t x114 = 60LL;
int64_t x117 = INT64_MAX;
int16_t x120 = -5756;
volatile int64_t t29 = 300509LL;
int32_t x124 = -1;
int64_t x126 = INT64_MAX;
volatile int64_t t31 = INT64_MIN;
int16_t x129 = INT16_MAX;
int64_t x135 = 95538820990301LL;
int32_t x139 = -437770502;
uint16_t x144 = 2160U;
uint16_t x149 = 1U;
static uint16_t x155 = 4915U;
int8_t x158 = -24;
int16_t x165 = INT16_MIN;
uint16_t x176 = 42U;
volatile int16_t x177 = INT16_MIN;
volatile int32_t x183 = -1;
int16_t x188 = INT16_MIN;
volatile int32_t x193 = -1;
volatile int64_t x195 = 685LL;
uint8_t x196 = 10U;
volatile int32_t t48 = 1;
uint64_t x198 = 801LLU;
volatile int16_t x213 = -305;
int64_t t54 = -49LL;
static int8_t x225 = INT8_MIN;
int8_t x227 = INT8_MAX;
int64_t x235 = -1LL;
static int32_t t58 = 242;
static volatile uint32_t t59 = 77364721U;
uint32_t x252 = 1179185U;
volatile int64_t t62 = -239625652LL;
int8_t x261 = -4;
int16_t x274 = 6;
static volatile uint8_t x294 = UINT8_MAX;
static int32_t x296 = INT32_MIN;
int16_t x310 = 114;
static uint16_t x311 = UINT16_MAX;
int32_t t76 = 3726940;
int64_t x322 = INT64_MAX;
int64_t x326 = 249626822943LL;
int64_t x329 = INT64_MIN;
static volatile int64_t t84 = 2642897542656LL;
static uint16_t x350 = UINT16_MAX;
uint16_t x352 = 61U;
volatile int64_t x354 = INT64_MIN;
static int8_t x356 = -19;
volatile int64_t t88 = INT64_MAX;
int64_t x363 = -1LL;
int8_t x371 = -3;
volatile uint16_t x372 = UINT16_MAX;
uint8_t x377 = UINT8_MAX;
static volatile uint64_t x380 = UINT64_MAX;
volatile uint16_t x387 = 0U;
static int32_t t96 = -108;
uint64_t x396 = 6LLU;
static volatile int32_t t97 = -88677057;
uint32_t x402 = UINT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = UINT8_MAX;
	int8_t x3 = -11;
	static volatile int64_t t0 = -3122241503851454LL;

	t0 = (x1^(x2<(x3%x4)));

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MAX;
	int8_t x7 = INT8_MIN;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -58073;

	t1 = (x5^(x6<(x7%x8)));

	if (t1 != 2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 78900LL;
	static int32_t x11 = -341663344;
	uint16_t x12 = UINT16_MAX;
	volatile int64_t t2 = -5LL;

	t2 = (x9^(x10<(x11%x12)));

	if (t2 != 78900LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int64_t x14 = INT64_MIN;
	volatile uint32_t x15 = 715347773U;
	uint32_t x16 = UINT32_MAX;
	static int32_t t3 = 1;

	t3 = (x13^(x14<(x15%x16)));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 8U;
	int64_t x18 = 1783062516196LL;
	int8_t x19 = -1;
	int32_t x20 = -1;
	int32_t t4 = -10184246;

	t4 = (x17^(x18<(x19%x20)));

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	int32_t x22 = INT32_MAX;
	volatile int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MIN;
	static int64_t t5 = INT64_MAX;

	t5 = (x21^(x22<(x23%x24)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 3;
	int32_t x27 = -99;
	static int64_t x28 = -1LL;
	static int32_t t6 = 4053;

	t6 = (x25^(x26<(x27%x28)));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1517U;
	volatile uint8_t x30 = 3U;
	volatile int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MIN;
	volatile uint32_t t7 = 3580071U;

	t7 = (x29^(x30<(x31%x32)));

	if (t7 != 1517U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = 10802679;
	int16_t x35 = -10;
	int32_t t8 = INT32_MIN;

	t8 = (x33^(x34<(x35%x36)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = 607536;
	int32_t x39 = INT32_MAX;
	uint32_t x40 = 44U;
	int64_t t9 = INT64_MAX;

	t9 = (x37^(x38<(x39%x40)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 19;
	int32_t x42 = -1;
	uint16_t x43 = 6U;
	int8_t x44 = INT8_MIN;
	static int32_t t10 = 1368932;

	t10 = (x41^(x42<(x43%x44)));

	if (t10 != 18) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	volatile uint8_t x46 = 31U;
	volatile int16_t x47 = 355;
	int32_t t11 = -143273026;

	t11 = (x45^(x46<(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -24LL;
	volatile uint64_t x51 = 2LLU;
	int8_t x52 = INT8_MAX;
	volatile int64_t t12 = -1LL;

	t12 = (x49^(x50<(x51%x52)));

	if (t12 != -24LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 5U;
	uint8_t x54 = 107U;
	volatile int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -6;

	t13 = (x53^(x54<(x55%x56)));

	if (t13 != 5) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 25950LL;
	int16_t x58 = INT16_MAX;
	int32_t x60 = INT32_MAX;
	volatile int64_t t14 = -10327LL;

	t14 = (x57^(x58<(x59%x60)));

	if (t14 != 25950LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x61 = UINT16_MAX;
	uint16_t x62 = 50U;
	static uint8_t x63 = UINT8_MAX;
	static int64_t x64 = INT64_MAX;

	t15 = (x61^(x62<(x63%x64)));

	if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 2LLU;
	int32_t x66 = INT32_MAX;
	static uint32_t x67 = 5149808U;

	t16 = (x65^(x66<(x67%x68)));

	if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	static int8_t x72 = INT8_MIN;

	t17 = (x69^(x70<(x71%x72)));

	if (t17 != -17913412175182864LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 856U;
	static volatile int32_t x74 = INT32_MIN;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -23;

	t18 = (x73^(x74<(x75%x76)));

	if (t18 != 857) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = -1;
	volatile int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MAX;
	int16_t x80 = INT16_MIN;
	int32_t t19 = 1056;

	t19 = (x77^(x78<(x79%x80)));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 256014171U;
	uint8_t x83 = UINT8_MAX;

	t20 = (x81^(x82<(x83%x84)));

	if (t20 != 17682705) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MAX;
	static int8_t x88 = -1;
	volatile int32_t t21 = 2;

	t21 = (x85^(x86<(x87%x88)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x89 = UINT64_MAX;
	int8_t x90 = -5;
	volatile uint16_t x92 = UINT16_MAX;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x89^(x90<(x91%x92)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 11468259U;
	int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	uint32_t x96 = UINT32_MAX;

	t23 = (x93^(x94<(x95%x96)));

	if (t23 != 11468258U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	uint8_t x98 = 103U;
	volatile int64_t x99 = INT64_MIN;
	int32_t x100 = -21;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x97^(x98<(x99%x100)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -255731029442LL;
	int64_t x103 = -1LL;
	static uint64_t x104 = UINT64_MAX;
	int64_t t25 = 5LL;

	t25 = (x101^(x102<(x103%x104)));

	if (t25 != -255731029442LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -35;
	int8_t x106 = 0;
	static uint16_t x107 = UINT16_MAX;
	volatile int32_t t26 = 20626266;

	t26 = (x105^(x106<(x107%x108)));

	if (t26 != -36) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 385369370LLU;
	int8_t x111 = INT8_MIN;
	volatile uint64_t t27 = 2401LLU;

	t27 = (x109^(x110<(x111%x112)));

	if (t27 != 385369371LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	uint16_t x115 = 5U;
	int64_t x116 = -54LL;
	volatile int32_t t28 = 236607;

	t28 = (x113^(x114<(x115%x116)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = 0U;
	int8_t x119 = 14;

	t29 = (x117^(x118<(x119%x120)));

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	static int64_t x122 = INT64_MIN;
	int32_t x123 = 3834661;
	volatile uint32_t t30 = 53222U;

	t30 = (x121^(x122<(x123%x124)));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	static uint32_t x128 = 263184979U;

	t31 = (x125^(x126<(x127%x128)));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = INT16_MIN;
	static volatile int8_t x131 = 6;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = -1;

	t32 = (x129^(x130<(x131%x132)));

	if (t32 != 32766) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = 6;
	volatile int16_t x134 = 3111;
	static int8_t x136 = INT8_MAX;
	volatile int32_t t33 = 1;

	t33 = (x133^(x134<(x135%x136)));

	if (t33 != 6) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int32_t x138 = -15;
	static int32_t x140 = 13361295;
	int32_t t34 = 9898070;

	t34 = (x137^(x138<(x139%x140)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 32U;
	volatile int16_t x142 = INT16_MIN;
	uint16_t x143 = 4159U;
	int32_t t35 = 12761;

	t35 = (x141^(x142<(x143%x144)));

	if (t35 != 33) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x146 = INT16_MAX;
	static uint32_t x147 = 13U;
	static uint64_t x148 = 4622LLU;
	int32_t t36 = 465816970;

	t36 = (x145^(x146<(x147%x148)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = 49717LL;
	int32_t x151 = INT32_MIN;
	uint64_t x152 = 12170921947LLU;
	volatile int32_t t37 = -1774;

	t37 = (x149^(x150<(x151%x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int16_t x154 = INT16_MIN;
	static uint16_t x156 = 7U;
	static volatile int32_t t38 = 84329;

	t38 = (x153^(x154<(x155%x156)));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	volatile int16_t x159 = 0;
	static int16_t x160 = -1;
	volatile int64_t t39 = 26227925411724LL;

	t39 = (x157^(x158<(x159%x160)));

	if (t39 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	volatile uint8_t x162 = 1U;
	int8_t x163 = 1;
	static int32_t x164 = INT32_MIN;
	int64_t t40 = 4137117366764747LL;

	t40 = (x161^(x162<(x163%x164)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = -1;
	static uint32_t x167 = UINT32_MAX;
	int8_t x168 = 37;
	int32_t t41 = -1;

	t41 = (x165^(x166<(x167%x168)));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int64_t x170 = 25LL;
	uint8_t x171 = 0U;
	int16_t x172 = 547;
	int32_t t42 = 2216;

	t42 = (x169^(x170<(x171%x172)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 9U;
	uint8_t x174 = 60U;
	static int16_t x175 = -154;
	uint32_t t43 = 248U;

	t43 = (x173^(x174<(x175%x176)));

	if (t43 != 9U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -1;
	volatile int64_t x179 = -1LL;
	static int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 190697;

	t44 = (x177^(x178<(x179%x180)));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	static int16_t x182 = -7294;
	static int8_t x184 = -1;
	volatile int32_t t45 = 3782;

	t45 = (x181^(x182<(x183%x184)));

	if (t45 != 126) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = UINT16_MAX;
	int32_t t46 = -2;

	t46 = (x185^(x186<(x187%x188)));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	static int8_t x190 = INT8_MIN;
	uint32_t x191 = 2470U;
	uint64_t x192 = 27549128225894692LLU;
	volatile int32_t t47 = -34599;

	t47 = (x189^(x190<(x191%x192)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = -1;

	t48 = (x193^(x194<(x195%x196)));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x197 = INT32_MIN;
	uint16_t x199 = 0U;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t49 = INT32_MIN;

	t49 = (x197^(x198<(x199%x200)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	int32_t x202 = INT32_MIN;
	int16_t x203 = 3;
	uint32_t x204 = UINT32_MAX;
	int64_t t50 = -13LL;

	t50 = (x201^(x202<(x203%x204)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = -1LL;
	uint8_t x207 = 9U;
	int16_t x208 = INT16_MAX;
	static volatile int64_t t51 = 326LL;

	t51 = (x205^(x206<(x207%x208)));

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -1;
	int64_t x210 = INT64_MAX;
	int8_t x211 = INT8_MAX;
	static int64_t x212 = INT64_MIN;
	int32_t t52 = 62302422;

	t52 = (x209^(x210<(x211%x212)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MIN;
	volatile int8_t x216 = 2;
	int32_t t53 = 93913;

	t53 = (x213^(x214<(x215%x216)));

	if (t53 != -306) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int8_t x218 = -2;
	static volatile int32_t x219 = INT32_MIN;
	uint8_t x220 = 1U;

	t54 = (x217^(x218<(x219%x220)));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	static int32_t x222 = 92;
	int8_t x223 = -26;
	int32_t x224 = INT32_MAX;
	static volatile int32_t t55 = INT32_MIN;

	t55 = (x221^(x222<(x223%x224)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = 1562857748374LL;
	volatile uint8_t x228 = UINT8_MAX;
	int32_t t56 = 11534;

	t56 = (x225^(x226<(x227%x228)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	volatile int32_t x230 = -1;
	uint64_t x231 = 446541738800478240LLU;
	int32_t x232 = INT32_MIN;
	static int32_t t57 = 23508;

	t57 = (x229^(x230<(x231%x232)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	static int64_t x234 = -4347800737522LL;
	volatile int8_t x236 = INT8_MAX;

	t58 = (x233^(x234<(x235%x236)));

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 0U;
	static int8_t x238 = 1;
	int8_t x239 = -1;
	volatile uint32_t x240 = UINT32_MAX;

	t59 = (x237^(x238<(x239%x240)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	uint8_t x242 = 16U;
	static int16_t x243 = INT16_MIN;
	int64_t x244 = -4348LL;
	volatile int32_t t60 = 67851;

	t60 = (x241^(x242<(x243%x244)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = UINT64_MAX;
	uint32_t x247 = UINT32_MAX;
	static int64_t x248 = INT64_MIN;
	int32_t t61 = -1;

	t61 = (x245^(x246<(x247%x248)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MAX;
	uint16_t x250 = 8620U;
	int32_t x251 = INT32_MIN;

	t62 = (x249^(x250<(x251%x252)));

	if (t62 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = -67271965;
	int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = 5122275172032006LLU;
	int32_t t63 = -7082;

	t63 = (x253^(x254<(x255%x256)));

	if (t63 != -67271965) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = 263285589;
	static int8_t x259 = -1;
	int16_t x260 = 6;
	int64_t t64 = INT64_MIN;

	t64 = (x257^(x258<(x259%x260)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = -45401344662LL;
	int64_t x263 = -520465516513196LL;
	int8_t x264 = INT8_MIN;
	int32_t t65 = -43669;

	t65 = (x261^(x262<(x263%x264)));

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 7024550082211032LL;
	int32_t x266 = 1;
	uint32_t x267 = 42391U;
	uint8_t x268 = 122U;
	int64_t t66 = -250067687539LL;

	t66 = (x265^(x266<(x267%x268)));

	if (t66 != 7024550082211033LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 18713578876157542LLU;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = 26959U;
	static int8_t x272 = INT8_MIN;
	static uint64_t t67 = 29998867243061598LLU;

	t67 = (x269^(x270<(x271%x272)));

	if (t67 != 18713578876157542LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -78805707;
	volatile int16_t x275 = INT16_MIN;
	volatile int8_t x276 = -5;
	int32_t t68 = 49592113;

	t68 = (x273^(x274<(x275%x276)));

	if (t68 != -78805707) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = 3U;
	int32_t x282 = -1;
	volatile int8_t x283 = -7;
	static int64_t x284 = INT64_MAX;
	static volatile int32_t t69 = 1307;

	t69 = (x281^(x282<(x283%x284)));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = -3;
	volatile int8_t x286 = -1;
	volatile uint8_t x287 = UINT8_MAX;
	static volatile uint32_t x288 = 3579U;
	volatile int32_t t70 = 65779;

	t70 = (x285^(x286<(x287%x288)));

	if (t70 != -3) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -1;
	uint32_t x290 = 1126512774U;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MAX;
	volatile int32_t t71 = -39;

	t71 = (x289^(x290<(x291%x292)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = -7319;
	int8_t x295 = -25;
	volatile int32_t t72 = -2;

	t72 = (x293^(x294<(x295%x296)));

	if (t72 != -7319) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = 6;
	static int64_t x298 = -28064788753622LL;
	int8_t x299 = 7;
	int16_t x300 = -141;
	int32_t t73 = -102911718;

	t73 = (x297^(x298<(x299%x300)));

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = -1LL;
	int32_t x302 = 90;
	uint16_t x303 = 60U;
	int32_t x304 = -1;
	int64_t t74 = -1085104236859LL;

	t74 = (x301^(x302<(x303%x304)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x305 = 9302212947427657LLU;
	int32_t x306 = INT32_MIN;
	int64_t x307 = 62430406LL;
	volatile uint32_t x308 = 21U;
	uint64_t t75 = 21026LLU;

	t75 = (x305^(x306<(x307%x308)));

	if (t75 != 9302212947427656LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	int32_t x312 = -1;

	t76 = (x309^(x310<(x311%x312)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	static int64_t x314 = INT64_MIN;
	volatile int32_t x315 = -107;
	int64_t x316 = INT64_MAX;
	volatile int64_t t77 = -2LL;

	t77 = (x313^(x314<(x315%x316)));

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x317 = -1;
	volatile int32_t x318 = 11225919;
	volatile int32_t x319 = -1;
	int8_t x320 = INT8_MAX;
	volatile int32_t t78 = -111633342;

	t78 = (x317^(x318<(x319%x320)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = INT8_MAX;
	volatile uint16_t x323 = UINT16_MAX;
	volatile int64_t x324 = INT64_MIN;
	int32_t t79 = -1859803;

	t79 = (x321^(x322<(x323%x324)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x325 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	static int32_t x328 = 37076326;
	volatile int32_t t80 = -118;

	t80 = (x325^(x326<(x327%x328)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x330 = -1;
	uint8_t x331 = 1U;
	static int16_t x332 = INT16_MIN;
	volatile int64_t t81 = -2064114122LL;

	t81 = (x329^(x330<(x331%x332)));

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x333 = 10;
	volatile int64_t x334 = -1LL;
	int8_t x335 = INT8_MIN;
	volatile int64_t x336 = INT64_MIN;
	int32_t t82 = -1;

	t82 = (x333^(x334<(x335%x336)));

	if (t82 != 10) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = -877189;
	volatile uint64_t x338 = 534070408794787596LLU;
	uint32_t x339 = 11U;
	static volatile int64_t x340 = -53958248316301LL;
	volatile int32_t t83 = -59;

	t83 = (x337^(x338<(x339%x340)));

	if (t83 != -877189) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = INT64_MAX;
	uint16_t x342 = 13U;
	uint32_t x343 = 1211285U;
	uint32_t x344 = UINT32_MAX;

	t84 = (x341^(x342<(x343%x344)));

	if (t84 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = 3;
	int64_t x346 = -1LL;
	int16_t x347 = INT16_MIN;
	volatile int16_t x348 = INT16_MAX;
	int32_t t85 = -75780731;

	t85 = (x345^(x346<(x347%x348)));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x349 = 1174005;
	int64_t x351 = INT64_MIN;
	volatile int32_t t86 = 3942;

	t86 = (x349^(x350<(x351%x352)));

	if (t86 != 1174005) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x353 = 7;
	int64_t x355 = 224921830279524836LL;
	int32_t t87 = -1;

	t87 = (x353^(x354<(x355%x356)));

	if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x357 = INT64_MAX;
	int64_t x358 = -29284LL;
	uint64_t x359 = 15629111804340LLU;
	volatile int8_t x360 = -1;

	t88 = (x357^(x358<(x359%x360)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x361 = 19U;
	static uint8_t x362 = UINT8_MAX;
	int64_t x364 = -1LL;
	int32_t t89 = -50;

	t89 = (x361^(x362<(x363%x364)));

	if (t89 != 19) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x365 = -6;
	uint32_t x366 = 14U;
	static volatile uint32_t x367 = 21462442U;
	volatile int8_t x368 = INT8_MAX;
	volatile int32_t t90 = 245272498;

	t90 = (x365^(x366<(x367%x368)));

	if (t90 != -5) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x369 = INT32_MAX;
	int64_t x370 = 5831377481LL;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x369^(x370<(x371%x372)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x373 = INT32_MAX;
	int16_t x374 = -1;
	int8_t x375 = INT8_MIN;
	static volatile int8_t x376 = 14;
	volatile int32_t t92 = INT32_MAX;

	t92 = (x373^(x374<(x375%x376)));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x378 = 28463U;
	static volatile int16_t x379 = 13;
	volatile int32_t t93 = 454140;

	t93 = (x377^(x378<(x379%x380)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x382 = INT16_MIN;
	int32_t x383 = -10;
	static volatile uint64_t x384 = 2LLU;
	static int32_t t94 = -1;

	t94 = (x381^(x382<(x383%x384)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x385 = 22U;
	static int64_t x386 = -1LL;
	static uint64_t x388 = UINT64_MAX;
	volatile int32_t t95 = -4934803;

	t95 = (x385^(x386<(x387%x388)));

	if (t95 != 22) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = INT8_MIN;
	volatile int64_t x390 = INT64_MIN;
	volatile uint8_t x391 = 22U;
	uint64_t x392 = 142102258279LLU;

	t96 = (x389^(x390<(x391%x392)));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = -2;
	volatile uint32_t x394 = 1U;
	static uint16_t x395 = UINT16_MAX;

	t97 = (x393^(x394<(x395%x396)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = 1U;
	int16_t x398 = -9813;
	uint16_t x399 = 17U;
	volatile int64_t x400 = INT64_MIN;
	static volatile int32_t t98 = 895;

	t98 = (x397^(x398<(x399%x400)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = 3600304478LLU;
	uint64_t x403 = UINT64_MAX;
	uint32_t x404 = 163275267U;
	static volatile uint64_t t99 = 5276634236166276LLU;

	t99 = (x401^(x402<(x403%x404)));

	if (t99 != 3600304478LLU) { NG(); } else { ; }
	
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

