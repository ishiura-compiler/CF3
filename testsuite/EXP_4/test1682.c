#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = UINT64_MAX;
int32_t t0 = 231808289;
uint32_t t1 = 14173U;
static uint64_t x12 = UINT64_MAX;
static int16_t x17 = -34;
int64_t x26 = -1LL;
uint16_t x30 = 7935U;
static volatile int8_t x36 = INT8_MIN;
static int32_t t8 = 63902;
volatile uint64_t x37 = UINT64_MAX;
volatile uint64_t t9 = 58949530120743LLU;
static uint64_t x47 = UINT64_MAX;
int64_t x48 = -1LL;
int32_t t11 = 15183530;
int32_t x52 = INT32_MAX;
volatile int32_t t12 = 3656;
int32_t x53 = 1008016461;
int8_t x60 = -1;
uint16_t x61 = UINT16_MAX;
int32_t x69 = -1;
int8_t x79 = -1;
volatile uint32_t t19 = 132244844U;
int64_t x93 = INT64_MIN;
uint16_t x100 = UINT16_MAX;
volatile uint64_t t24 = 90111LLU;
int16_t x103 = -56;
volatile int64_t t25 = -669407662974658LL;
uint64_t x105 = 4640685603233LLU;
uint64_t x111 = UINT64_MAX;
volatile int64_t x114 = -1LL;
uint32_t x116 = UINT32_MAX;
int64_t t28 = -875267608LL;
uint32_t x118 = UINT32_MAX;
static uint8_t x123 = 99U;
int64_t x124 = INT64_MIN;
int64_t x128 = INT64_MIN;
uint64_t t31 = 12711258072796959LLU;
int16_t x135 = -1;
int64_t x139 = 21821LL;
static volatile uint16_t x140 = 26U;
volatile int32_t t36 = 891;
uint16_t x151 = 10U;
int16_t x156 = INT16_MIN;
int32_t x158 = 3503;
uint8_t x165 = 30U;
uint8_t x168 = 10U;
uint16_t x170 = 10U;
static volatile uint64_t t42 = 4397192698LLU;
uint8_t x173 = 38U;
uint32_t t44 = 118876U;
int32_t x181 = -1;
uint32_t x187 = 533U;
volatile int64_t x191 = INT64_MIN;
static int32_t t47 = -11;
int16_t x194 = INT16_MIN;
static volatile uint8_t x200 = 54U;
volatile uint32_t t51 = 356U;
int64_t x213 = INT64_MIN;
int8_t x214 = INT8_MIN;
volatile int64_t t53 = 7138414366609LL;
uint64_t x234 = 2538LLU;
uint64_t t58 = 573LLU;
volatile int32_t t61 = 254841585;
static volatile int32_t t63 = -64543;
static volatile int64_t x257 = 0LL;
volatile uint64_t x260 = 46874LLU;
static uint32_t x262 = UINT32_MAX;
static volatile int64_t t65 = 60LL;
uint64_t x265 = UINT64_MAX;
int32_t x274 = -1994244;
int32_t t69 = 168438;
volatile int64_t x283 = 540579036123731LL;
uint16_t x287 = 21905U;
static int64_t x290 = INT64_MIN;
int8_t x298 = INT8_MIN;
int16_t x299 = 7;
int8_t x304 = -1;
static int64_t x307 = INT64_MAX;
int8_t x308 = -1;
static int64_t x324 = INT64_MIN;
static uint8_t x328 = 6U;
uint64_t x336 = 2181LLU;
volatile int32_t t84 = 171;
int64_t x350 = -1LL;
static int32_t x353 = -1;
static volatile uint32_t t87 = 857U;
int8_t x359 = 0;
uint64_t x362 = UINT64_MAX;
int32_t x365 = 654851715;
int8_t x367 = INT8_MIN;
uint8_t x377 = 1U;
int8_t x380 = INT8_MIN;
int32_t t93 = -20;
int32_t x384 = -1;
uint32_t t94 = 305894U;
int64_t x385 = -1LL;
static uint16_t x391 = 3U;
volatile uint32_t x398 = UINT32_MAX;
int64_t x401 = -173LL;
volatile uint16_t x404 = 1285U;


void f0(void) {
	volatile int8_t x1 = -1;
	uint16_t x2 = 18269U;
	uint16_t x4 = UINT16_MAX;

	t0 = (x1%(x2^(x3<=x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static int16_t x6 = -12;
	uint32_t x7 = UINT32_MAX;
	uint8_t x8 = 6U;

	t1 = (x5%(x6^(x7<=x8)));

	if (t1 != 11U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static volatile uint16_t x10 = 27442U;
	static volatile int32_t x11 = 3014;
	uint64_t t2 = 2138170213191467LLU;

	t2 = (x9%(x10^(x11<=x12)));

	if (t2 != 8244LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int16_t x14 = -1;
	uint64_t x15 = 2576204664353LLU;
	int64_t x16 = -241634LL;
	volatile int32_t t3 = 1;

	t3 = (x13%(x14^(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 181362;
	uint32_t x19 = 6U;
	static int64_t x20 = -174797410089LL;
	volatile int32_t t4 = 2637;

	t4 = (x17%(x18^(x19<=x20)));

	if (t4 != -34) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 14U;
	int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = 25460217;

	t5 = (x21%(x22^(x23<=x24)));

	if (t5 != 14) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int16_t x27 = -1;
	volatile uint8_t x28 = 10U;
	volatile int64_t t6 = -18553260LL;

	t6 = (x25%(x26^(x27<=x28)));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	static int16_t x31 = INT16_MAX;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -249957383;

	t7 = (x29%(x30^(x31<=x32)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MAX;

	t8 = (x33%(x34^(x35<=x36)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = 229006LL;
	uint8_t x39 = 123U;
	int32_t x40 = INT32_MIN;

	t9 = (x37%(x38^(x39<=x40)));

	if (t9 != 160347LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	volatile int8_t x42 = INT8_MIN;
	volatile int64_t x43 = INT64_MAX;
	volatile int64_t x44 = -1LL;
	int32_t t10 = 975167;

	t10 = (x41%(x42^(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 65U;
	uint8_t x46 = 26U;

	t11 = (x45%(x46^(x47<=x48)));

	if (t11 != 11) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int8_t x50 = -1;
	volatile uint16_t x51 = 3U;

	t12 = (x49%(x50^(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 2U;
	int64_t x55 = -2464LL;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -1823;

	t13 = (x53%(x54^(x55<=x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	uint64_t x58 = 695266255080820LLU;
	volatile int8_t x59 = 0;
	volatile uint64_t t14 = 44562902236347309LLU;

	t14 = (x57%(x58^(x59<=x60)));

	if (t14 != 635058012832548LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = -1;
	int64_t x63 = INT64_MIN;
	volatile int16_t x64 = INT16_MAX;
	volatile int32_t t15 = 4318024;

	t15 = (x61%(x62^(x63<=x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = -1;
	uint32_t x66 = 1565954U;
	uint64_t x67 = UINT64_MAX;
	volatile uint64_t x68 = UINT64_MAX;
	uint32_t t16 = 58U;

	t16 = (x65%(x66^(x67<=x68)));

	if (t16 != 1118685U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = -1;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 166211;

	t17 = (x69%(x70^(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	volatile int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MIN;
	static int8_t x76 = INT8_MIN;
	int64_t t18 = -785978LL;

	t18 = (x73%(x74^(x75<=x76)));

	if (t18 != -8LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 1U;
	static volatile uint32_t x78 = 523U;
	int32_t x80 = INT32_MAX;

	t19 = (x77%(x78^(x79<=x80)));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	volatile int64_t x82 = -1LL;
	static int64_t x83 = -1LL;
	volatile int16_t x84 = INT16_MAX;
	int64_t t20 = 8139415099LL;

	t20 = (x81%(x82^(x83<=x84)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	volatile uint32_t x86 = 39U;
	int64_t x87 = 165173760879964160LL;
	static volatile uint64_t x88 = UINT64_MAX;
	volatile uint32_t t21 = 12131U;

	t21 = (x85%(x86^(x87<=x88)));

	if (t21 != 32U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = INT16_MAX;
	int8_t x90 = -1;
	uint64_t x91 = 1478729516280481LLU;
	static uint32_t x92 = 692282U;
	int32_t t22 = 7920;

	t22 = (x89%(x90^(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = -3LL;
	volatile int64_t x95 = INT64_MAX;
	volatile int64_t x96 = 1LL;
	int64_t t23 = -16756888LL;

	t23 = (x93%(x94^(x95<=x96)));

	if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	uint64_t x98 = 966769109487184422LLU;
	uint64_t x99 = 96783120LLU;

	t24 = (x97%(x98^(x99<=x100)));

	if (t24 != 522450051470116009LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static volatile uint32_t x102 = UINT32_MAX;
	uint32_t x104 = UINT32_MAX;

	t25 = (x101%(x102^(x103<=x104)));

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x106 = -31468763LL;
	int64_t x107 = 37343887301LL;
	static int16_t x108 = INT16_MIN;
	volatile uint64_t t26 = 332046LLU;

	t26 = (x105%(x106^(x107<=x108)));

	if (t26 != 4640685603233LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = -29;
	volatile int64_t x112 = INT64_MIN;
	static volatile int32_t t27 = -1077473;

	t27 = (x109%(x110^(x111<=x112)));

	if (t27 != -27) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	uint16_t x115 = UINT16_MAX;

	t28 = (x113%(x114^(x115<=x116)));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	volatile int64_t x119 = INT64_MIN;
	static int32_t x120 = -1;
	uint64_t t29 = 465249086564921887LLU;

	t29 = (x117%(x118^(x119<=x120)));

	if (t29 != 3LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = 16626817U;
	volatile int64_t t30 = -8689035LL;

	t30 = (x121%(x122^(x123<=x124)));

	if (t30 != -6182688LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	static uint64_t x126 = 46585502LLU;
	int64_t x127 = -59357321988346LL;

	t31 = (x125%(x126^(x127<=x128)));

	if (t31 != 2928745LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 6528U;
	int64_t x130 = INT64_MIN;
	uint16_t x131 = 5766U;
	uint16_t x132 = 26963U;
	int64_t t32 = -3888823264860973LL;

	t32 = (x129%(x130^(x131<=x132)));

	if (t32 != 6528LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -29;
	int8_t x134 = -2;
	int32_t x136 = INT32_MAX;
	int32_t t33 = -760715961;

	t33 = (x133%(x134^(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -6;
	static uint16_t x138 = UINT16_MAX;
	volatile int32_t t34 = -57915389;

	t34 = (x137%(x138^(x139<=x140)));

	if (t34 != -6) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x141 = INT16_MIN;
	volatile int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MAX;
	int8_t x144 = 3;
	volatile int32_t t35 = -166;

	t35 = (x141%(x142^(x143<=x144)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	int16_t x147 = -1;
	volatile int32_t x148 = INT32_MIN;

	t36 = (x145%(x146^(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -1;
	int64_t x150 = -1LL;
	static int8_t x152 = INT8_MIN;
	volatile int64_t t37 = 788LL;

	t37 = (x149%(x150^(x151<=x152)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int32_t x154 = 4;
	int8_t x155 = -1;
	volatile int32_t t38 = -126572560;

	t38 = (x153%(x154^(x155<=x156)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	uint64_t x159 = 2654124921208LLU;
	volatile uint64_t x160 = UINT64_MAX;
	int32_t t39 = 623361537;

	t39 = (x157%(x158^(x159<=x160)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -1;
	static int32_t x162 = -1;
	int32_t x163 = 117;
	uint16_t x164 = UINT16_MAX;
	int32_t t40 = 2179473;

	t40 = (x161%(x162^(x163<=x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -22275;
	int64_t x167 = INT64_MIN;
	volatile int32_t t41 = -102161;

	t41 = (x165%(x166^(x167<=x168)));

	if (t41 != 30) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = 63311LLU;
	uint16_t x171 = 7U;
	uint16_t x172 = UINT16_MAX;

	t42 = (x169%(x170^(x171<=x172)));

	if (t42 != 6LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 0U;
	uint64_t x175 = 997125717708604413LLU;
	int8_t x176 = -1;
	static int32_t t43 = -246087789;

	t43 = (x173%(x174^(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	volatile int16_t x178 = -5435;
	int64_t x179 = INT64_MIN;
	int32_t x180 = -1;

	t44 = (x177%(x178^(x179<=x180)));

	if (t44 != 5435U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MAX;
	volatile uint64_t x183 = 873204LLU;
	static int8_t x184 = 1;
	volatile int64_t t45 = 71LL;

	t45 = (x181%(x182^(x183<=x184)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = -1454;
	int16_t x188 = 1840;
	static int32_t t46 = 349425728;

	t46 = (x185%(x186^(x187<=x188)));

	if (t46 != -802) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 263U;
	uint8_t x190 = UINT8_MAX;
	uint32_t x192 = 20706207U;

	t47 = (x189%(x190^(x191<=x192)));

	if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 14U;
	static volatile int64_t x195 = INT64_MIN;
	int16_t x196 = -1;
	int32_t t48 = -13;

	t48 = (x193%(x194^(x195<=x196)));

	if (t48 != 14) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	volatile int32_t x198 = 46;
	volatile uint16_t x199 = UINT16_MAX;
	int32_t t49 = -1;

	t49 = (x197%(x198^(x199<=x200)));

	if (t49 != -16) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 5798837661543LL;
	uint32_t x202 = UINT32_MAX;
	int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	int64_t t50 = 165615LL;

	t50 = (x201%(x202^(x203<=x204)));

	if (t50 != 631814643LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	uint32_t x206 = UINT32_MAX;
	int8_t x207 = -3;
	uint32_t x208 = 2576U;

	t51 = (x205%(x206^(x207<=x208)));

	if (t51 != 255U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 8518U;
	int16_t x210 = -1;
	static volatile uint32_t x211 = 442460738U;
	int64_t x212 = INT64_MIN;
	int32_t t52 = -213;

	t52 = (x209%(x210^(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x215 = -96103202302582021LL;
	int64_t x216 = INT64_MAX;

	t53 = (x213%(x214^(x215<=x216)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MAX;
	uint32_t x219 = UINT32_MAX;
	static int16_t x220 = INT16_MIN;
	int32_t t54 = -1173282;

	t54 = (x217%(x218^(x219<=x220)));

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	volatile int16_t x222 = INT16_MIN;
	volatile int8_t x223 = 15;
	volatile int32_t x224 = -415913;
	static int32_t t55 = 5504696;

	t55 = (x221%(x222^(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = UINT32_MAX;
	static uint16_t x226 = 4U;
	int16_t x227 = INT16_MIN;
	uint16_t x228 = 2U;
	uint32_t t56 = 105U;

	t56 = (x225%(x226^(x227<=x228)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 4094605LLU;
	int8_t x230 = INT8_MAX;
	volatile int8_t x231 = INT8_MIN;
	uint8_t x232 = 1U;
	uint64_t t57 = 5716797949073031LLU;

	t57 = (x229%(x230^(x231<=x232)));

	if (t57 != 109LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 426903958091535LLU;
	int32_t x235 = -1034316;
	static volatile int32_t x236 = -1;

	t58 = (x233%(x234^(x235<=x236)));

	if (t58 != 2207LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MIN;
	static int32_t x238 = -690;
	uint8_t x239 = 1U;
	static uint32_t x240 = UINT32_MAX;
	int32_t t59 = -22;

	t59 = (x237%(x238^(x239<=x240)));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	int8_t x242 = 2;
	static int32_t x243 = INT32_MAX;
	static uint64_t x244 = 323LLU;
	int64_t t60 = 7LL;

	t60 = (x241%(x242^(x243<=x244)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = -1;
	int16_t x246 = INT16_MIN;
	uint8_t x247 = UINT8_MAX;
	uint8_t x248 = 50U;

	t61 = (x245%(x246^(x247<=x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = -1;
	volatile uint32_t x251 = UINT32_MAX;
	int64_t x252 = -1909591583LL;
	int32_t t62 = -1;

	t62 = (x249%(x250^(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = -1;
	volatile uint16_t x255 = UINT16_MAX;
	int16_t x256 = -988;

	t63 = (x253%(x254^(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = UINT16_MAX;
	uint16_t x259 = UINT16_MAX;
	volatile int64_t t64 = 238164693710849870LL;

	t64 = (x257%(x258^(x259<=x260)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int8_t x263 = INT8_MIN;
	volatile int16_t x264 = INT16_MIN;

	t65 = (x261%(x262^(x263<=x264)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x266 = INT32_MIN;
	uint8_t x267 = UINT8_MAX;
	uint64_t x268 = 669515454612LLU;
	volatile uint64_t t66 = 2166750562871784LLU;

	t66 = (x265%(x266^(x267<=x268)));

	if (t66 != 2147483646LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	volatile int64_t x270 = -1722028147467463234LL;
	int8_t x271 = -1;
	volatile uint64_t x272 = UINT64_MAX;
	static int64_t t67 = 1584393LL;

	t67 = (x269%(x270^(x271<=x272)));

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 50393767LL;
	int16_t x275 = INT16_MIN;
	volatile int32_t x276 = INT32_MIN;
	int64_t t68 = -84327478285034LL;

	t68 = (x273%(x274^(x275<=x276)));

	if (t68 != 537667LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = -1574;
	int32_t x278 = INT32_MIN;
	uint8_t x279 = 5U;
	volatile uint32_t x280 = 12989U;

	t69 = (x277%(x278^(x279<=x280)));

	if (t69 != -1574) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = UINT32_MAX;
	uint16_t x282 = 386U;
	int32_t x284 = 12;
	volatile uint32_t t70 = 341086U;

	t70 = (x281%(x282^(x283<=x284)));

	if (t70 != 107U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 56572000U;
	int64_t x286 = -1LL;
	static int32_t x288 = -1;
	static int64_t t71 = -16LL;

	t71 = (x285%(x286^(x287<=x288)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = -59;
	int32_t x291 = INT32_MAX;
	static int64_t x292 = 57710443LL;
	volatile int64_t t72 = 4029475347945618LL;

	t72 = (x289%(x290^(x291<=x292)));

	if (t72 != -59LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	uint16_t x294 = UINT16_MAX;
	volatile int32_t x295 = -1;
	volatile int32_t x296 = -11248316;
	static volatile int32_t t73 = 444;

	t73 = (x293%(x294^(x295<=x296)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -859972206LL;
	volatile int16_t x300 = 5695;
	int64_t t74 = 199LL;

	t74 = (x297%(x298^(x299<=x300)));

	if (t74 != -88LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 4460280258277LLU;
	int64_t x302 = -1LL;
	int64_t x303 = INT64_MIN;
	static volatile uint64_t t75 = 1232LLU;

	t75 = (x301%(x302^(x303<=x304)));

	if (t75 != 4460280258277LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 897320074U;
	int64_t x306 = -1LL;
	static volatile int64_t t76 = 879513985423LL;

	t76 = (x305%(x306^(x307<=x308)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 724U;
	uint32_t x310 = 22548U;
	int32_t x311 = INT32_MAX;
	int8_t x312 = -12;
	static uint32_t t77 = 63407221U;

	t77 = (x309%(x310^(x311<=x312)));

	if (t77 != 724U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int8_t x314 = -1;
	int64_t x315 = INT64_MIN;
	int8_t x316 = 1;
	static volatile int32_t t78 = -26114;

	t78 = (x313%(x314^(x315<=x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 0;
	int32_t x318 = INT32_MIN;
	static int16_t x319 = INT16_MIN;
	int32_t x320 = -1;
	static int32_t t79 = -108;

	t79 = (x317%(x318^(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 26203U;
	int32_t x322 = INT32_MAX;
	int16_t x323 = -1208;
	uint32_t t80 = 31836422U;

	t80 = (x321%(x322^(x323<=x324)));

	if (t80 != 26203U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MAX;
	volatile int32_t x326 = -1;
	int64_t x327 = -1LL;
	int32_t t81 = -3348961;

	t81 = (x325%(x326^(x327<=x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	volatile int16_t x330 = -1;
	int16_t x331 = -1;
	volatile int8_t x332 = 0;
	int32_t t82 = 88804;

	t82 = (x329%(x330^(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	int32_t x334 = INT32_MAX;
	static volatile int8_t x335 = 0;
	volatile int64_t t83 = 30530LL;

	t83 = (x333%(x334^(x335<=x336)));

	if (t83 != 7LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x341 = 2U;
	int8_t x342 = 1;
	static volatile int16_t x343 = INT16_MAX;
	uint64_t x344 = 10740LLU;

	t84 = (x341%(x342^(x343<=x344)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x345 = 19281U;
	uint64_t x346 = 876093903779334507LLU;
	int32_t x347 = INT32_MAX;
	uint64_t x348 = 0LLU;
	uint64_t t85 = 32450109131481LLU;

	t85 = (x345%(x346^(x347<=x348)));

	if (t85 != 19281LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x349 = 4371871047979LLU;
	uint16_t x351 = 763U;
	static int64_t x352 = INT64_MIN;
	volatile uint64_t t86 = 21983753410LLU;

	t86 = (x349%(x350^(x351<=x352)));

	if (t86 != 4371871047979LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x354 = 38U;
	int8_t x355 = INT8_MAX;
	static uint8_t x356 = 1U;

	t87 = (x353%(x354^(x355<=x356)));

	if (t87 != 5U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x357 = 793U;
	volatile int16_t x358 = -1;
	int64_t x360 = INT64_MIN;
	int32_t t88 = -346716;

	t88 = (x357%(x358^(x359<=x360)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 1254139449349LLU;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = 365U;
	uint64_t t89 = 511615240LLU;

	t89 = (x361%(x362^(x363<=x364)));

	if (t89 != 1254139449349LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x366 = UINT16_MAX;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t90 = 516115;

	t90 = (x365%(x366^(x367<=x368)));

	if (t90 != 35987) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MIN;
	uint32_t x370 = 63393U;
	static int64_t x371 = -1LL;
	volatile int64_t x372 = INT64_MAX;
	uint32_t t91 = 5U;

	t91 = (x369%(x370^(x371<=x372)));

	if (t91 != 32384U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x373 = -19;
	uint16_t x374 = 120U;
	int16_t x375 = INT16_MAX;
	uint32_t x376 = 4U;
	int32_t t92 = -6211;

	t92 = (x373%(x374^(x375<=x376)));

	if (t92 != -19) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x378 = INT32_MAX;
	int32_t x379 = INT32_MIN;

	t93 = (x377%(x378^(x379<=x380)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = INT16_MAX;
	volatile uint32_t x382 = 14U;
	int16_t x383 = -1;

	t94 = (x381%(x382^(x383<=x384)));

	if (t94 != 7U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x386 = 2298824340932023LL;
	uint16_t x387 = 12U;
	volatile int16_t x388 = INT16_MIN;
	int64_t t95 = 2428189085080211LL;

	t95 = (x385%(x386^(x387<=x388)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = -1LL;
	volatile int32_t x390 = INT32_MIN;
	volatile int16_t x392 = INT16_MIN;
	volatile int64_t t96 = 77701732360LL;

	t96 = (x389%(x390^(x391<=x392)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x394 = UINT8_MAX;
	uint64_t x395 = 299339LLU;
	volatile int64_t x396 = INT64_MIN;
	volatile int32_t t97 = -14;

	t97 = (x393%(x394^(x395<=x396)));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = -1;
	static volatile uint64_t x399 = UINT64_MAX;
	volatile int64_t x400 = INT64_MAX;
	uint32_t t98 = 9U;

	t98 = (x397%(x398^(x399<=x400)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x402 = 1289U;
	static int32_t x403 = -1;
	static int64_t t99 = -97440889LL;

	t99 = (x401%(x402^(x403<=x404)));

	if (t99 != -173LL) { NG(); } else { ; }
	
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

