#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x7 = INT16_MIN;
int64_t t1 = 8LL;
static uint16_t x17 = 2438U;
static int8_t x24 = INT8_MIN;
static int32_t x27 = INT32_MAX;
int32_t x28 = INT32_MIN;
volatile int64_t x34 = 370LL;
int16_t x36 = INT16_MAX;
int32_t t7 = -3;
int32_t x39 = INT32_MIN;
volatile int16_t x40 = INT16_MIN;
volatile int32_t x48 = 7266576;
volatile int16_t x52 = -1;
uint16_t x54 = 0U;
int32_t x56 = INT32_MIN;
uint64_t x57 = UINT64_MAX;
static volatile int16_t x62 = -1;
volatile int16_t x63 = INT16_MIN;
volatile uint64_t x68 = UINT64_MAX;
int64_t x70 = INT64_MIN;
uint8_t x71 = 51U;
uint64_t x75 = 53967499LLU;
uint64_t x82 = 64916418559270LLU;
int16_t x83 = INT16_MAX;
volatile int64_t x93 = INT64_MAX;
uint64_t x95 = 22LLU;
volatile int32_t x96 = 42974609;
uint8_t x100 = 59U;
uint8_t x104 = 1U;
uint16_t x105 = UINT16_MAX;
uint16_t x107 = 13409U;
uint8_t x110 = 1U;
int16_t x111 = INT16_MIN;
volatile int64_t t24 = -104800497268990470LL;
int16_t x113 = 0;
uint32_t t26 = 27U;
int64_t x122 = -1LL;
volatile int8_t x128 = INT8_MIN;
volatile int32_t t28 = -31532760;
volatile uint32_t t30 = 118560233U;
uint32_t x140 = 103847505U;
volatile uint32_t t31 = 29590U;
volatile int16_t x142 = INT16_MIN;
int16_t x144 = INT16_MIN;
volatile int32_t t32 = 2432;
int8_t x145 = INT8_MIN;
uint64_t x149 = 141177LLU;
volatile uint64_t t34 = 26632653LLU;
static volatile int16_t x156 = -1;
int64_t x163 = INT64_MIN;
uint64_t t36 = 61839042017932805LLU;
volatile int32_t x169 = INT32_MAX;
uint64_t x186 = 11LLU;
uint8_t x188 = UINT8_MAX;
uint8_t x198 = 1U;
static int32_t x201 = -1;
volatile int16_t x202 = 599;
static uint8_t x207 = 1U;
uint8_t x209 = 40U;
int16_t x211 = 3260;
int64_t x215 = -1LL;
int8_t x220 = 0;
volatile int8_t x222 = INT8_MIN;
static int16_t x229 = -1;
uint64_t x232 = UINT64_MAX;
static uint8_t x234 = UINT8_MAX;
int64_t x241 = INT64_MIN;
static int8_t x246 = -1;
volatile uint16_t x252 = 3U;
static volatile uint32_t t57 = 92U;
volatile uint32_t t60 = 1182U;
int16_t x265 = -1;
uint16_t x268 = UINT16_MAX;
int32_t t61 = 3808159;
int64_t x274 = INT64_MIN;
static volatile int16_t x276 = INT16_MIN;
int32_t t63 = 9;
volatile int64_t x285 = INT64_MAX;
static uint64_t x288 = UINT64_MAX;
uint64_t t66 = 18132LLU;
volatile int16_t x293 = 420;
int8_t x294 = -1;
static uint64_t x295 = 2792LLU;
static volatile uint64_t x300 = UINT64_MAX;
static int32_t x303 = INT32_MIN;
static volatile int8_t x304 = INT8_MAX;
int64_t x307 = INT64_MIN;
int16_t x310 = -1;
volatile uint64_t t72 = 5035LLU;
static int64_t t74 = 7128420598829LL;
volatile int8_t x321 = INT8_MAX;
volatile uint64_t t75 = 3777172LLU;
volatile int64_t x325 = INT64_MAX;
int16_t x326 = INT16_MAX;
int64_t t76 = INT64_MAX;
volatile int64_t x332 = 3312LL;
int8_t x334 = INT8_MIN;
int64_t x337 = INT64_MIN;
volatile int64_t t79 = 96330921LL;
volatile int8_t x346 = INT8_MIN;
volatile int16_t x348 = INT16_MIN;
volatile int16_t x364 = -1;
int32_t x366 = -1;
int8_t x368 = INT8_MIN;
volatile int16_t x370 = -1;
volatile int64_t t87 = -923LL;
uint16_t x375 = 31063U;
static uint64_t x380 = 218598615LLU;
int32_t x382 = INT32_MAX;
uint8_t x407 = 5U;
volatile uint32_t x409 = UINT32_MAX;
static int32_t t96 = -2870;
static int16_t x423 = INT16_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint64_t x2 = 63LLU;
	int32_t x3 = -1407373;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -2506739019LL;

	t0 = (x1-((x2<=x3)*x4));

	if (t0 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static uint32_t x6 = 0U;
	int64_t x8 = 5881670005LL;

	t1 = (x5-((x6<=x7)*x8));

	if (t1 != -5881669750LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint16_t x10 = 7983U;
	int64_t x11 = 861127LL;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 7395274;

	t2 = (x9-((x10<=x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	int32_t x19 = INT32_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t3 = -528343176;

	t3 = (x17-((x18<=x19)*x20));

	if (t3 != 2566) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x21 = INT8_MIN;
	uint8_t x22 = 105U;
	static int64_t x23 = -1LL;
	int32_t t4 = -215490919;

	t4 = (x21-((x22<=x23)*x24));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = -1;
	volatile int32_t t5 = 4904213;

	t5 = (x25-((x26<=x27)*x28));

	if (t5 != 2147450880) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	int8_t x30 = INT8_MIN;
	int64_t x31 = 240LL;
	int8_t x32 = 1;
	volatile int32_t t6 = -1757;

	t6 = (x29-((x30<=x31)*x32));

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int64_t x35 = 1023216018LL;

	t7 = (x33-((x34<=x35)*x36));

	if (t7 != -65535) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = 8;
	int32_t x38 = INT32_MAX;
	volatile int32_t t8 = -25016983;

	t8 = (x37-((x38<=x39)*x40));

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	uint16_t x46 = 53U;
	static volatile int16_t x47 = 502;
	static int32_t t9 = 959330;

	t9 = (x45-((x46<=x47)*x48));

	if (t9 != -7266704) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	volatile int32_t t10 = -249717;

	t10 = (x49-((x50<=x51)*x52));

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = INT64_MAX;
	int8_t x55 = INT8_MIN;
	static volatile int64_t t11 = INT64_MAX;

	t11 = (x53-((x54<=x55)*x56));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x58 = INT8_MIN;
	uint8_t x59 = 12U;
	static int64_t x60 = INT64_MIN;
	uint64_t t12 = 1280193630161501387LLU;

	t12 = (x57-((x58<=x59)*x60));

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = -117572082009LL;
	static uint32_t x64 = 388U;
	static int64_t t13 = 12489LL;

	t13 = (x61-((x62<=x63)*x64));

	if (t13 != -117572082009LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MAX;
	static uint64_t t14 = 3216LLU;

	t14 = (x65-((x66<=x67)*x68));

	if (t14 != 32768LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int64_t x72 = 207LL;
	volatile int64_t t15 = 23729213LL;

	t15 = (x69-((x70<=x71)*x72));

	if (t15 != -208LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	static uint32_t x74 = 2U;
	uint8_t x76 = 1U;
	int32_t t16 = -1;

	t16 = (x73-((x74<=x75)*x76));

	if (t16 != -32769) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x81 = -6;
	uint64_t x84 = 276332881LLU;
	uint64_t t17 = 0LLU;

	t17 = (x81-((x82<=x83)*x84));

	if (t17 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MAX;
	uint8_t x86 = UINT8_MAX;
	uint16_t x87 = 19U;
	int64_t x88 = INT64_MIN;
	volatile int64_t t18 = 3713424283LL;

	t18 = (x85-((x86<=x87)*x88));

	if (t18 != 2147483647LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 244645054171LLU;
	uint8_t x90 = 9U;
	volatile int8_t x91 = INT8_MIN;
	uint8_t x92 = 121U;
	volatile uint64_t t19 = 241LLU;

	t19 = (x89-((x90<=x91)*x92));

	if (t19 != 244645054171LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x94 = INT8_MIN;
	int64_t t20 = INT64_MAX;

	t20 = (x93-((x94<=x95)*x96));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x97 = UINT32_MAX;
	volatile int16_t x98 = INT16_MIN;
	static uint64_t x99 = 12LLU;
	static uint32_t t21 = UINT32_MAX;

	t21 = (x97-((x98<=x99)*x100));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 7U;
	volatile int8_t x102 = INT8_MIN;
	uint64_t x103 = 41LLU;
	volatile int32_t t22 = -768;

	t22 = (x101-((x102<=x103)*x104));

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x106 = UINT64_MAX;
	static int8_t x108 = INT8_MIN;
	int32_t t23 = 73224;

	t23 = (x105-((x106<=x107)*x108));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x109 = -3129381675740738744LL;
	static int64_t x112 = -1LL;

	t24 = (x109-((x110<=x111)*x112));

	if (t24 != -3129381675740738744LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x114 = 1U;
	uint32_t x115 = UINT32_MAX;
	uint8_t x116 = 47U;
	static int32_t t25 = -118606;

	t25 = (x113-((x114<=x115)*x116));

	if (t25 != -47) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 20U;
	int64_t x118 = INT64_MAX;
	volatile uint16_t x119 = UINT16_MAX;
	int32_t x120 = -11471029;

	t26 = (x117-((x118<=x119)*x120));

	if (t26 != 20U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = 3;
	static volatile uint32_t x123 = 3261U;
	volatile uint8_t x124 = 23U;
	volatile int32_t t27 = 20;

	t27 = (x121-((x122<=x123)*x124));

	if (t27 != -20) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MAX;
	static int32_t x126 = 0;
	int8_t x127 = INT8_MAX;

	t28 = (x125-((x126<=x127)*x128));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 578U;
	int16_t x130 = INT16_MIN;
	int16_t x131 = -1;
	int8_t x132 = -1;
	volatile int32_t t29 = -1173974;

	t29 = (x129-((x130<=x131)*x132));

	if (t29 != 579) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = -1LL;
	int8_t x135 = 1;
	volatile int16_t x136 = 1;

	t30 = (x133-((x134<=x135)*x136));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = INT16_MIN;
	static volatile uint8_t x138 = 86U;
	volatile int64_t x139 = INT64_MIN;

	t31 = (x137-((x138<=x139)*x140));

	if (t31 != 4294934528U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x141 = UINT8_MAX;
	int32_t x143 = INT32_MIN;

	t32 = (x141-((x142<=x143)*x144));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x146 = UINT16_MAX;
	volatile uint32_t x147 = 11308U;
	volatile uint16_t x148 = 29797U;
	int32_t t33 = 123509;

	t33 = (x145-((x146<=x147)*x148));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x150 = INT32_MIN;
	uint64_t x151 = 30410LLU;
	static int32_t x152 = INT32_MAX;

	t34 = (x149-((x150<=x151)*x152));

	if (t34 != 141177LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x153 = INT8_MAX;
	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MAX;
	volatile int32_t t35 = 57272;

	t35 = (x153-((x154<=x155)*x156));

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MAX;
	volatile int16_t x162 = 107;
	static uint64_t x164 = 9331LLU;

	t36 = (x161-((x162<=x163)*x164));

	if (t36 != 32767LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = 182104355078578LL;
	int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MIN;
	uint64_t x168 = 18232664977798LLU;
	volatile uint64_t t37 = 3604060625690009354LLU;

	t37 = (x165-((x166<=x167)*x168));

	if (t37 != 163871690100780LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = -1;
	int32_t x171 = -884852;
	static int8_t x172 = 0;
	static int32_t t38 = INT32_MAX;

	t38 = (x169-((x170<=x171)*x172));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = UINT32_MAX;
	int32_t x178 = INT32_MIN;
	int64_t x179 = -1962515352606LL;
	static uint32_t x180 = UINT32_MAX;
	uint32_t t39 = UINT32_MAX;

	t39 = (x177-((x178<=x179)*x180));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = -1;
	static int64_t x182 = -64005105LL;
	int8_t x183 = INT8_MAX;
	int64_t x184 = INT64_MIN;
	static volatile int64_t t40 = INT64_MAX;

	t40 = (x181-((x182<=x183)*x184));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = 76U;
	int16_t x187 = INT16_MIN;
	static int32_t t41 = -176783055;

	t41 = (x185-((x186<=x187)*x188));

	if (t41 != -179) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = 0U;
	int64_t x190 = 27717753573LL;
	static int64_t x191 = -1LL;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t42 = 613;

	t42 = (x189-((x190<=x191)*x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = -1;
	int16_t x194 = 1;
	int64_t x195 = -1LL;
	static int16_t x196 = INT16_MAX;
	int32_t t43 = 947;

	t43 = (x193-((x194<=x195)*x196));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 4847LLU;
	uint64_t x199 = 133081249722LLU;
	uint8_t x200 = UINT8_MAX;
	uint64_t t44 = 89LLU;

	t44 = (x197-((x198<=x199)*x200));

	if (t44 != 4592LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x203 = -1481;
	int8_t x204 = -2;
	int32_t t45 = -15;

	t45 = (x201-((x202<=x203)*x204));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = -1;
	volatile uint8_t x208 = 0U;
	static int32_t t46 = -1038905782;

	t46 = (x205-((x206<=x207)*x208));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x210 = -1;
	int8_t x212 = 33;
	int32_t t47 = 781460;

	t47 = (x209-((x210<=x211)*x212));

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = 1401;
	static uint16_t x214 = UINT16_MAX;
	volatile int32_t x216 = -1;
	int32_t t48 = 31727;

	t48 = (x213-((x214<=x215)*x216));

	if (t48 != 1401) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int16_t x218 = INT16_MAX;
	int8_t x219 = INT8_MIN;
	volatile int32_t t49 = 13;

	t49 = (x217-((x218<=x219)*x220));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x221 = 17U;
	int32_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t50 = -11806275;

	t50 = (x221-((x222<=x223)*x224));

	if (t50 != 32785) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x225 = 13472;
	uint8_t x226 = 56U;
	uint8_t x227 = UINT8_MAX;
	static uint32_t x228 = 201131U;
	uint32_t t51 = 690489U;

	t51 = (x225-((x226<=x227)*x228));

	if (t51 != 4294779637U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x230 = 26;
	static uint8_t x231 = 1U;
	uint64_t t52 = UINT64_MAX;

	t52 = (x229-((x230<=x231)*x232));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 2623U;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = INT16_MIN;
	int32_t t53 = -127;

	t53 = (x233-((x234<=x235)*x236));

	if (t53 != 35391) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x237 = 1557U;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 131LLU;
	int16_t x240 = 10;
	static volatile int32_t t54 = -2075752;

	t54 = (x237-((x238<=x239)*x240));

	if (t54 != 1557) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x242 = 26689341;
	uint16_t x243 = 6445U;
	static int32_t x244 = -1;
	int64_t t55 = INT64_MIN;

	t55 = (x241-((x242<=x243)*x244));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -41;
	volatile int32_t t56 = -1732824;

	t56 = (x245-((x246<=x247)*x248));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = UINT32_MAX;
	int64_t x250 = INT64_MIN;
	int64_t x251 = 110132LL;

	t57 = (x249-((x250<=x251)*x252));

	if (t57 != 4294967292U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x253 = INT16_MAX;
	volatile int8_t x254 = INT8_MAX;
	volatile int8_t x255 = -1;
	int8_t x256 = -63;
	int32_t t58 = 404178;

	t58 = (x253-((x254<=x255)*x256));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x257 = 124U;
	static uint64_t x258 = UINT64_MAX;
	int16_t x259 = -1;
	int8_t x260 = -1;
	int32_t t59 = 1;

	t59 = (x257-((x258<=x259)*x260));

	if (t59 != 125) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x261 = 3905U;
	uint32_t x262 = 3849U;
	volatile int16_t x263 = 1865;
	volatile uint32_t x264 = 5029U;

	t60 = (x261-((x262<=x263)*x264));

	if (t60 != 3905U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MAX;

	t61 = (x265-((x266<=x267)*x268));

	if (t61 != -65536) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x269 = 3;
	int8_t x270 = INT8_MAX;
	int8_t x271 = 0;
	int8_t x272 = -1;
	volatile int32_t t62 = 352682;

	t62 = (x269-((x270<=x271)*x272));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = -1;
	volatile int8_t x275 = INT8_MIN;

	t63 = (x273-((x274<=x275)*x276));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x277 = 100U;
	int8_t x278 = -1;
	volatile int64_t x279 = -1LL;
	volatile int8_t x280 = -1;
	volatile int32_t t64 = 4;

	t64 = (x277-((x278<=x279)*x280));

	if (t64 != 101) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = INT16_MIN;
	int64_t x283 = INT64_MAX;
	static volatile int32_t x284 = 32;
	int32_t t65 = -1954;

	t65 = (x281-((x282<=x283)*x284));

	if (t65 != 2147483615) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x286 = INT32_MIN;
	int64_t x287 = INT64_MIN;

	t66 = (x285-((x286<=x287)*x288));

	if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = -11;
	volatile int16_t x290 = -1;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = 81U;
	static volatile int32_t t67 = 48;

	t67 = (x289-((x290<=x291)*x292));

	if (t67 != -11) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x296 = UINT8_MAX;
	int32_t t68 = -1;

	t68 = (x293-((x294<=x295)*x296));

	if (t68 != 420) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = INT32_MIN;
	static int16_t x298 = 0;
	int8_t x299 = INT8_MAX;
	static uint64_t t69 = 101542084LLU;

	t69 = (x297-((x298<=x299)*x300));

	if (t69 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x301 = INT64_MIN;
	static uint8_t x302 = UINT8_MAX;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x301-((x302<=x303)*x304));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x305 = 356;
	static int32_t x306 = 543;
	volatile int16_t x308 = 0;
	static int32_t t71 = -434533486;

	t71 = (x305-((x306<=x307)*x308));

	if (t71 != 356) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 2270170LLU;
	volatile int64_t x311 = INT64_MIN;
	int16_t x312 = -1;

	t72 = (x309-((x310<=x311)*x312));

	if (t72 != 2270170LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = -10;
	int32_t x314 = INT32_MAX;
	volatile uint8_t x315 = UINT8_MAX;
	int16_t x316 = 7718;
	int32_t t73 = -6;

	t73 = (x313-((x314<=x315)*x316));

	if (t73 != -10) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = 91931605406LL;
	int32_t x318 = 1420;
	uint32_t x319 = 29066578U;
	static uint8_t x320 = 12U;

	t74 = (x317-((x318<=x319)*x320));

	if (t74 != 91931605394LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x322 = 12U;
	static uint8_t x323 = 12U;
	uint64_t x324 = UINT64_MAX;

	t75 = (x321-((x322<=x323)*x324));

	if (t75 != 128LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x327 = -3400995703924799LL;
	volatile int16_t x328 = INT16_MIN;

	t76 = (x325-((x326<=x327)*x328));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x329 = INT8_MAX;
	int64_t x330 = 4185354419LL;
	int8_t x331 = 0;
	int64_t t77 = -211356LL;

	t77 = (x329-((x330<=x331)*x332));

	if (t77 != 127LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = INT64_MIN;
	uint16_t x335 = 13U;
	int64_t x336 = -17117045539LL;
	static int64_t t78 = -412057823LL;

	t78 = (x333-((x334<=x335)*x336));

	if (t78 != -9223372019737730269LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x338 = -1;
	int16_t x339 = INT16_MAX;
	static int16_t x340 = -390;

	t79 = (x337-((x338<=x339)*x340));

	if (t79 != -9223372036854775418LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = -3300LL;
	volatile int8_t x342 = INT8_MIN;
	static int16_t x343 = INT16_MAX;
	static int16_t x344 = 791;
	int64_t t80 = 14772383140LL;

	t80 = (x341-((x342<=x343)*x344));

	if (t80 != -4091LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x345 = 136298112U;
	static int64_t x347 = INT64_MIN;
	uint32_t t81 = 1744942U;

	t81 = (x345-((x346<=x347)*x348));

	if (t81 != 136298112U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x349 = 68LLU;
	int64_t x350 = INT64_MAX;
	static uint32_t x351 = UINT32_MAX;
	static int32_t x352 = 54354514;
	uint64_t t82 = 31LLU;

	t82 = (x349-((x350<=x351)*x352));

	if (t82 != 68LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = -1;
	uint16_t x354 = UINT16_MAX;
	uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MIN;
	static int32_t t83 = 0;

	t83 = (x353-((x354<=x355)*x356));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = -1LL;
	uint64_t x358 = 23LLU;
	uint32_t x359 = UINT32_MAX;
	uint64_t x360 = 56983601LLU;
	volatile uint64_t t84 = 1032092LLU;

	t84 = (x357-((x358<=x359)*x360));

	if (t84 != 18446744073652568014LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = -5;
	uint64_t x362 = 8785009570601LLU;
	int16_t x363 = INT16_MAX;
	volatile int32_t t85 = -2433410;

	t85 = (x361-((x362<=x363)*x364));

	if (t85 != -5) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = -1;
	int64_t x367 = 352513LL;
	static volatile int32_t t86 = 44;

	t86 = (x365-((x366<=x367)*x368));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x369 = -1LL;
	uint16_t x371 = 480U;
	uint8_t x372 = UINT8_MAX;

	t87 = (x369-((x370<=x371)*x372));

	if (t87 != -256LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = 509142008377056233LLU;
	int8_t x374 = INT8_MAX;
	static int16_t x376 = 486;
	uint64_t t88 = 531894879512091920LLU;

	t88 = (x373-((x374<=x375)*x376));

	if (t88 != 509142008377055747LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = -5927;
	static int16_t x378 = INT16_MIN;
	static volatile int16_t x379 = -1;
	static uint64_t t89 = 200416310LLU;

	t89 = (x377-((x378<=x379)*x380));

	if (t89 != 18446744073490947074LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x381 = UINT8_MAX;
	int64_t x383 = -920918LL;
	int16_t x384 = INT16_MAX;
	static int32_t t90 = -158258;

	t90 = (x381-((x382<=x383)*x384));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = -1;
	int32_t x386 = INT32_MIN;
	int8_t x387 = -1;
	static uint32_t x388 = 234U;
	volatile uint32_t t91 = 17U;

	t91 = (x385-((x386<=x387)*x388));

	if (t91 != 4294967061U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = -1;
	static volatile int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MIN;
	volatile int32_t t92 = INT32_MAX;

	t92 = (x393-((x394<=x395)*x396));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = 64U;
	int64_t x398 = INT64_MIN;
	uint64_t x399 = 33LLU;
	volatile int64_t x400 = -13565719939440LL;
	volatile int64_t t93 = -42805356663715653LL;

	t93 = (x397-((x398<=x399)*x400));

	if (t93 != 64LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x405 = -635LL;
	int64_t x406 = -77198579598918LL;
	int32_t x408 = -1;
	volatile int64_t t94 = -152996446LL;

	t94 = (x405-((x406<=x407)*x408));

	if (t94 != -634LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x410 = -1;
	volatile uint64_t x411 = UINT64_MAX;
	volatile uint16_t x412 = UINT16_MAX;
	uint32_t t95 = 60296U;

	t95 = (x409-((x410<=x411)*x412));

	if (t95 != 4294901760U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = 2808;
	volatile int16_t x414 = -1;
	int32_t x415 = 26843682;
	int16_t x416 = INT16_MIN;

	t96 = (x413-((x414<=x415)*x416));

	if (t96 != 35576) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x417 = -1;
	volatile int16_t x418 = 248;
	static int8_t x419 = INT8_MAX;
	int32_t x420 = INT32_MIN;
	static int32_t t97 = 878318;

	t97 = (x417-((x418<=x419)*x420));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x421 = INT16_MIN;
	uint16_t x422 = 6U;
	static int32_t x424 = -14452;
	static volatile int32_t t98 = -16336;

	t98 = (x421-((x422<=x423)*x424));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x425 = -1LL;
	static uint64_t x426 = 5504663693763252937LLU;
	static int32_t x427 = -121936362;
	uint32_t x428 = 5529U;
	static int64_t t99 = 285907423199LL;

	t99 = (x425-((x426<=x427)*x428));

	if (t99 != -5530LL) { NG(); } else { ; }
	
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

