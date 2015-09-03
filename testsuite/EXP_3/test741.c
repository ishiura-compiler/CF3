#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 101U;
static int64_t x2 = 32453489628340372LL;
volatile int64_t t0 = -155475267LL;
int8_t x15 = -2;
int64_t x17 = INT64_MIN;
static int32_t x19 = -47166;
uint32_t x22 = 757379U;
static int8_t x23 = INT8_MAX;
static int8_t x25 = 3;
int8_t x26 = 7;
int64_t x30 = INT64_MIN;
int8_t x31 = INT8_MIN;
uint8_t x32 = UINT8_MAX;
static int64_t t6 = 164681883524392LL;
uint16_t x33 = 0U;
int32_t x34 = -103;
static uint8_t x35 = UINT8_MAX;
volatile int32_t x44 = INT32_MIN;
uint8_t x52 = 71U;
int32_t x53 = 7;
int8_t x60 = 15;
static uint16_t x61 = UINT16_MAX;
int64_t x62 = INT64_MAX;
uint8_t x64 = UINT8_MAX;
static uint32_t x67 = 91127U;
int64_t t16 = -383432423279562703LL;
uint16_t x75 = 2U;
volatile int64_t x76 = -1LL;
static int64_t t17 = -92990455097LL;
int8_t x77 = -1;
int16_t x80 = INT16_MAX;
int8_t x82 = 34;
static int64_t x83 = -1LL;
static volatile uint8_t x90 = UINT8_MAX;
static uint16_t x93 = 1U;
int32_t t22 = 44;
static int8_t x98 = INT8_MIN;
int8_t x102 = 1;
int32_t x115 = INT32_MIN;
int32_t x123 = INT32_MIN;
volatile uint32_t t29 = 177920U;
int64_t x125 = -1LL;
int64_t x127 = -1LL;
int64_t x131 = INT64_MIN;
static int32_t x133 = INT32_MAX;
int8_t x135 = 0;
static int8_t x137 = INT8_MAX;
volatile int64_t t33 = 62LL;
int64_t x148 = INT64_MIN;
int16_t x160 = 2345;
volatile int64_t t40 = 619977722707683291LL;
uint64_t x178 = UINT64_MAX;
uint64_t x180 = UINT64_MAX;
static uint8_t x185 = 43U;
int16_t x186 = INT16_MAX;
volatile int32_t x195 = -1;
uint8_t x196 = 15U;
int64_t t46 = 3156603605447724LL;
int8_t x201 = 29;
uint8_t x211 = UINT8_MAX;
uint64_t t50 = 8596904733101LLU;
static volatile int16_t x218 = -1;
int8_t x221 = -1;
static int16_t x222 = -1;
int64_t x223 = INT64_MIN;
int32_t x228 = INT32_MIN;
int64_t t55 = -591155LL;
int32_t x237 = INT32_MIN;
volatile int32_t x241 = INT32_MIN;
static uint8_t x246 = 3U;
volatile uint64_t x247 = UINT64_MAX;
static int32_t x249 = INT32_MIN;
uint64_t x257 = 15LLU;
int16_t x258 = -1;
uint8_t x261 = 12U;
int32_t x265 = INT32_MAX;
static int8_t x279 = INT8_MIN;
static int8_t x280 = INT8_MAX;
int64_t t65 = 436211LL;
int16_t x281 = -14;
int32_t x283 = INT32_MIN;
int32_t t66 = -1;
uint16_t x285 = 43U;
int32_t x296 = INT32_MIN;
volatile uint8_t x299 = 46U;
int32_t x300 = INT32_MAX;
static int32_t x302 = -61120;
volatile uint32_t x306 = UINT32_MAX;
int32_t x307 = INT32_MAX;
static int32_t x309 = INT32_MIN;
int64_t x319 = INT64_MAX;
volatile uint64_t x320 = 289123271419395341LLU;
int64_t x321 = INT64_MAX;
int8_t x325 = INT8_MAX;
volatile uint64_t t77 = 3959526104159480LLU;
uint64_t x329 = 29815LLU;
int32_t x336 = INT32_MIN;
uint64_t t79 = 29288413630629LLU;
uint64_t x339 = UINT64_MAX;
volatile uint64_t t80 = 494LLU;
int32_t x341 = -1;
int64_t x346 = INT64_MIN;
static volatile int8_t x350 = INT8_MAX;
int16_t x356 = -1;
volatile uint16_t x360 = 9U;
volatile int64_t x367 = INT64_MIN;
int8_t x373 = 7;
int16_t x374 = 5;
int32_t x382 = 10914898;
int8_t x383 = -1;
volatile int64_t x384 = -50269LL;
volatile uint16_t x387 = UINT16_MAX;
static int16_t x388 = -23;
volatile uint32_t t92 = 976U;
uint16_t x393 = UINT16_MAX;
volatile int16_t x396 = INT16_MIN;
static volatile int64_t x399 = -1LL;
uint32_t x417 = 2434U;
volatile int64_t t99 = 2430638LL;


void f0(void) {
	volatile int32_t x3 = -1;
	volatile int64_t x4 = INT64_MIN;

	t0 = ((x1%x2)^(x3%x4));

	if (t0 != -102LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	uint64_t x6 = 608868035059LLU;
	volatile int8_t x7 = INT8_MAX;
	int64_t x8 = INT64_MAX;
	volatile uint64_t t1 = 31LLU;

	t1 = ((x5%x6)^(x7%x8));

	if (t1 != 365511300664LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = UINT16_MAX;
	volatile int32_t x14 = -1;
	uint32_t x16 = UINT32_MAX;
	volatile uint32_t t2 = 18118U;

	t2 = ((x13%x14)^(x15%x16));

	if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = 17;
	int32_t x20 = -1;
	int64_t t3 = -874777710LL;

	t3 = ((x17%x18)^(x19%x20));

	if (t3 != -9LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int16_t x24 = 118;
	volatile uint32_t t4 = 21U;

	t4 = ((x21%x22)^(x23%x24));

	if (t4 != 628231U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x27 = UINT16_MAX;
	static uint16_t x28 = 11100U;
	int32_t t5 = 0;

	t5 = ((x25%x26)^(x27%x28));

	if (t5 != 10032) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x29 = -1;

	t6 = ((x29%x30)^(x31%x32));

	if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x36 = 130756397LLU;
	volatile uint64_t t7 = 993336851929378678LLU;

	t7 = ((x33%x34)^(x35%x36));

	if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	static uint8_t x39 = 13U;
	int32_t x40 = 6834071;
	volatile int32_t t8 = -187;

	t8 = ((x37%x38)^(x39%x40));

	if (t8 != -115) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	uint32_t x42 = UINT32_MAX;
	volatile int16_t x43 = 1;
	uint32_t t9 = 12U;

	t9 = ((x41%x42)^(x43%x44));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MIN;
	uint64_t x46 = UINT64_MAX;
	int32_t x47 = INT32_MIN;
	static int32_t x48 = 62;
	volatile uint64_t t10 = 969127804587339432LLU;

	t10 = ((x45%x46)^(x47%x48));

	if (t10 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 19U;
	uint64_t x50 = 134752055481LLU;
	static uint8_t x51 = UINT8_MAX;
	volatile uint64_t t11 = 42361629579124219LLU;

	t11 = ((x49%x50)^(x51%x52));

	if (t11 != 57LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = INT32_MIN;
	volatile int64_t x55 = INT64_MIN;
	volatile uint16_t x56 = UINT16_MAX;
	int64_t t12 = 14433568208319312LL;

	t12 = ((x53%x54)^(x55%x56));

	if (t12 != -32761LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int32_t x58 = 60;
	static uint32_t x59 = 718952290U;
	static int64_t t13 = -270LL;

	t13 = ((x57%x58)^(x59%x60));

	if (t13 != -14LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x63 = INT32_MIN;
	volatile int64_t t14 = 10302708495853LL;

	t14 = ((x61%x62)^(x63%x64));

	if (t14 != -65409LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t15 = 866730863LLU;

	t15 = ((x65%x66)^(x67%x68));

	if (t15 != 91127LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MIN;
	uint8_t x70 = 2U;
	int64_t x71 = -861611599222948530LL;
	int64_t x72 = INT64_MIN;

	t16 = ((x69%x70)^(x71%x72));

	if (t16 != -861611599222948530LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = 1;
	int8_t x74 = INT8_MAX;

	t17 = ((x73%x74)^(x75%x76));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x78 = INT16_MAX;
	static int64_t x79 = INT64_MIN;
	volatile int64_t t18 = -1920116733012527444LL;

	t18 = ((x77%x78)^(x79%x80));

	if (t18 != 7LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t19 = 58479197517LL;

	t19 = ((x81%x82)^(x83%x84));

	if (t19 != -26LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	int16_t x86 = 1540;
	int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	int32_t t20 = 212233;

	t20 = ((x85%x86)^(x87%x88));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 234492756560278LL;
	volatile uint16_t x91 = 1648U;
	int16_t x92 = INT16_MIN;
	volatile int64_t t21 = -328LL;

	t21 = ((x89%x90)^(x91%x92));

	if (t21 != 1593LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = -1;
	int32_t x95 = 27631309;
	int16_t x96 = INT16_MIN;

	t22 = ((x93%x94)^(x95%x96));

	if (t22 != 7885) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 6675U;
	int64_t x99 = INT64_MIN;
	uint32_t x100 = 1746U;
	static volatile int64_t t23 = 132058295305536LL;

	t23 = ((x97%x98)^(x99%x100));

	if (t23 != -1321LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	volatile int64_t x103 = INT64_MIN;
	int32_t x104 = -1;
	volatile uint64_t t24 = 5578903961666LLU;

	t24 = ((x101%x102)^(x103%x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 10378U;
	int16_t x106 = INT16_MIN;
	int64_t x107 = -847006829882625538LL;
	static int16_t x108 = -98;
	static int64_t t25 = 3680LL;

	t25 = ((x105%x106)^(x107%x108));

	if (t25 != -10386LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = 54;
	uint64_t x110 = 1860LLU;
	int8_t x111 = -1;
	volatile int64_t x112 = INT64_MAX;
	volatile uint64_t t26 = 222990621259589LLU;

	t26 = ((x109%x110)^(x111%x112));

	if (t26 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 19277582U;
	int32_t x114 = INT32_MIN;
	static uint8_t x116 = UINT8_MAX;
	static volatile uint32_t t27 = 26889U;

	t27 = ((x113%x114)^(x115%x116));

	if (t27 != 4275689614U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1956773;
	int32_t x118 = -1;
	int8_t x119 = INT8_MAX;
	static uint16_t x120 = UINT16_MAX;
	int32_t t28 = 1;

	t28 = ((x117%x118)^(x119%x120));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	static uint32_t x122 = UINT32_MAX;
	int8_t x124 = INT8_MIN;

	t29 = ((x121%x122)^(x123%x124));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x126 = UINT64_MAX;
	int16_t x128 = -1587;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = ((x125%x126)^(x127%x128));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	volatile int16_t x130 = 275;
	int64_t x132 = -463554851689LL;
	static int64_t t31 = -37187LL;

	t31 = ((x129%x130)^(x131%x132));

	if (t31 != -292830416777LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x134 = UINT32_MAX;
	int32_t x136 = INT32_MAX;
	uint32_t t32 = 74U;

	t32 = ((x133%x134)^(x135%x136));

	if (t32 != 2147483647U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x138 = 451976600U;
	volatile int32_t x139 = 3484463;
	volatile int64_t x140 = INT64_MIN;

	t33 = ((x137%x138)^(x139%x140));

	if (t33 != 3484496LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 58U;
	static volatile int32_t x142 = -1;
	volatile int32_t x143 = INT32_MIN;
	uint16_t x144 = 33U;
	int32_t t34 = 38784138;

	t34 = ((x141%x142)^(x143%x144));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = UINT64_MAX;
	uint32_t x146 = UINT32_MAX;
	int8_t x147 = -1;
	uint64_t t35 = UINT64_MAX;

	t35 = ((x145%x146)^(x147%x148));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	uint32_t x151 = 8133U;
	int16_t x152 = INT16_MIN;
	static int64_t t36 = 10LL;

	t36 = ((x149%x150)^(x151%x152));

	if (t36 != -8123LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = 1661919U;
	uint16_t x154 = 1259U;
	int64_t x155 = 53264LL;
	int8_t x156 = -1;
	volatile int64_t t37 = 123LL;

	t37 = ((x153%x154)^(x155%x156));

	if (t37 != 39LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x157 = 130U;
	static uint32_t x158 = 179352025U;
	uint16_t x159 = 0U;
	static uint32_t t38 = 1U;

	t38 = ((x157%x158)^(x159%x160));

	if (t38 != 130U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = 27;
	static int16_t x162 = INT16_MAX;
	int32_t x163 = -196257382;
	int8_t x164 = INT8_MIN;
	int32_t t39 = 1280784;

	t39 = ((x161%x162)^(x163%x164));

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x173 = -1;
	int64_t x174 = INT64_MIN;
	volatile int8_t x175 = INT8_MIN;
	volatile int32_t x176 = INT32_MAX;

	t40 = ((x173%x174)^(x175%x176));

	if (t40 != 127LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x177 = 480LLU;
	volatile int32_t x179 = INT32_MIN;
	uint64_t t41 = 4273832336100379744LLU;

	t41 = ((x177%x178)^(x179%x180));

	if (t41 != 18446744071562068448LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = 4U;
	int64_t x182 = -1LL;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MIN;
	volatile int64_t t42 = 757624674863590LL;

	t42 = ((x181%x182)^(x183%x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x187 = UINT32_MAX;
	int16_t x188 = -2;
	volatile uint32_t t43 = 158162181U;

	t43 = ((x185%x186)^(x187%x188));

	if (t43 != 42U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int64_t x190 = INT64_MAX;
	int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MAX;
	volatile int64_t t44 = -159LL;

	t44 = ((x189%x190)^(x191%x192));

	if (t44 != -65535LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MAX;
	uint64_t x194 = 163835071852887894LLU;
	uint64_t t45 = 616LLU;

	t45 = ((x193%x194)^(x195%x196));

	if (t45 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MAX;
	uint16_t x198 = 221U;
	int64_t x199 = 0LL;
	int16_t x200 = -690;

	t46 = ((x197%x198)^(x199%x200));

	if (t46 != 127LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x202 = -55;
	int8_t x203 = INT8_MIN;
	volatile int16_t x204 = INT16_MAX;
	volatile int32_t t47 = 4757669;

	t47 = ((x201%x202)^(x203%x204));

	if (t47 != -99) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 1U;
	int32_t x206 = 147054;
	static int8_t x207 = INT8_MAX;
	int64_t x208 = 1915620476LL;
	int64_t t48 = -144684LL;

	t48 = ((x205%x206)^(x207%x208));

	if (t48 != 126LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x209 = UINT8_MAX;
	uint64_t x210 = 59264LLU;
	volatile uint8_t x212 = 13U;
	uint64_t t49 = 818879565858LLU;

	t49 = ((x209%x210)^(x211%x212));

	if (t49 != 247LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x213 = 643965006878LLU;
	volatile int16_t x214 = 7139;
	static uint64_t x215 = 6819818694451LLU;
	uint16_t x216 = UINT16_MAX;

	t50 = ((x213%x214)^(x215%x216));

	if (t50 != 51920LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x217 = 19045U;
	uint8_t x219 = 1U;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t51 = 52;

	t51 = ((x217%x218)^(x219%x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x224 = 551791803LLU;
	uint64_t t52 = 515507LLU;

	t52 = ((x221%x222)^(x223%x224));

	if (t52 != 473808605LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	static uint16_t x226 = 13U;
	int8_t x227 = -4;
	static volatile int32_t t53 = 766329;

	t53 = ((x225%x226)^(x227%x228));

	if (t53 != 9) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = -1LL;
	volatile int64_t x230 = INT64_MAX;
	int64_t x231 = INT64_MIN;
	int32_t x232 = -373;
	volatile int64_t t54 = 823LL;

	t54 = ((x229%x230)^(x231%x232));

	if (t54 != 196LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = -1;
	uint16_t x234 = UINT16_MAX;
	volatile uint32_t x235 = 0U;
	int64_t x236 = INT64_MIN;

	t55 = ((x233%x234)^(x235%x236));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x238 = INT16_MIN;
	int32_t x239 = -25;
	static int16_t x240 = -5864;
	int32_t t56 = -19521;

	t56 = ((x237%x238)^(x239%x240));

	if (t56 != -25) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x242 = INT8_MIN;
	volatile uint8_t x243 = 0U;
	int8_t x244 = -50;
	static volatile int32_t t57 = 47034;

	t57 = ((x241%x242)^(x243%x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = 3298LLU;
	volatile uint8_t x248 = UINT8_MAX;
	volatile uint64_t t58 = 5LLU;

	t58 = ((x245%x246)^(x247%x248));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x250 = UINT16_MAX;
	static int32_t x251 = INT32_MIN;
	volatile int32_t x252 = INT32_MAX;
	volatile int32_t t59 = 0;

	t59 = ((x249%x250)^(x251%x252));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MIN;
	static int8_t x254 = -1;
	int32_t x255 = 3340;
	int8_t x256 = INT8_MIN;
	volatile int64_t t60 = 55LL;

	t60 = ((x253%x254)^(x255%x256));

	if (t60 != 12LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x259 = -1;
	volatile int32_t x260 = 5;
	static uint64_t t61 = 320549494910LLU;

	t61 = ((x257%x258)^(x259%x260));

	if (t61 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x262 = 31;
	static uint64_t x263 = UINT64_MAX;
	static int16_t x264 = -1;
	static volatile uint64_t t62 = 82851LLU;

	t62 = ((x261%x262)^(x263%x264));

	if (t62 != 12LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x266 = 73LLU;
	int8_t x267 = 10;
	int64_t x268 = 181889403548695520LL;
	static volatile uint64_t t63 = 970731LLU;

	t63 = ((x265%x266)^(x267%x268));

	if (t63 != 5LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = UINT32_MAX;
	int16_t x274 = INT16_MIN;
	static int32_t x275 = INT32_MIN;
	int8_t x276 = -1;
	volatile uint32_t t64 = 17510493U;

	t64 = ((x273%x274)^(x275%x276));

	if (t64 != 32767U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x277 = 6891690U;
	int64_t x278 = 23458588736268LL;

	t65 = ((x277%x278)^(x279%x280));

	if (t65 != -6891691LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x282 = INT16_MAX;
	volatile int8_t x284 = INT8_MIN;

	t66 = ((x281%x282)^(x283%x284));

	if (t66 != -14) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x286 = INT8_MIN;
	int64_t x287 = 2888152484436LL;
	int16_t x288 = INT16_MIN;
	static volatile int64_t t67 = -1935903582781666188LL;

	t67 = ((x285%x286)^(x287%x288));

	if (t67 != 2687LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x289 = UINT8_MAX;
	int32_t x290 = -87716;
	int64_t x291 = INT64_MAX;
	int64_t x292 = INT64_MAX;
	volatile int64_t t68 = -50195238212643068LL;

	t68 = ((x289%x290)^(x291%x292));

	if (t68 != 255LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = -4;
	static int32_t x294 = INT32_MIN;
	int64_t x295 = -2325LL;
	int64_t t69 = 3465885580LL;

	t69 = ((x293%x294)^(x295%x296));

	if (t69 != 2327LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x297 = INT64_MIN;
	int16_t x298 = -4;
	static int64_t t70 = 16059861LL;

	t70 = ((x297%x298)^(x299%x300));

	if (t70 != 46LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x301 = UINT16_MAX;
	uint16_t x303 = 1U;
	uint32_t x304 = 4U;
	uint32_t t71 = 1004305U;

	t71 = ((x301%x302)^(x303%x304));

	if (t71 != 4414U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x305 = INT8_MIN;
	int32_t x308 = INT32_MIN;
	uint32_t t72 = 2601U;

	t72 = ((x305%x306)^(x307%x308));

	if (t72 != 2147483775U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x310 = 2041;
	static uint32_t x311 = 44U;
	static uint16_t x312 = 4U;
	static volatile uint32_t t73 = 456940760U;

	t73 = ((x309%x310)^(x311%x312));

	if (t73 != 4294966700U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x313 = -6;
	uint64_t x314 = UINT64_MAX;
	static int16_t x315 = -1519;
	static int64_t x316 = -15154255387433025LL;
	uint64_t t74 = 265LLU;

	t74 = ((x313%x314)^(x315%x316));

	if (t74 != 1515LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = INT32_MIN;
	uint8_t x318 = UINT8_MAX;
	volatile uint64_t t75 = 5283373LLU;

	t75 = ((x317%x318)^(x319%x320));

	if (t75 != 18186193450856031468LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x322 = 53600156LLU;
	static int16_t x323 = 212;
	int16_t x324 = 85;
	volatile uint64_t t76 = 155509587LLU;

	t76 = ((x321%x322)^(x323%x324));

	if (t76 != 20808829LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x326 = 26400209249LLU;
	volatile uint8_t x327 = 1U;
	static uint16_t x328 = 1152U;

	t77 = ((x325%x326)^(x327%x328));

	if (t77 != 126LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x330 = -1LL;
	volatile int32_t x331 = -4;
	static int8_t x332 = 27;
	uint64_t t78 = 31072838860LLU;

	t78 = ((x329%x330)^(x331%x332));

	if (t78 != 18446744073709521803LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x333 = 40717958805LLU;
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MAX;

	t79 = ((x333%x334)^(x335%x336));

	if (t79 != 84230488LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = INT32_MIN;
	volatile int64_t x338 = -1LL;
	static volatile uint16_t x340 = 54U;

	t80 = ((x337%x338)^(x339%x340));

	if (t80 != 51LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x342 = -1777;
	static uint16_t x343 = UINT16_MAX;
	int64_t x344 = INT64_MAX;
	int64_t t81 = -79092731014477LL;

	t81 = ((x341%x342)^(x343%x344));

	if (t81 != -65536LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = 8752U;
	int16_t x347 = INT16_MIN;
	int8_t x348 = -1;
	volatile int64_t t82 = -210320015124LL;

	t82 = ((x345%x346)^(x347%x348));

	if (t82 != 8752LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = -272447876516524548LL;
	static volatile int64_t x351 = -1LL;
	static int16_t x352 = INT16_MIN;
	volatile int64_t t83 = 234LL;

	t83 = ((x349%x350)^(x351%x352));

	if (t83 != 89LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = UINT32_MAX;
	static uint32_t x354 = 61363U;
	int8_t x355 = 0;
	volatile uint32_t t84 = 2U;

	t84 = ((x353%x354)^(x355%x356));

	if (t84 != 48199U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = INT64_MAX;
	int8_t x358 = INT8_MAX;
	uint64_t x359 = 1617653963535188134LLU;
	uint64_t t85 = 13071697485LLU;

	t85 = ((x357%x358)^(x359%x360));

	if (t85 != 4LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x361 = 109864728448416357LLU;
	int8_t x362 = INT8_MIN;
	volatile int32_t x363 = INT32_MIN;
	uint16_t x364 = 1U;
	volatile uint64_t t86 = 837873675046LLU;

	t86 = ((x361%x362)^(x363%x364));

	if (t86 != 109864728448416357LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MIN;
	int8_t x366 = INT8_MIN;
	static int64_t x368 = INT64_MAX;
	int64_t t87 = 1889704LL;

	t87 = ((x365%x366)^(x367%x368));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = -118716399;
	volatile uint64_t x370 = UINT64_MAX;
	int16_t x371 = -1;
	uint8_t x372 = UINT8_MAX;
	volatile uint64_t t88 = 34968972079453423LLU;

	t88 = ((x369%x370)^(x371%x372));

	if (t88 != 118716398LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x375 = INT64_MIN;
	volatile int8_t x376 = -1;
	volatile int64_t t89 = -34583029517513LL;

	t89 = ((x373%x374)^(x375%x376));

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MAX;
	static int16_t x378 = INT16_MIN;
	static uint8_t x379 = 0U;
	int16_t x380 = INT16_MIN;
	static int32_t t90 = -1879552;

	t90 = ((x377%x378)^(x379%x380));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MAX;
	int64_t t91 = 54021830192LL;

	t91 = ((x381%x382)^(x383%x384));

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x385 = 72U;
	uint16_t x386 = 37U;

	t92 = ((x385%x386)^(x387%x388));

	if (t92 != 43U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = 3856388816186186082LL;
	uint32_t x390 = 7801385U;
	static uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t93 = 1037402LLU;

	t93 = ((x389%x390)^(x391%x392));

	if (t93 != 9223372036850535615LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x394 = 2U;
	volatile int8_t x395 = 7;
	volatile int32_t t94 = 1839;

	t94 = ((x393%x394)^(x395%x396));

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	volatile uint32_t x398 = UINT32_MAX;
	int32_t x400 = INT32_MAX;
	int64_t t95 = 209801818042215223LL;

	t95 = ((x397%x398)^(x399%x400));

	if (t95 != 2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MAX;
	uint32_t x404 = 1U;
	volatile uint32_t t96 = 14782U;

	t96 = ((x401%x402)^(x403%x404));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x405 = UINT32_MAX;
	static int64_t x406 = INT64_MIN;
	uint8_t x407 = 0U;
	int16_t x408 = -2;
	int64_t t97 = -15262012542273LL;

	t97 = ((x405%x406)^(x407%x408));

	if (t97 != 4294967295LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = -1;
	static int16_t x411 = INT16_MAX;
	uint64_t x412 = 20920114408167LLU;
	uint64_t t98 = 4965702698082021LLU;

	t98 = ((x409%x410)^(x411%x412));

	if (t98 != 32767LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x418 = INT64_MIN;
	uint8_t x419 = 0U;
	static uint8_t x420 = 1U;

	t99 = ((x417%x418)^(x419%x420));

	if (t99 != 2434LL) { NG(); } else { ; }
	
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

