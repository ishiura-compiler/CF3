#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x17 = INT32_MAX;
volatile int32_t x20 = -27683587;
static int32_t x22 = INT32_MIN;
int16_t x25 = -1;
uint8_t x27 = 4U;
int32_t x29 = -211;
volatile int64_t t7 = 0LL;
static int32_t t8 = INT32_MIN;
volatile int16_t x40 = -2438;
int8_t x41 = 44;
static int8_t x46 = INT8_MAX;
int16_t x49 = INT16_MIN;
static int8_t x53 = -3;
int64_t x62 = 670928612786072LL;
int8_t x63 = INT8_MIN;
static int32_t x67 = -1;
uint64_t x75 = UINT64_MAX;
int16_t x76 = 1;
uint64_t x83 = 68856LLU;
uint32_t x84 = 88211832U;
int32_t x86 = INT32_MIN;
static int16_t x92 = INT16_MAX;
uint8_t x93 = 60U;
uint32_t x99 = 730232U;
int32_t x101 = -103;
static volatile int8_t x108 = INT8_MAX;
uint64_t x110 = 0LLU;
int32_t x111 = INT32_MAX;
int8_t x112 = -1;
static int32_t x116 = INT32_MIN;
volatile int32_t t28 = 59124190;
uint32_t x125 = UINT32_MAX;
int16_t x126 = -61;
static uint32_t x143 = 677825979U;
uint64_t x148 = UINT64_MAX;
static volatile int32_t t36 = -17450835;
int16_t x154 = INT16_MIN;
int32_t x156 = INT32_MAX;
int8_t x159 = -1;
volatile int64_t x166 = -41286721270243218LL;
int64_t x171 = INT64_MAX;
static uint8_t x174 = UINT8_MAX;
uint32_t x176 = UINT32_MAX;
int16_t x180 = INT16_MIN;
volatile uint64_t t43 = 89198310352635LLU;
uint8_t x181 = UINT8_MAX;
volatile uint32_t t44 = 3U;
int16_t x187 = INT16_MAX;
int64_t x188 = -1LL;
int16_t x191 = 7;
volatile uint64_t t46 = 38029781LLU;
volatile int32_t x198 = -1;
volatile int32_t t48 = 44870;
uint32_t t50 = 106608U;
uint16_t x214 = 1U;
static volatile int8_t x218 = 54;
int32_t x221 = 23;
int32_t t55 = -2;
uint8_t x231 = 25U;
int64_t t57 = 6610042215LL;
uint32_t x238 = 14115U;
volatile int8_t x240 = -1;
int8_t x242 = INT8_MIN;
static volatile int16_t x243 = 1;
volatile int32_t x244 = -1;
int64_t x245 = -1285LL;
uint64_t t60 = 1990151008012398LLU;
static int16_t x255 = INT16_MAX;
static int64_t x256 = 514879000570435961LL;
static volatile int64_t t62 = 151086745LL;
volatile uint64_t t64 = UINT64_MAX;
int8_t x272 = -1;
volatile uint32_t t66 = UINT32_MAX;
static int16_t x281 = INT16_MAX;
int8_t x289 = -1;
static uint32_t x290 = 1000399865U;
uint16_t x291 = 5174U;
volatile int64_t t71 = -199LL;
int64_t t73 = INT64_MAX;
int16_t x301 = INT16_MIN;
static int16_t x309 = 8859;
volatile uint16_t x313 = 3U;
static int8_t x314 = -1;
static int32_t x315 = -1;
int64_t t77 = 3108LL;
static int32_t t78 = -805829;
int16_t x322 = INT16_MIN;
static volatile int32_t t79 = 0;
static int64_t x325 = 0LL;
int16_t x326 = INT16_MIN;
volatile uint64_t x333 = 1389595308LLU;
uint64_t t84 = UINT64_MAX;
uint32_t x352 = 216254251U;
uint32_t x353 = 2495U;
int8_t x356 = INT8_MIN;
volatile uint32_t t88 = 26529U;
int16_t x366 = -1;
int32_t x380 = INT32_MIN;
int64_t x385 = -45691035058744LL;
static int32_t x388 = INT32_MIN;
int8_t x391 = INT8_MAX;
volatile int64_t x392 = -1LL;
volatile int32_t t96 = -231;
volatile uint8_t x400 = 3U;
volatile uint64_t t97 = 1LLU;
volatile uint64_t x402 = 3479491894LLU;
int16_t x403 = INT16_MIN;
int64_t x404 = INT64_MIN;
int32_t x406 = INT32_MIN;
volatile int16_t x408 = INT16_MIN;
int32_t t99 = INT32_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MIN;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = INT32_MAX;
	uint64_t t0 = 6500LLU;

	t0 = (x1|(x2&(x3%x4)));

	if (t0 != 4294967295LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	int16_t x6 = -1;
	uint8_t x7 = 24U;
	int16_t x8 = -1;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5|(x6&(x7%x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 5;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	int32_t x12 = INT32_MIN;
	volatile int64_t t2 = 32553831727826776LL;

	t2 = (x9|(x10&(x11%x12)));

	if (t2 != 9223372036854743045LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = 104;
	uint32_t x15 = 208212124U;
	static int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -16241338208LL;

	t3 = (x13|(x14&(x15%x16)));

	if (t3 != -32760LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 6U;
	uint32_t x19 = UINT32_MAX;
	volatile uint32_t t4 = 218653U;

	t4 = (x17|(x18&(x19%x20)));

	if (t4 != 2147483647U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -8;
	int8_t x23 = INT8_MAX;
	int64_t x24 = -1LL;
	volatile int64_t t5 = -4312108046593LL;

	t5 = (x21|(x22&(x23%x24)));

	if (t5 != -8LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -84293781;
	int8_t x28 = -1;
	volatile int32_t t6 = 193;

	t6 = (x25|(x26&(x27%x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = 1836929925601LL;
	int16_t x31 = INT16_MAX;
	static int64_t x32 = -1LL;

	t7 = (x29|(x30&(x31%x32)));

	if (t7 != -211LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	int32_t x34 = -119891312;
	int16_t x35 = INT16_MIN;
	int16_t x36 = -1;

	t8 = (x33|(x34&(x35%x36)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	uint8_t x38 = UINT8_MAX;
	static volatile int8_t x39 = INT8_MAX;
	static volatile int64_t t9 = INT64_MAX;

	t9 = (x37|(x38&(x39%x40)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x42 = -1;
	static volatile int8_t x43 = 1;
	uint16_t x44 = 21369U;
	int32_t t10 = 80451305;

	t10 = (x41|(x42&(x43%x44)));

	if (t10 != 45) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile uint8_t x47 = 88U;
	volatile int32_t x48 = -16354;
	static volatile int32_t t11 = 657;

	t11 = (x45|(x46&(x47%x48)));

	if (t11 != -32680) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = UINT64_MAX;
	static uint64_t x51 = UINT64_MAX;
	int16_t x52 = 15;
	volatile uint64_t t12 = 908748343400443975LLU;

	t12 = (x49|(x50&(x51%x52)));

	if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 2995;
	uint32_t x55 = UINT32_MAX;
	volatile uint32_t x56 = 214U;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53|(x54&(x55%x56)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	static int8_t x58 = INT8_MAX;
	volatile int32_t x59 = 7723470;
	int32_t x60 = INT32_MIN;
	static int32_t t14 = INT32_MAX;

	t14 = (x57|(x58&(x59%x60)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MAX;
	static int16_t x64 = 2274;
	volatile int64_t t15 = INT64_MAX;

	t15 = (x61|(x62&(x63%x64)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	uint16_t x66 = UINT16_MAX;
	volatile int64_t x68 = INT64_MIN;
	int64_t t16 = 388135LL;

	t16 = (x65|(x66&(x67%x68)));

	if (t16 != 2147483647LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -7;
	int16_t x70 = 93;
	int64_t x71 = INT64_MIN;
	static int64_t x72 = INT64_MAX;
	volatile int64_t t17 = -1632574205732LL;

	t17 = (x69|(x70&(x71%x72)));

	if (t17 != -3LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 22730481816540LL;
	volatile uint8_t x74 = 5U;
	uint64_t t18 = 27497691879LLU;

	t18 = (x73|(x74&(x75%x76)));

	if (t18 != 22730481816540LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -3LL;
	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MAX;
	static uint16_t x80 = UINT16_MAX;
	int64_t t19 = -678129849313133675LL;

	t19 = (x77|(x78&(x79%x80)));

	if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int32_t x82 = INT32_MIN;
	volatile uint64_t t20 = 41LLU;

	t20 = (x81|(x82&(x83%x84)));

	if (t20 != 4294967295LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	int8_t x87 = INT8_MIN;
	int16_t x88 = -1;
	volatile int32_t t21 = 626764;

	t21 = (x85|(x86&(x87%x88)));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	volatile uint64_t x90 = 834LLU;
	volatile int32_t x91 = INT32_MIN;
	uint64_t t22 = 168LLU;

	t22 = (x89|(x90&(x91%x92)));

	if (t22 != 32767LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MAX;
	static volatile int64_t x96 = -1LL;
	volatile int64_t t23 = 68171599870308LL;

	t23 = (x93|(x94&(x95%x96)));

	if (t23 != 60LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 50U;
	volatile int8_t x98 = -3;
	static int8_t x100 = -1;
	static volatile uint32_t t24 = 2073U;

	t24 = (x97|(x98&(x99%x100)));

	if (t24 != 730234U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MIN;
	static int64_t x104 = -1LL;
	volatile int64_t t25 = -21460LL;

	t25 = (x101|(x102&(x103%x104)));

	if (t25 != -103LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	int8_t x106 = 3;
	volatile uint16_t x107 = 1167U;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = (x105|(x106&(x107%x108)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = 21;
	volatile uint64_t t27 = 131745633575LLU;

	t27 = (x109|(x110&(x111%x112)));

	if (t27 != 21LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 5;
	static uint8_t x114 = 24U;
	int8_t x115 = 0;

	t28 = (x113|(x114&(x115%x116)));

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int64_t x118 = INT64_MIN;
	volatile int64_t x119 = -1799885871573LL;
	volatile int64_t x120 = INT64_MAX;
	volatile int64_t t29 = -39612538517373LL;

	t29 = (x117|(x118&(x119%x120)));

	if (t29 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	static int8_t x122 = INT8_MIN;
	int64_t x123 = -1LL;
	int32_t x124 = -1;
	volatile int64_t t30 = -4003LL;

	t30 = (x121|(x122&(x123%x124)));

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x127 = INT8_MAX;
	uint64_t x128 = 1320928381LLU;
	uint64_t t31 = 4245958302101957LLU;

	t31 = (x125|(x126&(x127%x128)));

	if (t31 != 4294967295LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	int32_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	uint8_t x132 = 3U;
	volatile uint64_t t32 = 293LLU;

	t32 = (x129|(x130&(x131%x132)));

	if (t32 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MAX;
	static int32_t x134 = 17846816;
	int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t33 = INT32_MAX;

	t33 = (x133|(x134&(x135%x136)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 0U;
	int16_t x142 = INT16_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t34 = 8143752880LLU;

	t34 = (x141|(x142&(x143%x144)));

	if (t34 != 677806080LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = UINT8_MAX;
	int64_t x146 = INT64_MAX;
	uint64_t x147 = UINT64_MAX;
	uint64_t t35 = 115043887LLU;

	t35 = (x145|(x146&(x147%x148)));

	if (t35 != 255LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	static uint8_t x150 = 0U;
	static int16_t x151 = INT16_MAX;
	static uint16_t x152 = 21411U;

	t36 = (x149|(x150&(x151%x152)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 14305729005LLU;
	int8_t x155 = 0;
	volatile uint64_t t37 = 73571LLU;

	t37 = (x153|(x154&(x155%x156)));

	if (t37 != 14305729005LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = 0;
	volatile int64_t x158 = INT64_MAX;
	static volatile int32_t x160 = INT32_MAX;
	int64_t t38 = INT64_MAX;

	t38 = (x157|(x158&(x159%x160)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x162 = 172LLU;
	int8_t x163 = -1;
	int16_t x164 = -1833;
	static uint64_t t39 = 43154735LLU;

	t39 = (x161|(x162&(x163%x164)));

	if (t39 != 18446744071562068140LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = UINT16_MAX;
	uint64_t x167 = UINT64_MAX;
	volatile uint64_t x168 = UINT64_MAX;
	uint64_t t40 = 1523260153282185253LLU;

	t40 = (x165|(x166&(x167%x168)));

	if (t40 != 65535LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = 3376;
	volatile int64_t x170 = INT64_MAX;
	int16_t x172 = INT16_MIN;
	volatile int64_t t41 = 13737LL;

	t41 = (x169|(x170&(x171%x172)));

	if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = 57;
	int64_t x175 = -1LL;
	static int64_t t42 = 19521568586545978LL;

	t42 = (x173|(x174&(x175%x176)));

	if (t42 != 255LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = INT64_MIN;
	static uint64_t x178 = UINT64_MAX;
	uint32_t x179 = UINT32_MAX;

	t43 = (x177|(x178&(x179%x180)));

	if (t43 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x182 = -1;
	static int16_t x183 = -4825;
	static uint32_t x184 = 1656506U;

	t44 = (x181|(x182&(x183%x184)));

	if (t44 != 1298943U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = UINT64_MAX;
	int64_t x186 = INT64_MIN;
	static volatile uint64_t t45 = UINT64_MAX;

	t45 = (x185|(x186&(x187%x188)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MAX;
	int16_t x190 = 0;
	uint64_t x192 = 1LLU;

	t46 = (x189|(x190&(x191%x192)));

	if (t46 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x193 = -705;
	int32_t x194 = 21;
	static volatile uint16_t x195 = 0U;
	uint32_t x196 = 2024U;
	uint32_t t47 = 72441U;

	t47 = (x193|(x194&(x195%x196)));

	if (t47 != 4294966591U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = 45;
	int16_t x199 = 10751;
	uint8_t x200 = UINT8_MAX;

	t48 = (x197|(x198&(x199%x200)));

	if (t48 != 45) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x201 = 66U;
	volatile int16_t x202 = 998;
	int32_t x203 = INT32_MIN;
	int16_t x204 = -3635;
	volatile int32_t t49 = -28;

	t49 = (x201|(x202&(x203%x204)));

	if (t49 != 66) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = 189;
	int32_t x206 = INT32_MIN;
	static int32_t x207 = -16529;
	static uint32_t x208 = 80110U;

	t50 = (x205|(x206&(x207%x208)));

	if (t50 != 189U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -494628515LL;
	volatile int64_t x210 = INT64_MAX;
	static volatile int32_t x211 = 1;
	uint16_t x212 = 1U;
	static volatile int64_t t51 = 2710395510596LL;

	t51 = (x209|(x210&(x211%x212)));

	if (t51 != -494628515LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = 6U;
	static volatile int8_t x215 = INT8_MIN;
	static int16_t x216 = 341;
	volatile int32_t t52 = -10162397;

	t52 = (x213|(x214&(x215%x216)));

	if (t52 != 6) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 508184881978LL;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MAX;
	volatile int64_t t53 = -204426456937117LL;

	t53 = (x217|(x218&(x219%x220)));

	if (t53 != 508184881982LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x222 = 4U;
	volatile int32_t x223 = -22842853;
	uint16_t x224 = UINT16_MAX;
	static int32_t t54 = 0;

	t54 = (x221|(x222&(x223%x224)));

	if (t54 != 23) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x225 = UINT16_MAX;
	int8_t x226 = -11;
	uint16_t x227 = 9447U;
	int32_t x228 = 317;

	t55 = (x225|(x226&(x227%x228)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = INT16_MAX;
	static int16_t x230 = INT16_MAX;
	uint16_t x232 = 2U;
	volatile int32_t t56 = 19695795;

	t56 = (x229|(x230&(x231%x232)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x233 = UINT32_MAX;
	int8_t x234 = -1;
	int64_t x235 = 48942LL;
	uint16_t x236 = 107U;

	t57 = (x233|(x234&(x235%x236)));

	if (t57 != 4294967295LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = 20;
	int32_t x239 = 4;
	uint32_t t58 = 125U;

	t58 = (x237|(x238&(x239%x240)));

	if (t58 != 20U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1LL;
	volatile int64_t t59 = 14287647137LL;

	t59 = (x241|(x242&(x243%x244)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x246 = 0LLU;
	int64_t x247 = INT64_MIN;
	volatile uint32_t x248 = 126412271U;

	t60 = (x245|(x246&(x247%x248)));

	if (t60 != 18446744073709550331LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = INT16_MAX;
	static uint16_t x250 = 1193U;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MAX;
	static volatile int32_t t61 = -4888;

	t61 = (x249|(x250&(x251%x252)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x253 = -2;
	int64_t x254 = INT64_MIN;

	t62 = (x253|(x254&(x255%x256)));

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = 4358798;
	int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MAX;
	volatile int32_t x260 = -2079084;
	int64_t t63 = -432358942LL;

	t63 = (x257|(x258&(x259%x260)));

	if (t63 != 4358798LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = -1LL;
	int64_t x262 = -2399305LL;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = 806;

	t64 = (x261|(x262&(x263%x264)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = UINT16_MAX;
	int32_t x266 = INT32_MAX;
	int8_t x267 = -42;
	uint64_t x268 = 9372000954712077LLU;
	volatile uint64_t t65 = 735141655678LLU;

	t65 = (x265|(x266&(x267%x268)));

	if (t65 != 1060634623LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = -1;
	int32_t x270 = INT32_MIN;
	uint32_t x271 = 134881U;

	t66 = (x269|(x270&(x271%x272)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MIN;
	int64_t x274 = INT64_MAX;
	int64_t x275 = -1LL;
	static volatile uint16_t x276 = 4U;
	volatile int64_t t67 = -9487908LL;

	t67 = (x273|(x274&(x275%x276)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MAX;
	uint64_t x278 = 6423LLU;
	static int32_t x279 = INT32_MIN;
	int16_t x280 = -1;
	uint64_t t68 = 41566006800LLU;

	t68 = (x277|(x278&(x279%x280)));

	if (t68 != 127LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x282 = INT64_MIN;
	int8_t x283 = -24;
	uint64_t x284 = UINT64_MAX;
	static uint64_t t69 = 987042155473338LLU;

	t69 = (x281|(x282&(x283%x284)));

	if (t69 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	int8_t x287 = -1;
	int64_t x288 = -4272434869175032635LL;
	volatile int64_t t70 = 1218301772LL;

	t70 = (x285|(x286&(x287%x288)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x292 = INT64_MIN;

	t71 = (x289|(x290&(x291%x292)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MAX;
	uint32_t x296 = 1U;
	int64_t t72 = INT64_MIN;

	t72 = (x293|(x294&(x295%x296)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MAX;
	int64_t x298 = INT64_MAX;
	int64_t x299 = INT64_MIN;
	static int8_t x300 = 9;

	t73 = (x297|(x298&(x299%x300)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x302 = 1U;
	uint64_t x303 = UINT64_MAX;
	volatile int64_t x304 = -39267LL;
	volatile uint64_t t74 = 25525285644301250LLU;

	t74 = (x301|(x302&(x303%x304)));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x305 = 2LLU;
	int16_t x306 = -93;
	volatile uint8_t x307 = 2U;
	volatile int16_t x308 = INT16_MIN;
	volatile uint64_t t75 = 338828LLU;

	t75 = (x305|(x306&(x307%x308)));

	if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x310 = -1LL;
	int32_t x311 = INT32_MIN;
	static uint8_t x312 = UINT8_MAX;
	int64_t t76 = -137647836LL;

	t76 = (x309|(x310&(x311%x312)));

	if (t76 != -101LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x316 = INT64_MIN;

	t77 = (x313|(x314&(x315%x316)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 0U;
	int16_t x318 = -3;
	int16_t x319 = INT16_MIN;
	int8_t x320 = -1;

	t78 = (x317|(x318&(x319%x320)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x321 = 37U;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;

	t79 = (x321|(x322&(x323%x324)));

	if (t79 != 37) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x327 = INT32_MIN;
	static int16_t x328 = -151;
	volatile int64_t t80 = 3499001603238653LL;

	t80 = (x325|(x326&(x327%x328)));

	if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x329 = INT64_MAX;
	uint64_t x330 = 15110195262LLU;
	volatile int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	volatile uint64_t t81 = 802347LLU;

	t81 = (x329|(x330&(x331%x332)));

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x334 = -423;
	uint64_t x335 = UINT64_MAX;
	int32_t x336 = INT32_MIN;
	uint64_t t82 = 2123990228716LLU;

	t82 = (x333|(x334&(x335%x336)));

	if (t82 != 2147483389LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = 1;
	int8_t x338 = -1;
	int32_t x339 = INT32_MAX;
	int64_t x340 = INT64_MAX;
	int64_t t83 = 29740881575389721LL;

	t83 = (x337|(x338&(x339%x340)));

	if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	int64_t x343 = INT64_MAX;
	static uint64_t x344 = UINT64_MAX;

	t84 = (x341|(x342&(x343%x344)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = INT16_MAX;
	uint16_t x346 = 2855U;
	int16_t x347 = INT16_MIN;
	static uint16_t x348 = 53U;
	volatile int32_t t85 = -28267;

	t85 = (x345|(x346&(x347%x348)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x349 = 1273483532LL;
	int64_t x350 = INT64_MIN;
	static int32_t x351 = 6;
	volatile int64_t t86 = -993884726LL;

	t86 = (x349|(x350&(x351%x352)));

	if (t86 != 1273483532LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x354 = UINT32_MAX;
	int64_t x355 = INT64_MAX;
	volatile int64_t t87 = 181635347604847783LL;

	t87 = (x353|(x354&(x355%x356)));

	if (t87 != 2559LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x357 = 1328U;
	int32_t x358 = INT32_MIN;
	volatile int32_t x359 = -5096;
	uint16_t x360 = UINT16_MAX;

	t88 = (x357|(x358&(x359%x360)));

	if (t88 != 2147484976U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MAX;
	volatile int16_t x363 = -795;
	uint64_t x364 = 1477878LLU;
	static volatile uint64_t t89 = 23434796722LLU;

	t89 = (x361|(x362&(x363%x364)));

	if (t89 != 9223372036854775907LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x365 = UINT32_MAX;
	uint32_t x367 = UINT32_MAX;
	volatile int8_t x368 = -1;
	static uint32_t t90 = UINT32_MAX;

	t90 = (x365|(x366&(x367%x368)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = INT32_MAX;
	uint64_t x370 = 0LLU;
	int8_t x371 = -1;
	int32_t x372 = -25443;
	uint64_t t91 = 134949LLU;

	t91 = (x369|(x370&(x371%x372)));

	if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x373 = UINT64_MAX;
	static int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	static volatile uint64_t t92 = UINT64_MAX;

	t92 = (x373|(x374&(x375%x376)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = INT64_MIN;
	volatile uint64_t x378 = 3432LLU;
	volatile uint8_t x379 = UINT8_MAX;
	volatile uint64_t t93 = 14491470904676LLU;

	t93 = (x377|(x378&(x379%x380)));

	if (t93 != 9223372036854775912LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x386 = 7U;
	int32_t x387 = -5783;
	int64_t t94 = 728454773009845056LL;

	t94 = (x385|(x386&(x387%x388)));

	if (t94 != -45691035058743LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = -132611;
	uint64_t x390 = 1677LLU;
	static volatile uint64_t t95 = 809439219242LLU;

	t95 = (x389|(x390&(x391%x392)));

	if (t95 != 18446744073709419005LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = 50U;
	static int8_t x394 = INT8_MAX;
	int16_t x395 = -3492;
	uint16_t x396 = UINT16_MAX;

	t96 = (x393|(x394&(x395%x396)));

	if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x397 = 1257;
	int8_t x398 = INT8_MAX;
	uint64_t x399 = UINT64_MAX;

	t97 = (x397|(x398&(x399%x400)));

	if (t97 != 1257LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = 0;
	volatile uint64_t t98 = 875887835581558204LLU;

	t98 = (x401|(x402&(x403%x404)));

	if (t98 != 3479470080LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MIN;
	static volatile int8_t x407 = -1;

	t99 = (x405|(x406&(x407%x408)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

