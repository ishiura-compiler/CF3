#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = 1159U;
uint8_t x19 = UINT8_MAX;
static int32_t x29 = -5051845;
int32_t x32 = INT32_MIN;
int64_t x38 = -1LL;
int64_t x42 = INT64_MIN;
volatile uint64_t t9 = 22LLU;
int16_t x52 = INT16_MAX;
int64_t t11 = 7LL;
int16_t x55 = -1;
int8_t x58 = INT8_MIN;
int16_t x60 = INT16_MIN;
int32_t x75 = INT32_MAX;
int8_t x76 = 48;
volatile uint32_t t17 = 1304U;
volatile uint64_t x80 = 223LLU;
uint32_t x84 = UINT32_MAX;
uint32_t t21 = 29134448U;
int32_t x95 = 238;
static volatile int8_t x96 = -1;
int64_t t22 = 41619824796972306LL;
int32_t x99 = INT32_MAX;
uint8_t x103 = UINT8_MAX;
uint32_t x105 = UINT32_MAX;
int32_t x106 = INT32_MIN;
int64_t t26 = 228095747LL;
static int8_t x134 = -1;
int8_t x136 = 62;
int16_t x137 = INT16_MAX;
int64_t x142 = 1010LL;
static int8_t x143 = INT8_MIN;
volatile int32_t t34 = -14249675;
uint16_t x159 = 1003U;
volatile int16_t x160 = INT16_MIN;
uint64_t x162 = 8057070606215LLU;
int64_t x167 = INT64_MIN;
volatile int8_t x169 = 1;
uint64_t t39 = 12200435LLU;
volatile int16_t x173 = INT16_MIN;
int8_t x175 = INT8_MIN;
uint16_t x182 = 0U;
uint16_t x185 = 951U;
static int8_t x188 = -1;
int64_t t43 = 4129886LL;
int16_t x206 = INT16_MAX;
int8_t x215 = -1;
volatile int64_t x220 = 14467762728178LL;
static volatile int64_t t50 = 338641691907822LL;
int8_t x229 = INT8_MIN;
volatile int64_t x235 = INT64_MIN;
int32_t x240 = INT32_MIN;
int64_t x244 = -1LL;
int32_t x246 = INT32_MAX;
int16_t x251 = INT16_MIN;
uint64_t t57 = 15912LLU;
uint16_t x254 = UINT16_MAX;
int32_t x256 = 93;
int8_t x257 = -30;
static uint32_t x260 = UINT32_MAX;
int8_t x261 = INT8_MAX;
volatile uint32_t t60 = 195U;
int32_t x272 = 1;
int64_t t62 = -448947616773LL;
static int16_t x281 = -2363;
int64_t x283 = -1LL;
int8_t x286 = -1;
uint64_t x291 = 3708718359280715321LLU;
static volatile int8_t x292 = -1;
uint64_t t67 = 18394716213197909LLU;
volatile int64_t t68 = -221209791LL;
int32_t x303 = INT32_MIN;
static uint32_t x306 = UINT32_MAX;
volatile int16_t x307 = 1;
int64_t x311 = -1LL;
uint8_t x316 = UINT8_MAX;
static uint64_t x318 = 77534LLU;
uint32_t x321 = UINT32_MAX;
static volatile uint32_t t74 = 45068089U;
uint64_t x332 = UINT64_MAX;
volatile int32_t t77 = -56;
volatile uint8_t x341 = 2U;
uint64_t t81 = 16815268LLU;
volatile uint8_t x357 = 15U;
uint16_t x363 = 11945U;
volatile int64_t x364 = INT64_MIN;
int64_t t83 = -1LL;
volatile uint8_t x369 = UINT8_MAX;
uint64_t x382 = 29421230230775282LLU;
uint8_t x386 = UINT8_MAX;
static volatile uint64_t x403 = 821016770570188LLU;
static int64_t x407 = 1LL;
int32_t x412 = INT32_MIN;
volatile uint16_t x420 = UINT16_MAX;
uint32_t x425 = 1291449U;
volatile uint16_t x428 = 8U;
static uint32_t t95 = 167610482U;
volatile uint32_t x430 = UINT32_MAX;
int64_t x431 = -2LL;
uint16_t x433 = 22073U;
volatile int64_t x438 = 93LL;
volatile int16_t x440 = INT16_MIN;
int32_t x441 = INT32_MIN;
static int32_t t99 = -206;


void f0(void) {
	int8_t x1 = -1;
	uint8_t x2 = 14U;
	volatile uint64_t x3 = 11496292510727LLU;
	static uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 109815358853411LLU;

	t0 = (x1-(x2|(x3%x4)));

	if (t0 != 18446732577417040880LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1480;
	int32_t x6 = -1;
	int32_t x7 = -1;
	int32_t x8 = -143917170;
	volatile int32_t t1 = 15758;

	t1 = (x5-(x6|(x7%x8)));

	if (t1 != -1479) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x11 = 233102012820917LL;
	volatile int32_t x12 = 484;
	int64_t t2 = 10808942LL;

	t2 = (x9-(x10|(x11%x12)));

	if (t2 != -2147485079LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = 14614083LL;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = 412504029514LLU;

	t3 = (x17-(x18|(x19%x20)));

	if (t3 != 18446744073694904577LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 58;
	int8_t x22 = -1;
	volatile uint64_t x23 = 3298279205627470040LLU;
	int8_t x24 = INT8_MIN;
	static volatile uint64_t t4 = 6774676332LLU;

	t4 = (x21-(x22|(x23%x24)));

	if (t4 != 59LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 27472256997LL;
	volatile int64_t x26 = -12496624446LL;
	uint32_t x27 = 1590U;
	int32_t x28 = -1;
	volatile int64_t t5 = -784932158854LL;

	t5 = (x25-(x26|(x27%x28)));

	if (t5 != 39968880879LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = INT32_MIN;
	static int16_t x31 = INT16_MIN;
	int32_t t6 = 162401;

	t6 = (x29-(x30|(x31%x32)));

	if (t6 != -5019077) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -9454689;
	uint32_t x34 = 5U;
	volatile int16_t x35 = -1;
	uint64_t x36 = 673437LLU;
	volatile uint64_t t7 = 22LLU;

	t7 = (x33-(x34|(x35%x36)));

	if (t7 != 18446744073699760544LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -432;
	volatile int16_t x39 = INT16_MIN;
	int32_t x40 = -1;
	int64_t t8 = 247748795029485976LL;

	t8 = (x37-(x38|(x39%x40)));

	if (t8 != -431LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = -1;
	static uint64_t x43 = UINT64_MAX;
	volatile int32_t x44 = -1;

	t9 = (x41-(x42|(x43%x44)));

	if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint64_t x46 = UINT64_MAX;
	int16_t x47 = INT16_MAX;
	int8_t x48 = -1;
	uint64_t t10 = 41689LLU;

	t10 = (x45-(x46|(x47%x48)));

	if (t10 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1LL;
	uint32_t x50 = 189745502U;
	uint8_t x51 = 89U;

	t11 = (x49-(x50|(x51%x52)));

	if (t11 != -189745504LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	static int16_t x54 = -14857;
	int64_t x56 = -957447718883LL;
	int64_t t12 = 0LL;

	t12 = (x53-(x54|(x55%x56)));

	if (t12 != -127LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x57 = UINT64_MAX;
	uint64_t x59 = 103167LLU;
	static volatile uint64_t t13 = 45108561982466240LLU;

	t13 = (x57-(x58|(x59%x60)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	static volatile int32_t x62 = -1;
	static int8_t x63 = -1;
	int32_t x64 = -1;
	volatile int32_t t14 = -130350776;

	t14 = (x61-(x62|(x63%x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MIN;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = 791858;
	volatile uint64_t t15 = 2896LLU;

	t15 = (x65-(x66|(x67%x68)));

	if (t15 != 9223372034706515095LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 3;
	int8_t x70 = INT8_MIN;
	static uint64_t x71 = 14725709LLU;
	int8_t x72 = INT8_MIN;
	uint64_t t16 = 1096LLU;

	t16 = (x69-(x70|(x71%x72)));

	if (t16 != 54LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = UINT8_MAX;
	static uint32_t x74 = 112057U;

	t17 = (x73-(x74|(x75%x76)));

	if (t17 != 4294855488U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x77 = UINT64_MAX;
	volatile int32_t x78 = -6561319;
	static int64_t x79 = -26312093242572671LL;
	volatile uint64_t t18 = 101386658725LLU;

	t18 = (x77-(x78|(x79%x80)));

	if (t18 != 6561316LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = 1;
	volatile uint8_t x82 = 24U;
	volatile int32_t x83 = -1;
	volatile uint32_t t19 = 9649043U;

	t19 = (x81-(x82|(x83%x84)));

	if (t19 != 4294967273U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	static int16_t x86 = INT16_MIN;
	int8_t x87 = -31;
	static int64_t x88 = INT64_MIN;
	volatile int64_t t20 = 15435973172440LL;

	t20 = (x85-(x86|(x87%x88)));

	if (t20 != 286LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	uint32_t x90 = 29U;
	int8_t x91 = INT8_MIN;
	static int32_t x92 = INT32_MAX;

	t21 = (x89-(x90|(x91%x92)));

	if (t21 != 226U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MAX;
	int16_t x94 = 3385;

	t22 = (x93-(x94|(x95%x96)));

	if (t22 != 9223372036854772422LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = UINT8_MAX;
	int16_t x98 = INT16_MAX;
	uint32_t x100 = 48993U;
	static uint32_t t23 = 606U;

	t23 = (x97-(x98|(x99%x100)));

	if (t23 != 4294934784U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	static uint64_t x102 = 3790860LLU;
	int8_t x104 = INT8_MIN;
	volatile uint64_t t24 = 351858759LLU;

	t24 = (x101-(x102|(x103%x104)));

	if (t24 != 18446744073705727873LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x107 = INT32_MIN;
	int64_t x108 = -2181656317501386700LL;
	volatile int64_t t25 = 163797LL;

	t25 = (x105-(x106|(x107%x108)));

	if (t25 != 6442450943LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 1892;
	volatile int64_t x110 = -71LL;
	static volatile int64_t x111 = -47714091123376412LL;
	int32_t x112 = -27;

	t26 = (x109-(x110|(x111%x112)));

	if (t26 != 1899LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = INT64_MIN;
	volatile int16_t x118 = INT16_MIN;
	int64_t x119 = -1LL;
	int64_t x120 = INT64_MAX;
	static int64_t t27 = 1LL;

	t27 = (x117-(x118|(x119%x120)));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x121 = 3U;
	int64_t x122 = -1LL;
	volatile uint64_t x123 = 107882LLU;
	int8_t x124 = INT8_MIN;
	static uint64_t t28 = 196807729LLU;

	t28 = (x121-(x122|(x123%x124)));

	if (t28 != 4LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	uint8_t x126 = 2U;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = 476353LLU;
	volatile uint64_t t29 = 636655781944LLU;

	t29 = (x125-(x126|(x127%x128)));

	if (t29 != 9223372036854745594LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -10;
	int64_t x130 = INT64_MIN;
	int16_t x131 = -197;
	int32_t x132 = -3658195;
	int64_t t30 = 0LL;

	t30 = (x129-(x130|(x131%x132)));

	if (t30 != 187LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x133 = INT32_MIN;
	static volatile int32_t x135 = INT32_MIN;
	int32_t t31 = 1;

	t31 = (x133-(x134|(x135%x136)));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x138 = 1005397;
	int8_t x139 = INT8_MIN;
	static int64_t x140 = INT64_MAX;
	int64_t t32 = -23004LL;

	t32 = (x137-(x138|(x139%x140)));

	if (t32 != 32810LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = 660;
	int8_t x144 = -1;
	static int64_t t33 = -446LL;

	t33 = (x141-(x142|(x143%x144)));

	if (t33 != -350LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = -1;
	int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	static int32_t x148 = INT32_MAX;

	t34 = (x145-(x146|(x147%x148)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = INT16_MAX;
	volatile uint8_t x154 = 86U;
	static int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	int64_t t35 = -15798LL;

	t35 = (x153-(x154|(x155%x156)));

	if (t35 != 65449LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = INT8_MAX;
	static int8_t x158 = INT8_MAX;
	int32_t t36 = -1164605;

	t36 = (x157-(x158|(x159%x160)));

	if (t36 != -896) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = -1;
	uint8_t x163 = 20U;
	int16_t x164 = 1;
	uint64_t t37 = 3820952617757LLU;

	t37 = (x161-(x162|(x163%x164)));

	if (t37 != 18446736016638945400LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = 1;
	int32_t x166 = INT32_MAX;
	int8_t x168 = INT8_MAX;
	int64_t t38 = -6849215382LL;

	t38 = (x165-(x166|(x167%x168)));

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MIN;

	t39 = (x169-(x170|(x171%x172)));

	if (t39 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x174 = INT16_MAX;
	int16_t x176 = -1;
	static volatile int32_t t40 = -455414;

	t40 = (x173-(x174|(x175%x176)));

	if (t40 != -65535) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MAX;
	uint16_t x178 = 25986U;
	static int8_t x179 = -10;
	volatile uint32_t x180 = UINT32_MAX;
	volatile int64_t t41 = -14LL;

	t41 = (x177-(x178|(x179%x180)));

	if (t41 != 9223372032559808521LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 289U;
	volatile int16_t x183 = INT16_MAX;
	int8_t x184 = INT8_MIN;
	volatile uint32_t t42 = 3473U;

	t42 = (x181-(x182|(x183%x184)));

	if (t42 != 162U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = -1;
	int64_t x187 = INT64_MIN;

	t43 = (x185-(x186|(x187%x188)));

	if (t43 != 952LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -794999308848429LL;
	int32_t x194 = INT32_MIN;
	static volatile int32_t x195 = 5177381;
	int16_t x196 = 12279;
	static volatile int64_t t44 = 136119006325LL;

	t44 = (x193-(x194|(x195%x196)));

	if (t44 != -794997161372703LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = -1;
	int16_t x198 = INT16_MIN;
	static volatile int32_t x199 = INT32_MIN;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t45 = -103623;

	t45 = (x197-(x198|(x199%x200)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = -1;
	static int64_t x202 = 28LL;
	volatile uint16_t x203 = 96U;
	int8_t x204 = INT8_MAX;
	int64_t t46 = -867010516461902LL;

	t46 = (x201-(x202|(x203%x204)));

	if (t46 != -125LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = 17;
	int64_t x207 = INT64_MIN;
	int32_t x208 = -373745189;
	int64_t t47 = 864692114526120LL;

	t47 = (x205-(x206|(x207%x208)));

	if (t47 != 170164242LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = -1;
	uint32_t x210 = UINT32_MAX;
	int64_t x211 = -1LL;
	int8_t x212 = INT8_MIN;
	int64_t t48 = -323LL;

	t48 = (x209-(x210|(x211%x212)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x213 = 0U;
	int32_t x214 = INT32_MAX;
	static int8_t x216 = 13;
	uint32_t t49 = 1U;

	t49 = (x213-(x214|(x215%x216)));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MIN;
	uint8_t x218 = 111U;
	int8_t x219 = INT8_MIN;

	t50 = (x217-(x218|(x219%x220)));

	if (t50 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x221 = 18U;
	volatile int64_t x222 = INT64_MAX;
	uint16_t x223 = UINT16_MAX;
	int8_t x224 = INT8_MIN;
	int64_t t51 = 108354174309593LL;

	t51 = (x221-(x222|(x223%x224)));

	if (t51 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x230 = INT64_MIN;
	int16_t x231 = 1820;
	int32_t x232 = INT32_MIN;
	volatile int64_t t52 = 909761689656829LL;

	t52 = (x229-(x230|(x231%x232)));

	if (t52 != 9223372036854773860LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x233 = INT16_MAX;
	uint64_t x234 = UINT64_MAX;
	static int32_t x236 = INT32_MIN;
	volatile uint64_t t53 = 7LLU;

	t53 = (x233-(x234|(x235%x236)));

	if (t53 != 32768LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x237 = 1810U;
	volatile int64_t x238 = INT64_MAX;
	volatile uint64_t x239 = 4583808083806628936LLU;
	volatile uint64_t t54 = 57039061002LLU;

	t54 = (x237-(x238|(x239%x240)));

	if (t54 != 9223372036854777619LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x241 = 21;
	uint16_t x242 = 27U;
	int8_t x243 = -1;
	volatile int64_t t55 = -1410366121390LL;

	t55 = (x241-(x242|(x243%x244)));

	if (t55 != -6LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = 0;
	uint8_t x247 = 4U;
	uint32_t x248 = UINT32_MAX;
	static uint32_t t56 = 2710944U;

	t56 = (x245-(x246|(x247%x248)));

	if (t56 != 2147483649U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x249 = UINT8_MAX;
	static uint64_t x250 = 5306125138LLU;
	static int32_t x252 = 1860;

	t57 = (x249-(x250|(x251%x252)));

	if (t57 != 1321LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x253 = -1;
	int8_t x255 = INT8_MAX;
	int32_t t58 = -760;

	t58 = (x253-(x254|(x255%x256)));

	if (t58 != -65536) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x258 = INT32_MIN;
	static int8_t x259 = -11;
	uint32_t t59 = 6U;

	t59 = (x257-(x258|(x259%x260)));

	if (t59 != 4294967277U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x262 = 0U;
	volatile int32_t x263 = INT32_MIN;
	uint32_t x264 = UINT32_MAX;

	t60 = (x261-(x262|(x263%x264)));

	if (t60 != 2147483775U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x265 = INT16_MIN;
	static int16_t x266 = -296;
	volatile uint16_t x267 = 1293U;
	uint64_t x268 = 6108925749LLU;
	uint64_t t61 = 510837112991227962LLU;

	t61 = (x265-(x266|(x267%x268)));

	if (t61 != 18446744073709518883LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = -30936LL;
	static int8_t x270 = INT8_MAX;
	volatile uint32_t x271 = UINT32_MAX;

	t62 = (x269-(x270|(x271%x272)));

	if (t62 != -31063LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = INT8_MIN;
	uint32_t x274 = 365413U;
	static volatile int8_t x275 = INT8_MIN;
	int32_t x276 = -66169969;
	volatile uint32_t t63 = 184418489U;

	t63 = (x273-(x274|(x275%x276)));

	if (t63 != 4294967195U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	static int32_t x279 = 7271064;
	uint64_t x280 = UINT64_MAX;
	static volatile uint64_t t64 = 1063814526576274507LLU;

	t64 = (x277-(x278|(x279%x280)));

	if (t64 != 9223372036847471976LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x282 = -1;
	uint32_t x284 = UINT32_MAX;
	int64_t t65 = 44270291083LL;

	t65 = (x281-(x282|(x283%x284)));

	if (t65 != -2362LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x285 = 29U;
	uint16_t x287 = UINT16_MAX;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t66 = 1;

	t66 = (x285-(x286|(x287%x288)));

	if (t66 != 30) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = -220;
	volatile int32_t x290 = -4818;

	t67 = (x289-(x290|(x291%x292)));

	if (t67 != 4069LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x293 = 1U;
	volatile int16_t x294 = 211;
	int64_t x295 = INT64_MIN;
	static volatile int8_t x296 = INT8_MIN;

	t68 = (x293-(x294|(x295%x296)));

	if (t68 != -210LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = INT32_MIN;
	volatile int16_t x302 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	int32_t t69 = -38680;

	t69 = (x301-(x302|(x303%x304)));

	if (t69 != -2147450880) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = 197929078046LLU;
	int8_t x308 = -1;
	uint64_t t70 = 5295210LLU;

	t70 = (x305-(x306|(x307%x308)));

	if (t70 != 193634110751LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x310 = -63230268688LL;
	static int32_t x312 = INT32_MIN;
	volatile uint64_t t71 = 21304971LLU;

	t71 = (x309-(x310|(x311%x312)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x313 = UINT8_MAX;
	static int16_t x314 = INT16_MAX;
	int8_t x315 = -1;
	volatile int32_t t72 = 0;

	t72 = (x313-(x314|(x315%x316)));

	if (t72 != 256) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x317 = 5U;
	int16_t x319 = INT16_MAX;
	uint64_t x320 = 2115765278710343883LLU;
	uint64_t t73 = 54LLU;

	t73 = (x317-(x318|(x319%x320)));

	if (t73 != 18446744073709453318LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x322 = -1;
	volatile int32_t x323 = 240343187;
	int16_t x324 = 340;

	t74 = (x321-(x322|(x323%x324)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = 31847LL;
	uint16_t x326 = UINT16_MAX;
	volatile int64_t x327 = INT64_MIN;
	static uint64_t x328 = 686LLU;
	volatile uint64_t t75 = 1134745074177LLU;

	t75 = (x325-(x326|(x327%x328)));

	if (t75 != 18446744073709517928LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MIN;
	volatile uint16_t x331 = 1U;
	static uint64_t t76 = 482LLU;

	t76 = (x329-(x330|(x331%x332)));

	if (t76 != 2147450879LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x333 = -1;
	uint8_t x334 = UINT8_MAX;
	volatile int16_t x335 = 11;
	int16_t x336 = -941;

	t77 = (x333-(x334|(x335%x336)));

	if (t77 != -256) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x337 = -1LL;
	static int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = 157452U;
	static int64_t t78 = 1LL;

	t78 = (x337-(x338|(x339%x340)));

	if (t78 != -4294967296LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x342 = 3345U;
	int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MAX;
	volatile int64_t t79 = -354791599349LL;

	t79 = (x341-(x342|(x343%x344)));

	if (t79 != 29425LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x345 = -1LL;
	volatile int32_t x346 = -14;
	uint16_t x347 = 1U;
	static int32_t x348 = 432518;
	volatile int64_t t80 = 111638617005373253LL;

	t80 = (x345-(x346|(x347%x348)));

	if (t80 != 12LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x353 = UINT32_MAX;
	static uint64_t x354 = 783329942404313325LLU;
	static uint16_t x355 = 692U;
	int8_t x356 = -1;

	t81 = (x353-(x354|(x355%x356)));

	if (t81 != 17663414135600205586LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x358 = 0U;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = UINT8_MAX;
	int32_t t82 = -24;

	t82 = (x357-(x358|(x359%x360)));

	if (t82 != 143) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x361 = -1;
	int8_t x362 = INT8_MAX;

	t83 = (x361-(x362|(x363%x364)));

	if (t83 != -12032LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x370 = INT8_MAX;
	int16_t x371 = -1;
	static int64_t x372 = INT64_MIN;
	volatile int64_t t84 = 40373LL;

	t84 = (x369-(x370|(x371%x372)));

	if (t84 != 256LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x381 = UINT16_MAX;
	uint8_t x383 = 10U;
	static volatile uint16_t x384 = 4044U;
	uint64_t t85 = 45093546224540887LLU;

	t85 = (x381-(x382|(x383%x384)));

	if (t85 != 18417322843478841861LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = 3549328;
	int8_t x387 = INT8_MIN;
	static int32_t x388 = -3493106;
	static int32_t t86 = 0;

	t86 = (x385-(x386|(x387%x388)));

	if (t86 != 3549329) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x389 = 0U;
	int8_t x390 = INT8_MIN;
	static uint64_t x391 = 10572887779584LLU;
	static volatile int16_t x392 = INT16_MIN;
	static uint64_t t87 = 2681828649LLU;

	t87 = (x389-(x390|(x391%x392)));

	if (t87 != 128LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x393 = -1;
	volatile uint8_t x394 = 9U;
	static volatile int64_t x395 = INT64_MIN;
	int64_t x396 = INT64_MIN;
	volatile int64_t t88 = -71020355635196654LL;

	t88 = (x393-(x394|(x395%x396)));

	if (t88 != -10LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x397 = -1LL;
	int8_t x398 = -1;
	static int16_t x399 = -7;
	uint32_t x400 = 14U;
	int64_t t89 = 2393154LL;

	t89 = (x397-(x398|(x399%x400)));

	if (t89 != -4294967296LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x401 = 15LLU;
	volatile int8_t x402 = INT8_MIN;
	static uint64_t x404 = UINT64_MAX;
	static volatile uint64_t t90 = 58367837830LLU;

	t90 = (x401-(x402|(x403%x404)));

	if (t90 != 67LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x405 = 25;
	volatile uint8_t x406 = 103U;
	uint32_t x408 = UINT32_MAX;
	int64_t t91 = 17941904706911536LL;

	t91 = (x405-(x406|(x407%x408)));

	if (t91 != -78LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MIN;
	static uint8_t x410 = 5U;
	uint8_t x411 = UINT8_MAX;
	static volatile int32_t t92 = -162013;

	t92 = (x409-(x410|(x411%x412)));

	if (t92 != -383) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = 724655;
	volatile int32_t x418 = -1;
	int64_t x419 = -1LL;
	volatile int64_t t93 = 4278914343976LL;

	t93 = (x417-(x418|(x419%x420)));

	if (t93 != 724656LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x421 = 10;
	static int16_t x422 = INT16_MIN;
	uint64_t x423 = 871LLU;
	static uint16_t x424 = 2U;
	uint64_t t94 = 2043273555322969760LLU;

	t94 = (x421-(x422|(x423%x424)));

	if (t94 != 32777LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x426 = -3;
	int16_t x427 = INT16_MIN;

	t95 = (x425-(x426|(x427%x428)));

	if (t95 != 1291452U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x429 = INT8_MIN;
	int32_t x432 = -2061796;
	volatile int64_t t96 = -662LL;

	t96 = (x429-(x430|(x431%x432)));

	if (t96 != -127LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x434 = INT64_MIN;
	volatile int32_t x435 = INT32_MIN;
	int8_t x436 = INT8_MAX;
	static int64_t t97 = -6940LL;

	t97 = (x433-(x434|(x435%x436)));

	if (t97 != 22081LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = INT16_MIN;
	static uint16_t x439 = 7636U;
	int64_t t98 = -58253LL;

	t98 = (x437-(x438|(x439%x440)));

	if (t98 != -40413LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x442 = INT32_MAX;
	int32_t x443 = -2206;
	static int8_t x444 = INT8_MIN;

	t99 = (x441-(x442|(x443%x444)));

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

