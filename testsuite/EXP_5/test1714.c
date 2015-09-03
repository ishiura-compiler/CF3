#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = INT8_MAX;
static uint8_t x14 = 91U;
int32_t x16 = INT32_MIN;
int64_t t1 = -1LL;
uint8_t x21 = 51U;
int64_t x25 = INT64_MIN;
int8_t x34 = -1;
static int32_t x37 = 6;
volatile int32_t x48 = 8053;
static volatile int8_t x52 = -1;
int64_t x53 = -1459LL;
int32_t x54 = INT32_MAX;
uint64_t x57 = UINT64_MAX;
volatile uint32_t x58 = UINT32_MAX;
int16_t x60 = -1;
int8_t x61 = -7;
static int64_t x62 = -1LL;
volatile int16_t x64 = INT16_MIN;
int8_t x73 = INT8_MIN;
volatile uint32_t x78 = 3968U;
uint64_t x83 = 400516426LLU;
int16_t x85 = INT16_MAX;
volatile int8_t x86 = INT8_MIN;
static int64_t x87 = -1LL;
static volatile int8_t x98 = INT8_MIN;
uint8_t x120 = UINT8_MAX;
int32_t x121 = INT32_MAX;
int16_t x124 = 51;
volatile int32_t t24 = 21;
static volatile uint64_t t25 = 176916764438683LLU;
uint64_t x139 = UINT64_MAX;
int16_t x140 = INT16_MIN;
int8_t x144 = -1;
uint32_t x152 = 10206235U;
static volatile uint32_t t31 = 5519236U;
int64_t x154 = -1LL;
static uint64_t t32 = 48572970744721LLU;
volatile int64_t x167 = INT64_MIN;
static uint16_t x168 = 28U;
int64_t t34 = -4158868931605LL;
int32_t x173 = INT32_MAX;
int16_t x175 = INT16_MAX;
static volatile uint64_t t37 = 979470915287443707LLU;
volatile int64_t t40 = -32269LL;
volatile int64_t x203 = INT64_MIN;
static int8_t x208 = -1;
uint64_t t43 = 4LLU;
uint64_t t45 = 3629785015949865835LLU;
volatile uint64_t t46 = 1764771007230204847LLU;
int64_t x221 = -216839LL;
int64_t x228 = INT64_MIN;
int16_t x238 = -1;
uint16_t x245 = UINT16_MAX;
int64_t x250 = INT64_MIN;
volatile int8_t x253 = -1;
volatile int16_t x264 = -7486;
uint32_t x265 = 530U;
int16_t x267 = INT16_MAX;
static volatile int8_t x271 = INT8_MAX;
uint8_t x283 = 7U;
int32_t x297 = INT32_MIN;
static int16_t x299 = 468;
uint32_t x300 = 6803562U;
uint32_t x302 = 128685U;
uint32_t t64 = 7914U;
int16_t x326 = 121;
static uint64_t x332 = UINT64_MAX;
uint32_t x334 = 972610U;
volatile int8_t x336 = 19;
volatile int8_t x342 = 5;
int16_t x344 = -1;
int16_t x346 = INT16_MAX;
static volatile uint64_t t71 = 438658121147824581LLU;
uint64_t t72 = 812LLU;
volatile int64_t x356 = INT64_MIN;
uint16_t x363 = 7046U;
int32_t t75 = 104545;
int32_t x377 = -1;
int64_t t78 = 10900561956681LL;
int64_t x392 = -122507406442276423LL;
volatile int32_t t81 = 2381352;
uint32_t x397 = 36U;
uint8_t x402 = 1U;
int16_t x408 = -11091;
int64_t x422 = 11325LL;
uint32_t x423 = 99396783U;
uint16_t x425 = 262U;
int16_t x427 = -1;
static uint8_t x437 = 57U;
uint8_t x438 = 11U;
static int32_t x441 = 5075691;
volatile int32_t x452 = -1;
int16_t x456 = 36;
int64_t t96 = -9524223248007LL;
uint8_t x465 = 2U;
int8_t x466 = -4;
int32_t x469 = INT32_MIN;
int64_t x471 = INT64_MIN;
int64_t x474 = -1107126LL;
uint16_t x476 = UINT16_MAX;


void f0(void) {
	static uint16_t x1 = 3429U;
	int16_t x2 = INT16_MAX;
	uint64_t x3 = 146407796047LLU;
	volatile uint64_t t0 = 8559006587LLU;

	t0 = (x1&((x2&x3)-x4));

	if (t0 != 3136LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = -1;
	int64_t x15 = -1LL;

	t1 = (x13&((x14&x15)-x16));

	if (t1 != 2147483739LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x22 = INT64_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	uint16_t x24 = 27311U;
	volatile int64_t t2 = 331049217039LL;

	t2 = (x21&((x22&x23)-x24));

	if (t2 != 17LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x26 = INT16_MIN;
	uint16_t x27 = 1900U;
	int8_t x28 = -1;
	volatile int64_t t3 = -4LL;

	t3 = (x25&((x26&x27)-x28));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = -2;
	int64_t x35 = INT64_MAX;
	int64_t x36 = 1LL;
	int64_t t4 = -194LL;

	t4 = (x33&((x34&x35)-x36));

	if (t4 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x38 = 1;
	int64_t x39 = -1LL;
	int32_t x40 = INT32_MIN;
	static volatile int64_t t5 = -2LL;

	t5 = (x37&((x38&x39)-x40));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x41 = 15562;
	uint16_t x42 = 274U;
	uint64_t x43 = 482290607861225LLU;
	int64_t x44 = 47972031468LL;
	volatile uint64_t t6 = 15126378665LLU;

	t6 = (x41&((x42&x43)-x44));

	if (t6 != 9216LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -132;
	volatile int8_t x46 = -1;
	int32_t x47 = 172082613;
	static int32_t t7 = 1364613;

	t7 = (x45&((x46&x47)-x48));

	if (t7 != 172074560) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = -14;
	int32_t x51 = INT32_MIN;
	static volatile int32_t t8 = INT32_MIN;

	t8 = (x49&((x50&x51)-x52));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x55 = 3235457;
	static volatile int64_t x56 = -208808214016055918LL;
	static volatile int64_t t9 = -9674463073LL;

	t9 = (x53&((x54&x55)-x56));

	if (t9 != 208808214019291213LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x59 = UINT64_MAX;
	static uint64_t t10 = 49589LLU;

	t10 = (x57&((x58&x59)-x60));

	if (t10 != 4294967296LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x63 = -1;
	int64_t t11 = -483787240719LL;

	t11 = (x61&((x62&x63)-x64));

	if (t11 != 32761LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = INT64_MAX;
	uint32_t x66 = 7384U;
	int8_t x67 = -1;
	int64_t x68 = -1LL;
	int64_t t12 = -128740268942946337LL;

	t12 = (x65&((x66&x67)-x68));

	if (t12 != 7385LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = -1LL;
	uint32_t x70 = 3U;
	volatile uint64_t x71 = 511472711318886119LLU;
	uint8_t x72 = 17U;
	uint64_t t13 = 3066585940511416LLU;

	t13 = (x69&((x70&x71)-x72));

	if (t13 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x74 = 431U;
	uint8_t x75 = UINT8_MAX;
	static volatile int64_t x76 = 9216615LL;
	static volatile int64_t t14 = -4895176734821LL;

	t14 = (x73&((x74&x75)-x76));

	if (t14 != -9216512LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -7;
	int64_t x79 = INT64_MIN;
	static volatile uint64_t x80 = 4LLU;
	uint64_t t15 = 951474745656817109LLU;

	t15 = (x77&((x78&x79)-x80));

	if (t15 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x81 = INT64_MIN;
	int32_t x82 = INT32_MIN;
	static volatile int16_t x84 = 25;
	static volatile uint64_t t16 = 1640LLU;

	t16 = (x81&((x82&x83)-x84));

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x88 = UINT64_MAX;
	uint64_t t17 = 343988LLU;

	t17 = (x85&((x86&x87)-x88));

	if (t17 != 32641LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = 2;
	int32_t x94 = 189210;
	static uint16_t x95 = 3443U;
	volatile int8_t x96 = INT8_MAX;
	int32_t t18 = -147329131;

	t18 = (x93&((x94&x95)-x96));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = 124649419LL;
	int32_t x99 = -1;
	volatile int16_t x100 = INT16_MAX;
	static int64_t t19 = -3645857943LL;

	t19 = (x97&((x98&x99)-x100));

	if (t19 != 124616577LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x101 = 5755U;
	volatile int16_t x102 = INT16_MIN;
	volatile int64_t x103 = INT64_MAX;
	static int16_t x104 = INT16_MAX;
	int64_t t20 = 3800274184LL;

	t20 = (x101&((x102&x103)-x104));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = 714755542409LLU;
	uint16_t x106 = 216U;
	static int8_t x107 = INT8_MAX;
	uint64_t x108 = 3567LLU;
	volatile uint64_t t21 = 579168669182LLU;

	t21 = (x105&((x106&x107)-x108));

	if (t21 != 714755538953LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x113 = INT32_MIN;
	static uint32_t x114 = 60618U;
	volatile int8_t x115 = INT8_MIN;
	uint32_t x116 = UINT32_MAX;
	static uint32_t t22 = 339U;

	t22 = (x113&((x114&x115)-x116));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = -1;
	int16_t x118 = 1685;
	int16_t x119 = 0;
	int32_t t23 = -32089869;

	t23 = (x117&((x118&x119)-x120));

	if (t23 != -255) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x122 = 2U;
	int8_t x123 = -62;

	t24 = (x121&((x122&x123)-x124));

	if (t24 != 2147483599) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x125 = -1;
	volatile uint64_t x126 = 768283889978678LLU;
	volatile int8_t x127 = INT8_MAX;
	uint64_t x128 = 7LLU;

	t25 = (x125&((x126&x127)-x128));

	if (t25 != 47LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = 0;
	int8_t x130 = INT8_MAX;
	uint16_t x131 = 2U;
	volatile int32_t x132 = -2680158;
	volatile int32_t t26 = -76377789;

	t26 = (x129&((x130&x131)-x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = 66193358822327LLU;
	static volatile int16_t x134 = 2847;
	int32_t x135 = INT32_MIN;
	int8_t x136 = 25;
	volatile uint64_t t27 = 786519LLU;

	t27 = (x133&((x134&x135)-x136));

	if (t27 != 66193358822311LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = 1484LL;
	uint32_t x138 = 16541229U;
	volatile uint64_t t28 = 271LLU;

	t28 = (x137&((x138&x139)-x140));

	if (t28 != 1036LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x142 = 1U;
	static uint16_t x143 = 45U;
	static int32_t t29 = -15219;

	t29 = (x141&((x142&x143)-x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = -226;
	int8_t x147 = 25;
	uint64_t x148 = 18974532LLU;
	uint64_t t30 = 139531565772444549LLU;

	t30 = (x145&((x146&x147)-x148));

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x149 = 1;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = UINT8_MAX;

	t31 = (x149&((x150&x151)-x152));

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = -112036787338624813LL;
	int64_t x155 = INT64_MIN;
	static uint64_t x156 = 124438798104288LLU;

	t32 = (x153&((x154&x155)-x156));

	if (t32 != 9111210866721980416LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = 0;
	volatile uint32_t x163 = 22U;
	volatile int8_t x164 = -1;
	volatile int64_t t33 = -1LL;

	t33 = (x161&((x162&x163)-x164));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x165 = INT16_MIN;
	int64_t x166 = INT64_MAX;

	t34 = (x165&((x166&x167)-x168));

	if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x174 = -1LL;
	int64_t x176 = -1LL;
	int64_t t35 = -92004821LL;

	t35 = (x173&((x174&x175)-x176));

	if (t35 != 32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x177 = INT32_MAX;
	int32_t x178 = 3;
	static uint64_t x179 = 1290290LLU;
	int16_t x180 = INT16_MIN;
	uint64_t t36 = 792544216034LLU;

	t36 = (x177&((x178&x179)-x180));

	if (t36 != 32770LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = 32;
	uint64_t x182 = 3985930648LLU;
	volatile int64_t x183 = INT64_MAX;
	static int32_t x184 = INT32_MAX;

	t37 = (x181&((x182&x183)-x184));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = -6440;
	uint32_t x186 = UINT32_MAX;
	int8_t x187 = INT8_MIN;
	int8_t x188 = 5;
	uint32_t t38 = 554512U;

	t38 = (x185&((x186&x187)-x188));

	if (t38 != 4294960728U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = -1;
	int64_t x190 = 9577786206LL;
	int16_t x191 = INT16_MIN;
	static volatile int16_t x192 = -1;
	int64_t t39 = 0LL;

	t39 = (x189&((x190&x191)-x192));

	if (t39 != 9577758721LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x193 = -8510285866LL;
	int8_t x194 = INT8_MIN;
	static int64_t x195 = INT64_MAX;
	static volatile int16_t x196 = INT16_MAX;

	t40 = (x193&((x194&x195)-x196));

	if (t40 != 9223372028344489856LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x197 = 105013U;
	static uint32_t x198 = 337628U;
	int64_t x199 = -2002399656718LL;
	volatile int32_t x200 = 43;
	int64_t t41 = 2469432641369LL;

	t41 = (x197&((x198&x199)-x200));

	if (t41 != 37LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x201 = INT16_MAX;
	volatile uint8_t x202 = 2U;
	int16_t x204 = -1;
	volatile int64_t t42 = 1027352783054LL;

	t42 = (x201&((x202&x203)-x204));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x205 = 2189503237LLU;
	int8_t x206 = INT8_MAX;
	static int16_t x207 = INT16_MIN;

	t43 = (x205&((x206&x207)-x208));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = 3LL;
	int16_t x210 = INT16_MAX;
	int64_t x211 = -184239110201953LL;
	static int32_t x212 = 7;
	static int64_t t44 = 2854884LL;

	t44 = (x209&((x210&x211)-x212));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x213 = 532912U;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = INT16_MAX;
	static volatile uint32_t x216 = UINT32_MAX;

	t45 = (x213&((x214&x215)-x216));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x217 = 3422941LLU;
	volatile int16_t x218 = -1;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = 309U;

	t46 = (x217&((x218&x219)-x220));

	if (t46 != 3422793LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x222 = INT8_MIN;
	volatile int16_t x223 = 0;
	int8_t x224 = INT8_MIN;
	volatile int64_t t47 = -5LL;

	t47 = (x221&((x222&x223)-x224));

	if (t47 != 128LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x226 = -2226;
	int64_t x227 = INT64_MIN;
	volatile int64_t t48 = -1337LL;

	t48 = (x225&((x226&x227)-x228));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = -598355897941695LL;
	int8_t x230 = 10;
	int32_t x231 = INT32_MIN;
	static int8_t x232 = -4;
	int64_t t49 = 1913957578495952611LL;

	t49 = (x229&((x230&x231)-x232));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = INT8_MIN;
	int32_t x239 = -1;
	uint64_t x240 = 1183410LLU;
	uint64_t t50 = 82672LLU;

	t50 = (x237&((x238&x239)-x240));

	if (t50 != 18446744073708368128LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x241 = 7U;
	int16_t x242 = INT16_MIN;
	static int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MAX;
	int32_t t51 = -124088;

	t51 = (x241&((x242&x243)-x244));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x246 = 5U;
	int64_t x247 = -95463LL;
	int32_t x248 = -1;
	volatile int64_t t52 = 47LL;

	t52 = (x245&((x246&x247)-x248));

	if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x249 = 7LLU;
	int64_t x251 = -169LL;
	static int8_t x252 = -23;
	uint64_t t53 = 60809LLU;

	t53 = (x249&((x250&x251)-x252));

	if (t53 != 7LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x254 = 41;
	int64_t x255 = INT64_MIN;
	volatile uint16_t x256 = UINT16_MAX;
	int64_t t54 = -979928335LL;

	t54 = (x253&((x254&x255)-x256));

	if (t54 != -65535LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x257 = 7U;
	int8_t x258 = INT8_MIN;
	volatile int8_t x259 = 1;
	int8_t x260 = INT8_MIN;
	int32_t t55 = 0;

	t55 = (x257&((x258&x259)-x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = 195591509647LL;
	int32_t x262 = INT32_MIN;
	int8_t x263 = -2;
	volatile int64_t t56 = -918LL;

	t56 = (x261&((x262&x263)-x264));

	if (t56 != 195421017102LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x266 = INT32_MAX;
	static volatile int32_t x268 = -1;
	uint32_t t57 = 56351U;

	t57 = (x265&((x266&x267)-x268));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = -384308;
	volatile uint64_t x270 = UINT64_MAX;
	int32_t x272 = INT32_MIN;
	volatile uint64_t t58 = 3234540724652715LLU;

	t58 = (x269&((x270&x271)-x272));

	if (t58 != 2147483724LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x273 = 28U;
	int8_t x274 = INT8_MIN;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = 4158100657712LLU;
	uint64_t t59 = 34689828662237819LLU;

	t59 = (x273&((x274&x275)-x276));

	if (t59 != 16LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x281 = UINT8_MAX;
	int64_t x282 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	volatile int64_t t60 = 53013248290956613LL;

	t60 = (x281&((x282&x283)-x284));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = INT16_MIN;
	volatile uint32_t x287 = 9U;
	volatile int32_t x288 = INT32_MIN;
	volatile uint64_t t61 = 40532945901750LLU;

	t61 = (x285&((x286&x287)-x288));

	if (t61 != 2147483648LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x293 = INT8_MAX;
	static uint16_t x294 = 3U;
	static uint32_t x295 = UINT32_MAX;
	int64_t x296 = -51LL;
	volatile int64_t t62 = -296LL;

	t62 = (x293&((x294&x295)-x296));

	if (t62 != 54LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x298 = INT64_MIN;
	int64_t t63 = -11053356713LL;

	t63 = (x297&((x298&x299)-x300));

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x301 = 92767U;
	static volatile uint8_t x303 = 1U;
	uint8_t x304 = UINT8_MAX;

	t64 = (x301&((x302&x303)-x304));

	if (t64 != 92674U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = INT64_MIN;
	uint16_t x310 = 162U;
	static int32_t x311 = INT32_MIN;
	static int8_t x312 = -1;
	volatile int64_t t65 = -20625161581093LL;

	t65 = (x309&((x310&x311)-x312));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x325 = 2U;
	uint32_t x327 = 42257U;
	int64_t x328 = -1LL;
	static int64_t t66 = 361883430LL;

	t66 = (x325&((x326&x327)-x328));

	if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MAX;
	int64_t x331 = INT64_MIN;
	volatile uint64_t t67 = 3739629LLU;

	t67 = (x329&((x330&x331)-x332));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = 0;
	int64_t x335 = 220LL;
	volatile int64_t t68 = 1LL;

	t68 = (x333&((x334&x335)-x336));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x337 = 821842247;
	uint64_t x338 = 7LLU;
	int64_t x339 = 3232025471655493LL;
	int64_t x340 = 2763275994LL;
	volatile uint64_t t69 = 86279LLU;

	t69 = (x337&((x338&x339)-x340));

	if (t69 != 273170691LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x341 = INT16_MAX;
	int64_t x343 = INT64_MIN;
	volatile int64_t t70 = -94890325790473365LL;

	t70 = (x341&((x342&x343)-x344));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x345 = -1LL;
	static int8_t x347 = INT8_MIN;
	volatile uint64_t x348 = 69454042828LLU;

	t71 = (x345&((x346&x347)-x348));

	if (t71 != 18446744004255541428LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x349 = INT16_MIN;
	static uint32_t x350 = 103279577U;
	uint64_t x351 = UINT64_MAX;
	uint8_t x352 = 0U;

	t72 = (x349&((x350&x351)-x352));

	if (t72 != 103251968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MIN;
	static int64_t x355 = -186466363784481313LL;
	uint64_t t73 = 6867120662514124LLU;

	t73 = (x353&((x354&x355)-x356));

	if (t73 != 9036905673069166592LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = -2;
	uint32_t x358 = UINT32_MAX;
	uint64_t x359 = 2125928661060515366LLU;
	int16_t x360 = INT16_MIN;
	uint64_t t74 = 418227589908591780LLU;

	t74 = (x357&((x358&x359)-x360));

	if (t74 != 2220226086LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = -656;
	int16_t x362 = -1;
	static int16_t x364 = -1;

	t75 = (x361&((x362&x363)-x364));

	if (t75 != 6400) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x369 = 4LLU;
	int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	uint64_t t76 = 3744777984514830375LLU;

	t76 = (x369&((x370&x371)-x372));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x373 = INT8_MIN;
	volatile uint8_t x374 = 6U;
	uint64_t x375 = 45086LLU;
	volatile int16_t x376 = 9402;
	static volatile uint64_t t77 = 3404952LLU;

	t77 = (x373&((x374&x375)-x376));

	if (t77 != 18446744073709542144LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x378 = 80;
	int32_t x379 = 208264;
	int64_t x380 = -1LL;

	t78 = (x377&((x378&x379)-x380));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = -1;
	static uint8_t x382 = UINT8_MAX;
	int64_t x383 = -2274755148LL;
	static volatile int64_t x384 = -1LL;
	int64_t t79 = 8814419180569172LL;

	t79 = (x381&((x382&x383)-x384));

	if (t79 != 181LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = INT32_MIN;
	volatile int16_t x390 = -15342;
	uint32_t x391 = UINT32_MAX;
	int64_t t80 = 379LL;

	t80 = (x389&((x390&x391)-x392));

	if (t80 != 122507409473142784LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x393 = UINT16_MAX;
	uint16_t x394 = 1U;
	static uint16_t x395 = UINT16_MAX;
	int32_t x396 = 9;

	t81 = (x393&((x394&x395)-x396));

	if (t81 != 65528) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x398 = 20U;
	int8_t x399 = -3;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t82 = 115790U;

	t82 = (x397&((x398&x399)-x400));

	if (t82 != 4U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x401 = 121U;
	volatile int8_t x403 = 0;
	int16_t x404 = INT16_MIN;
	volatile int32_t t83 = -2;

	t83 = (x401&((x402&x403)-x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = -708151637LL;
	uint32_t x406 = UINT32_MAX;
	uint32_t x407 = 50U;
	int64_t t84 = -18236914LL;

	t84 = (x405&((x406&x407)-x408));

	if (t84 != 8833LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x417 = UINT16_MAX;
	volatile int32_t x418 = INT32_MIN;
	static uint64_t x419 = 430142475136370968LLU;
	int64_t x420 = -1LL;
	volatile uint64_t t85 = 46647003609308742LLU;

	t85 = (x417&((x418&x419)-x420));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x421 = INT64_MAX;
	int8_t x424 = -35;
	volatile int64_t t86 = -381982LL;

	t86 = (x421&((x422&x423)-x424));

	if (t86 != 11344LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x426 = 208558460U;
	uint16_t x428 = UINT16_MAX;
	uint32_t t87 = 2694U;

	t87 = (x425&((x426&x427)-x428));

	if (t87 != 260U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = INT8_MIN;
	int16_t x430 = INT16_MIN;
	volatile int16_t x431 = INT16_MIN;
	int32_t x432 = 1983782;
	volatile int32_t t88 = 83;

	t88 = (x429&((x430&x431)-x432));

	if (t88 != -2016640) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x433 = UINT64_MAX;
	uint32_t x434 = 4U;
	uint64_t x435 = 1888LLU;
	volatile int8_t x436 = INT8_MIN;
	uint64_t t89 = 6549731301762637LLU;

	t89 = (x433&((x434&x435)-x436));

	if (t89 != 128LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x439 = -1;
	volatile uint64_t x440 = 9LLU;
	volatile uint64_t t90 = 172803323294484674LLU;

	t90 = (x437&((x438&x439)-x440));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x442 = INT8_MIN;
	int64_t x443 = -1LL;
	int64_t x444 = INT64_MIN;
	static volatile int64_t t91 = -75810321LL;

	t91 = (x441&((x442&x443)-x444));

	if (t91 != 5075584LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x445 = INT16_MAX;
	int64_t x446 = INT64_MAX;
	int32_t x447 = INT32_MAX;
	int16_t x448 = 97;
	int64_t t92 = 27750LL;

	t92 = (x445&((x446&x447)-x448));

	if (t92 != 32670LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x449 = -60326665;
	int8_t x450 = -3;
	uint64_t x451 = 102494LLU;
	uint64_t t93 = 152341633LLU;

	t93 = (x449&((x450&x451)-x452));

	if (t93 != 69717LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x453 = 7411U;
	int64_t x454 = 405389555657LL;
	static int64_t x455 = 1989430505358LL;
	volatile int64_t t94 = 3909673735778725LL;

	t94 = (x453&((x454&x455)-x456));

	if (t94 != 1120LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x457 = INT16_MIN;
	int32_t x458 = -1;
	uint32_t x459 = 0U;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t95 = 1509759962U;

	t95 = (x457&((x458&x459)-x460));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x461 = 4U;
	static int64_t x462 = -1784813115749036701LL;
	int8_t x463 = -2;
	volatile int32_t x464 = INT32_MAX;

	t96 = (x461&((x462&x463)-x464));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x467 = 1;
	int8_t x468 = INT8_MIN;
	int32_t t97 = 31645519;

	t97 = (x465&((x466&x467)-x468));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x470 = 1546902;
	int64_t x472 = INT64_MAX;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x469&((x470&x471)-x472));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x473 = INT16_MAX;
	int32_t x475 = -1;
	int64_t t99 = -349538155580LL;

	t99 = (x473&((x474&x475)-x476));

	if (t99 != 6987LL) { NG(); } else { ; }
	
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

