#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int8_t x9 = -1;
int32_t t4 = 4;
volatile int64_t t5 = -1LL;
volatile uint16_t x25 = UINT16_MAX;
int8_t x27 = INT8_MIN;
int64_t x30 = INT64_MIN;
uint32_t x31 = 26036344U;
int16_t x32 = -15005;
uint64_t x33 = 119195LLU;
static int16_t x43 = -318;
uint64_t x50 = 0LLU;
volatile int32_t t13 = 1006248;
int32_t x57 = INT32_MAX;
static int64_t x58 = 10302429217LL;
int32_t x61 = INT32_MIN;
volatile int32_t x62 = -1;
static volatile int8_t x64 = INT8_MAX;
uint64_t x65 = UINT64_MAX;
uint32_t x68 = 197477816U;
int32_t x69 = INT32_MIN;
static int8_t x80 = INT8_MIN;
volatile int32_t t19 = 0;
int32_t x83 = INT32_MIN;
int32_t x84 = -496603926;
uint32_t x96 = 663857U;
static int16_t x101 = INT16_MIN;
uint32_t x107 = 1203U;
uint64_t x108 = UINT64_MAX;
volatile int32_t t26 = -193;
int64_t x112 = INT64_MIN;
uint16_t x119 = 397U;
int16_t x120 = -5928;
int64_t x125 = INT64_MAX;
int16_t x130 = INT16_MIN;
static int32_t t32 = 0;
static uint16_t x150 = 26U;
int32_t x153 = INT32_MIN;
uint8_t x156 = 6U;
static int64_t x162 = INT64_MIN;
int32_t x163 = INT32_MAX;
int64_t x164 = 225053LL;
int32_t x167 = INT32_MIN;
int8_t x168 = INT8_MIN;
int32_t x178 = 81;
uint64_t x184 = UINT64_MAX;
volatile int8_t x196 = INT8_MIN;
uint8_t x202 = 11U;
int32_t x216 = INT32_MIN;
int16_t x219 = 6081;
static int16_t x229 = -9;
static int32_t t57 = 612291885;
static int32_t x240 = INT32_MIN;
int64_t t59 = -764048395825470082LL;
volatile int32_t x248 = 844;
int16_t x251 = 664;
volatile int32_t t62 = 6;
static uint8_t x256 = 38U;
volatile int32_t t63 = -18;
uint64_t x259 = UINT64_MAX;
int32_t t64 = -739;
volatile uint64_t x261 = 24498011717916LLU;
volatile uint8_t x264 = 1U;
volatile int16_t x267 = INT16_MIN;
int32_t t67 = 7736942;
int64_t x273 = INT64_MAX;
uint64_t x274 = 0LLU;
int32_t x275 = -2768;
int32_t x277 = INT32_MIN;
int32_t t70 = -61304;
int16_t x286 = -1;
uint64_t t71 = 1446LLU;
int64_t x290 = 59897LL;
volatile int64_t x294 = 0LL;
int32_t x300 = -1;
int32_t x301 = 12817100;
static uint64_t x304 = 411575570327593LLU;
uint8_t x310 = UINT8_MAX;
volatile uint32_t t78 = 80995672U;
int16_t x321 = INT16_MIN;
static uint16_t x332 = UINT16_MAX;
volatile int32_t t83 = -530339381;
volatile int16_t x338 = 0;
int32_t x339 = 173;
static volatile int16_t x343 = 1;
static volatile int64_t t85 = -1LL;
volatile int64_t x346 = -1LL;
int8_t x349 = -9;
uint32_t x352 = 14912U;
int32_t x353 = -1;
int8_t x364 = 2;
int16_t x367 = INT16_MIN;
static int8_t x373 = INT8_MAX;
uint64_t x374 = 4309462591LLU;
uint64_t t93 = 64480202746778067LLU;
int32_t x379 = 170603;
int8_t x387 = 3;
int64_t x389 = INT64_MAX;
static volatile int64_t x393 = INT64_MIN;
int64_t x394 = INT64_MAX;
int16_t x399 = -1344;


void f0(void) {
	int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 1;

	t0 = (x1^(x2|(x3<x4)));

	if (t0 != -256) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile int8_t x6 = -28;
	volatile int64_t x7 = -39252LL;
	volatile uint32_t x8 = 484U;
	volatile uint64_t t1 = 3907297599LLU;

	t1 = (x5^(x6|(x7<x8)));

	if (t1 != 26LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = 0;
	uint32_t x11 = 490U;
	uint8_t x12 = 10U;
	static int32_t t2 = 17;

	t2 = (x9^(x10|(x11<x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = INT8_MIN;
	uint8_t x15 = 6U;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 155623644;

	t3 = (x13^(x14|(x15<x16)));

	if (t3 != -32642) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	static int8_t x18 = -52;
	static uint64_t x19 = 41759LLU;
	static volatile int8_t x20 = -7;

	t4 = (x17^(x18|(x19<x20)));

	if (t4 != 50) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	volatile int16_t x22 = INT16_MIN;
	int8_t x23 = 6;
	int8_t x24 = 1;

	t5 = (x21^(x22|(x23<x24)));

	if (t5 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = UINT64_MAX;
	volatile uint32_t x28 = 69U;
	uint64_t t6 = 11351405387131100LLU;

	t6 = (x25^(x26|(x27<x28)));

	if (t6 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	volatile int64_t t7 = -6236318570LL;

	t7 = (x29^(x30|(x31<x32)));

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = -1;
	int32_t x36 = INT32_MAX;
	uint64_t t8 = 132327033447444208LLU;

	t8 = (x33^(x34|(x35<x36)));

	if (t8 != 18446744071562187162LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 57U;
	static int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MAX;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = 23931;

	t9 = (x37^(x38|(x39<x40)));

	if (t9 != -2147483592) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	volatile uint64_t x42 = 550082908256LLU;
	volatile int64_t x44 = -1LL;
	volatile uint64_t t10 = 7563394772163LLU;

	t10 = (x41^(x42|(x43<x44)));

	if (t10 != 550082908190LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	int16_t x46 = -2;
	volatile int32_t x47 = -9031102;
	static int32_t x48 = 6312;
	static int32_t t11 = 4145323;

	t11 = (x45^(x46|(x47<x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 0;
	uint64_t x51 = 33158LLU;
	int64_t x52 = INT64_MIN;
	uint64_t t12 = 15825999652049428LLU;

	t12 = (x49^(x50|(x51<x52)));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	uint8_t x54 = 45U;
	int32_t x55 = INT32_MIN;
	int64_t x56 = INT64_MAX;

	t13 = (x53^(x54|(x55<x56)));

	if (t13 != 32722) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x59 = INT32_MAX;
	int16_t x60 = INT16_MIN;
	volatile int64_t t14 = 106598988678090366LL;

	t14 = (x57^(x58|(x59<x60)));

	if (t14 != 9024923614LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x63 = 0U;
	volatile int32_t t15 = INT32_MAX;

	t15 = (x61^(x62|(x63<x64)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 4U;
	int32_t x67 = 1;
	static uint64_t t16 = 2LLU;

	t16 = (x65^(x66|(x67<x68)));

	if (t16 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MAX;
	int64_t x71 = 3911511LL;
	static uint8_t x72 = 75U;
	volatile int64_t t17 = 428027253963LL;

	t17 = (x69^(x70|(x71<x72)));

	if (t17 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 13U;
	int8_t x74 = -1;
	static int16_t x75 = 1;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = -493;

	t18 = (x73^(x74|(x75<x76)));

	if (t18 != -14) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = -14;
	volatile int16_t x79 = -50;

	t19 = (x77^(x78|(x79<x80)));

	if (t19 != 114) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = UINT16_MAX;
	int32_t x82 = -1;
	int32_t t20 = -213139413;

	t20 = (x81^(x82|(x83<x84)));

	if (t20 != -65536) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 12490;
	volatile uint8_t x86 = 29U;
	uint64_t x87 = 270002757338051LLU;
	int32_t x88 = INT32_MAX;
	int32_t t21 = 1;

	t21 = (x85^(x86|(x87<x88)));

	if (t21 != 12503) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 3;
	static int64_t x90 = INT64_MAX;
	volatile int16_t x91 = 1;
	int8_t x92 = INT8_MIN;
	static volatile int64_t t22 = -1241298LL;

	t22 = (x89^(x90|(x91<x92)));

	if (t22 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	uint32_t x94 = 0U;
	static int32_t x95 = INT32_MIN;
	volatile int64_t t23 = 94LL;

	t23 = (x93^(x94|(x95<x96)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -2;
	static int32_t x98 = INT32_MIN;
	int64_t x99 = -1361835010796694028LL;
	int16_t x100 = INT16_MIN;
	int32_t t24 = INT32_MAX;

	t24 = (x97^(x98|(x99<x100)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = 2;
	static int16_t x103 = INT16_MIN;
	volatile int32_t x104 = 49342;
	static volatile int32_t t25 = -2274622;

	t25 = (x101^(x102|(x103<x104)));

	if (t25 != -32765) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = -1;
	uint8_t x106 = 3U;

	t26 = (x105^(x106|(x107<x108)));

	if (t26 != -4) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int64_t x110 = INT64_MAX;
	int16_t x111 = INT16_MIN;
	int64_t t27 = -185LL;

	t27 = (x109^(x110|(x111<x112)));

	if (t27 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = -1;
	uint16_t x114 = 3004U;
	volatile int64_t x115 = -467842296819694LL;
	static uint16_t x116 = 22U;
	volatile int32_t t28 = 389266;

	t28 = (x113^(x114|(x115<x116)));

	if (t28 != -3006) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	int64_t x118 = INT64_MIN;
	int64_t t29 = 111017LL;

	t29 = (x117^(x118|(x119<x120)));

	if (t29 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -3LL;
	volatile uint64_t x122 = UINT64_MAX;
	int64_t x123 = 404234161722LL;
	volatile int64_t x124 = -332996652043LL;
	volatile uint64_t t30 = 148988101097612264LLU;

	t30 = (x121^(x122|(x123<x124)));

	if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 8832988U;
	int8_t x127 = 3;
	static int32_t x128 = 558;
	static int64_t t31 = 15356728894119199LL;

	t31 = (x125^(x126|(x127<x128)));

	if (t31 != 9223372036845942818LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	static int8_t x131 = INT8_MIN;
	static uint32_t x132 = 26715353U;

	t32 = (x129^(x130|(x131<x132)));

	if (t32 != -32641) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 0U;
	int32_t x134 = -1;
	uint8_t x135 = 1U;
	static int64_t x136 = 1349417786962LL;
	volatile int32_t t33 = -838419;

	t33 = (x133^(x134|(x135<x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 4253440025260640LL;
	static uint8_t x138 = 43U;
	int16_t x139 = INT16_MIN;
	volatile int8_t x140 = -1;
	int64_t t34 = 1538153307301790LL;

	t34 = (x137^(x138|(x139<x140)));

	if (t34 != 4253440025260619LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	static uint16_t x142 = UINT16_MAX;
	int64_t x143 = 195065713087832753LL;
	volatile int8_t x144 = -1;
	volatile int32_t t35 = 168944280;

	t35 = (x141^(x142|(x143<x144)));

	if (t35 != 65280) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 1;
	static uint32_t x146 = UINT32_MAX;
	int8_t x147 = INT8_MAX;
	uint32_t x148 = 61455996U;
	volatile uint32_t t36 = 430128256U;

	t36 = (x145^(x146|(x147<x148)));

	if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 106215584770LLU;
	static uint16_t x151 = 253U;
	int64_t x152 = INT64_MAX;
	volatile uint64_t t37 = 81698587523132LLU;

	t37 = (x149^(x150|(x151<x152)));

	if (t37 != 106215584793LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = 776LLU;
	int32_t x155 = 0;
	volatile uint64_t t38 = 9210263119LLU;

	t38 = (x153^(x154|(x155<x156)));

	if (t38 != 18446744071562068745LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -1LL;
	int32_t x158 = INT32_MIN;
	uint16_t x159 = 468U;
	int8_t x160 = INT8_MAX;
	volatile int64_t t39 = 292919016039784465LL;

	t39 = (x157^(x158|(x159<x160)));

	if (t39 != 2147483647LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	static volatile int64_t t40 = 1976031762LL;

	t40 = (x161^(x162|(x163<x164)));

	if (t40 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = 149686550454758LL;
	int64_t t41 = 34940545877289LL;

	t41 = (x165^(x166|(x167<x168)));

	if (t41 != 149686550404632LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	volatile int8_t x170 = INT8_MIN;
	int16_t x171 = 93;
	int32_t x172 = 79255;
	int32_t t42 = 25;

	t42 = (x169^(x170|(x171<x172)));

	if (t42 != -65410) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1;
	int64_t x174 = INT64_MIN;
	int64_t x175 = INT64_MIN;
	static int32_t x176 = INT32_MIN;
	static volatile int64_t t43 = 12LL;

	t43 = (x173^(x174|(x175<x176)));

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 33348918;

	t44 = (x177^(x178|(x179<x180)));

	if (t44 != -32687) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = 180U;
	int16_t x182 = INT16_MIN;
	static uint64_t x183 = UINT64_MAX;
	static volatile int32_t t45 = -396;

	t45 = (x181^(x182|(x183<x184)));

	if (t45 != -32588) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = -1137812478107123877LL;
	int8_t x187 = INT8_MIN;
	uint32_t x188 = UINT32_MAX;
	volatile int64_t t46 = 1879584790146452408LL;

	t46 = (x185^(x186|(x187<x188)));

	if (t46 != 1137812479094226779LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	static int32_t x190 = 8621885;
	volatile uint64_t x191 = UINT64_MAX;
	int16_t x192 = 4725;
	volatile uint32_t t47 = 275544U;

	t47 = (x189^(x190|(x191<x192)));

	if (t47 != 4286345410U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	int64_t x194 = INT64_MIN;
	int64_t x195 = 1078880LL;
	volatile int64_t t48 = -7740LL;

	t48 = (x193^(x194|(x195<x196)));

	if (t48 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	int8_t x198 = INT8_MIN;
	int32_t x199 = -1;
	int32_t x200 = INT32_MAX;
	volatile int64_t t49 = 7LL;

	t49 = (x197^(x198|(x199<x200)));

	if (t49 != 126LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	static uint64_t x203 = 97958975LLU;
	volatile uint8_t x204 = 6U;
	int32_t t50 = -1;

	t50 = (x201^(x202|(x203<x204)));

	if (t50 != 244) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x205 = 1306417363LL;
	uint16_t x206 = 9972U;
	static volatile int32_t x207 = INT32_MAX;
	uint8_t x208 = 0U;
	static int64_t t51 = -1719LL;

	t51 = (x205^(x206|(x207<x208)));

	if (t51 != 1306426919LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	static int16_t x210 = INT16_MIN;
	int16_t x211 = -31;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 2;

	t52 = (x209^(x210|(x211<x212)));

	if (t52 != 2147450880) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 13U;
	uint32_t x214 = 12U;
	int32_t x215 = INT32_MAX;
	volatile uint32_t t53 = 280315U;

	t53 = (x213^(x214|(x215<x216)));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 909932LL;
	int64_t x218 = INT64_MIN;
	int8_t x220 = INT8_MAX;
	volatile int64_t t54 = 3245503043826LL;

	t54 = (x217^(x218|(x219<x220)));

	if (t54 != -9223372036853865876LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = -1;
	volatile uint32_t x222 = 137566815U;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 24361U;
	volatile uint32_t t55 = 7656U;

	t55 = (x221^(x222|(x223<x224)));

	if (t55 != 4157400480U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -1733LL;
	volatile uint16_t x226 = 425U;
	uint64_t x227 = UINT64_MAX;
	static int32_t x228 = -485665;
	int64_t t56 = 3740LL;

	t56 = (x225^(x226|(x227<x228)));

	if (t56 != -1902LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 113U;
	int64_t x231 = INT64_MIN;
	int16_t x232 = 4;

	t57 = (x229^(x230|(x231<x232)));

	if (t57 != -122) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MIN;
	uint32_t x234 = 1921U;
	int16_t x235 = INT16_MIN;
	volatile int8_t x236 = INT8_MIN;
	volatile uint32_t t58 = 1031328U;

	t58 = (x233^(x234|(x235<x236)));

	if (t58 != 4294965249U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	uint32_t x238 = UINT32_MAX;
	static int8_t x239 = -1;

	t59 = (x237^(x238|(x239<x240)));

	if (t59 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 435108298LLU;
	uint64_t x242 = 162970681654457730LLU;
	uint8_t x243 = 2U;
	uint8_t x244 = 0U;
	uint64_t t60 = 514381552432LLU;

	t60 = (x241^(x242|(x243<x244)));

	if (t60 != 162970681527372872LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 7U;
	int64_t x246 = -1LL;
	static uint64_t x247 = UINT64_MAX;
	volatile int64_t t61 = -67514382696483421LL;

	t61 = (x245^(x246|(x247<x248)));

	if (t61 != -8LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1757;
	static int8_t x250 = INT8_MIN;
	volatile int64_t x252 = -1LL;

	t62 = (x249^(x250|(x251<x252)));

	if (t62 != 1699) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = -2;
	int32_t x254 = -1;
	int8_t x255 = 1;

	t63 = (x253^(x254|(x255<x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x257 = -3;
	volatile uint8_t x258 = UINT8_MAX;
	int16_t x260 = INT16_MIN;

	t64 = (x257^(x258|(x259<x260)));

	if (t64 != -254) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = 3U;
	volatile int64_t x263 = -1LL;
	volatile uint64_t t65 = 10587649218756381LLU;

	t65 = (x261^(x262|(x263<x264)));

	if (t65 != 24498011717919LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MAX;
	static uint32_t x268 = 16U;
	volatile int32_t t66 = 1451;

	t66 = (x265^(x266|(x267<x268)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MAX;
	static int8_t x270 = INT8_MAX;
	volatile uint64_t x271 = UINT64_MAX;
	static int64_t x272 = -1LL;

	t67 = (x269^(x270|(x271<x272)));

	if (t67 != 2147483520) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x276 = UINT32_MAX;
	uint64_t t68 = 383960LLU;

	t68 = (x273^(x274|(x275<x276)));

	if (t68 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MAX;
	int64_t x279 = -1LL;
	volatile int8_t x280 = 1;
	int64_t t69 = 377182683703456LL;

	t69 = (x277^(x278|(x279<x280)));

	if (t69 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = INT8_MAX;
	int16_t x282 = 6317;
	int8_t x283 = INT8_MIN;
	volatile int8_t x284 = INT8_MAX;

	t70 = (x281^(x282|(x283<x284)));

	if (t70 != 6354) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	static int16_t x287 = -32;
	int32_t x288 = INT32_MIN;

	t71 = (x285^(x286|(x287<x288)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	int64_t x291 = -325490638579LL;
	uint32_t x292 = 5981U;
	uint64_t t72 = 538LLU;

	t72 = (x289^(x290|(x291<x292)));

	if (t72 != 18446744073709491718LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	volatile int32_t x295 = 105;
	int16_t x296 = INT16_MAX;
	int64_t t73 = -16LL;

	t73 = (x293^(x294|(x295<x296)));

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = -16038978;
	volatile int16_t x298 = INT16_MIN;
	volatile int32_t x299 = INT32_MIN;
	volatile int32_t t74 = -141079909;

	t74 = (x297^(x298|(x299<x300)));

	if (t74 != 16040895) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = -7388;
	int8_t x303 = -6;
	static int32_t t75 = -31;

	t75 = (x301^(x302|(x303<x304)));

	if (t75 != -12815896) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = UINT8_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	int64_t x307 = 1366LL;
	int16_t x308 = INT16_MAX;
	uint64_t t76 = 389LLU;

	t76 = (x305^(x306|(x307<x308)));

	if (t76 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 15;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	static int32_t t77 = -1649050;

	t77 = (x309^(x310|(x311<x312)));

	if (t77 != 240) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	volatile uint32_t x314 = 74085051U;
	volatile uint64_t x315 = 233612LLU;
	static int16_t x316 = INT16_MAX;

	t78 = (x313^(x314|(x315<x316)));

	if (t78 != 74091844U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 7U;
	int16_t x318 = INT16_MAX;
	static uint16_t x319 = 82U;
	uint16_t x320 = UINT16_MAX;
	int32_t t79 = 666856628;

	t79 = (x317^(x318|(x319<x320)));

	if (t79 != 32760) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	uint64_t x324 = 282385369398868925LLU;
	volatile int32_t t80 = 11;

	t80 = (x321^(x322|(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 251294845LL;
	int32_t x326 = INT32_MIN;
	volatile int16_t x327 = -7286;
	int64_t x328 = INT64_MAX;
	static volatile int64_t t81 = 1LL;

	t81 = (x325^(x326|(x327<x328)));

	if (t81 != -1896188804LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int16_t x330 = -1;
	uint16_t x331 = UINT16_MAX;
	int32_t t82 = -2;

	t82 = (x329^(x330|(x331<x332)));

	if (t82 != -65536) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -55822;
	volatile int32_t x334 = -1;
	volatile int32_t x335 = -1;
	int16_t x336 = INT16_MIN;

	t83 = (x333^(x334|(x335<x336)));

	if (t83 != 55821) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int64_t x340 = INT64_MIN;
	int64_t t84 = INT64_MIN;

	t84 = (x337^(x338|(x339<x340)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = 10234;
	static int64_t x342 = INT64_MIN;
	uint64_t x344 = 1444551LLU;

	t85 = (x341^(x342|(x343<x344)));

	if (t85 != -9223372036854765573LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = INT32_MIN;
	static volatile uint16_t x347 = 16U;
	uint16_t x348 = 439U;
	int64_t t86 = 105790509273168LL;

	t86 = (x345^(x346|(x347<x348)));

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MIN;
	int8_t x351 = -7;
	static volatile int32_t t87 = -13505;

	t87 = (x349^(x350|(x351<x352)));

	if (t87 != 32759) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = -11;
	volatile int16_t x355 = -1;
	int64_t x356 = 339LL;
	static int32_t t88 = 24320074;

	t88 = (x353^(x354|(x355<x356)));

	if (t88 != 10) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 5;
	int32_t x358 = 59;
	int8_t x359 = 8;
	int8_t x360 = INT8_MIN;
	int32_t t89 = 75905;

	t89 = (x357^(x358|(x359<x360)));

	if (t89 != 62) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 0LL;
	volatile int16_t x362 = -7;
	static int32_t x363 = 847;
	int64_t t90 = -41614893975LL;

	t90 = (x361^(x362|(x363<x364)));

	if (t90 != -7LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	int32_t x366 = -1;
	uint64_t x368 = 369996170678LLU;
	volatile int32_t t91 = 31343447;

	t91 = (x365^(x366|(x367<x368)));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int64_t x370 = 108355501083974806LL;
	volatile uint16_t x371 = 0U;
	int64_t x372 = INT64_MIN;
	volatile int64_t t92 = -71779289105539462LL;

	t92 = (x369^(x370|(x371<x372)));

	if (t92 != -108355502709023594LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x375 = 0U;
	int8_t x376 = INT8_MAX;

	t93 = (x373^(x374|(x375<x376)));

	if (t93 != 4309462592LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	uint8_t x378 = 1U;
	int16_t x380 = -1;
	int32_t t94 = -77010431;

	t94 = (x377^(x378|(x379<x380)));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	uint64_t x382 = 23779981523883LLU;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = 436578U;
	volatile uint64_t t95 = 9768611182092639LLU;

	t95 = (x381^(x382|(x383<x384)));

	if (t95 != 23779981493332LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	uint64_t x386 = 1LLU;
	uint16_t x388 = UINT16_MAX;
	volatile uint64_t t96 = 2LLU;

	t96 = (x385^(x386|(x387<x388)));

	if (t96 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = -1;
	static int32_t x391 = -197293;
	int64_t x392 = INT64_MIN;
	int64_t t97 = INT64_MIN;

	t97 = (x389^(x390|(x391<x392)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x395 = UINT64_MAX;
	static volatile uint64_t x396 = 82LLU;
	int64_t t98 = 36591468879379LL;

	t98 = (x393^(x394|(x395<x396)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	volatile uint8_t x398 = 7U;
	int16_t x400 = -91;
	int32_t t99 = -573;

	t99 = (x397^(x398|(x399<x400)));

	if (t99 != 65528) { NG(); } else { ; }
	
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

