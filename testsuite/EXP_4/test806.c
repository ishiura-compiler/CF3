#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -1;
int16_t x8 = -1053;
static volatile int32_t t1 = 7;
int64_t x9 = INT64_MIN;
int8_t x12 = INT8_MIN;
uint64_t x14 = 1624694884827297787LLU;
int8_t x15 = INT8_MIN;
int64_t x16 = -1LL;
int16_t x18 = INT16_MAX;
static uint16_t x24 = 131U;
volatile int64_t x30 = INT64_MAX;
volatile uint64_t t7 = 60399593LLU;
static volatile uint32_t t8 = 7348U;
int8_t x38 = -1;
static volatile uint8_t x39 = 10U;
int64_t t9 = 1LL;
int32_t t10 = INT32_MIN;
uint32_t x46 = 24U;
uint32_t x49 = 99U;
volatile int8_t x68 = INT8_MAX;
static int64_t x71 = INT64_MIN;
uint16_t x74 = UINT16_MAX;
int8_t x75 = 1;
int8_t x76 = -37;
static uint16_t x77 = UINT16_MAX;
int32_t x78 = INT32_MIN;
static volatile int64_t x85 = -1LL;
static volatile int64_t t21 = 15481343LL;
uint8_t x92 = 1U;
int64_t x95 = INT64_MIN;
int16_t x97 = INT16_MIN;
int64_t x98 = -28302536917LL;
static uint32_t x105 = UINT32_MAX;
static int64_t x109 = INT64_MIN;
volatile int32_t x118 = 527532958;
uint32_t x123 = 137343956U;
volatile int64_t t30 = 0LL;
uint8_t x130 = 3U;
int32_t x136 = -1;
int64_t x138 = INT64_MIN;
static volatile int64_t x139 = INT64_MIN;
volatile int32_t x144 = INT32_MIN;
int32_t x156 = INT32_MIN;
volatile int16_t x157 = -3950;
uint16_t x165 = 25U;
uint16_t x168 = 1017U;
int64_t t42 = INT64_MIN;
static int32_t x178 = INT32_MIN;
int64_t x183 = INT64_MIN;
uint64_t x192 = UINT64_MAX;
int64_t t46 = INT64_MAX;
uint16_t x202 = 162U;
uint8_t x209 = UINT8_MAX;
int64_t x214 = 492LL;
static int8_t x239 = INT8_MAX;
uint32_t t58 = 1512U;
uint64_t x243 = 2982854311284187LLU;
int64_t x246 = 2LL;
uint64_t x250 = 5822153584859896LLU;
volatile int8_t x253 = 3;
volatile int32_t x257 = -1;
volatile int8_t x260 = INT8_MIN;
static int8_t x266 = -1;
volatile int64_t x271 = INT64_MIN;
volatile int32_t t67 = 8162;
int32_t x291 = INT32_MIN;
static int16_t x292 = INT16_MIN;
static int32_t x293 = 904419960;
volatile uint64_t x300 = 1206025692164LLU;
int64_t x303 = INT64_MAX;
int32_t t74 = -1;
uint32_t x306 = 50U;
int16_t x313 = INT16_MIN;
int8_t x318 = -6;
int8_t x319 = INT8_MIN;
volatile int32_t t78 = INT32_MIN;
int16_t x321 = INT16_MIN;
static uint16_t x324 = 6185U;
uint64_t x325 = 30979995670572857LLU;
uint16_t x328 = UINT16_MAX;
static uint64_t t80 = 153923865714103LLU;
int32_t x331 = INT32_MIN;
int32_t t81 = -46825085;
static int64_t x333 = 4959645LL;
uint64_t x335 = 526603227LLU;
volatile int64_t t82 = 551634016LL;
int16_t x337 = 44;
static uint16_t x338 = 8U;
volatile uint8_t x343 = 5U;
static int64_t x346 = -1LL;
uint32_t x350 = 283486693U;
uint32_t x356 = UINT32_MAX;
uint64_t x361 = 5521869280340438936LLU;
int64_t x363 = 375254LL;
volatile int16_t x370 = -1;
int64_t t90 = -631250LL;
uint8_t x375 = 4U;
int16_t x376 = INT16_MAX;
int16_t x386 = INT16_MIN;
volatile int32_t x391 = -2226071;
uint64_t x398 = UINT64_MAX;
uint32_t t97 = UINT32_MAX;
static int64_t x402 = 1LL;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x2 = INT8_MIN;
	int8_t x3 = 13;
	static volatile int8_t x4 = -1;
	volatile int64_t t0 = 3421107047320914880LL;

	t0 = (x1^(x2<=(x3%x4)));

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;

	t1 = (x5^(x6<=(x7%x8)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	static uint8_t x11 = UINT8_MAX;
	static volatile int64_t t2 = -1LL;

	t2 = (x9^(x10<=(x11%x12)));

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile int32_t t3 = 412142;

	t3 = (x13^(x14<=(x15%x16)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 6;
	int16_t x19 = INT16_MIN;
	static int16_t x20 = -3;
	volatile int32_t t4 = 325;

	t4 = (x17^(x18<=(x19%x20)));

	if (t4 != 6) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int16_t x22 = INT16_MIN;
	volatile int16_t x23 = 1;
	int32_t t5 = 386;

	t5 = (x21^(x22<=(x23%x24)));

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	volatile uint16_t x26 = UINT16_MAX;
	int32_t x27 = INT32_MIN;
	volatile uint32_t x28 = UINT32_MAX;
	int32_t t6 = -787825;

	t6 = (x25^(x26<=(x27%x28)));

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 48135205287515LLU;
	volatile int32_t x31 = -349673787;
	static uint64_t x32 = 26LLU;

	t7 = (x29^(x30<=(x31%x32)));

	if (t7 != 48135205287515LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 62U;
	uint64_t x34 = UINT64_MAX;
	volatile uint64_t x35 = UINT64_MAX;
	int8_t x36 = INT8_MIN;

	t8 = (x33^(x34<=(x35%x36)));

	if (t8 != 62U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -3329043817951797627LL;
	static int64_t x40 = INT64_MAX;

	t9 = (x37^(x38<=(x39%x40)));

	if (t9 != -3329043817951797628LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int16_t x42 = 16;
	int16_t x43 = -20;
	static int32_t x44 = -11029106;

	t10 = (x41^(x42<=(x43%x44)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 947;
	int16_t x47 = 1;
	uint16_t x48 = 3U;
	volatile int32_t t11 = 5346;

	t11 = (x45^(x46<=(x47%x48)));

	if (t11 != 947) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x50 = INT32_MIN;
	int32_t x51 = -1;
	volatile uint32_t x52 = 12U;
	uint32_t t12 = 45135831U;

	t12 = (x49^(x50<=(x51%x52)));

	if (t12 != 99U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	int32_t x54 = -1162;
	int8_t x55 = -1;
	volatile int32_t x56 = INT32_MAX;
	int32_t t13 = -13;

	t13 = (x53^(x54<=(x55%x56)));

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = UINT16_MAX;
	static uint32_t x58 = UINT32_MAX;
	int16_t x59 = INT16_MIN;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 1778227;

	t14 = (x57^(x58<=(x59%x60)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	uint64_t x62 = 5247881101460LLU;
	static volatile int16_t x63 = INT16_MIN;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 174606;

	t15 = (x61^(x62<=(x63%x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -34LL;
	static uint8_t x66 = 123U;
	uint16_t x67 = 25U;
	volatile int64_t t16 = 6LL;

	t16 = (x65^(x66<=(x67%x68)));

	if (t16 != -34LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 155270141U;
	uint32_t x70 = 1323U;
	static int16_t x72 = INT16_MIN;
	uint32_t t17 = 105322U;

	t17 = (x69^(x70<=(x71%x72)));

	if (t17 != 155270141U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	volatile int32_t t18 = INT32_MIN;

	t18 = (x73^(x74<=(x75%x76)));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x79 = -1;
	int32_t x80 = -13229965;
	volatile int32_t t19 = 0;

	t19 = (x77^(x78<=(x79%x80)));

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	uint8_t x82 = 25U;
	static volatile int32_t x83 = -1;
	static int64_t x84 = INT64_MIN;
	int32_t t20 = -77270895;

	t20 = (x81^(x82<=(x83%x84)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 97U;
	volatile int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MIN;

	t21 = (x85^(x86<=(x87%x88)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	int32_t t22 = 1014531;

	t22 = (x89^(x90<=(x91%x92)));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 76;
	int8_t x94 = INT8_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t23 = 431680658;

	t23 = (x93^(x94<=(x95%x96)));

	if (t23 != 77) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x99 = -1;
	static volatile int8_t x100 = 18;
	int32_t t24 = 3391;

	t24 = (x97^(x98<=(x99%x100)));

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int8_t x102 = INT8_MAX;
	static int8_t x103 = -1;
	uint8_t x104 = 4U;
	static volatile int32_t t25 = 11295621;

	t25 = (x101^(x102<=(x103%x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = -1;
	uint8_t x107 = 1U;
	static volatile int64_t x108 = INT64_MIN;
	volatile uint32_t t26 = 47942716U;

	t26 = (x105^(x106<=(x107%x108)));

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x110 = INT16_MIN;
	volatile int8_t x111 = -2;
	volatile int64_t x112 = INT64_MAX;
	int64_t t27 = -16838669LL;

	t27 = (x109^(x110<=(x111%x112)));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = -1;
	int16_t x114 = -227;
	int64_t x115 = -1LL;
	volatile int16_t x116 = 109;
	volatile int32_t t28 = -252980812;

	t28 = (x113^(x114<=(x115%x116)));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int32_t x119 = -12109252;
	static int64_t x120 = 16058LL;
	volatile int32_t t29 = -1;

	t29 = (x117^(x118<=(x119%x120)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	static uint64_t x122 = 1LLU;
	static int8_t x124 = INT8_MAX;

	t30 = (x121^(x122<=(x123%x124)));

	if (t30 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -770358536;
	volatile uint64_t x126 = 83659233LLU;
	int32_t x127 = -1;
	static int8_t x128 = -6;
	volatile int32_t t31 = 58189;

	t31 = (x125^(x126<=(x127%x128)));

	if (t31 != -770358535) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 179555729984LL;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MIN;
	volatile int64_t t32 = -10291LL;

	t32 = (x129^(x130<=(x131%x132)));

	if (t32 != 179555729985LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	static int32_t x134 = -2175926;
	int64_t x135 = INT64_MIN;
	volatile int32_t t33 = 0;

	t33 = (x133^(x134<=(x135%x136)));

	if (t33 != 126) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 41471U;
	uint32_t x140 = 1U;
	volatile uint32_t t34 = 3U;

	t34 = (x137^(x138<=(x139%x140)));

	if (t34 != 41470U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 856000705270633LL;
	static uint16_t x142 = 9U;
	int8_t x143 = INT8_MIN;
	volatile int64_t t35 = 3LL;

	t35 = (x141^(x142<=(x143%x144)));

	if (t35 != 856000705270633LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MIN;
	volatile int16_t x147 = 253;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -13776;

	t36 = (x145^(x146<=(x147%x148)));

	if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	uint64_t x150 = UINT64_MAX;
	uint8_t x151 = 28U;
	uint16_t x152 = 87U;
	volatile int32_t t37 = 350589;

	t37 = (x149^(x150<=(x151%x152)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = -60;
	int16_t x155 = 5353;
	volatile int32_t t38 = -18;

	t38 = (x153^(x154<=(x155%x156)));

	if (t38 != 254) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = 45U;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -390885;
	int32_t t39 = -689;

	t39 = (x157^(x158<=(x159%x160)));

	if (t39 != -3950) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 3600046;
	int32_t x162 = INT32_MAX;
	static int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 48;

	t40 = (x161^(x162<=(x163%x164)));

	if (t40 != 3600046) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MIN;
	volatile int32_t t41 = -2086319;

	t41 = (x165^(x166<=(x167%x168)));

	if (t41 != 24) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	uint16_t x170 = UINT16_MAX;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = UINT16_MAX;

	t42 = (x169^(x170<=(x171%x172)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	volatile uint16_t x174 = 7800U;
	static volatile int8_t x175 = 13;
	int16_t x176 = 85;
	static int32_t t43 = -545;

	t43 = (x173^(x174<=(x175%x176)));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 24343U;
	uint32_t x179 = 806986U;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = 1697;

	t44 = (x177^(x178<=(x179%x180)));

	if (t44 != 24343) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 2;
	uint64_t x182 = UINT64_MAX;
	volatile uint32_t x184 = 308U;
	int32_t t45 = -75018708;

	t45 = (x181^(x182<=(x183%x184)));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MAX;
	static int8_t x190 = -4;
	int16_t x191 = -1;

	t46 = (x189^(x190<=(x191%x192)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = 3;
	uint64_t x194 = UINT64_MAX;
	uint32_t x195 = UINT32_MAX;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t47 = -2458103;

	t47 = (x193^(x194<=(x195%x196)));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x197 = UINT32_MAX;
	uint8_t x198 = 1U;
	static int16_t x199 = -423;
	volatile uint16_t x200 = 196U;
	uint32_t t48 = UINT32_MAX;

	t48 = (x197^(x198<=(x199%x200)));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = INT32_MIN;
	uint64_t x203 = 0LLU;
	int64_t x204 = INT64_MAX;
	int32_t t49 = INT32_MIN;

	t49 = (x201^(x202<=(x203%x204)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -1LL;
	int64_t x206 = INT64_MIN;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = UINT64_MAX;
	static int64_t t50 = -188740LL;

	t50 = (x205^(x206<=(x207%x208)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x210 = 7716;
	int8_t x211 = -5;
	int8_t x212 = 1;
	volatile int32_t t51 = -1;

	t51 = (x209^(x210<=(x211%x212)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = 75;
	int32_t t52 = -1;

	t52 = (x213^(x214<=(x215%x216)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x217 = 122U;
	int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t53 = 557400085;

	t53 = (x217^(x218<=(x219%x220)));

	if (t53 != 122) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x221 = INT16_MAX;
	uint16_t x222 = 19U;
	uint64_t x223 = 17746466238LLU;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t54 = 112;

	t54 = (x221^(x222<=(x223%x224)));

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = 8855170U;
	uint8_t x226 = 82U;
	volatile int32_t x227 = -1;
	uint32_t x228 = 12U;
	volatile uint32_t t55 = 28U;

	t55 = (x225^(x226<=(x227%x228)));

	if (t55 != 8855170U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x229 = 319599LLU;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = 212LLU;
	volatile uint64_t t56 = 3840063LLU;

	t56 = (x229^(x230<=(x231%x232)));

	if (t56 != 319599LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	volatile int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MAX;
	volatile int8_t x236 = -5;
	int32_t t57 = -7070;

	t57 = (x233^(x234<=(x235%x236)));

	if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 8315U;
	volatile int64_t x238 = 5LL;
	volatile int32_t x240 = INT32_MAX;

	t58 = (x237^(x238<=(x239%x240)));

	if (t58 != 8314U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 39906589LLU;
	int8_t x242 = INT8_MAX;
	volatile uint32_t x244 = 1U;
	volatile uint64_t t59 = 7535LLU;

	t59 = (x241^(x242<=(x243%x244)));

	if (t59 != 39906589LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x245 = INT8_MAX;
	volatile uint32_t x247 = 38192U;
	static int64_t x248 = 583721414402LL;
	volatile int32_t t60 = -2;

	t60 = (x245^(x246<=(x247%x248)));

	if (t60 != 126) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	volatile int8_t x252 = INT8_MIN;
	static int32_t t61 = 57166;

	t61 = (x249^(x250<=(x251%x252)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x254 = 628724790LLU;
	int64_t x255 = 571648735208LL;
	uint8_t x256 = 14U;
	int32_t t62 = -528545600;

	t62 = (x253^(x254<=(x255%x256)));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MIN;
	volatile int32_t t63 = 225;

	t63 = (x257^(x258<=(x259%x260)));

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x261 = INT64_MAX;
	int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	int32_t x264 = -128;
	static int64_t t64 = 2727941527LL;

	t64 = (x261^(x262<=(x263%x264)));

	if (t64 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x265 = -1;
	static uint32_t x267 = 20116805U;
	static int64_t x268 = INT64_MAX;
	volatile int32_t t65 = 0;

	t65 = (x265^(x266<=(x267%x268)));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MAX;
	int8_t x270 = -30;
	int32_t x272 = 12647;
	volatile int32_t t66 = INT32_MAX;

	t66 = (x269^(x270<=(x271%x272)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = 3875;
	static uint16_t x274 = 804U;
	int32_t x275 = -1;
	volatile int16_t x276 = -116;

	t67 = (x273^(x274<=(x275%x276)));

	if (t67 != 3875) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x277 = 2U;
	volatile uint16_t x278 = 54U;
	int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MAX;
	int32_t t68 = 0;

	t68 = (x277^(x278<=(x279%x280)));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 1U;
	volatile uint8_t x282 = UINT8_MAX;
	int16_t x283 = INT16_MAX;
	static volatile uint32_t x284 = UINT32_MAX;
	volatile int32_t t69 = 1;

	t69 = (x281^(x282<=(x283%x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x285 = INT16_MIN;
	static int8_t x286 = -1;
	static int16_t x287 = -7728;
	uint64_t x288 = 14257252279934LLU;
	int32_t t70 = 60;

	t70 = (x285^(x286<=(x287%x288)));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x289 = 916U;
	int64_t x290 = INT64_MIN;
	static int32_t t71 = -23933;

	t71 = (x289^(x290<=(x291%x292)));

	if (t71 != 917) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x294 = 59174;
	int32_t x295 = 259887817;
	volatile int8_t x296 = INT8_MIN;
	int32_t t72 = -7;

	t72 = (x293^(x294<=(x295%x296)));

	if (t72 != 904419960) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x297 = 0LLU;
	int32_t x298 = INT32_MIN;
	int16_t x299 = -8482;
	uint64_t t73 = 554042073146LLU;

	t73 = (x297^(x298<=(x299%x300)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x301 = 1339U;
	static int8_t x302 = INT8_MIN;
	static int32_t x304 = -130857208;

	t74 = (x301^(x302<=(x303%x304)));

	if (t74 != 1338) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x305 = 93U;
	static volatile int64_t x307 = 14LL;
	int64_t x308 = -1LL;
	volatile int32_t t75 = -2034;

	t75 = (x305^(x306<=(x307%x308)));

	if (t75 != 93) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x309 = INT8_MIN;
	static uint32_t x310 = 17609630U;
	static volatile int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MAX;
	int32_t t76 = -54540577;

	t76 = (x309^(x310<=(x311%x312)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x314 = 86U;
	int16_t x315 = 0;
	int8_t x316 = -1;
	static volatile int32_t t77 = -197804;

	t77 = (x313^(x314<=(x315%x316)));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x317 = INT32_MIN;
	static int16_t x320 = INT16_MAX;

	t78 = (x317^(x318<=(x319%x320)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x322 = 866U;
	uint16_t x323 = 107U;
	int32_t t79 = -543193677;

	t79 = (x321^(x322<=(x323%x324)));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x326 = 36;
	int32_t x327 = -56181;

	t80 = (x325^(x326<=(x327%x328)));

	if (t80 != 30979995670572857LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = 19;
	int64_t x330 = INT64_MAX;
	int64_t x332 = 15477LL;

	t81 = (x329^(x330<=(x331%x332)));

	if (t81 != 19) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x334 = INT64_MIN;
	volatile int64_t x336 = INT64_MIN;

	t82 = (x333^(x334<=(x335%x336)));

	if (t82 != 4959645LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x339 = -10;
	int8_t x340 = INT8_MIN;
	int32_t t83 = -28744;

	t83 = (x337^(x338<=(x339%x340)));

	if (t83 != 44) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x341 = 22U;
	int64_t x342 = -1851803LL;
	static uint64_t x344 = 76202LLU;
	static uint32_t t84 = 14U;

	t84 = (x341^(x342<=(x343%x344)));

	if (t84 != 22U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = INT16_MIN;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MIN;
	int32_t t85 = 30068;

	t85 = (x345^(x346<=(x347%x348)));

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x349 = -1;
	volatile uint8_t x351 = 30U;
	int16_t x352 = 9;
	int32_t t86 = -994690138;

	t86 = (x349^(x350<=(x351%x352)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = 120093;
	static volatile uint64_t x354 = 3492196228990813LLU;
	int32_t x355 = INT32_MAX;
	int32_t t87 = -10;

	t87 = (x353^(x354<=(x355%x356)));

	if (t87 != 120093) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x362 = 745LL;
	static int64_t x364 = -1LL;
	static uint64_t t88 = 176222500384093LLU;

	t88 = (x361^(x362<=(x363%x364)));

	if (t88 != 5521869280340438936LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = -1;
	uint8_t x366 = 88U;
	static int16_t x367 = INT16_MIN;
	uint16_t x368 = 1967U;
	volatile int32_t t89 = 503;

	t89 = (x365^(x366<=(x367%x368)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = 131LL;
	static volatile int16_t x371 = INT16_MIN;
	uint16_t x372 = 25888U;

	t90 = (x369^(x370<=(x371%x372)));

	if (t90 != 131LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = -1;
	uint8_t x374 = 111U;
	int32_t t91 = 90;

	t91 = (x373^(x374<=(x375%x376)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MIN;
	uint64_t x379 = 820007433686LLU;
	int16_t x380 = 3;
	static volatile int64_t t92 = INT64_MIN;

	t92 = (x377^(x378<=(x379%x380)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x381 = UINT64_MAX;
	int64_t x382 = INT64_MIN;
	volatile int32_t x383 = -1;
	int64_t x384 = 604232343166119297LL;
	uint64_t t93 = 3895523LLU;

	t93 = (x381^(x382<=(x383%x384)));

	if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x385 = 1U;
	volatile int16_t x387 = -872;
	static uint8_t x388 = UINT8_MAX;
	int32_t t94 = -337;

	t94 = (x385^(x386<=(x387%x388)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = UINT8_MAX;
	volatile int16_t x390 = INT16_MIN;
	static volatile int8_t x392 = INT8_MAX;
	static int32_t t95 = -1;

	t95 = (x389^(x390<=(x391%x392)));

	if (t95 != 254) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = 7U;
	uint64_t x394 = 13441253LLU;
	int64_t x395 = INT64_MIN;
	static int32_t x396 = -1;
	static int32_t t96 = 348917511;

	t96 = (x393^(x394<=(x395%x396)));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x397 = UINT32_MAX;
	int32_t x399 = -1;
	volatile int16_t x400 = -1;

	t97 = (x397^(x398<=(x399%x400)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = 4;
	int16_t x403 = 1;
	int32_t x404 = INT32_MIN;
	volatile int32_t t98 = -1;

	t98 = (x401^(x402<=(x403%x404)));

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = -55224624810LL;
	static uint8_t x406 = 3U;
	int8_t x407 = INT8_MAX;
	uint32_t x408 = 129556U;
	static volatile int64_t t99 = 174427LL;

	t99 = (x405^(x406<=(x407%x408)));

	if (t99 != -55224624809LL) { NG(); } else { ; }
	
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

