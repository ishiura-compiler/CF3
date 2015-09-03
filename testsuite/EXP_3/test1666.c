#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 217621653371LLU;
volatile int64_t x3 = INT64_MIN;
volatile uint64_t t0 = 81790517587LLU;
static int16_t x15 = 241;
static int64_t x16 = -933LL;
int16_t x27 = INT16_MIN;
uint8_t x29 = UINT8_MAX;
int8_t x37 = INT8_MIN;
static int8_t x57 = INT8_MIN;
int16_t x58 = 6406;
static int32_t t14 = 15853868;
int8_t x63 = -12;
volatile int32_t t16 = -46671;
volatile int32_t t17 = -1;
int16_t x74 = -1;
uint8_t x79 = 1U;
volatile uint32_t t19 = 63857U;
volatile int32_t t20 = 98275;
static volatile uint8_t x88 = 56U;
static int32_t x91 = INT32_MIN;
uint32_t t22 = 154555U;
int64_t x98 = 305278469025053673LL;
int16_t x101 = INT16_MAX;
uint8_t x103 = UINT8_MAX;
static uint8_t x113 = UINT8_MAX;
int64_t t29 = 967873471983692712LL;
static uint32_t x121 = 3302U;
static volatile int8_t x125 = INT8_MIN;
int8_t x127 = -16;
volatile int64_t t34 = -8045850104663LL;
volatile int8_t x143 = -3;
static volatile int16_t x147 = -1027;
int64_t x152 = INT64_MIN;
volatile int64_t t37 = -1LL;
int64_t x154 = INT64_MAX;
int64_t t38 = INT64_MAX;
uint64_t x158 = 2060498108803874028LLU;
int8_t x163 = INT8_MIN;
int8_t x167 = -1;
static uint32_t x176 = 13292447U;
int32_t t43 = 254805097;
int64_t x177 = 247LL;
int8_t x186 = -1;
static int64_t x188 = -13890823LL;
uint32_t x189 = 559537148U;
volatile int64_t x191 = -141295140829476850LL;
uint64_t x202 = 124176779504682705LLU;
int32_t x204 = INT32_MIN;
int32_t x206 = -22409622;
static volatile int16_t x210 = INT16_MIN;
uint64_t t53 = 168258425LLU;
volatile int8_t x219 = 14;
volatile int64_t x220 = INT64_MIN;
volatile uint8_t x223 = 34U;
int8_t x228 = INT8_MIN;
uint8_t x233 = 26U;
uint16_t x234 = 0U;
uint16_t x251 = 19U;
uint8_t x256 = 59U;
int32_t t63 = 2;
int16_t x272 = INT16_MIN;
volatile uint64_t x274 = 536821677084204LLU;
int8_t x279 = INT8_MIN;
volatile uint32_t t69 = 96502167U;
static int16_t x292 = INT16_MIN;
volatile int64_t x294 = 128049004LL;
volatile int16_t x296 = -231;
int64_t x297 = INT64_MIN;
volatile int64_t t74 = -2080LL;
static int8_t x302 = -1;
int16_t x303 = INT16_MIN;
int64_t x308 = INT64_MIN;
int64_t x310 = -1LL;
uint16_t x318 = 28817U;
int64_t x323 = 188372636768LL;
static volatile int32_t x325 = -1;
volatile int8_t x332 = 6;
static int8_t x333 = -1;
static int8_t x334 = -1;
volatile int32_t t83 = -2172;
int8_t x341 = INT8_MIN;
volatile uint64_t t87 = 5600331860LLU;
volatile int32_t t90 = 22866168;
volatile int64_t x368 = INT64_MAX;
int32_t x371 = INT32_MIN;
volatile uint32_t x372 = 49U;
int64_t x374 = INT64_MIN;
int8_t x379 = INT8_MAX;
volatile int16_t x381 = -1;
volatile uint32_t x386 = 3196876U;
int32_t x395 = -133527;
int32_t x397 = -1;


void f0(void) {
	int16_t x2 = INT16_MIN;
	static uint32_t x4 = UINT32_MAX;

	t0 = ((x1|x2)-(x3<=x4));

	if (t0 != 18446744073709545338LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	static int32_t x6 = INT32_MIN;
	static int8_t x7 = -57;
	volatile int64_t x8 = INT64_MIN;
	int32_t t1 = 30025704;

	t1 = ((x5|x6)-(x7<=x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static volatile int64_t x10 = -327266696360LL;
	volatile int16_t x11 = INT16_MIN;
	volatile int32_t x12 = INT32_MIN;
	volatile int64_t t2 = -16416LL;

	t2 = ((x9|x10)-(x11<=x12));

	if (t2 != -326417514497LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = INT64_MAX;
	volatile int64_t t3 = 18907205377692847LL;

	t3 = ((x13|x14)-(x15<=x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MAX;
	int16_t x19 = 207;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -11503023LL;

	t4 = ((x17|x18)-(x19<=x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static int32_t x22 = 1;
	static uint32_t x23 = 14314831U;
	volatile int8_t x24 = -1;
	int32_t t5 = -558766;

	t5 = ((x21|x22)-(x23<=x24));

	if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile int64_t x26 = INT64_MAX;
	int16_t x28 = INT16_MIN;
	int64_t t6 = -1069660875449228006LL;

	t6 = ((x25|x26)-(x27<=x28));

	if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = 2U;
	volatile uint16_t x31 = UINT16_MAX;
	static uint64_t x32 = 6LLU;
	static volatile int32_t t7 = -12;

	t7 = ((x29|x30)-(x31<=x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x33 = 166926633200070831LLU;
	int32_t x34 = -1;
	volatile int64_t x35 = INT64_MIN;
	volatile int16_t x36 = INT16_MAX;
	volatile uint64_t t8 = 59260LLU;

	t8 = ((x33|x34)-(x35<=x36));

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x38 = UINT64_MAX;
	static uint16_t x39 = 3U;
	int16_t x40 = INT16_MIN;
	uint64_t t9 = UINT64_MAX;

	t9 = ((x37|x38)-(x39<=x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint16_t x42 = 1355U;
	int8_t x43 = -1;
	uint16_t x44 = 13U;
	volatile int64_t t10 = -3370417622799797247LL;

	t10 = ((x41|x42)-(x43<=x44));

	if (t10 != -9223372036854774454LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -3;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = INT8_MIN;
	uint8_t x48 = 6U;
	static volatile int32_t t11 = 1;

	t11 = ((x45|x46)-(x47<=x48));

	if (t11 != -4) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int32_t x50 = INT32_MIN;
	uint16_t x51 = UINT16_MAX;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = 31206;

	t12 = ((x49|x50)-(x51<=x52));

	if (t12 != -2147483521) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 1453LLU;
	int64_t x54 = -1LL;
	int8_t x55 = 0;
	int64_t x56 = INT64_MIN;
	static uint64_t t13 = UINT64_MAX;

	t13 = ((x53|x54)-(x55<=x56));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x59 = 7U;
	volatile int64_t x60 = -113LL;

	t14 = ((x57|x58)-(x59<=x60));

	if (t14 != -122) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -281;
	volatile int16_t x62 = -5967;
	static int16_t x64 = -1;
	volatile int32_t t15 = 14114;

	t15 = ((x61|x62)-(x63<=x64));

	if (t15 != -266) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = -1874;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MIN;

	t16 = ((x65|x66)-(x67<=x68));

	if (t16 != -82) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int16_t x70 = -1;
	static int32_t x71 = 2;
	uint64_t x72 = UINT64_MAX;

	t17 = ((x69|x70)-(x71<=x72));

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int16_t x75 = INT16_MAX;
	static uint16_t x76 = 0U;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = ((x73|x74)-(x75<=x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 1U;
	static uint32_t x78 = 1U;
	static int32_t x80 = INT32_MAX;

	t19 = ((x77|x78)-(x79<=x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -170;
	volatile int16_t x82 = -1;
	static uint64_t x83 = 7921LLU;
	volatile int64_t x84 = INT64_MIN;

	t20 = ((x81|x82)-(x83<=x84));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 1431898LLU;
	int64_t x86 = -91596084541828LL;
	volatile int16_t x87 = -1;
	static uint64_t t21 = 1385LLU;

	t21 = ((x85|x86)-(x87<=x88));

	if (t21 != 18446652477626376061LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x90 = 2417631U;
	int32_t x92 = INT32_MIN;

	t22 = ((x89|x90)-(x91<=x92));

	if (t22 != 4294960094U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MAX;
	int16_t x95 = -1;
	static volatile int64_t x96 = INT64_MIN;
	static volatile int32_t t23 = -3;

	t23 = ((x93|x94)-(x95<=x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	volatile uint16_t x99 = 1712U;
	volatile uint32_t x100 = 119534298U;
	volatile int64_t t24 = -27534LL;

	t24 = ((x97|x98)-(x99<=x100));

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MAX;
	uint64_t x104 = UINT64_MAX;
	static volatile int64_t t25 = -44LL;

	t25 = ((x101|x102)-(x103<=x104));

	if (t25 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	uint8_t x106 = UINT8_MAX;
	static int8_t x107 = 6;
	int8_t x108 = INT8_MAX;
	int64_t t26 = 1388391336486731701LL;

	t26 = ((x105|x106)-(x107<=x108));

	if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	volatile int8_t x110 = INT8_MIN;
	uint64_t x111 = UINT64_MAX;
	uint64_t x112 = 111834922482954LLU;
	int32_t t27 = 6925071;

	t27 = ((x109|x110)-(x111<=x112));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	int64_t x115 = -1LL;
	uint32_t x116 = UINT32_MAX;
	int64_t t28 = -19314171362LL;

	t28 = ((x113|x114)-(x115<=x116));

	if (t28 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x117 = 446915005LL;
	int32_t x118 = INT32_MIN;
	uint8_t x119 = UINT8_MAX;
	volatile int8_t x120 = INT8_MIN;

	t29 = ((x117|x118)-(x119<=x120));

	if (t29 != -1700568643LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x122 = 0;
	static volatile int16_t x123 = INT16_MIN;
	uint32_t x124 = 9U;
	static volatile uint32_t t30 = 843U;

	t30 = ((x121|x122)-(x123<=x124));

	if (t30 != 3302U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x126 = INT8_MIN;
	int64_t x128 = -1LL;
	volatile int32_t t31 = -118;

	t31 = ((x125|x126)-(x127<=x128));

	if (t31 != -129) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int32_t x130 = 91496;
	int64_t x131 = INT64_MIN;
	int16_t x132 = -45;
	static volatile int64_t t32 = -5178037424123LL;

	t32 = ((x129|x130)-(x131<=x132));

	if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = UINT32_MAX;
	volatile uint64_t x134 = 5754243220193303987LLU;
	int32_t x135 = -1;
	int16_t x136 = -6748;
	static volatile uint64_t t33 = 1417043006331LLU;

	t33 = ((x133|x134)-(x135<=x136));

	if (t33 != 5754243221488140287LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 16104LL;
	static int8_t x138 = 57;
	uint8_t x139 = 125U;
	int32_t x140 = -1;

	t34 = ((x137|x138)-(x139<=x140));

	if (t34 != 16121LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	volatile uint16_t x142 = 992U;
	int64_t x144 = 32180444004LL;
	volatile int32_t t35 = 101958590;

	t35 = ((x141|x142)-(x143<=x144));

	if (t35 != -33) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x146 = UINT32_MAX;
	static uint32_t x148 = UINT32_MAX;
	static uint32_t t36 = 3984U;

	t36 = ((x145|x146)-(x147<=x148));

	if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	volatile uint32_t x150 = 129560600U;
	uint8_t x151 = 0U;

	t37 = ((x149|x150)-(x151<=x152));

	if (t37 != -9223372036725215208LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	int8_t x155 = -1;
	static int16_t x156 = INT16_MIN;

	t38 = ((x153|x154)-(x155<=x156));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = 294695U;
	int32_t x159 = INT32_MAX;
	static int8_t x160 = INT8_MIN;
	uint64_t t39 = 2858244584LLU;

	t39 = ((x157|x158)-(x159<=x160));

	if (t39 != 2060498108803874799LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -59;
	int64_t x162 = -1LL;
	int32_t x164 = -1;
	int64_t t40 = -92849332977790LL;

	t40 = ((x161|x162)-(x163<=x164));

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = 29;
	static int32_t x168 = -120;
	static int32_t t41 = -7;

	t41 = ((x165|x166)-(x167<=x168));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	int8_t x170 = -1;
	int16_t x171 = INT16_MAX;
	int32_t x172 = 14775;
	int32_t t42 = -309;

	t42 = ((x169|x170)-(x171<=x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x173 = 770U;
	int8_t x174 = INT8_MIN;
	static uint16_t x175 = 0U;

	t43 = ((x173|x174)-(x175<=x176));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x178 = UINT32_MAX;
	int64_t x179 = 1809875540122304LL;
	volatile int8_t x180 = INT8_MAX;
	int64_t t44 = 147147LL;

	t44 = ((x177|x178)-(x179<=x180));

	if (t44 != 4294967295LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	static uint8_t x183 = 1U;
	uint8_t x184 = UINT8_MAX;
	volatile uint64_t t45 = 4036422095432LLU;

	t45 = ((x181|x182)-(x183<=x184));

	if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 0LLU;
	uint16_t x187 = UINT16_MAX;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x185|x186)-(x187<=x188));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x190 = 4315778514640003799LLU;
	static uint8_t x192 = 9U;
	volatile uint64_t t47 = 7298891LLU;

	t47 = ((x189|x190)-(x191<=x192));

	if (t47 != 4315778514658393086LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = 349U;
	uint16_t x194 = 677U;
	int64_t x195 = INT64_MAX;
	volatile uint32_t x196 = UINT32_MAX;
	volatile int32_t t48 = 9068;

	t48 = ((x193|x194)-(x195<=x196));

	if (t48 != 1021) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 641808431U;
	uint64_t x198 = 2075692913844657LLU;
	uint32_t x199 = 4434823U;
	static int32_t x200 = -141;
	uint64_t t49 = 2071841409445662LLU;

	t49 = ((x197|x198)-(x199<=x200));

	if (t49 != 2075692981025214LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	static int8_t x203 = -1;
	static uint64_t t50 = 3138197678257644043LLU;

	t50 = ((x201|x202)-(x203<=x204));

	if (t50 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = UINT64_MAX;
	volatile uint8_t x207 = UINT8_MAX;
	int16_t x208 = -1;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x205|x206)-(x207<=x208));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 37760982025304LLU;
	int32_t x211 = INT32_MIN;
	volatile uint64_t x212 = 5LLU;
	uint64_t t52 = 4LLU;

	t52 = ((x209|x210)-(x211<=x212));

	if (t52 != 18446744073709519960LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 54483351LLU;
	int16_t x214 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	uint8_t x216 = UINT8_MAX;

	t53 = ((x213|x214)-(x215<=x216));

	if (t53 != 18446744073709541783LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -44;
	int64_t x218 = 34309402310LL;
	int64_t t54 = -2LL;

	t54 = ((x217|x218)-(x219<=x220));

	if (t54 != -42LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 23U;
	static uint8_t x222 = 22U;
	uint8_t x224 = 2U;
	int32_t t55 = 172121;

	t55 = ((x221|x222)-(x223<=x224));

	if (t55 != 23) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = INT32_MIN;
	int64_t t56 = -248LL;

	t56 = ((x225|x226)-(x227<=x228));

	if (t56 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int32_t x230 = INT32_MAX;
	volatile uint8_t x231 = 8U;
	uint16_t x232 = 430U;
	static volatile int32_t t57 = -3392658;

	t57 = ((x229|x230)-(x231<=x232));

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x235 = 112112770U;
	int8_t x236 = 0;
	int32_t t58 = -1263542;

	t58 = ((x233|x234)-(x235<=x236));

	if (t58 != 26) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 297063LL;
	int32_t x238 = -398;
	int8_t x239 = -5;
	int16_t x240 = -1;
	static int64_t t59 = 116LL;

	t59 = ((x237|x238)-(x239<=x240));

	if (t59 != -394LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = 7;
	int16_t x243 = -1;
	static int32_t x244 = -627;
	volatile int32_t t60 = -254395068;

	t60 = ((x241|x242)-(x243<=x244));

	if (t60 != -32761) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x245 = UINT8_MAX;
	int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	static int16_t x248 = -10890;
	volatile int32_t t61 = -1;

	t61 = ((x245|x246)-(x247<=x248));

	if (t61 != -2147483393) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = -1;
	int16_t x250 = 13604;
	static int8_t x252 = INT8_MIN;
	int32_t t62 = 233104550;

	t62 = ((x249|x250)-(x251<=x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -556;
	uint8_t x254 = 23U;
	int64_t x255 = -1LL;

	t63 = ((x253|x254)-(x255<=x256));

	if (t63 != -554) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 3047765U;
	int16_t x258 = -1;
	int16_t x259 = INT16_MAX;
	volatile int64_t x260 = -1LL;
	static volatile uint32_t t64 = UINT32_MAX;

	t64 = ((x257|x258)-(x259<=x260));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	uint64_t x262 = 16357714994374LLU;
	int8_t x263 = -1;
	uint8_t x264 = UINT8_MAX;
	volatile uint64_t t65 = 1002LLU;

	t65 = ((x261|x262)-(x263<=x264));

	if (t65 != 18446744071894115525LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 57238412561739LLU;
	int8_t x266 = INT8_MAX;
	int8_t x267 = INT8_MAX;
	int64_t x268 = -1LL;
	uint64_t t66 = 14158418LLU;

	t66 = ((x265|x266)-(x267<=x268));

	if (t66 != 57238412561791LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 455U;
	int8_t x270 = -19;
	volatile int8_t x271 = INT8_MAX;
	int32_t t67 = -18217658;

	t67 = ((x269|x270)-(x271<=x272));

	if (t67 != -17) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	static uint64_t t68 = 329055826725LLU;

	t68 = ((x273|x274)-(x275<=x276));

	if (t68 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x278 = 2011744047U;
	static int32_t x280 = INT32_MIN;

	t69 = ((x277|x278)-(x279<=x280));

	if (t69 != 4159227695U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	uint8_t x282 = UINT8_MAX;
	uint32_t x283 = UINT32_MAX;
	volatile int8_t x284 = INT8_MIN;
	int32_t t70 = INT32_MAX;

	t70 = ((x281|x282)-(x283<=x284));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MAX;
	static uint64_t x286 = UINT64_MAX;
	uint64_t x287 = 261495872LLU;
	volatile int32_t x288 = 35;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x285|x286)-(x287<=x288));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -39756842191039297LL;
	static volatile uint32_t x290 = 86U;
	uint32_t x291 = 84603507U;
	volatile int64_t t72 = -762285438224LL;

	t72 = ((x289|x290)-(x291<=x292));

	if (t72 != -39756842191039234LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = -1;
	static int64_t x295 = -1LL;
	volatile int64_t t73 = -205231145971LL;

	t73 = ((x293|x294)-(x295<=x296));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x298 = -3;
	int16_t x299 = -72;
	uint64_t x300 = 6269607244416854LLU;

	t74 = ((x297|x298)-(x299<=x300));

	if (t74 != -3LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 5U;
	static int64_t x304 = 23657LL;
	static volatile uint32_t t75 = 20U;

	t75 = ((x301|x302)-(x303<=x304));

	if (t75 != 4294967294U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = -31;
	int64_t x307 = INT64_MAX;
	volatile int32_t t76 = 126;

	t76 = ((x305|x306)-(x307<=x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	static volatile uint64_t x311 = 6296166239LLU;
	uint64_t x312 = 2LLU;
	int64_t t77 = -451564232008LL;

	t77 = ((x309|x310)-(x311<=x312));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x313 = INT64_MIN;
	volatile int16_t x314 = -1;
	int64_t x315 = 2033701182477355067LL;
	volatile int16_t x316 = -475;
	volatile int64_t t78 = 13615520311478LL;

	t78 = ((x313|x314)-(x315<=x316));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	static int16_t x319 = INT16_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t79 = -333141742;

	t79 = ((x317|x318)-(x319<=x320));

	if (t79 != -2147454831) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -26978;
	int8_t x322 = -1;
	int64_t x324 = -11742287223LL;
	static int32_t t80 = 57462344;

	t80 = ((x321|x322)-(x323<=x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x326 = INT32_MAX;
	static int64_t x327 = INT64_MIN;
	uint16_t x328 = 2701U;
	int32_t t81 = 22278291;

	t81 = ((x325|x326)-(x327<=x328));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int8_t x330 = -1;
	int32_t x331 = INT32_MIN;
	volatile int32_t t82 = -6;

	t82 = ((x329|x330)-(x331<=x332));

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = INT8_MIN;
	int16_t x336 = 400;

	t83 = ((x333|x334)-(x335<=x336));

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 348;
	int64_t x338 = INT64_MIN;
	volatile uint16_t x339 = 2696U;
	uint8_t x340 = UINT8_MAX;
	int64_t t84 = 1409248LL;

	t84 = ((x337|x338)-(x339<=x340));

	if (t84 != -9223372036854775460LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = 4U;
	int16_t x343 = INT16_MIN;
	static volatile uint64_t x344 = 8622646919768934LLU;
	static int32_t t85 = 83205459;

	t85 = ((x341|x342)-(x343<=x344));

	if (t85 != -124) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MAX;
	int8_t x347 = INT8_MIN;
	volatile int64_t x348 = INT64_MAX;
	static int32_t t86 = -1690;

	t86 = ((x345|x346)-(x347<=x348));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	uint64_t x350 = UINT64_MAX;
	int16_t x351 = INT16_MIN;
	static int8_t x352 = 0;

	t87 = ((x349|x350)-(x351<=x352));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 394272LLU;
	int8_t x354 = INT8_MAX;
	static volatile int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;
	static volatile uint64_t t88 = 1578952LLU;

	t88 = ((x353|x354)-(x355<=x356));

	if (t88 != 394367LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 40U;
	int64_t x358 = INT64_MAX;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = 1383032898856LLU;
	static volatile int64_t t89 = INT64_MAX;

	t89 = ((x357|x358)-(x359<=x360));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 28U;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = 2678488742365355605LLU;
	volatile int64_t x364 = INT64_MIN;

	t90 = ((x361|x362)-(x363<=x364));

	if (t90 != -32741) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x366 = UINT8_MAX;
	static int64_t x367 = INT64_MAX;
	static int32_t t91 = -7095;

	t91 = ((x365|x366)-(x367<=x368));

	if (t91 != -32514) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 65877U;
	int16_t x370 = -3;
	uint32_t t92 = 59303350U;

	t92 = ((x369|x370)-(x371<=x372));

	if (t92 != 4294967293U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -12;
	int64_t x375 = 3493832198311LL;
	static int32_t x376 = INT32_MIN;
	volatile int64_t t93 = -968489623147LL;

	t93 = ((x373|x374)-(x375<=x376));

	if (t93 != -12LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MAX;
	int64_t x378 = -1LL;
	volatile int16_t x380 = INT16_MIN;
	volatile int64_t t94 = -48153688989LL;

	t94 = ((x377|x378)-(x379<=x380));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x382 = UINT8_MAX;
	int8_t x383 = 0;
	volatile int16_t x384 = -1;
	int32_t t95 = -383572;

	t95 = ((x381|x382)-(x383<=x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MIN;
	uint8_t x387 = UINT8_MAX;
	int32_t x388 = 177916837;
	int64_t t96 = -1464378LL;

	t96 = ((x385|x386)-(x387<=x388));

	if (t96 != -9223372036851578933LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 1116U;
	int16_t x390 = INT16_MIN;
	volatile int8_t x391 = -1;
	int8_t x392 = INT8_MIN;
	uint32_t t97 = 28U;

	t97 = ((x389|x390)-(x391<=x392));

	if (t97 != 4294935644U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 20U;
	int16_t x394 = 10;
	int8_t x396 = INT8_MAX;
	static int32_t t98 = 450051;

	t98 = ((x393|x394)-(x395<=x396));

	if (t98 != 29) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MIN;
	int64_t x399 = 1064598143916LL;
	int64_t x400 = INT64_MIN;
	volatile int32_t t99 = 38412019;

	t99 = ((x397|x398)-(x399<=x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

