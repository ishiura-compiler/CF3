#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x17 = INT8_MIN;
int16_t x18 = INT16_MIN;
volatile int16_t x19 = 90;
int64_t x20 = -1LL;
int16_t x21 = INT16_MIN;
int16_t x23 = -2;
volatile int16_t x27 = INT16_MIN;
static volatile uint32_t t6 = 1873871687U;
volatile int8_t x31 = -3;
volatile int32_t x40 = INT32_MAX;
uint64_t x44 = 997882625018444781LLU;
static volatile uint64_t t10 = 638412LLU;
volatile int8_t x45 = INT8_MIN;
int16_t x55 = INT16_MIN;
int8_t x68 = INT8_MAX;
volatile int8_t x69 = 1;
int16_t x74 = 475;
int64_t x77 = -1751963LL;
int32_t x80 = INT32_MAX;
uint32_t x86 = 2669U;
int32_t x88 = 1194597;
static uint32_t t21 = 2886320U;
uint64_t t22 = 112111LLU;
int64_t t23 = -9496058223LL;
static uint8_t x97 = 10U;
static volatile int64_t t24 = -3059962982462833084LL;
volatile int64_t x101 = INT64_MAX;
uint16_t x104 = 89U;
int64_t x113 = INT64_MAX;
int16_t x116 = INT16_MIN;
int64_t x118 = -1LL;
static uint64_t x119 = UINT64_MAX;
static uint64_t t31 = 7792113814LLU;
static volatile int8_t x130 = -1;
int64_t x132 = -1LL;
volatile int32_t x134 = -1;
int64_t x140 = 134241299187LL;
static int32_t x147 = INT32_MIN;
uint16_t x149 = 428U;
int16_t x150 = -1;
static uint32_t x151 = 11U;
volatile int32_t x153 = INT32_MIN;
volatile uint64_t t38 = 170381LLU;
static volatile uint32_t x157 = 154U;
static int64_t x158 = INT64_MIN;
volatile int64_t t39 = -1866059958629062947LL;
volatile int64_t x166 = 9597182178LL;
int16_t x177 = INT16_MAX;
uint32_t x178 = UINT32_MAX;
int16_t x179 = INT16_MIN;
int32_t x180 = 486;
volatile uint64_t x184 = 3207336339908100515LLU;
static int64_t x186 = INT64_MIN;
int64_t x189 = INT64_MAX;
static int64_t t47 = 1LL;
uint64_t x195 = 372283183011LLU;
static int32_t x206 = INT32_MIN;
int32_t x208 = INT32_MIN;
static int8_t x210 = INT8_MIN;
volatile int64_t t52 = 1886167994437154571LL;
volatile int64_t x215 = 6621924176837060LL;
uint64_t x217 = 21LLU;
volatile int8_t x221 = INT8_MIN;
int64_t x222 = -24LL;
volatile int64_t t55 = 96LL;
volatile int64_t x229 = 546654031716380LL;
static uint16_t x231 = 13049U;
int32_t x232 = INT32_MAX;
int8_t x235 = INT8_MIN;
volatile uint32_t t59 = 863544106U;
int32_t x244 = INT32_MAX;
volatile int64_t t60 = -153060636LL;
volatile int16_t x245 = INT16_MIN;
int64_t t61 = -1028LL;
int16_t x252 = INT16_MIN;
volatile int32_t t65 = -4667;
int8_t x265 = -1;
int32_t t66 = 3683;
uint32_t x269 = 467448951U;
uint32_t x271 = 0U;
int32_t x272 = -1;
int8_t x275 = -1;
int8_t x280 = INT8_MAX;
volatile int8_t x281 = INT8_MAX;
uint32_t x284 = 56U;
static uint32_t x289 = 22U;
int64_t x291 = INT64_MIN;
uint16_t x296 = UINT16_MAX;
volatile int32_t t73 = -1;
uint8_t x299 = UINT8_MAX;
int64_t x304 = -3181238500046971LL;
uint64_t t75 = 83472272828004LLU;
int64_t x307 = INT64_MAX;
static volatile int64_t t76 = 468564067872368224LL;
volatile int32_t x309 = -6;
volatile uint32_t t77 = 266104U;
int64_t x320 = INT64_MIN;
volatile int32_t t81 = 7685;
int16_t x333 = 24;
volatile int64_t x341 = -1LL;
volatile uint64_t t86 = 101742829624LLU;
static uint8_t x351 = UINT8_MAX;
static volatile int64_t x354 = INT64_MIN;
uint64_t t88 = 51695406213085528LLU;
int64_t x361 = -13758746LL;
int8_t x365 = -1;
volatile int64_t t91 = -155482308351967LL;
uint64_t x371 = 1866LLU;
volatile int8_t x372 = INT8_MIN;
static uint64_t t92 = 36208199657703LLU;
int64_t x374 = INT64_MIN;
uint64_t t95 = 95634LLU;
volatile int8_t x388 = 2;
uint32_t x390 = 8U;
int16_t x399 = -1;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int64_t x2 = -413782684072LL;
	uint64_t x3 = 1148750LLU;
	int8_t x4 = -2;
	volatile uint64_t t0 = 730005727967485117LLU;

	t0 = ((x1^(x2^x3))&x4);

	if (t0 != 18446743659927844584LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -640746820501LL;
	uint8_t x6 = 31U;
	int8_t x7 = 1;
	static int64_t x8 = -1LL;
	volatile int64_t t1 = -1024728LL;

	t1 = ((x5^(x6^x7))&x8);

	if (t1 != -640746820491LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = INT32_MAX;
	int16_t x11 = INT16_MIN;
	static int64_t x12 = 53926LL;
	static volatile int64_t t2 = 1108001012LL;

	t2 = ((x9^(x10^x11))&x12);

	if (t2 != 53926LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile uint8_t x14 = UINT8_MAX;
	int32_t x15 = 246548676;
	static volatile uint32_t x16 = 17924783U;
	volatile uint32_t t3 = 304U;

	t3 = ((x13^(x14^x15))&x16);

	if (t3 != 16876203U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t t4 = 1407220702LL;

	t4 = ((x17^(x18^x19))&x20);

	if (t4 != 32730LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	volatile uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 17149555419LLU;

	t5 = ((x21^(x22^x23))&x24);

	if (t5 != 18446744071562100734LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	uint8_t x26 = UINT8_MAX;
	uint32_t x28 = 56U;

	t6 = ((x25^(x26^x27))&x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = INT64_MAX;
	int8_t x30 = 2;
	int16_t x32 = INT16_MIN;
	int64_t t7 = INT64_MIN;

	t7 = ((x29^(x30^x31))&x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -74;
	static uint16_t x34 = 650U;
	volatile int16_t x35 = INT16_MAX;
	int64_t x36 = 412271194LL;
	int64_t t8 = -5422966822372961LL;

	t8 = ((x33^(x34^x35))&x36);

	if (t8 != 412254786LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 8975U;
	volatile uint8_t x38 = 0U;
	int32_t x39 = -1;
	volatile uint32_t t9 = 2616968U;

	t9 = ((x37^(x38^x39))&x40);

	if (t9 != 2147474672U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 8987U;
	int32_t x42 = INT32_MAX;
	volatile int16_t x43 = -18;

	t10 = ((x41^(x42^x43))&x44);

	if (t10 != 2147492616LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 58U;
	int32_t x47 = -1;
	volatile int64_t x48 = 23688LL;
	volatile int64_t t11 = -61211176LL;

	t11 = ((x45^(x46^x47))&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = UINT8_MAX;
	uint8_t x51 = UINT8_MAX;
	static volatile int16_t x52 = -33;
	int32_t t12 = 0;

	t12 = ((x49^(x50^x51))&x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MAX;
	static int8_t x54 = INT8_MIN;
	uint16_t x56 = 12505U;
	static volatile int32_t t13 = 20098;

	t13 = ((x53^(x54^x55))&x56);

	if (t13 != 89) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = -1878169055053792LL;
	static int8_t x59 = -1;
	int64_t x60 = -1952494231928886257LL;
	int64_t t14 = -1058625742711094LL;

	t14 = ((x57^(x58^x59))&x60);

	if (t14 != -1954191908202797041LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 11LLU;
	static int16_t x62 = -1;
	int8_t x63 = 0;
	static int16_t x64 = -1;
	uint64_t t15 = 423287320973832LLU;

	t15 = ((x61^(x62^x63))&x64);

	if (t15 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int8_t x66 = 2;
	int64_t x67 = -1LL;
	int64_t t16 = 6514961LL;

	t16 = ((x65^(x66^x67))&x68);

	if (t16 != 2LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 923U;
	int64_t x71 = -818740888517929LL;
	static uint32_t x72 = UINT32_MAX;
	int64_t t17 = 53149092510511LL;

	t17 = ((x69^(x70^x71))&x72);

	if (t17 != 137183565LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -1LL;
	static uint64_t x75 = UINT64_MAX;
	int32_t x76 = -4357613;
	static volatile uint64_t t18 = 1298758507375863LLU;

	t18 = ((x73^(x74^x75))&x76);

	if (t18 != 19LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x78 = 10398LLU;
	volatile int8_t x79 = -1;
	uint64_t t19 = 14506742704LLU;

	t19 = ((x77^(x78^x79))&x80);

	if (t19 != 1741572LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -158407LL;
	int64_t x82 = INT64_MIN;
	volatile int8_t x83 = 0;
	uint32_t x84 = 1U;
	int64_t t20 = 10410245719707693LL;

	t20 = ((x81^(x82^x83))&x84);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	static volatile int32_t x87 = INT32_MIN;

	t21 = ((x85^(x86^x87))&x88);

	if (t21 != 1182309U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = UINT16_MAX;
	uint8_t x90 = 21U;
	uint64_t x91 = UINT64_MAX;
	int16_t x92 = INT16_MIN;

	t22 = ((x89^(x90^x91))&x92);

	if (t22 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = 76967984976980120LL;
	int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MAX;
	static int64_t x96 = -1LL;

	t23 = ((x93^(x94^x95))&x96);

	if (t23 != -76967984976959257LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = -388LL;
	volatile int8_t x99 = INT8_MAX;
	static int16_t x100 = INT16_MAX;

	t24 = ((x97^(x98^x99))&x100);

	if (t24 != 32265LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x102 = 12U;
	int16_t x103 = 0;
	volatile int64_t t25 = -971842546528996LL;

	t25 = ((x101^(x102^x103))&x104);

	if (t25 != 81LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	uint16_t x106 = 531U;
	int64_t x107 = INT64_MIN;
	static int8_t x108 = INT8_MAX;
	volatile int64_t t26 = 3963470972198281023LL;

	t26 = ((x105^(x106^x107))&x108);

	if (t26 != 108LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -28;
	int32_t x110 = 436146;
	static int32_t x111 = -1;
	volatile int64_t x112 = INT64_MIN;
	int64_t t27 = -66839LL;

	t27 = ((x109^(x110^x111))&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x114 = 31425U;
	int32_t x115 = -1092;
	int64_t t28 = INT64_MIN;

	t28 = ((x113^(x114^x115))&x116);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	int64_t x120 = INT64_MIN;
	uint64_t t29 = 988535497149LLU;

	t29 = ((x117^(x118^x119))&x120);

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MIN;
	int64_t x123 = -1LL;
	int32_t x124 = INT32_MIN;
	int64_t t30 = INT64_MIN;

	t30 = ((x121^(x122^x123))&x124);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MAX;
	int32_t x126 = INT32_MAX;
	static volatile uint64_t x127 = 24596LLU;
	int16_t x128 = -1;

	t31 = ((x125^(x126^x127))&x128);

	if (t31 != 2147458964LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	volatile int64_t x131 = INT64_MIN;
	static volatile int64_t t32 = 1LL;

	t32 = ((x129^(x130^x131))&x132);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	static int64_t x135 = INT64_MIN;
	uint64_t x136 = 2000LLU;
	volatile uint64_t t33 = 3386319872190LLU;

	t33 = ((x133^(x134^x135))&x136);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	static uint32_t x138 = 1U;
	int32_t x139 = INT32_MAX;
	volatile int64_t t34 = -970LL;

	t34 = ((x137^(x138^x139))&x140);

	if (t34 != 1097313010LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -40743072;
	static uint16_t x142 = 23917U;
	int16_t x143 = INT16_MIN;
	int16_t x144 = -1;
	static int32_t t35 = 22593;

	t35 = ((x141^(x142^x143))&x144);

	if (t35 != 40735245) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 345061541103383846LLU;
	int32_t x146 = INT32_MIN;
	int64_t x148 = INT64_MAX;
	volatile uint64_t t36 = 1053227LLU;

	t36 = ((x145^(x146^x147))&x148);

	if (t36 != 345061541103383846LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x152 = INT16_MAX;
	volatile uint32_t t37 = 0U;

	t37 = ((x149^(x150^x151))&x152);

	if (t37 != 32344U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x154 = INT32_MAX;
	int64_t x155 = INT64_MIN;
	volatile uint64_t x156 = 24880687LLU;

	t38 = ((x153^(x154^x155))&x156);

	if (t38 != 24880687LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x159 = -1;
	int64_t x160 = -1LL;

	t39 = ((x157^(x158^x159))&x160);

	if (t39 != 9223372036854775653LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MAX;
	volatile int8_t x162 = INT8_MIN;
	uint8_t x163 = UINT8_MAX;
	volatile int32_t x164 = 1844;
	volatile int32_t t40 = -1928;

	t40 = ((x161^(x162^x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	uint16_t x167 = 18U;
	static uint8_t x168 = UINT8_MAX;
	int64_t t41 = 5549LL;

	t41 = ((x165^(x166^x167))&x168);

	if (t41 != 15LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	static int16_t x170 = -1;
	volatile uint64_t x171 = 29425LLU;
	volatile uint64_t x172 = 96869835867LLU;
	volatile uint64_t t42 = 54290193LLU;

	t42 = ((x169^(x170^x171))&x172);

	if (t42 != 96869834833LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = UINT64_MAX;
	int32_t x174 = -1;
	static int8_t x175 = 7;
	int8_t x176 = 13;
	volatile uint64_t t43 = 4021271742884LLU;

	t43 = ((x173^(x174^x175))&x176);

	if (t43 != 5LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t t44 = 432U;

	t44 = ((x177^(x178^x179))&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int32_t x182 = 3178082;
	uint32_t x183 = UINT32_MAX;
	uint64_t t45 = 2174850055333474LLU;

	t45 = ((x181^(x182^x183))&x184);

	if (t45 != 1867284865LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	static volatile int32_t x187 = INT32_MIN;
	int8_t x188 = 4;
	volatile int64_t t46 = -782399391LL;

	t46 = ((x185^(x186^x187))&x188);

	if (t46 != 4LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	static uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 1335352U;

	t47 = ((x189^(x190^x191))&x192);

	if (t47 != 24632LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = UINT64_MAX;
	uint32_t x194 = 613446U;
	volatile uint16_t x196 = 86U;
	uint64_t t48 = 10420462660549215LLU;

	t48 = ((x193^(x194^x195))&x196);

	if (t48 != 18LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	int8_t x198 = 1;
	int8_t x199 = -1;
	volatile int8_t x200 = -1;
	volatile int32_t t49 = 1584;

	t49 = ((x197^(x198^x199))&x200);

	if (t49 != -65535) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -574;
	uint64_t x202 = 28653742LLU;
	volatile int64_t x203 = INT64_MAX;
	int32_t x204 = -88177;
	uint64_t t50 = 4875173558663470410LLU;

	t50 = ((x201^(x202^x203))&x204);

	if (t50 != 9223372036883358339LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MAX;
	volatile int64_t x207 = INT64_MIN;
	volatile int64_t t51 = 370907623602935LL;

	t51 = ((x205^(x206^x207))&x208);

	if (t51 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = 1;
	static int64_t x211 = 60603186367085340LL;
	static uint32_t x212 = 149004160U;

	t52 = ((x209^(x210^x211))&x212);

	if (t52 != 138478720LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MIN;
	int16_t x214 = -20;
	int64_t x216 = INT64_MAX;
	int64_t t53 = 614LL;

	t53 = ((x213^(x214^x215))&x216);

	if (t53 != 6621923160475176LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -28;
	int8_t x219 = -1;
	static int64_t x220 = INT64_MIN;
	volatile uint64_t t54 = 31LLU;

	t54 = ((x217^(x218^x219))&x220);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x223 = 2U;
	int8_t x224 = 4;

	t55 = ((x221^(x222^x223))&x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint16_t x226 = 14835U;
	uint8_t x227 = UINT8_MAX;
	uint32_t x228 = UINT32_MAX;
	uint32_t t56 = 15264422U;

	t56 = ((x225^(x226^x227))&x228);

	if (t56 != 4294949132U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x230 = INT64_MAX;
	int64_t t57 = -27029681168325488LL;

	t57 = ((x229^(x230^x231))&x232);

	if (t57 != 815787290LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	uint64_t x234 = 3727521480323087LLU;
	int8_t x236 = INT8_MIN;
	volatile uint64_t t58 = 20110212776101LLU;

	t58 = ((x233^(x234^x235))&x236);

	if (t58 != 3727521480323072LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x237 = 24734U;
	int16_t x238 = 3;
	int16_t x239 = INT16_MIN;
	volatile uint16_t x240 = UINT16_MAX;

	t59 = ((x237^(x238^x239))&x240);

	if (t59 != 57501U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	volatile int64_t x242 = -1LL;
	int8_t x243 = -1;

	t60 = ((x241^(x242^x243))&x244);

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = -462242330667597LL;
	int8_t x247 = INT8_MIN;
	volatile uint16_t x248 = UINT16_MAX;

	t61 = ((x245^(x246^x247))&x248);

	if (t61 != 59955LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -260;
	int32_t x250 = INT32_MAX;
	uint32_t x251 = 20U;
	uint32_t t62 = 7877U;

	t62 = ((x249^(x250^x251))&x252);

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 1;
	int16_t x254 = -1;
	int32_t x255 = 217354351;
	static int8_t x256 = -1;
	int32_t t63 = -122;

	t63 = ((x253^(x254^x255))&x256);

	if (t63 != -217354351) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	static int8_t x258 = INT8_MIN;
	static volatile uint16_t x259 = 0U;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 12502384;

	t64 = ((x257^(x258^x259))&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int32_t x262 = -1;
	volatile int16_t x263 = -1;
	static int16_t x264 = INT16_MIN;

	t65 = ((x261^(x262^x263))&x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x266 = 112U;
	volatile int8_t x267 = 3;
	static int16_t x268 = INT16_MAX;

	t66 = ((x265^(x266^x267))&x268);

	if (t66 != 32652) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x270 = -1LL;
	int64_t t67 = -15302329LL;

	t67 = ((x269^(x270^x271))&x272);

	if (t67 != -467448952LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = -1;
	int16_t x274 = -1;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = -8957;

	t68 = ((x273^(x274^x275))&x276);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 758289LLU;
	static volatile int32_t x278 = -180;
	volatile uint16_t x279 = 7U;
	volatile uint64_t t69 = 16336LLU;

	t69 = ((x277^(x278^x279))&x280);

	if (t69 != 90LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = 495821593686623LL;
	int8_t x283 = INT8_MAX;
	int64_t t70 = -35LL;

	t70 = ((x281^(x282^x283))&x284);

	if (t70 != 24LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 46277LLU;
	int8_t x286 = 23;
	uint8_t x287 = UINT8_MAX;
	uint32_t x288 = 200130U;
	volatile uint64_t t71 = 154154LLU;

	t71 = ((x285^(x286^x287))&x288);

	if (t71 != 1024LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x290 = 41;
	static int64_t x292 = INT64_MAX;
	static int64_t t72 = 1147346767709120LL;

	t72 = ((x289^(x290^x291))&x292);

	if (t72 != 63LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -148;
	int16_t x294 = -5;
	int8_t x295 = INT8_MIN;

	t73 = ((x293^(x294^x295))&x296);

	if (t73 != 65303) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -38267510326536954LL;
	static volatile int8_t x298 = INT8_MIN;
	static int8_t x300 = 5;
	int64_t t74 = 0LL;

	t74 = ((x297^(x298^x299))&x300);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int64_t x302 = -8856LL;
	volatile int64_t x303 = INT64_MAX;

	t75 = ((x301^(x302^x303))&x304);

	if (t75 != 9220190798354728192LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = 9135865U;
	int64_t x306 = -60948950100807614LL;
	int8_t x308 = INT8_MIN;

	t76 = ((x305^(x306^x307))&x308);

	if (t76 != -9162423086744966912LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 41U;
	volatile int32_t x311 = INT32_MIN;
	volatile uint32_t x312 = 69007222U;

	t77 = ((x309^(x310^x311))&x312);

	if (t77 != 69007186U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = INT32_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	static uint16_t x315 = UINT16_MAX;
	uint64_t x316 = 2716659LLU;
	uint64_t t78 = 95238449LLU;

	t78 = ((x313^(x314^x315))&x316);

	if (t78 != 2686976LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = 1374U;
	uint16_t x318 = 0U;
	int64_t x319 = INT64_MAX;
	volatile int64_t t79 = 49501783323998LL;

	t79 = ((x317^(x318^x319))&x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	int32_t x322 = INT32_MIN;
	volatile int16_t x323 = INT16_MAX;
	volatile uint16_t x324 = UINT16_MAX;
	int32_t t80 = -1048;

	t80 = ((x321^(x322^x323))&x324);

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	static int8_t x326 = -1;
	int8_t x327 = -2;
	int8_t x328 = -1;

	t81 = ((x325^(x326^x327))&x328);

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = 5U;
	volatile int64_t x331 = -70572806329673835LL;
	int64_t x332 = 1LL;
	static volatile int64_t t82 = 1103216109396LL;

	t82 = ((x329^(x330^x331))&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MIN;
	int16_t x335 = 1423;
	uint8_t x336 = 123U;
	static volatile int64_t t83 = 53LL;

	t83 = ((x333^(x334^x335))&x336);

	if (t83 != 19LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = UINT8_MAX;
	volatile int64_t x338 = -1LL;
	volatile int64_t x339 = INT64_MAX;
	uint64_t x340 = 1LLU;
	static volatile uint64_t t84 = 10063321LLU;

	t84 = ((x337^(x338^x339))&x340);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = INT64_MIN;
	volatile uint8_t x343 = UINT8_MAX;
	uint8_t x344 = 2U;
	static int64_t t85 = 49707768338256LL;

	t85 = ((x341^(x342^x343))&x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = 0;
	uint64_t x346 = 10460064195590065LLU;
	volatile int16_t x347 = INT16_MIN;
	uint16_t x348 = 6241U;

	t86 = ((x345^(x346^x347))&x348);

	if (t86 != 4129LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 6204;
	static int16_t x350 = -121;
	static int32_t x352 = INT32_MIN;
	int32_t t87 = INT32_MIN;

	t87 = ((x349^(x350^x351))&x352);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -13721;
	static uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 60LLU;

	t88 = ((x353^(x354^x355))&x356);

	if (t88 != 24LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int8_t x358 = -1;
	uint16_t x359 = UINT16_MAX;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t89 = INT32_MIN;

	t89 = ((x357^(x358^x359))&x360);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = 1518080U;
	static int32_t x363 = -1;
	int64_t x364 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = ((x361^(x362^x363))&x364);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MAX;
	uint8_t x368 = UINT8_MAX;

	t91 = ((x365^(x366^x367))&x368);

	if (t91 != 128LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 5U;
	int8_t x370 = INT8_MAX;

	t92 = ((x369^(x370^x371))&x372);

	if (t92 != 1792LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 948335768534LL;
	static volatile int64_t x375 = INT64_MIN;
	static int64_t x376 = INT64_MIN;
	static int64_t t93 = -4077643LL;

	t93 = ((x373^(x374^x375))&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 7678;
	uint16_t x378 = UINT16_MAX;
	int32_t x379 = 9;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = 601;

	t94 = ((x377^(x378^x379))&x380);

	if (t94 != 57864) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MAX;
	static uint64_t x384 = 103241605691242690LLU;

	t95 = ((x381^(x382^x383))&x384);

	if (t95 != 103241605691242690LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	uint64_t x386 = 111271813875701LLU;
	uint64_t x387 = UINT64_MAX;
	volatile uint64_t t96 = 12953198337LLU;

	t96 = ((x385^(x386^x387))&x388);

	if (t96 != 2LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 2355U;
	static int16_t x391 = INT16_MIN;
	uint16_t x392 = 625U;
	volatile uint32_t t97 = 257U;

	t97 = ((x389^(x390^x391))&x392);

	if (t97 != 49U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x393 = -15869LL;
	static uint64_t x394 = 45822609462034LLU;
	volatile uint8_t x395 = 11U;
	static int16_t x396 = INT16_MIN;
	static uint64_t t98 = 85LLU;

	t98 = ((x393^(x394^x395))&x396);

	if (t98 != 18446698251100061696LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	int16_t x398 = INT16_MIN;
	uint16_t x400 = 81U;
	static int32_t t99 = 482956148;

	t99 = ((x397^(x398^x399))&x400);

	if (t99 != 0) { NG(); } else { ; }
	
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

