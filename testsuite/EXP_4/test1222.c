#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -15;
static volatile uint32_t t1 = 7U;
volatile int8_t x11 = -1;
int32_t x21 = -1;
int32_t x36 = INT32_MIN;
volatile int64_t t8 = -2630918LL;
static volatile int16_t x38 = -14;
int16_t x41 = INT16_MIN;
int32_t x45 = INT32_MIN;
volatile uint16_t x46 = UINT16_MAX;
int64_t x54 = INT64_MIN;
static uint32_t x61 = 1612135U;
uint8_t x63 = 3U;
volatile int64_t t16 = INT64_MIN;
int32_t x72 = -2;
static int32_t x76 = 1;
int32_t t18 = 44779;
volatile uint8_t x77 = 1U;
uint16_t x89 = 6U;
volatile uint64_t x93 = 9756954LLU;
static volatile uint64_t t23 = 443440579LLU;
int16_t x100 = INT16_MIN;
uint64_t t24 = 27155140293LLU;
uint64_t t25 = 754479833136359745LLU;
int32_t x111 = -1;
volatile int32_t t27 = -7;
int32_t x121 = -8110642;
static volatile int32_t t30 = -6007952;
volatile uint32_t t37 = UINT32_MAX;
static int32_t x153 = 4;
int32_t t38 = 1054187735;
volatile uint64_t t39 = 352101572604640617LLU;
uint32_t x163 = 15U;
volatile int64_t t40 = -8167355LL;
uint16_t x167 = 21U;
int8_t x171 = INT8_MAX;
static volatile int32_t x174 = INT32_MIN;
volatile uint32_t t43 = 94058754U;
volatile int32_t t48 = 230546;
int32_t x200 = -1;
int8_t x201 = -1;
uint32_t x207 = 20U;
volatile int64_t x211 = -2298LL;
int32_t x231 = -9698539;
static int64_t x235 = INT64_MIN;
int16_t x237 = INT16_MIN;
static volatile int16_t x252 = INT16_MAX;
uint16_t x253 = 391U;
int32_t x255 = 16466328;
int32_t t65 = 232;
static int64_t t66 = -1338683LL;
int64_t x269 = -216132320433LL;
volatile uint32_t x272 = UINT32_MAX;
int8_t x275 = INT8_MIN;
uint16_t x282 = 60U;
int64_t x286 = -101946485858LL;
int32_t x287 = INT32_MAX;
volatile int64_t t73 = INT64_MAX;
int64_t x297 = -13265559954930376LL;
int64_t x300 = -1LL;
volatile int64_t x303 = INT64_MIN;
static volatile uint16_t x305 = 1U;
int32_t x313 = INT32_MAX;
int16_t x320 = 45;
int32_t x321 = -152;
static int16_t x327 = INT16_MAX;
uint64_t x337 = UINT64_MAX;
static uint32_t x340 = 892310U;
int16_t x341 = -11;
volatile int8_t x343 = 30;
static int64_t x352 = INT64_MIN;
int16_t x357 = INT16_MIN;
int32_t x362 = INT32_MIN;
static uint32_t x363 = 26282235U;
volatile int32_t t90 = -4;
int32_t x365 = INT32_MIN;
volatile int32_t t92 = 175677393;
int64_t x374 = -1LL;
int64_t x376 = INT64_MIN;
int16_t x381 = -1;
int32_t x382 = -1;
volatile int16_t x386 = 1;
int64_t x387 = INT64_MIN;
volatile uint16_t x388 = 1317U;
volatile int64_t t97 = 174005LL;
int64_t x393 = 431196642808LL;
int8_t x396 = -1;
static volatile int64_t x397 = INT64_MIN;


void f0(void) {
	uint32_t x1 = 19997490U;
	int32_t x3 = 13537020;
	uint16_t x4 = 85U;
	uint32_t t0 = 63U;

	t0 = (x1^(x2*(x3==x4)));

	if (t0 != 19997490U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 46052U;
	int8_t x6 = 1;
	static volatile int32_t x7 = 9423;
	static volatile int32_t x8 = INT32_MAX;

	t1 = (x5^(x6*(x7==x8)));

	if (t1 != 46052U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 53;
	volatile uint16_t x10 = UINT16_MAX;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = 61670;

	t2 = (x9^(x10*(x11==x12)));

	if (t2 != 53) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int16_t x14 = -1;
	int64_t x15 = INT64_MAX;
	uint32_t x16 = 17835658U;
	int32_t t3 = -7;

	t3 = (x13^(x14*(x15==x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 61U;
	volatile uint64_t x18 = 678831LLU;
	int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t4 = 2191421121LLU;

	t4 = (x17^(x18*(x19==x20)));

	if (t4 != 678802LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 18U;
	volatile uint16_t x23 = UINT16_MAX;
	static int64_t x24 = INT64_MIN;
	static volatile uint32_t t5 = UINT32_MAX;

	t5 = (x21^(x22*(x23==x24)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MIN;
	uint8_t x27 = UINT8_MAX;
	static int64_t x28 = -29790351963LL;
	uint64_t t6 = UINT64_MAX;

	t6 = (x25^(x26*(x27==x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 111388418144LLU;
	volatile int8_t x30 = -1;
	static int8_t x31 = -45;
	volatile int64_t x32 = INT64_MIN;
	uint64_t t7 = 1245310192579918106LLU;

	t7 = (x29^(x30*(x31==x32)));

	if (t7 != 111388418144LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int64_t x34 = -1LL;
	static int64_t x35 = 1028876973LL;

	t8 = (x33^(x34*(x35==x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	static int8_t x39 = INT8_MIN;
	int16_t x40 = -13;
	int64_t t9 = -1566LL;

	t9 = (x37^(x38*(x39==x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1LL;
	int32_t x43 = -1;
	int8_t x44 = -1;
	int64_t t10 = -160286899742940107LL;

	t10 = (x41^(x42*(x43==x44)));

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = INT32_MIN;
	volatile int64_t x48 = INT64_MIN;
	static int32_t t11 = INT32_MIN;

	t11 = (x45^(x46*(x47==x48)));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 11;
	int8_t x50 = INT8_MIN;
	volatile int32_t x51 = -14892;
	int64_t x52 = 9979LL;
	volatile int32_t t12 = -127;

	t12 = (x49^(x50*(x51==x52)));

	if (t12 != 11) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	volatile int64_t t13 = 12LL;

	t13 = (x53^(x54*(x55==x56)));

	if (t13 != -2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	static int8_t x58 = INT8_MIN;
	uint64_t x59 = 1314329349630375287LLU;
	int32_t x60 = INT32_MAX;
	static int32_t t14 = 25828;

	t14 = (x57^(x58*(x59==x60)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	int16_t x64 = INT16_MAX;
	uint32_t t15 = 1780U;

	t15 = (x61^(x62*(x63==x64)));

	if (t15 != 1612135U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = UINT32_MAX;
	int8_t x67 = INT8_MAX;
	volatile int16_t x68 = 1;

	t16 = (x65^(x66*(x67==x68)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	uint8_t x70 = 7U;
	static int8_t x71 = -62;
	int32_t t17 = INT32_MAX;

	t17 = (x69^(x70*(x71==x72)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	volatile int16_t x74 = INT16_MAX;
	int16_t x75 = -1;

	t18 = (x73^(x74*(x75==x76)));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x78 = -612343897633LL;
	static uint16_t x79 = UINT16_MAX;
	uint16_t x80 = 0U;
	static volatile int64_t t19 = 43581380LL;

	t19 = (x77^(x78*(x79==x80)));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 0LL;
	uint32_t x82 = 12U;
	int16_t x83 = -1;
	int8_t x84 = 2;
	volatile int64_t t20 = 5631LL;

	t20 = (x81^(x82*(x83==x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 0;
	static volatile uint32_t x86 = 869354U;
	int8_t x87 = 1;
	int16_t x88 = INT16_MAX;
	static uint32_t t21 = 101051002U;

	t21 = (x85^(x86*(x87==x88)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x90 = 9514U;
	uint64_t x91 = 87289927183064LLU;
	int32_t x92 = -1;
	volatile int32_t t22 = -1147535;

	t22 = (x89^(x90*(x91==x92)));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x94 = 1;
	int16_t x95 = INT16_MAX;
	int64_t x96 = -1LL;

	t23 = (x93^(x94*(x95==x96)));

	if (t23 != 9756954LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = 121096461939031926LLU;
	static uint32_t x98 = 6305632U;
	int64_t x99 = INT64_MIN;

	t24 = (x97^(x98*(x99==x100)));

	if (t24 != 121096461939031926LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static uint64_t x102 = 0LLU;
	int32_t x103 = -69875;
	static int32_t x104 = INT32_MIN;

	t25 = (x101^(x102*(x103==x104)));

	if (t25 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	uint64_t x106 = UINT64_MAX;
	uint32_t x107 = UINT32_MAX;
	volatile int32_t x108 = -1;
	uint64_t t26 = 335585794386LLU;

	t26 = (x105^(x106*(x107==x108)));

	if (t26 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = 194;
	static volatile int32_t x110 = INT32_MIN;
	int8_t x112 = -25;

	t27 = (x109^(x110*(x111==x112)));

	if (t27 != 194) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = 0U;
	int32_t x114 = INT32_MAX;
	int16_t x115 = INT16_MAX;
	int8_t x116 = -1;
	volatile int32_t t28 = -25213023;

	t28 = (x113^(x114*(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MIN;
	int64_t x119 = 1LL;
	uint16_t x120 = 1509U;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x117^(x118*(x119==x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x122 = UINT8_MAX;
	uint16_t x123 = 507U;
	uint64_t x124 = UINT64_MAX;

	t30 = (x121^(x122*(x123==x124)));

	if (t30 != -8110642) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MAX;
	uint32_t x126 = 267735166U;
	int32_t x127 = INT32_MIN;
	int8_t x128 = -1;
	volatile int64_t t31 = INT64_MAX;

	t31 = (x125^(x126*(x127==x128)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int32_t x130 = 6339608;
	volatile uint32_t x131 = 3U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 42275;

	t32 = (x129^(x130*(x131==x132)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	volatile int16_t x134 = INT16_MAX;
	uint64_t x135 = UINT64_MAX;
	volatile int8_t x136 = -5;
	int32_t t33 = INT32_MIN;

	t33 = (x133^(x134*(x135==x136)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 118U;
	static int16_t x138 = INT16_MIN;
	int64_t x139 = -6427074077547596LL;
	static int8_t x140 = INT8_MIN;
	int32_t t34 = 39;

	t34 = (x137^(x138*(x139==x140)));

	if (t34 != 118) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -14;
	uint32_t x142 = 2U;
	uint32_t x143 = 6U;
	volatile uint8_t x144 = 26U;
	static uint32_t t35 = 2068U;

	t35 = (x141^(x142*(x143==x144)));

	if (t35 != 4294967282U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 16008497360630297LL;
	volatile uint64_t x146 = UINT64_MAX;
	volatile uint32_t x147 = 127712841U;
	uint64_t x148 = 2165201152007986881LLU;
	volatile uint64_t t36 = 440132273716LLU;

	t36 = (x145^(x146*(x147==x148)));

	if (t36 != 16008497360630297LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	uint32_t x150 = 42738U;
	int32_t x151 = 858;
	uint64_t x152 = UINT64_MAX;

	t37 = (x149^(x150*(x151==x152)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x154 = 1;
	int16_t x155 = 472;
	volatile int16_t x156 = INT16_MAX;

	t38 = (x153^(x154*(x155==x156)));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = 10U;
	uint64_t x158 = 16881708999069785LLU;
	int8_t x159 = 0;
	uint32_t x160 = 17537U;

	t39 = (x157^(x158*(x159==x160)));

	if (t39 != 10LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MAX;
	uint16_t x164 = 0U;

	t40 = (x161^(x162*(x163==x164)));

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 12953LLU;
	int8_t x166 = INT8_MAX;
	int32_t x168 = INT32_MAX;
	uint64_t t41 = 803805264430527LLU;

	t41 = (x165^(x166*(x167==x168)));

	if (t41 != 12953LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -41;
	static int32_t x170 = INT32_MIN;
	static volatile uint32_t x172 = 829673852U;
	int32_t t42 = 1;

	t42 = (x169^(x170*(x171==x172)));

	if (t42 != -41) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 126005U;
	static int8_t x175 = INT8_MIN;
	int8_t x176 = -1;

	t43 = (x173^(x174*(x175==x176)));

	if (t43 != 126005U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	static int16_t x178 = 2490;
	int64_t x179 = -7600787461LL;
	int8_t x180 = 0;
	volatile int32_t t44 = 18775563;

	t44 = (x177^(x178*(x179==x180)));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	volatile int32_t x182 = 0;
	uint8_t x183 = 1U;
	uint32_t x184 = UINT32_MAX;
	volatile int64_t t45 = INT64_MIN;

	t45 = (x181^(x182*(x183==x184)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	volatile uint8_t x186 = 8U;
	int32_t x187 = 31;
	uint32_t x188 = 69U;
	volatile int64_t t46 = 143LL;

	t46 = (x185^(x186*(x187==x188)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MAX;
	int8_t x190 = INT8_MIN;
	uint32_t x191 = UINT32_MAX;
	uint32_t x192 = 14385U;
	volatile int64_t t47 = INT64_MAX;

	t47 = (x189^(x190*(x191==x192)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	int32_t x194 = INT32_MAX;
	volatile int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MAX;

	t48 = (x193^(x194*(x195==x196)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 2U;
	volatile uint32_t x198 = 61U;
	int8_t x199 = -31;
	uint32_t t49 = 2008232533U;

	t49 = (x197^(x198*(x199==x200)));

	if (t49 != 2U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = -1;
	uint16_t x204 = UINT16_MAX;
	static volatile int32_t t50 = -118;

	t50 = (x201^(x202*(x203==x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	uint8_t x206 = 15U;
	uint64_t x208 = UINT64_MAX;
	static int32_t t51 = 2974509;

	t51 = (x205^(x206*(x207==x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	static uint32_t x210 = UINT32_MAX;
	int8_t x212 = 0;
	uint32_t t52 = UINT32_MAX;

	t52 = (x209^(x210*(x211==x212)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 5360613;
	int64_t x214 = INT64_MIN;
	uint8_t x215 = 72U;
	static int8_t x216 = -1;
	volatile int64_t t53 = 6505591807431975LL;

	t53 = (x213^(x214*(x215==x216)));

	if (t53 != 5360613LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -1;
	static int16_t x218 = INT16_MAX;
	int64_t x219 = -1LL;
	static volatile uint16_t x220 = 6U;
	int32_t t54 = -293988;

	t54 = (x217^(x218*(x219==x220)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	volatile int64_t x222 = INT64_MAX;
	volatile uint32_t x223 = 1U;
	int64_t x224 = 46455514755133045LL;
	static int64_t t55 = 0LL;

	t55 = (x221^(x222*(x223==x224)));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	uint32_t x226 = UINT32_MAX;
	uint64_t x227 = 502648987825LLU;
	uint16_t x228 = 219U;
	volatile uint32_t t56 = 8273767U;

	t56 = (x225^(x226*(x227==x228)));

	if (t56 != 4294934528U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	uint16_t x230 = UINT16_MAX;
	int64_t x232 = INT64_MIN;
	int32_t t57 = 1;

	t57 = (x229^(x230*(x231==x232)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -331;
	static uint8_t x234 = 15U;
	int8_t x236 = -18;
	volatile int32_t t58 = -3;

	t58 = (x233^(x234*(x235==x236)));

	if (t58 != -331) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	uint16_t x239 = 3728U;
	int32_t x240 = INT32_MIN;
	static int32_t t59 = -112693;

	t59 = (x237^(x238*(x239==x240)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = UINT8_MAX;
	static volatile uint8_t x242 = 0U;
	volatile int8_t x243 = INT8_MIN;
	uint8_t x244 = 0U;
	int32_t t60 = 403788383;

	t60 = (x241^(x242*(x243==x244)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint8_t x246 = 0U;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -1;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x245^(x246*(x247==x248)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MIN;
	int8_t x251 = 6;
	int64_t t62 = INT64_MIN;

	t62 = (x249^(x250*(x251==x252)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MIN;
	int16_t x256 = INT16_MAX;
	static volatile int32_t t63 = 336;

	t63 = (x253^(x254*(x255==x256)));

	if (t63 != 391) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -469338729532350LL;
	uint16_t x258 = UINT16_MAX;
	int16_t x259 = -1;
	uint8_t x260 = 3U;
	volatile int64_t t64 = -3779885689838LL;

	t64 = (x257^(x258*(x259==x260)));

	if (t64 != -469338729532350LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int16_t x262 = INT16_MIN;
	uint64_t x263 = 3362LLU;
	volatile int8_t x264 = INT8_MIN;

	t65 = (x261^(x262*(x263==x264)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -15270897450668LL;
	int8_t x266 = -1;
	int32_t x267 = 2;
	volatile uint64_t x268 = UINT64_MAX;

	t66 = (x265^(x266*(x267==x268)));

	if (t66 != -15270897450668LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x270 = 39U;
	volatile uint16_t x271 = 3U;
	volatile int64_t t67 = -35395857920739LL;

	t67 = (x269^(x270*(x271==x272)));

	if (t67 != -216132320433LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 108032165798965LLU;
	int64_t x274 = -1LL;
	int64_t x276 = 20362633LL;
	uint64_t t68 = 13504088931LLU;

	t68 = (x273^(x274*(x275==x276)));

	if (t68 != 108032165798965LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = INT8_MAX;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = 7748U;
	static int32_t t69 = 5086;

	t69 = (x277^(x278*(x279==x280)));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 2;
	static uint64_t x283 = UINT64_MAX;
	volatile int32_t x284 = INT32_MIN;
	volatile int32_t t70 = -1565166;

	t70 = (x281^(x282*(x283==x284)));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	uint64_t x288 = UINT64_MAX;
	int64_t t71 = INT64_MIN;

	t71 = (x285^(x286*(x287==x288)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 6818U;
	int32_t x290 = INT32_MIN;
	int64_t x291 = -160752028LL;
	volatile uint32_t x292 = UINT32_MAX;
	static int32_t t72 = -13329;

	t72 = (x289^(x290*(x291==x292)));

	if (t72 != 6818) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	int8_t x294 = INT8_MIN;
	static uint16_t x295 = UINT16_MAX;
	volatile int16_t x296 = -1;

	t73 = (x293^(x294*(x295==x296)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x298 = INT32_MIN;
	uint16_t x299 = UINT16_MAX;
	volatile int64_t t74 = -18844251LL;

	t74 = (x297^(x298*(x299==x300)));

	if (t74 != -13265559954930376LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = 437U;
	uint64_t x302 = 19814892941785LLU;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t75 = 1327412LLU;

	t75 = (x301^(x302*(x303==x304)));

	if (t75 != 437LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = 4;
	int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MIN;
	static int32_t t76 = 681750;

	t76 = (x305^(x306*(x307==x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MAX;
	volatile int8_t x310 = INT8_MAX;
	int8_t x311 = -6;
	static uint32_t x312 = 0U;
	int32_t t77 = -57;

	t77 = (x309^(x310*(x311==x312)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = -1;
	uint64_t x315 = UINT64_MAX;
	int16_t x316 = INT16_MAX;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x313^(x314*(x315==x316)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = 446LL;
	int64_t x318 = INT64_MAX;
	static int16_t x319 = INT16_MIN;
	int64_t t79 = 786LL;

	t79 = (x317^(x318*(x319==x320)));

	if (t79 != 446LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x322 = UINT32_MAX;
	volatile uint16_t x323 = 11853U;
	int64_t x324 = INT64_MAX;
	volatile uint32_t t80 = 1600U;

	t80 = (x321^(x322*(x323==x324)));

	if (t80 != 4294967144U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	int16_t x328 = 311;
	static volatile int64_t t81 = INT64_MIN;

	t81 = (x325^(x326*(x327==x328)));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = 685448104757720LL;
	uint8_t x330 = 57U;
	static int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	static int64_t t82 = 104157LL;

	t82 = (x329^(x330*(x331==x332)));

	if (t82 != 685448104757729LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -591647065LL;
	static volatile int16_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	static volatile int16_t x336 = INT16_MIN;
	volatile int64_t t83 = 27698893758375LL;

	t83 = (x333^(x334*(x335==x336)));

	if (t83 != -591647065LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x338 = 0U;
	int32_t x339 = INT32_MIN;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x337^(x338*(x339==x340)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x342 = 13984137;
	uint8_t x344 = 10U;
	volatile int32_t t85 = 11;

	t85 = (x341^(x342*(x343==x344)));

	if (t85 != -11) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 9LLU;
	int32_t x346 = INT32_MIN;
	volatile uint32_t x347 = 18U;
	int64_t x348 = -6422507LL;
	static uint64_t t86 = 1411370115LLU;

	t86 = (x345^(x346*(x347==x348)));

	if (t86 != 9LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x349 = -1LL;
	uint32_t x350 = 69327996U;
	volatile int16_t x351 = INT16_MIN;
	int64_t t87 = 8007755380361LL;

	t87 = (x349^(x350*(x351==x352)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MAX;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x353^(x354*(x355==x356)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = 177429018LL;
	static int8_t x360 = INT8_MAX;
	int32_t t89 = 0;

	t89 = (x357^(x358*(x359==x360)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	uint8_t x364 = 74U;

	t90 = (x361^(x362*(x363==x364)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -1LL;
	int32_t x367 = -1754;
	volatile uint64_t x368 = UINT64_MAX;
	static int64_t t91 = -3721240796LL;

	t91 = (x365^(x366*(x367==x368)));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = 15;
	int32_t x370 = INT32_MIN;
	int32_t x371 = 13884539;
	uint64_t x372 = 8019158323LLU;

	t92 = (x369^(x370*(x371==x372)));

	if (t92 != 15) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	uint16_t x375 = 14U;
	int64_t t93 = INT64_MIN;

	t93 = (x373^(x374*(x375==x376)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = UINT16_MAX;
	int8_t x378 = -59;
	int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 60;

	t94 = (x377^(x378*(x379==x380)));

	if (t94 != -65478) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x383 = INT16_MIN;
	uint16_t x384 = 25U;
	volatile int32_t t95 = 838385;

	t95 = (x381^(x382*(x383==x384)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	int32_t t96 = 0;

	t96 = (x385^(x386*(x387==x388)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int64_t x390 = INT64_MAX;
	int8_t x391 = -8;
	uint32_t x392 = 31U;

	t97 = (x389^(x390*(x391==x392)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MIN;
	static int8_t x395 = INT8_MAX;
	int64_t t98 = 50LL;

	t98 = (x393^(x394*(x395==x396)));

	if (t98 != 431196642808LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x398 = 8;
	int8_t x399 = INT8_MIN;
	volatile int32_t x400 = -1;
	int64_t t99 = INT64_MIN;

	t99 = (x397^(x398*(x399==x400)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

