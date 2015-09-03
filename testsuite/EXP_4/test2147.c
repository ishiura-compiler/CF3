#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t t0 = 330627860402LLU;
uint32_t x8 = 0U;
int32_t x12 = 301;
int64_t x13 = INT64_MAX;
volatile int64_t x14 = -7087850749LL;
volatile int64_t t3 = 377LL;
static volatile int32_t x26 = -4038;
int8_t x27 = -1;
uint8_t x38 = 20U;
int64_t x39 = INT64_MIN;
int32_t x46 = -90064389;
volatile uint16_t x53 = 0U;
static int16_t x54 = INT16_MIN;
int32_t x59 = 50218431;
int16_t x61 = INT16_MIN;
static int32_t t14 = -1;
int32_t x84 = INT32_MIN;
int32_t t17 = 13035898;
volatile int32_t t19 = -76;
volatile int8_t x93 = 0;
int32_t x99 = -1;
volatile int8_t x101 = 1;
volatile uint64_t x115 = UINT64_MAX;
uint32_t x122 = UINT32_MAX;
int16_t x123 = INT16_MIN;
uint64_t x125 = UINT64_MAX;
uint8_t x128 = UINT8_MAX;
uint64_t x129 = 1LLU;
int8_t x130 = -2;
int64_t x131 = -9154773338956125LL;
volatile int32_t x135 = INT32_MIN;
uint8_t x138 = 0U;
int32_t x143 = INT32_MAX;
volatile int64_t x150 = -17725083944LL;
int16_t x151 = -1;
volatile int32_t x153 = -1;
static int8_t x154 = -1;
static int64_t x155 = -1943402LL;
int32_t x156 = INT32_MIN;
int16_t x157 = INT16_MIN;
volatile int32_t x158 = 7741548;
uint64_t x159 = UINT64_MAX;
int32_t t35 = 590247286;
int8_t x161 = -3;
int8_t x164 = INT8_MIN;
volatile int32_t t36 = -76869680;
int32_t t37 = -8350733;
static int8_t x175 = 9;
static uint8_t x179 = 38U;
uint32_t x187 = UINT32_MAX;
int64_t x190 = INT64_MIN;
int16_t x198 = INT16_MIN;
int32_t t44 = -71320;
uint32_t x206 = 72717660U;
static int32_t x214 = -1;
int8_t x220 = INT8_MAX;
static int16_t x222 = INT16_MAX;
static int32_t x223 = INT32_MIN;
uint8_t x233 = 0U;
int8_t x234 = INT8_MIN;
int8_t x235 = INT8_MAX;
int64_t x236 = -1LL;
uint32_t x240 = 3975U;
int8_t x246 = 0;
int32_t x248 = -26;
volatile int16_t x249 = -2;
static int64_t x252 = INT64_MAX;
int32_t x259 = -1;
static uint32_t x260 = 346U;
volatile uint64_t x266 = UINT64_MAX;
int64_t x284 = 10637670487349LL;
volatile int32_t t66 = 9681;
volatile int16_t x296 = INT16_MIN;
uint16_t x297 = 145U;
int32_t x303 = -1;
uint16_t x306 = 561U;
int64_t x308 = INT64_MIN;
static volatile uint64_t x310 = UINT64_MAX;
volatile int32_t x325 = -3170568;
int64_t x326 = -59496LL;
int8_t x327 = 30;
int8_t x328 = 1;
int8_t x338 = INT8_MAX;
volatile uint64_t x339 = 388754LLU;
int64_t x340 = INT64_MIN;
volatile int32_t t78 = 1;
static uint16_t x341 = 2959U;
int8_t x345 = INT8_MIN;
volatile uint16_t x346 = UINT16_MAX;
int32_t x347 = -538053640;
uint64_t x353 = 97884712275808LLU;
uint64_t x354 = UINT64_MAX;
uint8_t x357 = UINT8_MAX;
int32_t x362 = -1;
int8_t x368 = INT8_MIN;
int16_t x377 = INT16_MIN;
static int16_t x381 = -1;
uint32_t x382 = UINT32_MAX;
static uint8_t x385 = 3U;
int8_t x388 = INT8_MIN;
int8_t x394 = INT8_MAX;
int32_t x399 = INT32_MIN;
uint16_t x403 = 1778U;
int8_t x404 = 1;
volatile int8_t x410 = INT8_MIN;
int8_t x411 = -6;
volatile uint16_t x413 = 25300U;
int16_t x415 = INT16_MIN;
int16_t x421 = INT16_MAX;
uint8_t x425 = 91U;
int64_t x428 = -256784LL;


void f0(void) {
	uint64_t x1 = 67LLU;
	static volatile uint64_t x2 = 272LLU;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = 10502888088LLU;

	t0 = (x1-(x2<=(x3^x4)));

	if (t0 != 66LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 115634195U;
	static volatile uint16_t x6 = 2554U;
	static int64_t x7 = -1LL;
	volatile uint32_t t1 = 396U;

	t1 = (x5-(x6<=(x7^x8)));

	if (t1 != 115634195U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MAX;
	static volatile int8_t x11 = INT8_MAX;
	static volatile int32_t t2 = -1;

	t2 = (x9-(x10<=(x11^x12)));

	if (t2 != 126) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x15 = -1LL;
	int16_t x16 = -69;

	t3 = (x13-(x14<=(x15^x16)));

	if (t3 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x22 = 87LL;
	uint8_t x23 = 6U;
	int64_t x24 = INT64_MAX;
	volatile uint32_t t4 = 658U;

	t4 = (x21-(x22<=(x23^x24)));

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = INT32_MIN;
	uint32_t x28 = 19680327U;
	int32_t t5 = INT32_MIN;

	t5 = (x25-(x26<=(x27^x28)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -23;
	int64_t x34 = 31897139637LL;
	int16_t x35 = -2090;
	int64_t x36 = -16044798LL;
	static volatile int32_t t6 = -4367;

	t6 = (x33-(x34<=(x35^x36)));

	if (t6 != -23) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MIN;
	uint16_t x40 = 49U;
	int64_t t7 = INT64_MIN;

	t7 = (x37-(x38<=(x39^x40)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 0;
	uint64_t x42 = 1LLU;
	int32_t x43 = -5;
	volatile int64_t x44 = -19265LL;
	int32_t t8 = 553028;

	t8 = (x41-(x42<=(x43^x44)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = INT64_MAX;
	int32_t x47 = INT32_MAX;
	int8_t x48 = INT8_MAX;
	volatile int64_t t9 = 4201389412LL;

	t9 = (x45-(x46<=(x47^x48)));

	if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	int8_t x50 = INT8_MAX;
	int8_t x51 = INT8_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t10 = -100314777;

	t10 = (x49-(x50<=(x51^x52)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MAX;
	volatile int32_t t11 = 4053908;

	t11 = (x53-(x54<=(x55^x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	uint64_t x58 = UINT64_MAX;
	static volatile uint64_t x60 = 3589461LLU;
	static int64_t t12 = INT64_MIN;

	t12 = (x57-(x58<=(x59^x60)));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MAX;
	int64_t x63 = 0LL;
	static int64_t x64 = 4015566529LL;
	volatile int32_t t13 = 0;

	t13 = (x61-(x62<=(x63^x64)));

	if (t13 != -32769) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -1;
	volatile int8_t x70 = -6;
	static int8_t x71 = INT8_MAX;
	uint32_t x72 = 1562691U;

	t14 = (x69-(x70<=(x71^x72)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 0U;
	int32_t x74 = -2837006;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MIN;
	static int32_t t15 = 2;

	t15 = (x73-(x74<=(x75^x76)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x77 = INT64_MAX;
	volatile int32_t x78 = 165;
	int8_t x79 = INT8_MAX;
	volatile int8_t x80 = INT8_MIN;
	volatile int64_t t16 = INT64_MAX;

	t16 = (x77-(x78<=(x79^x80)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = -2;
	volatile int8_t x83 = 28;

	t17 = (x81-(x82<=(x83^x84)));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 25U;
	uint8_t x86 = 0U;
	int32_t x87 = -1;
	uint32_t x88 = UINT32_MAX;
	int32_t t18 = -3;

	t18 = (x85-(x86<=(x87^x88)));

	if (t18 != 24) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = INT8_MIN;
	static uint32_t x90 = 179497067U;
	int32_t x91 = -213524;
	volatile int16_t x92 = -98;

	t19 = (x89-(x90<=(x91^x92)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x94 = -1;
	volatile int64_t x95 = -1LL;
	int8_t x96 = -5;
	volatile int32_t t20 = -56;

	t20 = (x93-(x94<=(x95^x96)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x97 = -1903812;
	static uint64_t x98 = 108777LLU;
	int32_t x100 = -1;
	int32_t t21 = 32954889;

	t21 = (x97-(x98<=(x99^x100)));

	if (t21 != -1903812) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x102 = INT64_MAX;
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MAX;
	static volatile int32_t t22 = 54;

	t22 = (x101-(x102<=(x103^x104)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MIN;
	int16_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile int32_t t23 = -85;

	t23 = (x105-(x106<=(x107^x108)));

	if (t23 != -32769) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int8_t x110 = -1;
	uint8_t x111 = 30U;
	volatile int8_t x112 = INT8_MAX;
	int32_t t24 = -914;

	t24 = (x109-(x110<=(x111^x112)));

	if (t24 != 254) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 12U;
	uint16_t x114 = UINT16_MAX;
	volatile int16_t x116 = -14359;
	static int32_t t25 = -6801708;

	t25 = (x113-(x114<=(x115^x116)));

	if (t25 != 12) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -47;
	volatile int32_t x118 = INT32_MIN;
	uint32_t x119 = UINT32_MAX;
	int16_t x120 = -1;
	volatile int32_t t26 = 4;

	t26 = (x117-(x118<=(x119^x120)));

	if (t26 != -47) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = -1023972810;
	int16_t x124 = -1;
	volatile int32_t t27 = 6791214;

	t27 = (x121-(x122<=(x123^x124)));

	if (t27 != -1023972810) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x126 = INT8_MIN;
	volatile int8_t x127 = INT8_MAX;
	volatile uint64_t t28 = 1692392LLU;

	t28 = (x125-(x126<=(x127^x128)));

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x132 = INT32_MIN;
	static volatile uint64_t t29 = 1110767415LLU;

	t29 = (x129-(x130<=(x131^x132)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = UINT8_MAX;
	int8_t x134 = 15;
	int32_t x136 = -3742;
	int32_t t30 = 26087;

	t30 = (x133-(x134<=(x135^x136)));

	if (t30 != 254) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = 445726747;
	static volatile uint8_t x139 = 1U;
	int8_t x140 = 0;
	static volatile int32_t t31 = -7;

	t31 = (x137-(x138<=(x139^x140)));

	if (t31 != 445726746) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MAX;
	static volatile int32_t x142 = -1;
	uint64_t x144 = UINT64_MAX;
	int32_t t32 = -106704677;

	t32 = (x141-(x142<=(x143^x144)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 1U;
	volatile int16_t x152 = -29;
	int32_t t33 = 4982;

	t33 = (x149-(x150<=(x151^x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t t34 = 874407160;

	t34 = (x153-(x154<=(x155^x156)));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x160 = INT64_MIN;

	t35 = (x157-(x158<=(x159^x160)));

	if (t35 != -32769) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MIN;

	t36 = (x161-(x162<=(x163^x164)));

	if (t36 != -4) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = 9;
	static volatile int32_t x170 = 205;
	uint32_t x171 = 110U;
	static uint16_t x172 = 0U;

	t37 = (x169-(x170<=(x171^x172)));

	if (t37 != 9) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = 4557331LL;
	int8_t x174 = -53;
	uint64_t x176 = 9396328654LLU;
	int64_t t38 = -15LL;

	t38 = (x173-(x174<=(x175^x176)));

	if (t38 != 4557331LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x177 = 4188253553865143LLU;
	int8_t x178 = INT8_MIN;
	int32_t x180 = -1;
	volatile uint64_t t39 = 153792613659LLU;

	t39 = (x177-(x178<=(x179^x180)));

	if (t39 != 4188253553865142LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MIN;
	static int64_t x182 = INT64_MIN;
	static volatile int64_t x183 = -1LL;
	static uint8_t x184 = 1U;
	int32_t t40 = 3;

	t40 = (x181-(x182<=(x183^x184)));

	if (t40 != -32769) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x185 = -1;
	static uint16_t x186 = 97U;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t41 = 46;

	t41 = (x185-(x186<=(x187^x188)));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x189 = -1;
	volatile int32_t x191 = -2043574;
	static volatile int8_t x192 = INT8_MAX;
	volatile int32_t t42 = 58;

	t42 = (x189-(x190<=(x191^x192)));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = -8899658351665624LL;
	static int64_t x195 = 764161102469LL;
	static volatile uint32_t x196 = UINT32_MAX;
	int32_t t43 = -2303491;

	t43 = (x193-(x194<=(x195^x196)));

	if (t43 != -32769) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = INT8_MAX;
	int64_t x199 = 16694654LL;
	volatile uint64_t x200 = UINT64_MAX;

	t44 = (x197-(x198<=(x199^x200)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = INT32_MIN;
	static uint8_t x202 = 22U;
	static int16_t x203 = 1;
	int16_t x204 = 2;
	static volatile int32_t t45 = INT32_MIN;

	t45 = (x201-(x202<=(x203^x204)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x205 = 2U;
	int16_t x207 = INT16_MAX;
	uint64_t x208 = 8588043649948481165LLU;
	static int32_t t46 = -400;

	t46 = (x205-(x206<=(x207^x208)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 62427U;
	int16_t x210 = 34;
	int32_t x211 = -36627426;
	volatile uint16_t x212 = 727U;
	static volatile uint32_t t47 = 500U;

	t47 = (x209-(x210<=(x211^x212)));

	if (t47 != 62427U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = -1;
	int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MIN;
	static int32_t t48 = -60828474;

	t48 = (x213-(x214<=(x215^x216)));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 567869435LLU;
	int32_t x218 = -1;
	int16_t x219 = -1;
	volatile uint64_t t49 = 60LLU;

	t49 = (x217-(x218<=(x219^x220)));

	if (t49 != 567869435LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = -30104;
	uint16_t x224 = UINT16_MAX;
	int32_t t50 = 26819511;

	t50 = (x221-(x222<=(x223^x224)));

	if (t50 != -30104) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	static int64_t x226 = INT64_MAX;
	int64_t x227 = -1LL;
	volatile int8_t x228 = 1;
	volatile int32_t t51 = 12235;

	t51 = (x225-(x226<=(x227^x228)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MAX;
	uint64_t x230 = 40LLU;
	static uint32_t x231 = 26220953U;
	volatile uint32_t x232 = UINT32_MAX;
	static volatile int32_t t52 = -28033309;

	t52 = (x229-(x230<=(x231^x232)));

	if (t52 != 2147483646) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t t53 = -4706345;

	t53 = (x233-(x234<=(x235^x236)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = INT16_MIN;
	uint32_t x239 = 772951521U;
	volatile int32_t t54 = -55;

	t54 = (x237-(x238<=(x239^x240)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x241 = 15LLU;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = INT32_MAX;
	int64_t x244 = -1LL;
	volatile uint64_t t55 = 173186733LLU;

	t55 = (x241-(x242<=(x243^x244)));

	if (t55 != 15LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MAX;
	static int32_t x247 = INT32_MIN;
	volatile int32_t t56 = 4;

	t56 = (x245-(x246<=(x247^x248)));

	if (t56 != 32766) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x250 = 26LL;
	volatile uint8_t x251 = 1U;
	int32_t t57 = -363911;

	t57 = (x249-(x250<=(x251^x252)));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x253 = 27LLU;
	uint64_t x254 = 34170281141471LLU;
	static uint64_t x255 = 18338599581LLU;
	int16_t x256 = 1404;
	volatile uint64_t t58 = 382723812422LLU;

	t58 = (x253-(x254<=(x255^x256)));

	if (t58 != 27LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x257 = UINT64_MAX;
	int16_t x258 = INT16_MIN;
	uint64_t t59 = 14LLU;

	t59 = (x257-(x258<=(x259^x260)));

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x261 = 2061632LL;
	volatile uint64_t x262 = 4546983371487676LLU;
	uint16_t x263 = 2292U;
	volatile uint64_t x264 = 88253658083LLU;
	int64_t t60 = 8848833875LL;

	t60 = (x261-(x262<=(x263^x264)));

	if (t60 != 2061632LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = 50U;
	static int16_t x267 = -1;
	int64_t x268 = INT64_MIN;
	volatile int32_t t61 = 88138;

	t61 = (x265-(x266<=(x267^x268)));

	if (t61 != 50) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x269 = INT32_MAX;
	int32_t x270 = INT32_MIN;
	static int8_t x271 = 5;
	uint16_t x272 = 235U;
	int32_t t62 = 18537;

	t62 = (x269-(x270<=(x271^x272)));

	if (t62 != 2147483646) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = INT32_MAX;
	uint64_t x274 = UINT64_MAX;
	volatile int32_t x275 = 14175;
	static int16_t x276 = -24;
	volatile int32_t t63 = INT32_MAX;

	t63 = (x273-(x274<=(x275^x276)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = INT8_MAX;
	uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MIN;
	static int32_t t64 = 165365;

	t64 = (x281-(x282<=(x283^x284)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = -3;
	volatile int8_t x286 = 2;
	int8_t x287 = INT8_MAX;
	volatile int32_t x288 = 41651759;
	volatile int32_t t65 = 374716;

	t65 = (x285-(x286<=(x287^x288)));

	if (t65 != -4) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -1;
	static volatile uint16_t x290 = UINT16_MAX;
	int16_t x291 = INT16_MAX;
	static uint8_t x292 = 5U;

	t66 = (x289-(x290<=(x291^x292)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x293 = UINT8_MAX;
	uint32_t x294 = 313689U;
	int16_t x295 = 37;
	static volatile int32_t t67 = 5112;

	t67 = (x293-(x294<=(x295^x296)));

	if (t67 != 254) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x298 = INT32_MIN;
	volatile uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t68 = 10;

	t68 = (x297-(x298<=(x299^x300)));

	if (t68 != 145) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -133157742;
	int16_t x302 = INT16_MIN;
	volatile uint8_t x304 = UINT8_MAX;
	int32_t t69 = -88;

	t69 = (x301-(x302<=(x303^x304)));

	if (t69 != -133157743) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x305 = 42U;
	int64_t x307 = 548LL;
	volatile int32_t t70 = -36;

	t70 = (x305-(x306<=(x307^x308)));

	if (t70 != 42) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MIN;
	int64_t x311 = -1LL;
	int16_t x312 = -13;
	int32_t t71 = 130731;

	t71 = (x309-(x310<=(x311^x312)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x313 = -1;
	static int8_t x314 = INT8_MAX;
	int32_t x315 = INT32_MAX;
	int16_t x316 = 0;
	static int32_t t72 = -23941447;

	t72 = (x313-(x314<=(x315^x316)));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x317 = INT64_MAX;
	volatile int32_t x318 = -786759;
	volatile int8_t x319 = -1;
	volatile uint8_t x320 = 125U;
	static volatile int64_t t73 = -217LL;

	t73 = (x317-(x318<=(x319^x320)));

	if (t73 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MIN;
	uint16_t x322 = UINT16_MAX;
	static int32_t x323 = -535768;
	static volatile uint16_t x324 = 14U;
	volatile int32_t t74 = 0;

	t74 = (x321-(x322<=(x323^x324)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t t75 = 5;

	t75 = (x325-(x326<=(x327^x328)));

	if (t75 != -3170569) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x329 = UINT16_MAX;
	int8_t x330 = 2;
	static uint8_t x331 = 13U;
	volatile uint16_t x332 = 21876U;
	volatile int32_t t76 = 10;

	t76 = (x329-(x330<=(x331^x332)));

	if (t76 != 65534) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x333 = 83430LL;
	uint32_t x334 = 0U;
	uint16_t x335 = UINT16_MAX;
	uint8_t x336 = 2U;
	volatile int64_t t77 = -2LL;

	t77 = (x333-(x334<=(x335^x336)));

	if (t77 != 83429LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x337 = 4U;

	t78 = (x337-(x338<=(x339^x340)));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x342 = -1LL;
	int64_t x343 = -1LL;
	uint64_t x344 = UINT64_MAX;
	int32_t t79 = 993191;

	t79 = (x341-(x342<=(x343^x344)));

	if (t79 != 2959) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x348 = UINT32_MAX;
	int32_t t80 = -307478904;

	t80 = (x345-(x346<=(x347^x348)));

	if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = 518776543332395904LL;
	static volatile int16_t x350 = INT16_MAX;
	int64_t x351 = -1LL;
	static uint64_t x352 = UINT64_MAX;
	int64_t t81 = -12240546026113LL;

	t81 = (x349-(x350<=(x351^x352)));

	if (t81 != 518776543332395904LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x355 = 127U;
	int64_t x356 = INT64_MAX;
	uint64_t t82 = 1273199658354LLU;

	t82 = (x353-(x354<=(x355^x356)));

	if (t82 != 97884712275808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x358 = -1;
	volatile uint8_t x359 = 99U;
	static volatile int8_t x360 = -1;
	int32_t t83 = 50517;

	t83 = (x357-(x358<=(x359^x360)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = INT8_MIN;
	volatile int32_t x363 = 2090979;
	int16_t x364 = INT16_MAX;
	volatile int32_t t84 = 194172190;

	t84 = (x361-(x362<=(x363^x364)));

	if (t84 != -129) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x365 = 9;
	volatile uint32_t x366 = 14233785U;
	int32_t x367 = -1;
	volatile int32_t t85 = -1;

	t85 = (x365-(x366<=(x367^x368)));

	if (t85 != 9) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x369 = 490;
	volatile int16_t x370 = INT16_MIN;
	volatile int64_t x371 = INT64_MIN;
	volatile int16_t x372 = INT16_MIN;
	int32_t t86 = -23257;

	t86 = (x369-(x370<=(x371^x372)));

	if (t86 != 489) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x373 = -1;
	uint64_t x374 = 68424497884LLU;
	static uint16_t x375 = 56U;
	uint8_t x376 = UINT8_MAX;
	static volatile int32_t t87 = -13722229;

	t87 = (x373-(x374<=(x375^x376)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x378 = -6357908454LL;
	int8_t x379 = INT8_MIN;
	uint8_t x380 = UINT8_MAX;
	int32_t t88 = 39706015;

	t88 = (x377-(x378<=(x379^x380)));

	if (t88 != -32769) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x383 = 53228678U;
	int32_t x384 = -1;
	int32_t t89 = -9594164;

	t89 = (x381-(x382<=(x383^x384)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x386 = -117;
	int8_t x387 = INT8_MIN;
	int32_t t90 = -5376;

	t90 = (x385-(x386<=(x387^x388)));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x393 = INT8_MIN;
	int8_t x395 = -3;
	int8_t x396 = 30;
	int32_t t91 = -496;

	t91 = (x393-(x394<=(x395^x396)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x397 = 0;
	int8_t x398 = 1;
	int32_t x400 = INT32_MIN;
	int32_t t92 = 703143;

	t92 = (x397-(x398<=(x399^x400)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = INT32_MAX;
	int32_t x402 = INT32_MIN;
	volatile int32_t t93 = 0;

	t93 = (x401-(x402<=(x403^x404)));

	if (t93 != 2147483646) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = 41;
	int8_t x406 = INT8_MAX;
	static int16_t x407 = INT16_MIN;
	static int8_t x408 = INT8_MIN;
	volatile int32_t t94 = -8;

	t94 = (x405-(x406<=(x407^x408)));

	if (t94 != 40) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = 1088;
	static volatile int64_t x412 = INT64_MIN;
	int32_t t95 = 44172825;

	t95 = (x409-(x410<=(x411^x412)));

	if (t95 != 1087) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x414 = 5813408;
	int16_t x416 = -1;
	static int32_t t96 = 21790575;

	t96 = (x413-(x414<=(x415^x416)));

	if (t96 != 25300) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = UINT64_MAX;
	int32_t x419 = 508;
	volatile int64_t x420 = -88779LL;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = (x417-(x418<=(x419^x420)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x422 = -7;
	int16_t x423 = INT16_MIN;
	int32_t x424 = -1;
	int32_t t98 = 49836524;

	t98 = (x421-(x422<=(x423^x424)));

	if (t98 != 32766) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x426 = -1;
	int8_t x427 = INT8_MIN;
	int32_t t99 = -1;

	t99 = (x425-(x426<=(x427^x428)));

	if (t99 != 90) { NG(); } else { ; }
	
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

