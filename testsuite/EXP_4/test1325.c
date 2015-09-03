#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = 1U;
volatile int16_t x12 = -5;
int8_t x13 = INT8_MAX;
volatile uint32_t t3 = 328872U;
int64_t x18 = INT64_MAX;
uint16_t x20 = 135U;
int32_t x21 = INT32_MIN;
int64_t t6 = INT64_MIN;
int32_t x40 = INT32_MAX;
uint64_t t11 = 6217244LLU;
uint64_t x50 = 422302LLU;
volatile uint64_t t12 = 3875737815383269238LLU;
static int32_t x57 = -1;
static volatile int8_t x64 = 0;
volatile uint8_t x65 = 3U;
int16_t x69 = -2;
uint64_t x72 = UINT64_MAX;
int64_t x78 = INT64_MIN;
volatile int32_t t20 = 20;
uint64_t x92 = 15119769LLU;
volatile uint16_t x95 = 38U;
volatile uint64_t t23 = 1464433001153314567LLU;
int64_t t24 = 14924932291LL;
static int8_t x102 = -1;
uint8_t x103 = 36U;
volatile int32_t t28 = -147;
uint16_t x129 = UINT16_MAX;
static int16_t x132 = INT16_MIN;
int64_t t32 = -245521959367365696LL;
int16_t x137 = INT16_MIN;
uint32_t x151 = UINT32_MAX;
volatile int64_t x152 = -346668069299LL;
int32_t t37 = INT32_MIN;
uint8_t x153 = UINT8_MAX;
volatile int32_t t38 = 4;
int8_t x160 = INT8_MIN;
int16_t x164 = INT16_MIN;
int32_t x170 = INT32_MIN;
uint32_t t42 = UINT32_MAX;
volatile int64_t x173 = 3978LL;
int64_t x176 = INT64_MIN;
volatile int64_t t43 = 922701LL;
int16_t x180 = -1;
int32_t t45 = INT32_MAX;
int64_t x186 = 28348042469901630LL;
volatile int64_t t46 = 119346629825431LL;
static uint8_t x189 = 3U;
static volatile int64_t t47 = -22193480182LL;
int8_t x203 = INT8_MIN;
static uint8_t x208 = 24U;
volatile int32_t x211 = INT32_MIN;
int8_t x212 = INT8_MIN;
static volatile int32_t t52 = -403887296;
volatile int64_t x213 = INT64_MIN;
int64_t x214 = INT64_MAX;
static int32_t x220 = -1;
volatile int16_t x226 = -4;
volatile int32_t t57 = -687989;
static uint32_t t58 = 1490U;
volatile int64_t x239 = -859621181504405839LL;
int32_t t59 = 28;
uint16_t x242 = UINT16_MAX;
static volatile uint16_t x245 = UINT16_MAX;
volatile int32_t x248 = INT32_MAX;
volatile int64_t x252 = INT64_MAX;
static volatile uint64_t x253 = 6232LLU;
int64_t x259 = -3844080868719LL;
int16_t x260 = -1;
volatile int32_t x263 = 52071687;
int16_t x264 = INT16_MAX;
static int32_t x266 = INT32_MIN;
static int32_t t66 = -111721;
int16_t x269 = -1;
static int8_t x272 = INT8_MIN;
uint8_t x277 = 0U;
static int32_t t70 = 0;
int32_t x288 = -11282169;
int8_t x290 = INT8_MIN;
uint8_t x294 = 2U;
int32_t x295 = -376173111;
volatile uint32_t x301 = UINT32_MAX;
uint32_t t76 = 14047U;
int16_t x312 = INT16_MIN;
volatile int16_t x316 = -1;
uint8_t x321 = 1U;
volatile int32_t x339 = INT32_MIN;
volatile uint64_t t85 = UINT64_MAX;
volatile uint64_t t86 = 191601048656501LLU;
volatile int32_t x353 = INT32_MAX;
static int32_t x355 = -1;
int32_t x360 = 278987;
volatile int32_t t89 = -184;
static uint16_t x364 = 2023U;
volatile uint16_t x385 = UINT16_MAX;
int16_t x387 = INT16_MAX;
static volatile int32_t t96 = -3117781;
int16_t x393 = -720;
int16_t x395 = -385;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static volatile int8_t x2 = 6;
	volatile int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MIN;
	int64_t t0 = INT64_MIN;

	t0 = (x1|(x2&(x3==x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x6 = UINT32_MAX;
	static uint64_t x7 = 3251452504848LLU;
	volatile int32_t x8 = INT32_MAX;
	uint32_t t1 = 1965450U;

	t1 = (x5|(x6&(x7==x8)));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int32_t x10 = -488133814;
	volatile int16_t x11 = -1;
	volatile int32_t t2 = 13256916;

	t2 = (x9|(x10&(x11==x12)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 928590779U;
	static volatile uint8_t x15 = UINT8_MAX;
	int16_t x16 = 466;

	t3 = (x13|(x14&(x15==x16)));

	if (t3 != 127U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int16_t x19 = INT16_MAX;
	static int64_t t4 = -314995785LL;

	t4 = (x17|(x18&(x19==x20)));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x22 = UINT32_MAX;
	int8_t x23 = INT8_MAX;
	uint32_t x24 = 1553556U;
	volatile uint32_t t5 = 812U;

	t5 = (x21|(x22&(x23==x24)));

	if (t5 != 2147483648U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = -535442;
	volatile uint32_t x27 = 243522U;
	volatile int16_t x28 = -1;

	t6 = (x25|(x26&(x27==x28)));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 26U;
	uint8_t x30 = UINT8_MAX;
	int64_t x31 = -1LL;
	int64_t x32 = INT64_MIN;
	volatile uint32_t t7 = 27U;

	t7 = (x29|(x30&(x31==x32)));

	if (t7 != 26U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	static int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MAX;
	volatile uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x33|(x34&(x35==x36)));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 29U;
	static volatile uint64_t x38 = 1LLU;
	uint32_t x39 = 1543U;
	static volatile uint64_t t9 = 6395265167481LLU;

	t9 = (x37|(x38&(x39==x40)));

	if (t9 != 29LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int64_t x42 = INT64_MAX;
	int32_t x43 = -1;
	volatile int32_t x44 = INT32_MAX;
	volatile int64_t t10 = INT64_MIN;

	t10 = (x41|(x42&(x43==x44)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 517297627025LLU;
	int8_t x46 = -20;
	volatile int8_t x47 = INT8_MIN;
	int64_t x48 = -1LL;

	t11 = (x45|(x46&(x47==x48)));

	if (t11 != 517297627025LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 19662061449LLU;
	int32_t x51 = -1;
	static uint16_t x52 = UINT16_MAX;

	t12 = (x49|(x50&(x51==x52)));

	if (t12 != 19662061449LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int64_t x54 = INT64_MIN;
	int16_t x55 = 457;
	uint64_t x56 = UINT64_MAX;
	static volatile int64_t t13 = 69176325LL;

	t13 = (x53|(x54&(x55==x56)));

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	volatile uint64_t x59 = UINT64_MAX;
	volatile int8_t x60 = 3;
	volatile int32_t t14 = -205568911;

	t14 = (x57|(x58&(x59==x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	static int16_t x62 = INT16_MIN;
	static int64_t x63 = INT64_MIN;
	static volatile int32_t t15 = -102804145;

	t15 = (x61|(x62&(x63==x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MAX;
	int16_t x67 = -6;
	uint64_t x68 = UINT64_MAX;
	volatile int64_t t16 = 346338705886946LL;

	t16 = (x65|(x66&(x67==x68)));

	if (t16 != 3LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -15;
	uint8_t x71 = UINT8_MAX;
	int32_t t17 = 3613060;

	t17 = (x69|(x70&(x71==x72)));

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 5545U;
	volatile uint8_t x74 = 1U;
	int16_t x75 = INT16_MIN;
	int16_t x76 = 10150;
	int32_t t18 = 10;

	t18 = (x73|(x74&(x75==x76)));

	if (t18 != 5545) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int16_t x79 = INT16_MAX;
	static volatile int16_t x80 = INT16_MAX;
	int64_t t19 = -1121046117360085307LL;

	t19 = (x77|(x78&(x79==x80)));

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	uint8_t x82 = 39U;
	int64_t x83 = 16LL;
	volatile int8_t x84 = INT8_MIN;

	t20 = (x81|(x82&(x83==x84)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x85 = UINT64_MAX;
	int32_t x86 = INT32_MAX;
	static volatile int32_t x87 = INT32_MAX;
	volatile int16_t x88 = -4;
	uint64_t t21 = UINT64_MAX;

	t21 = (x85|(x86&(x87==x88)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 56U;
	int16_t x90 = 1;
	int8_t x91 = INT8_MAX;
	int32_t t22 = 3329;

	t22 = (x89|(x90&(x91==x92)));

	if (t22 != 56) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint64_t x94 = 122533173LLU;
	int8_t x96 = 2;

	t23 = (x93|(x94&(x95==x96)));

	if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	int64_t x98 = 116650111LL;
	uint32_t x99 = 2112604614U;
	uint8_t x100 = 25U;

	t24 = (x97|(x98&(x99==x100)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = INT32_MAX;

	t25 = (x101|(x102&(x103==x104)));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MAX;
	volatile int64_t x106 = 12080858LL;
	int64_t x107 = INT64_MAX;
	int32_t x108 = 0;
	int64_t t26 = 3873496764658417LL;

	t26 = (x105|(x106&(x107==x108)));

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 2U;
	volatile int8_t x110 = INT8_MIN;
	static volatile int32_t x111 = INT32_MIN;
	uint32_t x112 = 3175542U;
	int32_t t27 = 1;

	t27 = (x109|(x110&(x111==x112)));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MAX;
	int16_t x115 = -21;
	volatile int32_t x116 = INT32_MIN;

	t28 = (x113|(x114&(x115==x116)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	static int32_t x119 = INT32_MAX;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x117|(x118&(x119==x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	uint32_t x123 = 2U;
	volatile int16_t x124 = 15;
	int64_t t30 = 8190LL;

	t30 = (x121|(x122&(x123==x124)));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	uint32_t x126 = UINT32_MAX;
	volatile int32_t x127 = -37817;
	int16_t x128 = INT16_MIN;
	volatile uint32_t t31 = 116949U;

	t31 = (x125|(x126&(x127==x128)));

	if (t31 != 127U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = 59554268171332LL;
	int8_t x131 = -1;

	t32 = (x129|(x130&(x131==x132)));

	if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 345144U;
	uint16_t x134 = 473U;
	static int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MAX;
	uint32_t t33 = 218106U;

	t33 = (x133|(x134&(x135==x136)));

	if (t33 != 345144U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MAX;
	volatile int16_t x140 = 8;
	int32_t t34 = 5417;

	t34 = (x137|(x138&(x139==x140)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = INT64_MIN;
	volatile uint64_t x142 = 18305814750801135LLU;
	int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	uint64_t t35 = 30LLU;

	t35 = (x141|(x142&(x143==x144)));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MAX;
	int8_t x146 = INT8_MAX;
	uint16_t x147 = 41U;
	volatile uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = -9020008;

	t36 = (x145|(x146&(x147==x148)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;

	t37 = (x149|(x150&(x151==x152)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MIN;
	int8_t x155 = 0;
	int16_t x156 = 95;

	t38 = (x153|(x154&(x155==x156)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	volatile int64_t x159 = -653557509440912866LL;
	int64_t t39 = 30987013427004LL;

	t39 = (x157|(x158&(x159==x160)));

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 54505LLU;
	static int32_t x162 = -1;
	uint32_t x163 = 5263U;
	volatile uint64_t t40 = 6049212954LLU;

	t40 = (x161|(x162&(x163==x164)));

	if (t40 != 54505LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MAX;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -4069;
	int64_t x168 = INT64_MIN;
	int32_t t41 = -2;

	t41 = (x165|(x166&(x167==x168)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int32_t x171 = -1;
	uint64_t x172 = 10754682LLU;

	t42 = (x169|(x170&(x171==x172)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x174 = 16678580LL;
	int8_t x175 = -62;

	t43 = (x173|(x174&(x175==x176)));

	if (t43 != 3978LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	uint64_t x178 = 12796738672885LLU;
	int8_t x179 = -10;
	static uint64_t t44 = UINT64_MAX;

	t44 = (x177|(x178&(x179==x180)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	volatile int32_t x182 = INT32_MIN;
	uint64_t x183 = UINT64_MAX;
	static int8_t x184 = INT8_MIN;

	t45 = (x181|(x182&(x183==x184)));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 162276U;
	int64_t x187 = -1LL;
	int64_t x188 = INT64_MAX;

	t46 = (x185|(x186&(x187==x188)));

	if (t46 != 162276LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MIN;
	uint64_t x191 = 1LLU;
	int64_t x192 = INT64_MIN;

	t47 = (x189|(x190&(x191==x192)));

	if (t47 != 3LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 65907;
	int8_t x194 = INT8_MIN;
	volatile int32_t x195 = -393459627;
	int32_t x196 = -14;
	int32_t t48 = -1;

	t48 = (x193|(x194&(x195==x196)));

	if (t48 != 65907) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	uint64_t x198 = 12820736514LLU;
	volatile int64_t x199 = INT64_MIN;
	uint64_t x200 = 599093688640LLU;
	uint64_t t49 = 17457612654690LLU;

	t49 = (x197|(x198&(x199==x200)));

	if (t49 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 22539;
	uint32_t x202 = 984U;
	int16_t x204 = -364;
	volatile uint32_t t50 = 13U;

	t50 = (x201|(x202&(x203==x204)));

	if (t50 != 22539U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	volatile int64_t x206 = INT64_MIN;
	int64_t x207 = -309400696LL;
	volatile int64_t t51 = -930822558LL;

	t51 = (x205|(x206&(x207==x208)));

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = UINT16_MAX;
	int32_t x210 = 5;

	t52 = (x209|(x210&(x211==x212)));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x215 = -1;
	int8_t x216 = INT8_MIN;
	int64_t t53 = INT64_MIN;

	t53 = (x213|(x214&(x215==x216)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = -4333190177044473880LL;
	int16_t x219 = INT16_MIN;
	volatile int64_t t54 = -215495028551090LL;

	t54 = (x217|(x218&(x219==x220)));

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int64_t x222 = -15648455824754263LL;
	uint16_t x223 = 4950U;
	uint8_t x224 = 20U;
	int64_t t55 = -15776203989205307LL;

	t55 = (x221|(x222&(x223==x224)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -933956013872573156LL;
	static int16_t x227 = 3544;
	int8_t x228 = 0;
	static int64_t t56 = 48912621658224LL;

	t56 = (x225|(x226&(x227==x228)));

	if (t56 != -933956013872573156LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = -7700615;
	volatile int32_t x230 = -1;
	static int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;

	t57 = (x229|(x230&(x231==x232)));

	if (t57 != -7700615) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 15035416;
	uint32_t x234 = 8608433U;
	static int16_t x235 = INT16_MIN;
	volatile int8_t x236 = -1;

	t58 = (x233|(x234&(x235==x236)));

	if (t58 != 15035416U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = 7;
	int32_t x238 = INT32_MIN;
	int64_t x240 = INT64_MIN;

	t59 = (x237|(x238&(x239==x240)));

	if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = 20;
	int16_t x243 = -1;
	int64_t x244 = -1LL;
	volatile int32_t t60 = -20303;

	t60 = (x241|(x242&(x243==x244)));

	if (t60 != 21) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 1703U;
	int8_t x247 = INT8_MIN;
	volatile int32_t t61 = 88113509;

	t61 = (x245|(x246&(x247==x248)));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MIN;
	uint32_t t62 = UINT32_MAX;

	t62 = (x249|(x250&(x251==x252)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = INT32_MIN;
	volatile uint8_t x255 = UINT8_MAX;
	static volatile uint32_t x256 = UINT32_MAX;
	volatile uint64_t t63 = 83579668512043LLU;

	t63 = (x253|(x254&(x255==x256)));

	if (t63 != 6232LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 4954777733LLU;
	static volatile uint16_t x258 = 6U;
	uint64_t t64 = 5800869LLU;

	t64 = (x257|(x258&(x259==x260)));

	if (t64 != 4954777733LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 6;
	uint16_t x262 = UINT16_MAX;
	volatile int32_t t65 = 0;

	t65 = (x261|(x262&(x263==x264)));

	if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 60U;
	volatile int16_t x267 = 491;
	int32_t x268 = -1;

	t66 = (x265|(x266&(x267==x268)));

	if (t66 != 60) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x270 = 201124470U;
	uint16_t x271 = 63U;
	uint32_t t67 = UINT32_MAX;

	t67 = (x269|(x270&(x271==x272)));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	int16_t x274 = INT16_MIN;
	int8_t x275 = -1;
	volatile int64_t x276 = INT64_MIN;
	int32_t t68 = -401545660;

	t68 = (x273|(x274&(x275==x276)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 405U;
	int16_t x279 = INT16_MIN;
	int64_t x280 = -1LL;
	int32_t t69 = 90;

	t69 = (x277|(x278&(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 0;
	int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MAX;
	int64_t x284 = 4011273LL;

	t70 = (x281|(x282&(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MAX;
	uint16_t x286 = 3U;
	int32_t x287 = INT32_MIN;
	volatile int32_t t71 = INT32_MAX;

	t71 = (x285|(x286&(x287==x288)));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	volatile int64_t x291 = INT64_MAX;
	static uint16_t x292 = UINT16_MAX;
	int32_t t72 = -6944312;

	t72 = (x289|(x290&(x291==x292)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 21U;
	int8_t x296 = 30;
	int32_t t73 = 149576;

	t73 = (x293|(x294&(x295==x296)));

	if (t73 != 21) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 15U;
	int64_t x298 = INT64_MIN;
	static int64_t x299 = INT64_MAX;
	volatile uint64_t x300 = UINT64_MAX;
	int64_t t74 = -307242369212LL;

	t74 = (x297|(x298&(x299==x300)));

	if (t74 != 15LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x302 = INT32_MIN;
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = -11;
	uint32_t t75 = UINT32_MAX;

	t75 = (x301|(x302&(x303==x304)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 73U;
	volatile uint32_t x306 = 930522U;
	volatile int32_t x307 = -7330757;
	volatile int16_t x308 = INT16_MIN;

	t76 = (x305|(x306&(x307==x308)));

	if (t76 != 73U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = 613708189;
	uint32_t x310 = 4761U;
	int16_t x311 = INT16_MIN;
	static volatile uint32_t t77 = 547947084U;

	t77 = (x309|(x310&(x311==x312)));

	if (t77 != 613708189U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -23;
	int64_t x314 = 43LL;
	int32_t x315 = -241534;
	volatile int64_t t78 = -1088055191480LL;

	t78 = (x313|(x314&(x315==x316)));

	if (t78 != -23LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 21U;
	volatile int8_t x318 = -1;
	static uint32_t x319 = UINT32_MAX;
	int8_t x320 = -1;
	static volatile int32_t t79 = 3484;

	t79 = (x317|(x318&(x319==x320)));

	if (t79 != 21) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MAX;
	int8_t x323 = -1;
	uint64_t x324 = 1136783181954LLU;
	volatile int32_t t80 = 0;

	t80 = (x321|(x322&(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 105808479620672804LL;
	int64_t x326 = INT64_MIN;
	volatile int16_t x327 = INT16_MIN;
	int8_t x328 = -1;
	static int64_t t81 = 345LL;

	t81 = (x325|(x326&(x327==x328)));

	if (t81 != 105808479620672804LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 14795012145153411LLU;
	static int32_t x330 = -1;
	static volatile int8_t x331 = INT8_MAX;
	int16_t x332 = -11123;
	uint64_t t82 = 40642831012058412LLU;

	t82 = (x329|(x330&(x331==x332)));

	if (t82 != 14795012145153411LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	volatile uint64_t x334 = 7937648147416LLU;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x333|(x334&(x335==x336)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 17810997014685932LLU;
	uint16_t x338 = 1010U;
	int64_t x340 = 2745LL;
	static uint64_t t84 = 50492655745LLU;

	t84 = (x337|(x338&(x339==x340)));

	if (t84 != 17810997014685932LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	int16_t x342 = -11;
	int32_t x343 = INT32_MAX;
	uint32_t x344 = 7U;

	t85 = (x341|(x342&(x343==x344)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = 1467;
	static uint64_t x346 = 822686140LLU;
	volatile int16_t x347 = INT16_MIN;
	uint64_t x348 = 19370642745LLU;

	t86 = (x345|(x346&(x347==x348)));

	if (t86 != 1467LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	volatile int64_t x350 = -1LL;
	int8_t x351 = -1;
	static volatile int32_t x352 = 32130592;
	volatile int64_t t87 = -1786915488191LL;

	t87 = (x349|(x350&(x351==x352)));

	if (t87 != 65535LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -1;
	static int64_t x356 = INT64_MIN;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x353|(x354&(x355==x356)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = 1;
	static int8_t x358 = INT8_MIN;
	static int16_t x359 = 0;

	t89 = (x357|(x358&(x359==x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 5U;
	int8_t x362 = INT8_MIN;
	static uint64_t x363 = UINT64_MAX;
	volatile int32_t t90 = -2635;

	t90 = (x361|(x362&(x363==x364)));

	if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x366 = -3;
	volatile int16_t x367 = INT16_MIN;
	uint16_t x368 = 7913U;
	volatile int32_t t91 = -2;

	t91 = (x365|(x366&(x367==x368)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 9943;
	static volatile int32_t x370 = -388;
	uint32_t x371 = 127U;
	int64_t x372 = INT64_MIN;
	int32_t t92 = -2157;

	t92 = (x369|(x370&(x371==x372)));

	if (t92 != 9943) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	uint16_t x374 = UINT16_MAX;
	volatile int32_t x375 = 48129561;
	int16_t x376 = INT16_MIN;
	int32_t t93 = 96;

	t93 = (x373|(x374&(x375==x376)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 309291332;
	int8_t x378 = 54;
	int16_t x379 = 48;
	int32_t x380 = -176227856;
	int32_t t94 = 0;

	t94 = (x377|(x378&(x379==x380)));

	if (t94 != 309291332) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = 427;
	static int32_t x382 = INT32_MIN;
	int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	int32_t t95 = 1517;

	t95 = (x381|(x382&(x383==x384)));

	if (t95 != 427) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = 397;
	int64_t x388 = INT64_MAX;

	t96 = (x385|(x386&(x387==x388)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 10LLU;
	volatile uint16_t x390 = 12U;
	int64_t x391 = INT64_MIN;
	static volatile int32_t x392 = -1;
	volatile uint64_t t97 = 281LLU;

	t97 = (x389|(x390&(x391==x392)));

	if (t97 != 10LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	uint64_t x396 = 13906754121LLU;
	int64_t t98 = -7498731538LL;

	t98 = (x393|(x394&(x395==x396)));

	if (t98 != -720LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	volatile int64_t x398 = INT64_MAX;
	int8_t x399 = INT8_MIN;
	int8_t x400 = 6;
	int64_t t99 = INT64_MIN;

	t99 = (x397|(x398&(x399==x400)));

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

