#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 57U;
uint32_t x3 = 37754U;
static int64_t t3 = -13LL;
int8_t x17 = -1;
int16_t x20 = -24;
static int16_t x27 = 2438;
int32_t t6 = 0;
volatile int64_t x31 = -486383052457421LL;
int64_t t7 = -7380100LL;
int64_t x36 = -228975790775852663LL;
int16_t x40 = 40;
static uint16_t x46 = 82U;
int16_t x55 = INT16_MAX;
volatile int64_t t12 = -55304287LL;
int64_t x57 = INT64_MIN;
int32_t x71 = -1;
int64_t x75 = INT64_MAX;
int64_t x79 = INT64_MAX;
volatile uint8_t x93 = UINT8_MAX;
int8_t x106 = -53;
volatile uint64_t x108 = 13175LLU;
volatile uint32_t x120 = 2U;
int64_t t29 = -40699LL;
static int16_t x130 = -6168;
static volatile uint64_t t32 = 0LLU;
int8_t x141 = INT8_MAX;
static int64_t t34 = 372007LL;
volatile uint8_t x147 = 4U;
int32_t x150 = 0;
uint32_t x155 = 10U;
int64_t x162 = -1138LL;
uint8_t x165 = 0U;
uint32_t x169 = 579069U;
static uint64_t t40 = 3328011LLU;
int8_t x179 = INT8_MAX;
volatile uint16_t x186 = UINT16_MAX;
volatile uint8_t x189 = 11U;
int64_t x191 = -1LL;
int16_t x198 = 151;
int64_t t50 = 39529594653LL;
int8_t x221 = -1;
int32_t x223 = 16;
volatile int32_t t53 = INT32_MIN;
int16_t x245 = 33;
int16_t x249 = INT16_MIN;
volatile int64_t x253 = INT64_MAX;
volatile int64_t t60 = 391953053LL;
static int16_t x258 = -1;
int32_t x261 = -108904;
uint8_t x268 = 45U;
uint8_t x272 = UINT8_MAX;
int16_t x275 = INT16_MAX;
int32_t x276 = 6530146;
int64_t t65 = -48574LL;
uint64_t t66 = 5070950514226819581LLU;
static int16_t x294 = -1;
volatile int64_t x304 = -1LL;
int16_t x306 = -1;
static int16_t x310 = INT16_MAX;
int16_t x321 = -3077;
int8_t x322 = INT8_MAX;
int32_t x326 = INT32_MAX;
int64_t x330 = INT64_MIN;
int16_t x340 = -1;
static int64_t t78 = -8570752443481884LL;
int8_t x355 = 22;
volatile int32_t t81 = 1032575;
int8_t x357 = INT8_MIN;
uint32_t x362 = UINT32_MAX;
volatile uint64_t x367 = 22806LLU;
uint8_t x369 = 33U;
int16_t x370 = 1;
volatile int16_t x373 = INT16_MAX;
int16_t x375 = 218;
static int16_t x380 = INT16_MIN;
uint8_t x384 = UINT8_MAX;
uint8_t x386 = 0U;
uint64_t t89 = UINT64_MAX;
int16_t x389 = INT16_MIN;
uint64_t t91 = 69175755718431418LLU;
int8_t x397 = 7;
uint8_t x402 = 21U;
int32_t x406 = -782428365;
int32_t x412 = INT32_MAX;
uint64_t t95 = 3666LLU;
volatile uint64_t t96 = 1290016975816876187LLU;
volatile uint16_t x423 = 19749U;


void f0(void) {
	int32_t x1 = -2509;
	static int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = -45271535070LL;

	t0 = (x1-(x2&(x3^x4)));

	if (t0 != -2565LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -3258070LL;
	static int64_t x6 = 247555LL;
	static volatile uint64_t x7 = UINT64_MAX;
	int16_t x8 = -1;
	uint64_t t1 = 5LLU;

	t1 = (x5-(x6&(x7^x8)));

	if (t1 != 18446744073706293546LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	static int8_t x12 = INT8_MIN;
	volatile int64_t t2 = 1269LL;

	t2 = (x9-(x10&(x11^x12)));

	if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint8_t x14 = 21U;
	volatile uint16_t x15 = 7U;
	int16_t x16 = INT16_MAX;

	t3 = (x13-(x14&(x15^x16)));

	if (t3 != -17LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 0LLU;
	int8_t x19 = -43;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17-(x18&(x19^x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 3456187U;
	static int32_t x22 = INT32_MAX;
	uint64_t x23 = 2208LLU;
	int16_t x24 = INT16_MAX;
	volatile uint64_t t5 = 47LLU;

	t5 = (x21-(x22&(x23^x24)));

	if (t5 != 3425628LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -3446;
	volatile uint16_t x26 = UINT16_MAX;
	uint16_t x28 = 6498U;

	t6 = (x25-(x26&(x27^x28)));

	if (t6 != -7770) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = UINT32_MAX;
	uint16_t x30 = UINT16_MAX;
	int64_t x32 = INT64_MIN;

	t7 = (x29-(x30&(x31^x32)));

	if (t7 != 4294903244LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 43;
	static uint16_t x34 = 17989U;
	uint64_t x35 = 28605686LLU;
	static volatile uint64_t t8 = 0LLU;

	t8 = (x33-(x34&(x35^x36)));

	if (t8 != 18446744073709534182LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -7242LL;
	static uint32_t x38 = 69007U;
	int8_t x39 = INT8_MAX;
	int64_t t9 = -6412076166165LL;

	t9 = (x37-(x38&(x39^x40)));

	if (t9 != -7249LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -614600;
	int32_t x47 = 366819;
	int32_t x48 = INT32_MAX;
	int32_t t10 = 123365;

	t10 = (x45-(x46&(x47^x48)));

	if (t10 != -614616) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 2386095U;
	uint8_t x50 = 1U;
	int16_t x51 = -1;
	static int16_t x52 = 364;
	uint32_t t11 = 426U;

	t11 = (x49-(x50&(x51^x52)));

	if (t11 != 2386094U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 1;
	int64_t x54 = INT64_MAX;
	static uint32_t x56 = UINT32_MAX;

	t12 = (x53-(x54&(x55^x56)));

	if (t12 != -4294934527LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = INT8_MIN;
	uint16_t x59 = UINT16_MAX;
	uint64_t x60 = 1441LLU;
	volatile uint64_t t13 = 7LLU;

	t13 = (x57-(x58&(x59^x60)));

	if (t13 != 9223372036854711808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	static int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	static uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = 11805;

	t14 = (x61-(x62&(x63^x64)));

	if (t14 != 32895) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	int32_t x66 = -1;
	static int32_t x67 = -357;
	int16_t x68 = INT16_MIN;
	int32_t t15 = 2814;

	t15 = (x65-(x66&(x67^x68)));

	if (t15 != 2147451236) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 198;
	volatile int8_t x70 = -13;
	volatile uint8_t x72 = 11U;
	volatile int32_t t16 = 1694473;

	t16 = (x69-(x70&(x71^x72)));

	if (t16 != 214) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 32U;
	int32_t x74 = INT32_MAX;
	uint8_t x76 = 52U;
	volatile int64_t t17 = 2757991906122383357LL;

	t17 = (x73-(x74&(x75^x76)));

	if (t17 != -2147483563LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	static int64_t x78 = -1LL;
	int32_t x80 = INT32_MAX;
	volatile int64_t t18 = -214596LL;

	t18 = (x77-(x78&(x79^x80)));

	if (t18 != -9223372030412324865LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 108LLU;
	static volatile int32_t x82 = -1;
	volatile int32_t x83 = -1;
	int32_t x84 = -1;
	uint64_t t19 = 6158LLU;

	t19 = (x81-(x82&(x83^x84)));

	if (t19 != 108LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = 3;
	uint32_t x86 = 703U;
	uint8_t x87 = 17U;
	int8_t x88 = 1;
	uint32_t t20 = 116U;

	t20 = (x85-(x86&(x87^x88)));

	if (t20 != 4294967283U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 1U;
	int64_t x90 = -36375664048760LL;
	uint16_t x91 = UINT16_MAX;
	uint32_t x92 = 12677U;
	volatile int64_t t21 = -192603719LL;

	t21 = (x89-(x90&(x91^x92)));

	if (t21 != -17415LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x94 = INT64_MAX;
	int64_t x95 = 153773622731901719LL;
	int32_t x96 = -1449588;
	int64_t t22 = 40156734806632501LL;

	t22 = (x93-(x94&(x95^x96)));

	if (t22 != -9069598414121691548LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	int64_t x98 = INT64_MAX;
	uint16_t x99 = UINT16_MAX;
	uint16_t x100 = 2658U;
	volatile int64_t t23 = -15483614117LL;

	t23 = (x97-(x98&(x99^x100)));

	if (t23 != 2658LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MIN;
	volatile uint16_t x103 = 56U;
	static volatile int64_t x104 = -1LL;
	static int64_t t24 = 390LL;

	t24 = (x101-(x102&(x103^x104)));

	if (t24 != 2147450880LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	volatile int8_t x107 = -61;
	uint64_t t25 = 14498553731LLU;

	t25 = (x105-(x106&(x107^x108)));

	if (t25 != 13183LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -12;
	int64_t x110 = INT64_MIN;
	uint8_t x111 = 6U;
	int16_t x112 = 6;
	int64_t t26 = -2791960988360492538LL;

	t26 = (x109-(x110&(x111^x112)));

	if (t26 != -12LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x113 = INT32_MIN;
	static int64_t x114 = 9834LL;
	int64_t x115 = INT64_MIN;
	static uint8_t x116 = UINT8_MAX;
	volatile int64_t t27 = 922879LL;

	t27 = (x113-(x114&(x115^x116)));

	if (t27 != -2147483754LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	volatile int8_t x118 = INT8_MAX;
	static uint32_t x119 = UINT32_MAX;
	uint32_t t28 = 339843U;

	t28 = (x117-(x118&(x119^x120)));

	if (t28 != 2147483523U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = INT8_MAX;
	static int32_t x122 = -31;
	static uint8_t x123 = 60U;
	volatile int64_t x124 = -5110785731LL;

	t29 = (x121-(x122&(x123^x124)));

	if (t29 != 5110785918LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = -730;
	volatile int64_t x127 = INT64_MAX;
	static volatile int32_t x128 = -46;
	volatile int64_t t30 = 1688260LL;

	t30 = (x125-(x126&(x127^x128)));

	if (t30 != 9223372034707292124LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = 0;
	int16_t x131 = INT16_MAX;
	int64_t x132 = 306942984LL;
	static int64_t t31 = -11831774340LL;

	t31 = (x129-(x130&(x131^x132)));

	if (t31 != -306963424LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = 1;
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MIN;
	int64_t x136 = INT64_MAX;

	t32 = (x133-(x134&(x135^x136)));

	if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = INT64_MIN;
	static uint64_t x138 = UINT64_MAX;
	int16_t x139 = -86;
	int16_t x140 = 0;
	volatile uint64_t t33 = 944800555974420LLU;

	t33 = (x137-(x138&(x139^x140)));

	if (t33 != 9223372036854775894LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x142 = -1;
	uint32_t x143 = 2789730U;
	volatile int64_t x144 = -1LL;

	t34 = (x141-(x142&(x143^x144)));

	if (t34 != 2789858LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = 7844;
	uint16_t x146 = 219U;
	static uint16_t x148 = UINT16_MAX;
	volatile int32_t t35 = -548;

	t35 = (x145-(x146&(x147^x148)));

	if (t35 != 7625) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -5;
	int8_t x151 = 2;
	static int64_t x152 = INT64_MIN;
	volatile int64_t t36 = -559325LL;

	t36 = (x149-(x150&(x151^x152)));

	if (t36 != -5LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = 0;
	int8_t x154 = 54;
	int8_t x156 = INT8_MAX;
	volatile uint32_t t37 = 42233U;

	t37 = (x153-(x154&(x155^x156)));

	if (t37 != 4294967244U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = UINT16_MAX;
	static uint16_t x163 = 0U;
	uint32_t x164 = UINT32_MAX;
	int64_t t38 = -1LL;

	t38 = (x161-(x162&(x163^x164)));

	if (t38 != -4294900623LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x166 = -1;
	int32_t x167 = INT32_MAX;
	static int64_t x168 = INT64_MIN;
	static volatile int64_t t39 = -50345LL;

	t39 = (x165-(x166&(x167^x168)));

	if (t39 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x170 = 203585U;
	uint16_t x171 = UINT16_MAX;
	uint64_t x172 = UINT64_MAX;

	t40 = (x169-(x170&(x171^x172)));

	if (t40 != 382461LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -1;
	int64_t x174 = -1LL;
	uint16_t x175 = UINT16_MAX;
	static volatile int8_t x176 = -1;
	volatile int64_t t41 = -1LL;

	t41 = (x173-(x174&(x175^x176)));

	if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 18;
	static uint16_t x178 = UINT16_MAX;
	volatile int32_t x180 = INT32_MIN;
	static int32_t t42 = -83166824;

	t42 = (x177-(x178&(x179^x180)));

	if (t42 != -109) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x181 = 46;
	int32_t x182 = -1;
	volatile uint16_t x183 = 183U;
	int8_t x184 = INT8_MIN;
	volatile int32_t t43 = 0;

	t43 = (x181-(x182&(x183^x184)));

	if (t43 != 247) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 0U;
	uint32_t x187 = 5U;
	volatile int32_t x188 = 3574;
	volatile uint32_t t44 = 86786162U;

	t44 = (x185-(x186&(x187^x188)));

	if (t44 != 4294963725U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x190 = INT8_MAX;
	int8_t x192 = -1;
	int64_t t45 = -6625772889538469LL;

	t45 = (x189-(x190&(x191^x192)));

	if (t45 != 11LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = -1;
	int64_t x194 = INT64_MAX;
	uint8_t x195 = 10U;
	volatile int32_t x196 = -1;
	volatile int64_t t46 = 57954638267786761LL;

	t46 = (x193-(x194&(x195^x196)));

	if (t46 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = -590LL;
	volatile int8_t x199 = 0;
	volatile int16_t x200 = -1;
	volatile int64_t t47 = -210363219039LL;

	t47 = (x197-(x198&(x199^x200)));

	if (t47 != -741LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -1;
	int16_t x202 = -1;
	int32_t x203 = INT32_MAX;
	volatile uint64_t x204 = UINT64_MAX;
	uint64_t t48 = 6695586017LLU;

	t48 = (x201-(x202&(x203^x204)));

	if (t48 != 2147483647LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = UINT64_MAX;
	int8_t x210 = INT8_MIN;
	int64_t x211 = -3455956589377396LL;
	static int32_t x212 = -117103474;
	uint64_t t49 = 1491840028383673591LLU;

	t49 = (x209-(x210&(x211^x212)));

	if (t49 != 18443288117031687167LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x213 = 345U;
	int32_t x214 = INT32_MAX;
	int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MAX;

	t50 = (x213-(x214&(x215^x216)));

	if (t50 != 218LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = UINT64_MAX;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = UINT16_MAX;
	volatile int16_t x220 = -1;
	uint64_t t51 = 18699086257LLU;

	t51 = (x217-(x218&(x219^x220)));

	if (t51 != 65535LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x222 = 0U;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x221-(x222&(x223^x224)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	static int8_t x226 = -1;
	int32_t x227 = INT32_MAX;
	int8_t x228 = INT8_MAX;

	t53 = (x225-(x226&(x227^x228)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = INT16_MIN;
	uint16_t x230 = 0U;
	int32_t x231 = -32895;
	int8_t x232 = INT8_MAX;
	static volatile int32_t t54 = 28985915;

	t54 = (x229-(x230&(x231^x232)));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x233 = INT32_MAX;
	int64_t x234 = 16933091083543321LL;
	uint32_t x235 = UINT32_MAX;
	int8_t x236 = 30;
	static int64_t t55 = -938780LL;

	t55 = (x233-(x234&(x235^x236)));

	if (t55 != 17046782LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MAX;
	uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = 0;
	volatile int8_t x240 = INT8_MIN;
	static volatile int32_t t56 = 55116;

	t56 = (x237-(x238&(x239^x240)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x241 = 409621001;
	volatile int8_t x242 = 0;
	static uint64_t x243 = UINT64_MAX;
	uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t57 = 483101322797LLU;

	t57 = (x241-(x242&(x243^x244)));

	if (t57 != 409621001LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x246 = INT32_MIN;
	static int32_t x247 = INT32_MIN;
	int64_t x248 = 48048639984LL;
	static int64_t t58 = 16804549295226LL;

	t58 = (x245-(x246&(x247^x248)));

	if (t58 != 49392123937LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x250 = 15U;
	uint32_t x251 = 385001976U;
	int64_t x252 = -1LL;
	int64_t t59 = -30284LL;

	t59 = (x249-(x250&(x251^x252)));

	if (t59 != -32775LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x254 = 34;
	int16_t x255 = INT16_MIN;
	static uint16_t x256 = 10U;

	t60 = (x253-(x254&(x255^x256)));

	if (t60 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 3607U;
	int16_t x259 = -12779;
	int16_t x260 = 1;
	int32_t t61 = -283355665;

	t61 = (x257-(x258&(x259^x260)));

	if (t61 != 16387) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = -1;
	uint64_t t62 = 4136207588572261179LLU;

	t62 = (x261-(x262&(x263^x264)));

	if (t62 != 18446744073709442712LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x265 = INT64_MIN;
	static volatile int8_t x266 = -45;
	int64_t x267 = INT64_MIN;
	volatile int64_t t63 = -7907116832LL;

	t63 = (x265-(x266&(x267^x268)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x269 = 30U;
	int8_t x270 = INT8_MAX;
	uint16_t x271 = UINT16_MAX;
	static volatile int32_t t64 = 942568634;

	t64 = (x269-(x270&(x271^x272)));

	if (t64 != 30) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -1LL;
	volatile int16_t x274 = -159;

	t65 = (x273-(x274&(x275^x276)));

	if (t65 != -6544130LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = 8672223440247313118LLU;
	volatile uint32_t x278 = 95U;
	static int32_t x279 = INT32_MAX;
	int64_t x280 = 12LL;

	t66 = (x277-(x278&(x279^x280)));

	if (t66 != 8672223440247313035LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MIN;
	static int8_t x286 = INT8_MIN;
	static uint8_t x287 = 8U;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t67 = 4911;

	t67 = (x285-(x286&(x287^x288)));

	if (t67 != -65536) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x289 = INT8_MIN;
	int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MAX;
	int16_t x292 = -163;
	volatile int32_t t68 = 177953722;

	t68 = (x289-(x290&(x291^x292)));

	if (t68 != 2147483520) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x293 = UINT8_MAX;
	int64_t x295 = INT64_MIN;
	volatile uint64_t x296 = UINT64_MAX;
	uint64_t t69 = 1371413013077678567LLU;

	t69 = (x293-(x294&(x295^x296)));

	if (t69 != 9223372036854776064LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x301 = 1;
	uint32_t x302 = UINT32_MAX;
	static uint32_t x303 = 1006U;
	int64_t t70 = 6838388LL;

	t70 = (x301-(x302&(x303^x304)));

	if (t70 != -4294966288LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = 93175882439923740LL;
	int64_t x307 = INT64_MAX;
	int16_t x308 = INT16_MAX;
	volatile int64_t t71 = 1LL;

	t71 = (x305-(x306&(x307^x308)));

	if (t71 != -9130196154414819300LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x309 = INT64_MAX;
	uint8_t x311 = 125U;
	int64_t x312 = INT64_MAX;
	volatile int64_t t72 = -1119927546380982LL;

	t72 = (x309-(x310&(x311^x312)));

	if (t72 != 9223372036854743165LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 117U;
	volatile int64_t x314 = 132307916496371889LL;
	static uint16_t x315 = 1U;
	volatile uint64_t x316 = 38LLU;
	uint64_t t73 = 917942645789LLU;

	t73 = (x313-(x314&(x315^x316)));

	if (t73 != 84LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x317 = INT16_MIN;
	int8_t x318 = -1;
	int32_t x319 = -1;
	int8_t x320 = INT8_MIN;
	int32_t t74 = 287914;

	t74 = (x317-(x318&(x319^x320)));

	if (t74 != -32895) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x323 = -1;
	int64_t x324 = -59498591LL;
	volatile int64_t t75 = -16LL;

	t75 = (x321-(x322&(x323^x324)));

	if (t75 != -3171LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = -3;
	volatile int64_t x327 = -1LL;
	volatile int8_t x328 = -1;
	int64_t t76 = -622121704401075900LL;

	t76 = (x325-(x326&(x327^x328)));

	if (t76 != -3LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MIN;
	static volatile int16_t x331 = INT16_MAX;
	int32_t x332 = INT32_MAX;
	static int64_t t77 = 8LL;

	t77 = (x329-(x330&(x331^x332)));

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x337 = -6843658861884LL;
	uint32_t x338 = 121937434U;
	int8_t x339 = 4;

	t78 = (x337-(x338&(x339^x340)));

	if (t78 != -6843780799318LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 294122763U;
	int64_t x342 = 126283609370205LL;
	uint8_t x343 = 0U;
	static uint8_t x344 = 1U;
	volatile int64_t t79 = 1019385246372LL;

	t79 = (x341-(x342&(x343^x344)));

	if (t79 != 294122762LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = 1U;
	volatile int8_t x350 = 46;
	int64_t x351 = INT64_MAX;
	int16_t x352 = -1;
	volatile int64_t t80 = 34578984LL;

	t80 = (x349-(x350&(x351^x352)));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = INT32_MIN;
	volatile int32_t x354 = -1;
	int32_t x356 = INT32_MIN;

	t81 = (x353-(x354&(x355^x356)));

	if (t81 != -22) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x358 = -1;
	volatile int16_t x359 = INT16_MIN;
	int64_t x360 = INT64_MIN;
	int64_t t82 = 272761LL;

	t82 = (x357-(x358&(x359^x360)));

	if (t82 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x363 = INT64_MIN;
	uint16_t x364 = 12U;
	volatile uint64_t t83 = 7806LLU;

	t83 = (x361-(x362&(x363^x364)));

	if (t83 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x365 = 52U;
	static volatile int64_t x366 = 142739061708647058LL;
	int32_t x368 = INT32_MIN;
	volatile uint64_t t84 = 295812734988LLU;

	t84 = (x365-(x366&(x367^x368)));

	if (t84 != 18304005012482668578LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x371 = 1039000LL;
	volatile uint16_t x372 = UINT16_MAX;
	volatile int64_t t85 = -22059626852782454LL;

	t85 = (x369-(x370&(x371^x372)));

	if (t85 != 32LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x374 = INT32_MAX;
	int8_t x376 = 1;
	int32_t t86 = -137127;

	t86 = (x373-(x374&(x375^x376)));

	if (t86 != 32548) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = INT16_MIN;
	volatile uint32_t x379 = UINT32_MAX;
	static volatile uint32_t t87 = 129768U;

	t87 = (x377-(x378&(x379^x380)));

	if (t87 != 4294934528U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x381 = INT64_MAX;
	static uint32_t x382 = UINT32_MAX;
	int64_t x383 = 208896722984403003LL;
	int64_t t88 = 57697LL;

	t88 = (x381-(x382&(x383^x384)));

	if (t88 != 9223372034837675835LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int32_t x387 = INT32_MIN;
	uint8_t x388 = 5U;

	t89 = (x385-(x386&(x387^x388)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x390 = -1;
	uint64_t x391 = 3LLU;
	uint16_t x392 = UINT16_MAX;
	uint64_t t90 = 5LLU;

	t90 = (x389-(x390&(x391^x392)));

	if (t90 != 18446744073709453316LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x393 = 871U;
	uint64_t x394 = 344573993416478LLU;
	uint8_t x395 = 1U;
	uint8_t x396 = 7U;

	t91 = (x393-(x394&(x395^x396)));

	if (t91 != 865LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x398 = 20017U;
	volatile int32_t x399 = -1365;
	volatile uint8_t x400 = UINT8_MAX;
	static volatile uint32_t t92 = 53695U;

	t92 = (x397-(x398&(x399^x400)));

	if (t92 != 4294948343U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x401 = -1;
	int64_t x403 = -1LL;
	int32_t x404 = 6576;
	static volatile int64_t t93 = -217LL;

	t93 = (x401-(x402&(x403^x404)));

	if (t93 != -6LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MAX;
	uint8_t x407 = 27U;
	volatile int32_t x408 = -56761;
	volatile int32_t t94 = 147795490;

	t94 = (x405-(x406&(x407^x408)));

	if (t94 != 782466543) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x409 = 136LLU;
	volatile uint32_t x410 = 1U;
	int16_t x411 = INT16_MIN;

	t95 = (x409-(x410&(x411^x412)));

	if (t95 != 135LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x413 = INT8_MAX;
	int64_t x414 = INT64_MIN;
	volatile uint32_t x415 = 1915U;
	uint64_t x416 = 2036164489LLU;

	t96 = (x413-(x414&(x415^x416)));

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x417 = INT64_MIN;
	volatile int16_t x418 = INT16_MIN;
	volatile int16_t x419 = -1;
	static volatile uint32_t x420 = UINT32_MAX;
	int64_t t97 = INT64_MIN;

	t97 = (x417-(x418&(x419^x420)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x421 = -18LL;
	volatile int8_t x422 = 54;
	int8_t x424 = INT8_MIN;
	volatile int64_t t98 = -3129386468LL;

	t98 = (x421-(x422&(x423^x424)));

	if (t98 != -54LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x429 = -1;
	int32_t x430 = -1;
	uint8_t x431 = 57U;
	uint64_t x432 = 131971LLU;
	volatile uint64_t t99 = 60521749841416203LLU;

	t99 = (x429-(x430&(x431^x432)));

	if (t99 != 18446744073709419589LLU) { NG(); } else { ; }
	
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

