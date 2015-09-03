#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x8 = INT32_MIN;
int32_t x14 = INT32_MIN;
static uint64_t x15 = 1487LLU;
volatile int8_t x20 = INT8_MIN;
static int64_t t4 = INT64_MIN;
int32_t x25 = INT32_MIN;
static int32_t x29 = 1929953;
int64_t x30 = 1050402370179922LL;
int32_t x32 = INT32_MAX;
int32_t x47 = INT32_MIN;
volatile uint64_t t14 = 266187969797LLU;
volatile uint64_t t17 = 3445263834LLU;
int32_t x79 = -1;
volatile int32_t t21 = -110004;
int8_t x89 = 6;
uint32_t t24 = 335U;
volatile uint32_t x102 = UINT32_MAX;
uint8_t x104 = 7U;
static int8_t x105 = INT8_MIN;
int8_t x108 = -1;
int8_t x109 = INT8_MIN;
static volatile int64_t x110 = -1LL;
volatile uint16_t x111 = 152U;
uint32_t x114 = UINT32_MAX;
int64_t x116 = 1LL;
int16_t x118 = -1;
uint16_t x119 = 763U;
uint32_t t29 = 38007865U;
int8_t x121 = INT8_MIN;
volatile int64_t t30 = -4789651413287LL;
int32_t x128 = INT32_MAX;
uint16_t x129 = UINT16_MAX;
uint8_t x132 = 76U;
static int64_t x139 = 78380954LL;
int64_t x146 = INT64_MIN;
int32_t t36 = INT32_MAX;
int32_t t37 = 169;
int16_t x155 = INT16_MIN;
uint32_t x156 = 0U;
volatile int8_t x162 = -1;
volatile uint64_t x164 = 161LLU;
int32_t x166 = 162686;
int64_t x169 = INT64_MIN;
int64_t t42 = INT64_MIN;
uint8_t x178 = 2U;
int64_t x185 = -1LL;
uint32_t x187 = 186U;
uint64_t x198 = UINT64_MAX;
int16_t x199 = INT16_MAX;
volatile int32_t t49 = INT32_MAX;
uint64_t x202 = UINT64_MAX;
int16_t x203 = INT16_MAX;
uint8_t x215 = 4U;
volatile int64_t t53 = 59869096LL;
volatile uint64_t t54 = 283369450786463309LLU;
static uint64_t x226 = 13840LLU;
volatile int32_t t56 = 1;
volatile uint64_t x232 = UINT64_MAX;
volatile int32_t t59 = -5;
static uint64_t x244 = 248341873132610042LLU;
uint64_t t60 = 8385788063195543LLU;
uint16_t x253 = 1U;
uint64_t x262 = 1515LLU;
int16_t x265 = -1;
int64_t x271 = INT64_MIN;
uint16_t x279 = UINT16_MAX;
volatile int32_t t69 = 1559081;
int64_t x284 = 51397883519857263LL;
static volatile int64_t t70 = INT64_MIN;
int16_t x292 = INT16_MIN;
uint16_t x296 = 1U;
volatile uint64_t t73 = UINT64_MAX;
int32_t x297 = INT32_MIN;
volatile int16_t x298 = -43;
volatile int16_t x304 = 14012;
uint8_t x305 = 120U;
uint64_t t76 = 10378443246054LLU;
volatile int32_t x309 = -3650447;
int32_t x310 = INT32_MIN;
int32_t t77 = 494;
static int64_t x317 = INT64_MIN;
static uint32_t x321 = UINT32_MAX;
int64_t x323 = INT64_MAX;
volatile int16_t x325 = INT16_MIN;
static uint8_t x327 = UINT8_MAX;
int64_t x329 = INT64_MIN;
int16_t x339 = INT16_MAX;
int16_t x341 = 636;
int8_t x351 = INT8_MIN;
int16_t x352 = -5;
int16_t x356 = -1;
int32_t x362 = INT32_MIN;
uint64_t t91 = 2720631508722LLU;
static int32_t x372 = INT32_MIN;
int32_t t92 = INT32_MAX;
static int32_t x375 = 0;
int32_t x376 = INT32_MIN;
int64_t t94 = -15048LL;
static int32_t x381 = 26;
static int8_t x383 = -1;
static int64_t x385 = 2061985192251512103LL;
int64_t t96 = -10585114511LL;
uint64_t x391 = UINT64_MAX;
int32_t x396 = INT32_MAX;
volatile int16_t x397 = INT16_MAX;
int32_t x399 = INT32_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint32_t x2 = UINT32_MAX;
	static uint16_t x3 = 1273U;
	int64_t x4 = -1LL;
	int64_t t0 = 277LL;

	t0 = (x1-((x2==x3)&x4));

	if (t0 != 65535LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 22;
	static int16_t x6 = -1;
	volatile int8_t x7 = INT8_MAX;
	int32_t t1 = 0;

	t1 = (x5-((x6==x7)&x8));

	if (t1 != 22) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -2;
	volatile int32_t x10 = INT32_MIN;
	uint32_t x11 = 0U;
	static volatile uint8_t x12 = 0U;
	volatile int32_t t2 = -414215;

	t2 = (x9-((x10==x11)&x12));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x16 = INT8_MAX;
	static int64_t t3 = INT64_MIN;

	t3 = (x13-((x14==x15)&x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint16_t x18 = 161U;
	uint8_t x19 = 4U;

	t4 = (x17-((x18==x19)&x20));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 2;
	uint64_t x22 = 739LLU;
	volatile int16_t x23 = INT16_MAX;
	static int8_t x24 = 62;
	volatile int32_t t5 = 868192;

	t5 = (x21-((x22==x23)&x24));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x26 = 0U;
	int32_t x27 = INT32_MIN;
	static int32_t x28 = -1;
	int32_t t6 = INT32_MIN;

	t6 = (x25-((x26==x27)&x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x31 = 5U;
	int32_t t7 = -4979;

	t7 = (x29-((x30==x31)&x32));

	if (t7 != 1929953) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 2;
	int32_t x34 = 10;
	volatile int16_t x35 = INT16_MAX;
	uint8_t x36 = 4U;
	volatile int32_t t8 = -11;

	t8 = (x33-((x34==x35)&x36));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = -1;
	int64_t x38 = INT64_MIN;
	int64_t x39 = 79458048LL;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 47;

	t9 = (x37-((x38==x39)&x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 5190U;
	int16_t x42 = INT16_MIN;
	uint32_t x43 = 17877U;
	int16_t x44 = -1;
	static volatile int32_t t10 = 13;

	t10 = (x41-((x42==x43)&x44));

	if (t10 != 5190) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	static volatile int32_t x46 = INT32_MAX;
	static uint8_t x48 = 1U;
	int32_t t11 = 3008;

	t11 = (x45-((x46==x47)&x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	uint8_t x50 = 1U;
	int64_t x51 = INT64_MAX;
	volatile uint8_t x52 = 125U;
	volatile int32_t t12 = -1204;

	t12 = (x49-((x50==x51)&x52));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = 682U;
	uint64_t x56 = 899048545599LLU;
	uint64_t t13 = UINT64_MAX;

	t13 = (x53-((x54==x55)&x56));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 16329LLU;
	int16_t x58 = INT16_MAX;
	int64_t x59 = -1LL;
	uint16_t x60 = 14410U;

	t14 = (x57-((x58==x59)&x60));

	if (t14 != 16329LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 250451152435971LLU;
	volatile uint64_t x62 = UINT64_MAX;
	int64_t x63 = 97162152189172LL;
	int32_t x64 = -1;
	volatile uint64_t t15 = 2724036573947396004LLU;

	t15 = (x61-((x62==x63)&x64));

	if (t15 != 250451152435971LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	static volatile int32_t x66 = INT32_MIN;
	static int8_t x67 = INT8_MAX;
	int32_t x68 = 13688663;
	volatile int32_t t16 = -193;

	t16 = (x65-((x66==x67)&x68));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	static int32_t x70 = INT32_MAX;
	int16_t x71 = -1;
	static uint64_t x72 = 21934573124789LLU;

	t17 = (x69-((x70==x71)&x72));

	if (t17 != 2147483647LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = 47;
	uint64_t x75 = 29512111068LLU;
	uint16_t x76 = 110U;
	static volatile int32_t t18 = 2752;

	t18 = (x73-((x74==x75)&x76));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -576;
	volatile int8_t x78 = INT8_MIN;
	int16_t x80 = -1;
	static int32_t t19 = 688897;

	t19 = (x77-((x78==x79)&x80));

	if (t19 != -576) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MIN;
	int16_t x82 = -1;
	static volatile uint64_t x83 = UINT64_MAX;
	int32_t x84 = -7602130;
	volatile int32_t t20 = 53;

	t20 = (x81-((x82==x83)&x84));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x86 = -121;
	uint64_t x87 = UINT64_MAX;
	volatile int32_t x88 = INT32_MIN;

	t21 = (x85-((x86==x87)&x88));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = 3100U;
	int16_t x91 = -1;
	int64_t x92 = INT64_MAX;
	int64_t t22 = 1095036610963652LL;

	t22 = (x89-((x90==x91)&x92));

	if (t22 != 6LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int16_t x94 = INT16_MIN;
	int8_t x95 = 11;
	int64_t x96 = INT64_MAX;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x93-((x94==x95)&x96));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x97 = 366446U;
	static uint8_t x98 = 7U;
	volatile int32_t x99 = -1;
	int8_t x100 = -1;

	t24 = (x97-((x98==x99)&x100));

	if (t24 != 366446U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 208LLU;
	int16_t x103 = -1;
	volatile uint64_t t25 = 11281104881959223LLU;

	t25 = (x101-((x102==x103)&x104));

	if (t25 != 207LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = 766;
	volatile int32_t x107 = 477710;
	static volatile int32_t t26 = -246438777;

	t26 = (x105-((x106==x107)&x108));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x112 = -1;
	volatile int32_t t27 = 70510;

	t27 = (x109-((x110==x111)&x112));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 2308130U;
	uint64_t x115 = 678448668LLU;
	volatile int64_t t28 = 207883022LL;

	t28 = (x113-((x114==x115)&x116));

	if (t28 != 2308130LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x117 = 105U;
	static volatile int16_t x120 = 13;

	t29 = (x117-((x118==x119)&x120));

	if (t29 != 105U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -1;
	uint64_t x123 = 132913625LLU;
	int64_t x124 = -1LL;

	t30 = (x121-((x122==x123)&x124));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 0U;
	uint16_t x126 = 121U;
	uint16_t x127 = UINT16_MAX;
	volatile int32_t t31 = 448;

	t31 = (x125-((x126==x127)&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x130 = INT32_MAX;
	int8_t x131 = INT8_MAX;
	static int32_t t32 = 0;

	t32 = (x129-((x130==x131)&x132));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MAX;
	static uint32_t x134 = 2985733U;
	volatile uint32_t x135 = UINT32_MAX;
	volatile uint64_t x136 = 958LLU;
	uint64_t t33 = 293893LLU;

	t33 = (x133-((x134==x135)&x136));

	if (t33 != 127LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 5U;
	volatile int8_t x138 = INT8_MIN;
	volatile int8_t x140 = 1;
	int32_t t34 = -462492;

	t34 = (x137-((x138==x139)&x140));

	if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = 1524700LL;
	int16_t x144 = INT16_MAX;
	static int32_t t35 = 1;

	t35 = (x141-((x142==x143)&x144));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MAX;
	int16_t x147 = -1;
	uint8_t x148 = UINT8_MAX;

	t36 = (x145-((x146==x147)&x148));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 2;
	static volatile uint8_t x150 = 10U;
	uint64_t x151 = 9161978413794798931LLU;
	int32_t x152 = -1;

	t37 = (x149-((x150==x151)&x152));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	uint16_t x154 = UINT16_MAX;
	static uint32_t t38 = 30U;

	t38 = (x153-((x154==x155)&x156));

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = 2U;
	int64_t x158 = -152181LL;
	uint64_t x159 = UINT64_MAX;
	static int16_t x160 = INT16_MIN;
	uint32_t t39 = 185308U;

	t39 = (x157-((x158==x159)&x160));

	if (t39 != 2U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int32_t x163 = -8160522;
	static uint64_t t40 = 1279237398824697LLU;

	t40 = (x161-((x162==x163)&x164));

	if (t40 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int16_t x167 = -1;
	static uint64_t x168 = 104LLU;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x165-((x166==x167)&x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 1U;
	uint16_t x172 = 683U;

	t42 = (x169-((x170==x171)&x172));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int16_t x175 = -1;
	uint16_t x176 = 2016U;
	volatile int32_t t43 = 224844;

	t43 = (x173-((x174==x175)&x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MAX;
	int16_t x179 = INT16_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = -114;

	t44 = (x177-((x178==x179)&x180));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	int32_t x182 = INT32_MIN;
	uint64_t x183 = 1LLU;
	volatile uint8_t x184 = UINT8_MAX;
	volatile int64_t t45 = INT64_MAX;

	t45 = (x181-((x182==x183)&x184));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x186 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	static volatile int64_t t46 = -1673861123235LL;

	t46 = (x185-((x186==x187)&x188));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = -1;
	int64_t x191 = INT64_MAX;
	static int64_t x192 = INT64_MIN;
	volatile int64_t t47 = -1068310LL;

	t47 = (x189-((x190==x191)&x192));

	if (t47 != 2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 1;
	int64_t x194 = INT64_MAX;
	int16_t x195 = -22;
	volatile int32_t x196 = -1;
	int32_t t48 = 47500;

	t48 = (x193-((x194==x195)&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	volatile int32_t x200 = INT32_MIN;

	t49 = (x197-((x198==x199)&x200));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int32_t x204 = -1;
	static volatile int64_t t50 = INT64_MIN;

	t50 = (x201-((x202==x203)&x204));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = 0;
	volatile int16_t x206 = -1;
	static uint32_t x207 = UINT32_MAX;
	int64_t x208 = -10403942897LL;
	volatile int64_t t51 = 564294002803169LL;

	t51 = (x205-((x206==x207)&x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = INT64_MIN;
	volatile int64_t x210 = -127635573005021LL;
	volatile int16_t x211 = INT16_MIN;
	volatile uint16_t x212 = UINT16_MAX;
	volatile int64_t t52 = INT64_MIN;

	t52 = (x209-((x210==x211)&x212));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	int16_t x214 = 0;
	static int64_t x216 = INT64_MAX;

	t53 = (x213-((x214==x215)&x216));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -6;
	int32_t x218 = -209246;
	int8_t x219 = -1;
	uint64_t x220 = 9074LLU;

	t54 = (x217-((x218==x219)&x220));

	if (t54 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 100924280U;
	int32_t x222 = INT32_MIN;
	static uint32_t x223 = 11891713U;
	int16_t x224 = INT16_MIN;
	uint32_t t55 = 9084065U;

	t55 = (x221-((x222==x223)&x224));

	if (t55 != 100924280U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -27014;
	uint32_t x227 = 1U;
	uint16_t x228 = UINT16_MAX;

	t56 = (x225-((x226==x227)&x228));

	if (t56 != -27014) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	static int8_t x230 = -1;
	static int16_t x231 = INT16_MIN;
	volatile uint64_t t57 = 833151378905670LLU;

	t57 = (x229-((x230==x231)&x232));

	if (t57 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = -15;
	int32_t x235 = INT32_MIN;
	static uint32_t x236 = 102U;
	static volatile int64_t t58 = INT64_MIN;

	t58 = (x233-((x234==x235)&x236));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	volatile uint64_t x238 = 147799170906LLU;
	volatile int32_t x239 = -1;
	int32_t x240 = 1;

	t59 = (x237-((x238==x239)&x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int64_t x242 = -1LL;
	uint32_t x243 = UINT32_MAX;

	t60 = (x241-((x242==x243)&x244));

	if (t60 != 255LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MAX;
	uint64_t x247 = 261985890220893104LLU;
	volatile int32_t x248 = -765841649;
	static volatile uint64_t t61 = UINT64_MAX;

	t61 = (x245-((x246==x247)&x248));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -5;
	uint64_t x250 = 100963750503LLU;
	static uint16_t x251 = 965U;
	static volatile uint8_t x252 = 5U;
	volatile int32_t t62 = -10;

	t62 = (x249-((x250==x251)&x252));

	if (t62 != -5) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x254 = -167936287404940195LL;
	int8_t x255 = INT8_MAX;
	uint64_t x256 = 50174876597LLU;
	uint64_t t63 = 52905LLU;

	t63 = (x253-((x254==x255)&x256));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 1910;
	volatile int8_t x258 = 28;
	int64_t x259 = 133154675559497073LL;
	int8_t x260 = INT8_MAX;
	int32_t t64 = -800;

	t64 = (x257-((x258==x259)&x260));

	if (t64 != 1910) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -3786;
	int8_t x263 = INT8_MIN;
	int64_t x264 = 9LL;
	volatile int64_t t65 = 28120510185257LL;

	t65 = (x261-((x262==x263)&x264));

	if (t65 != -3786LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x266 = 252638545463116LLU;
	volatile int32_t x267 = -11;
	int64_t x268 = INT64_MIN;
	int64_t t66 = 134736058114LL;

	t66 = (x265-((x266==x267)&x268));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -23;
	int32_t x270 = -76266262;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -1559;

	t67 = (x269-((x270==x271)&x272));

	if (t67 != -23) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 589842693664073030LLU;
	volatile uint16_t x274 = 2U;
	volatile int16_t x275 = INT16_MIN;
	int8_t x276 = 4;
	volatile uint64_t t68 = 855110993LLU;

	t68 = (x273-((x274==x275)&x276));

	if (t68 != 589842693664073030LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = 1;
	uint64_t x278 = 229LLU;
	uint16_t x280 = UINT16_MAX;

	t69 = (x277-((x278==x279)&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static int32_t x282 = 28;
	int32_t x283 = INT32_MAX;

	t70 = (x281-((x282==x283)&x284));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 1LLU;
	volatile int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	uint16_t x288 = 10U;
	uint64_t t71 = 2542680104883329661LLU;

	t71 = (x285-((x286==x287)&x288));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = 18LL;
	uint16_t x290 = 895U;
	int32_t x291 = INT32_MIN;
	volatile int64_t t72 = 497217188587428763LL;

	t72 = (x289-((x290==x291)&x292));

	if (t72 != 18LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	static int32_t x294 = INT32_MAX;
	static uint32_t x295 = 127438491U;

	t73 = (x293-((x294==x295)&x296));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x299 = 12;
	static int8_t x300 = -1;
	volatile int32_t t74 = INT32_MIN;

	t74 = (x297-((x298==x299)&x300));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -503929677789459LL;
	static uint32_t x302 = UINT32_MAX;
	int64_t x303 = -1LL;
	static int64_t t75 = -7288LL;

	t75 = (x301-((x302==x303)&x304));

	if (t75 != -503929677789459LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x306 = 31;
	static int32_t x307 = INT32_MAX;
	uint64_t x308 = UINT64_MAX;

	t76 = (x305-((x306==x307)&x308));

	if (t76 != 120LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x311 = 16186270402396LLU;
	volatile int32_t x312 = INT32_MAX;

	t77 = (x309-((x310==x311)&x312));

	if (t77 != -3650447) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x313 = INT8_MIN;
	volatile int64_t x314 = INT64_MIN;
	static int16_t x315 = 2346;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 37063473;

	t78 = (x313-((x314==x315)&x316));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = -111716782LL;
	static uint8_t x319 = UINT8_MAX;
	volatile uint64_t x320 = UINT64_MAX;
	volatile uint64_t t79 = 810067674381LLU;

	t79 = (x317-((x318==x319)&x320));

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = INT64_MAX;
	uint16_t x324 = UINT16_MAX;
	volatile uint32_t t80 = 88152U;

	t80 = (x321-((x322==x323)&x324));

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x326 = 10130785145LLU;
	int64_t x328 = INT64_MIN;
	static volatile int64_t t81 = -1LL;

	t81 = (x325-((x326==x327)&x328));

	if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MAX;
	int32_t x331 = INT32_MIN;
	int64_t x332 = INT64_MAX;
	int64_t t82 = INT64_MIN;

	t82 = (x329-((x330==x331)&x332));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int64_t x334 = 321872594773016696LL;
	int64_t x335 = INT64_MIN;
	static int16_t x336 = 1;
	int32_t t83 = 3;

	t83 = (x333-((x334==x335)&x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = -994810;
	int32_t x340 = -1;
	static int32_t t84 = -344474;

	t84 = (x337-((x338==x339)&x340));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x342 = 10413LL;
	uint8_t x343 = 23U;
	int8_t x344 = -2;
	static int32_t t85 = 2405;

	t85 = (x341-((x342==x343)&x344));

	if (t85 != 636) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = UINT16_MAX;
	uint32_t x346 = 4699U;
	int8_t x347 = 1;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = -74001;

	t86 = (x345-((x346==x347)&x348));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = 4;
	uint64_t x350 = 104544LLU;
	volatile int32_t t87 = -186;

	t87 = (x349-((x350==x351)&x352));

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 858;
	int8_t x354 = INT8_MAX;
	uint64_t x355 = 369465399606089LLU;
	static volatile int32_t t88 = -83721488;

	t88 = (x353-((x354==x355)&x356));

	if (t88 != 858) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 11685075LLU;
	int16_t x358 = INT16_MIN;
	static int8_t x359 = INT8_MIN;
	int32_t x360 = INT32_MIN;
	volatile uint64_t t89 = 569677710314172756LLU;

	t89 = (x357-((x358==x359)&x360));

	if (t89 != 11685075LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -1;
	uint64_t x363 = 0LLU;
	int64_t x364 = INT64_MAX;
	int64_t t90 = -110628LL;

	t90 = (x361-((x362==x363)&x364));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 6212LLU;
	volatile uint16_t x366 = UINT16_MAX;
	int64_t x367 = INT64_MIN;
	uint16_t x368 = 1090U;

	t91 = (x365-((x366==x367)&x368));

	if (t91 != 6212LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	volatile int32_t x370 = -1;
	int8_t x371 = -1;

	t92 = (x369-((x370==x371)&x372));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 1U;
	int64_t x374 = INT64_MIN;
	int32_t t93 = 1534284;

	t93 = (x373-((x374==x375)&x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 2084LL;
	int64_t x378 = INT64_MIN;
	static volatile uint16_t x379 = UINT16_MAX;
	static int16_t x380 = INT16_MIN;

	t94 = (x377-((x378==x379)&x380));

	if (t94 != 2084LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	int64_t x384 = INT64_MIN;
	int64_t t95 = 23245290LL;

	t95 = (x381-((x382==x383)&x384));

	if (t95 != 26LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MAX;
	int32_t x387 = -99848503;
	int64_t x388 = -1506LL;

	t96 = (x385-((x386==x387)&x388));

	if (t96 != 2061985192251512103LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -1;
	int32_t x390 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;
	uint64_t t97 = UINT64_MAX;

	t97 = (x389-((x390==x391)&x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 12;
	int8_t x394 = INT8_MIN;
	int32_t x395 = -1;
	static int32_t t98 = -46486;

	t98 = (x393-((x394==x395)&x396));

	if (t98 != 12) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x398 = -1;
	int16_t x400 = 1505;
	volatile int32_t t99 = -6;

	t99 = (x397-((x398==x399)&x400));

	if (t99 != 32767) { NG(); } else { ; }
	
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

