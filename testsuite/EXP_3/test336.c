#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x15 = 1U;
volatile int64_t t1 = 1003250LL;
static int64_t x18 = INT64_MIN;
int64_t x19 = INT64_MIN;
int64_t t2 = INT64_MIN;
int16_t x23 = INT16_MAX;
int8_t x24 = INT8_MAX;
volatile int64_t t4 = 11803248911118481LL;
int64_t x30 = INT64_MAX;
static volatile int32_t x31 = INT32_MIN;
int8_t x35 = -1;
uint8_t x39 = UINT8_MAX;
static volatile int8_t x44 = -15;
uint64_t t9 = 112LLU;
int64_t x59 = INT64_MAX;
static int8_t x66 = 0;
static int32_t x69 = INT32_MIN;
uint8_t x71 = UINT8_MAX;
volatile int8_t x73 = -1;
int8_t x78 = INT8_MAX;
int16_t x80 = 0;
static volatile int32_t t17 = -250625870;
static volatile uint64_t x85 = 13610637342610496LLU;
uint8_t x88 = 0U;
uint8_t x89 = 0U;
int16_t x98 = -7665;
int64_t x106 = INT64_MAX;
static int32_t x109 = INT32_MIN;
volatile int16_t x113 = 4033;
volatile int32_t x119 = -1;
volatile uint64_t t29 = 27276245019341LLU;
static volatile uint32_t x133 = UINT32_MAX;
uint32_t x135 = 51U;
volatile uint32_t x138 = UINT32_MAX;
uint32_t t32 = 1373422U;
int16_t x145 = -275;
volatile int64_t t33 = -13627446LL;
int16_t x160 = -1;
int64_t t36 = -20511640799LL;
int8_t x170 = -1;
int64_t x171 = 254834511LL;
uint32_t x173 = 0U;
static volatile int64_t x176 = INT64_MIN;
static uint64_t t40 = 260267LLU;
volatile uint64_t x188 = UINT64_MAX;
int8_t x194 = INT8_MIN;
static int64_t x195 = -107010LL;
uint64_t x207 = UINT64_MAX;
int64_t x208 = 446993127LL;
int64_t x213 = INT64_MIN;
volatile int8_t x214 = 1;
static int16_t x216 = 1642;
volatile uint16_t x224 = UINT16_MAX;
int64_t x225 = -1LL;
int16_t x236 = -15;
uint64_t t50 = 30741774LLU;
int16_t x241 = INT16_MIN;
uint8_t x242 = 32U;
int64_t x251 = INT64_MIN;
volatile uint64_t t52 = 0LLU;
int8_t x257 = INT8_MAX;
int8_t x274 = INT8_MAX;
int8_t x283 = INT8_MIN;
int32_t x291 = INT32_MIN;
int32_t x294 = INT32_MIN;
int16_t x298 = INT16_MIN;
static int32_t t62 = -9268287;
int64_t x304 = INT64_MAX;
uint64_t t64 = 0LLU;
static int32_t x309 = -1;
volatile uint8_t x318 = 5U;
volatile int8_t x336 = -1;
int32_t x338 = -1;
uint32_t x341 = UINT32_MAX;
static int32_t x342 = INT32_MIN;
int64_t t75 = -2105442755318785078LL;
static uint32_t x359 = 929253617U;
int32_t t79 = 2979;
int8_t x369 = -20;
int8_t x370 = INT8_MIN;
static int8_t x373 = -24;
int32_t x377 = INT32_MIN;
volatile int64_t t83 = -176LL;
int16_t x386 = 1;
static int64_t x391 = INT64_MIN;
static volatile uint64_t x399 = UINT64_MAX;
volatile uint32_t x403 = 117U;
volatile int64_t x407 = 2751LL;
uint16_t x408 = UINT16_MAX;
static volatile int64_t t90 = -13LL;
uint32_t x416 = 247127U;
int64_t t92 = -1311LL;
int8_t x421 = INT8_MAX;
static volatile int64_t x423 = 5769803148LL;
uint8_t x424 = 1U;
static int32_t x434 = INT32_MIN;
volatile int8_t x440 = -1;
volatile uint64_t t96 = 32602570328283LLU;
int32_t x443 = INT32_MIN;
int32_t x453 = INT32_MAX;
volatile int16_t x454 = -1;


void f0(void) {
	int32_t x5 = INT32_MAX;
	static volatile int16_t x6 = -1;
	uint64_t x7 = 2951595083811599LLU;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t0 = 3795051106101LLU;

	t0 = ((x5^x6)&(x7-x8));

	if (t0 != 2951593867608064LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x13 = 1U;
	int64_t x14 = INT64_MIN;
	volatile int8_t x16 = -1;

	t1 = ((x13^x14)&(x15-x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 358U;
	static int64_t x20 = 0LL;

	t2 = ((x17^x18)&(x19-x20));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x21 = INT16_MIN;
	static volatile int32_t x22 = INT32_MIN;
	int32_t t3 = 1;

	t3 = ((x21^x22)&(x23-x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -3497544175LL;
	uint8_t x26 = UINT8_MAX;
	int8_t x27 = -1;
	int32_t x28 = 101298687;

	t4 = ((x25^x26)&(x27-x28));

	if (t4 != -3598318080LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x29 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	static volatile int64_t t5 = 44313LL;

	t5 = ((x29^x30)&(x31-x32));

	if (t5 != -2147483520LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -1LL;
	uint32_t x34 = UINT32_MAX;
	int16_t x36 = 850;
	int64_t t6 = 961LL;

	t6 = ((x33^x34)&(x35-x36));

	if (t6 != -4294967296LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 2U;
	volatile int8_t x38 = 1;
	int16_t x40 = INT16_MAX;
	volatile int32_t t7 = 3;

	t7 = ((x37^x38)&(x39-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 1U;
	static uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MAX;
	volatile uint64_t t8 = 704051641328739171LLU;

	t8 = ((x41^x42)&(x43-x44));

	if (t8 != 142LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x45 = 7U;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = 44U;
	volatile uint64_t x48 = UINT64_MAX;

	t9 = ((x45^x46)&(x47-x48));

	if (t9 != 5LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = INT8_MIN;
	static uint64_t x51 = 1774634610369866LLU;
	uint8_t x52 = UINT8_MAX;
	volatile uint64_t t10 = 45470689139503LLU;

	t10 = ((x49^x50)&(x51-x52));

	if (t10 != 1774634610327627LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	int32_t x55 = -231438136;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t11 = -10;

	t11 = ((x53^x54)&(x55-x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = 4U;
	uint32_t x58 = 1976632U;
	uint8_t x60 = 0U;
	volatile int64_t t12 = 109108LL;

	t12 = ((x57^x58)&(x59-x60));

	if (t12 != 1976636LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	int8_t x62 = INT8_MIN;
	uint16_t x63 = 19U;
	uint64_t x64 = UINT64_MAX;
	static uint64_t t13 = 4467132388353208LLU;

	t13 = ((x61^x62)&(x63-x64));

	if (t13 != 20LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = INT32_MIN;
	static uint16_t x67 = 46U;
	uint32_t x68 = 1438133U;
	uint32_t t14 = 8454440U;

	t14 = ((x65^x66)&(x67-x68));

	if (t14 != 2147483648U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x70 = 519U;
	int8_t x72 = -1;
	volatile int32_t t15 = -59;

	t15 = ((x69^x70)&(x71-x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x74 = INT64_MAX;
	int8_t x75 = INT8_MIN;
	int32_t x76 = -11020824;
	int64_t t16 = 1216685LL;

	t16 = ((x73^x74)&(x75-x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x77 = INT16_MAX;
	int16_t x79 = INT16_MAX;

	t17 = ((x77^x78)&(x79-x80));

	if (t17 != 32640) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	volatile uint16_t x82 = UINT16_MAX;
	static int8_t x83 = INT8_MAX;
	static int8_t x84 = INT8_MIN;
	int32_t t18 = -18319621;

	t18 = ((x81^x82)&(x83-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MIN;
	uint64_t t19 = 4475263588817LLU;

	t19 = ((x85^x86)&(x87-x88));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = INT32_MIN;
	int8_t x91 = -15;
	static int64_t x92 = INT64_MIN;
	volatile int64_t t20 = -1LL;

	t20 = ((x89^x90)&(x91-x92));

	if (t20 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x93 = 47372497722LLU;
	static int16_t x94 = INT16_MAX;
	volatile uint16_t x95 = UINT16_MAX;
	static uint32_t x96 = 10266076U;
	volatile uint64_t t21 = 233LLU;

	t21 = ((x93^x94)&(x95-x96));

	if (t21 != 117704705LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x97 = 14LLU;
	int32_t x99 = 11976208;
	volatile int16_t x100 = INT16_MIN;
	static uint64_t t22 = 28740380974238186LLU;

	t22 = ((x97^x98)&(x99-x100));

	if (t22 != 12001792LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = 27225LLU;
	volatile uint64_t x103 = 2243LLU;
	static volatile int64_t x104 = -1LL;
	uint64_t t23 = 34209LLU;

	t23 = ((x101^x102)&(x103-x104));

	if (t23 != 192LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	int8_t x107 = INT8_MIN;
	int8_t x108 = -1;
	volatile int64_t t24 = INT64_MIN;

	t24 = ((x105^x106)&(x107-x108));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x110 = UINT64_MAX;
	volatile int32_t x111 = 6;
	int16_t x112 = INT16_MIN;
	uint64_t t25 = 50059852LLU;

	t25 = ((x109^x110)&(x111-x112));

	if (t25 != 32774LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x114 = 6U;
	volatile uint64_t x115 = 151201916LLU;
	static int64_t x116 = INT64_MIN;
	static volatile uint64_t t26 = 521747066839LLU;

	t26 = ((x113^x114)&(x115-x116));

	if (t26 != 2116LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = 9547LL;
	static volatile uint8_t x118 = UINT8_MAX;
	uint32_t x120 = 6385U;
	int64_t t27 = -182010130885LL;

	t27 = ((x117^x118)&(x119-x120));

	if (t27 != 9476LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MAX;
	volatile int8_t x122 = INT8_MAX;
	uint64_t x123 = UINT64_MAX;
	int32_t x124 = 0;
	uint64_t t28 = 1981669LLU;

	t28 = ((x121^x122)&(x123-x124));

	if (t28 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x125 = UINT64_MAX;
	uint64_t x126 = UINT64_MAX;
	volatile uint8_t x127 = 0U;
	int64_t x128 = INT64_MAX;

	t29 = ((x125^x126)&(x127-x128));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = 2;
	uint8_t x130 = 28U;
	int32_t x131 = INT32_MAX;
	volatile uint32_t x132 = 61U;
	static volatile uint32_t t30 = 2890921U;

	t30 = ((x129^x130)&(x131-x132));

	if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x134 = 187655428249044814LLU;
	int32_t x136 = -1;
	static volatile uint64_t t31 = 89672LLU;

	t31 = ((x133^x134)&(x135-x136));

	if (t31 != 48LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x137 = 1;
	static volatile uint32_t x139 = UINT32_MAX;
	static int16_t x140 = INT16_MIN;

	t32 = ((x137^x138)&(x139-x140));

	if (t32 != 32766U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x146 = -1LL;
	int8_t x147 = 5;
	uint32_t x148 = 26U;

	t33 = ((x145^x146)&(x147-x148));

	if (t33 != 258LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = 231324867329405351LL;
	uint32_t x154 = 3U;
	uint32_t x155 = 2U;
	uint32_t x156 = 122267357U;
	int64_t t34 = 62LL;

	t34 = ((x153^x154)&(x155-x156));

	if (t34 != 3231846692LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 7840U;
	static int16_t x158 = -1;
	volatile int8_t x159 = INT8_MIN;
	volatile uint32_t t35 = 100737050U;

	t35 = ((x157^x158)&(x159-x160));

	if (t35 != 4294959361U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = 34843910997283LL;
	uint32_t x162 = 176U;
	volatile uint32_t x163 = UINT32_MAX;
	static uint8_t x164 = UINT8_MAX;

	t36 = ((x161^x162)&(x163-x164));

	if (t36 != 3136292096LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MIN;
	volatile int64_t x172 = -75324998LL;
	int64_t t37 = -830471827104LL;

	t37 = ((x169^x170)&(x171-x172));

	if (t37 != 21909LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x174 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	static int64_t t38 = 90675105007296LL;

	t38 = ((x173^x174)&(x175-x176));

	if (t38 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = -1LL;
	uint64_t x179 = UINT64_MAX;
	volatile int32_t x180 = INT32_MIN;
	volatile uint64_t t39 = 1060159974256414473LLU;

	t39 = ((x177^x178)&(x179-x180));

	if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = UINT16_MAX;
	static int8_t x182 = -1;
	int32_t x183 = -2;
	uint64_t x184 = 216LLU;

	t40 = ((x181^x182)&(x183-x184));

	if (t40 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -1;
	static uint8_t x186 = UINT8_MAX;
	int16_t x187 = INT16_MIN;
	static uint64_t t41 = 6561LLU;

	t41 = ((x185^x186)&(x187-x188));

	if (t41 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = INT32_MIN;
	int32_t x196 = -574494377;
	static volatile int64_t t42 = -3993LL;

	t42 = ((x193^x194)&(x195-x196));

	if (t42 != 574387328LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x205 = INT8_MIN;
	uint32_t x206 = UINT32_MAX;
	static uint64_t t43 = 814284355816998LLU;

	t43 = ((x205^x206)&(x207-x208));

	if (t43 != 24LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = 228LL;
	volatile uint64_t x210 = 941349746231283686LLU;
	int16_t x211 = INT16_MIN;
	volatile int8_t x212 = INT8_MAX;
	static volatile uint64_t t44 = 625704055397443000LLU;

	t44 = ((x209^x210)&(x211-x212));

	if (t44 != 941349746231283456LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x215 = INT16_MAX;
	volatile int64_t t45 = 562382847000194LL;

	t45 = ((x213^x214)&(x215-x216));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x217 = INT32_MAX;
	volatile uint8_t x218 = 95U;
	volatile int16_t x219 = INT16_MIN;
	int8_t x220 = -29;
	int32_t t46 = 185224;

	t46 = ((x217^x218)&(x219-x220));

	if (t46 != 2147450880) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x221 = UINT8_MAX;
	volatile uint8_t x222 = 37U;
	int32_t x223 = -689304;
	static int32_t t47 = -103343;

	t47 = ((x221^x222)&(x223-x224));

	if (t47 != 72) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x226 = 0;
	int32_t x227 = -1;
	uint16_t x228 = 0U;
	volatile int64_t t48 = -17957323728215404LL;

	t48 = ((x225^x226)&(x227-x228));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MIN;
	uint32_t x231 = 59U;
	static uint8_t x232 = UINT8_MAX;
	volatile int64_t t49 = 3940LL;

	t49 = ((x229^x230)&(x231-x232));

	if (t49 != 2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x233 = UINT64_MAX;
	uint32_t x234 = UINT32_MAX;
	int32_t x235 = INT32_MIN;

	t50 = ((x233^x234)&(x235-x236));

	if (t50 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x243 = UINT64_MAX;
	static int32_t x244 = INT32_MAX;
	uint64_t t51 = 694613870676LLU;

	t51 = ((x241^x242)&(x243-x244));

	if (t51 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 133292634447LLU;
	int64_t x250 = -1LL;
	uint64_t x252 = 502103790812114256LLU;

	t52 = ((x249^x250)&(x251-x252));

	if (t52 != 8721268233153299120LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x258 = INT64_MAX;
	volatile int32_t x259 = -1;
	int64_t x260 = 490155LL;
	int64_t t53 = 582944LL;

	t53 = ((x257^x258)&(x259-x260));

	if (t53 != 9223372036854285568LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x261 = 232167121364LLU;
	uint16_t x262 = 87U;
	int64_t x263 = -1LL;
	uint16_t x264 = 0U;
	volatile uint64_t t54 = 50252LLU;

	t54 = ((x261^x262)&(x263-x264));

	if (t54 != 232167121283LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x269 = 3U;
	int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MAX;
	uint32_t x272 = UINT32_MAX;
	volatile int64_t t55 = -196463846LL;

	t55 = ((x269^x270)&(x271-x272));

	if (t55 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = -1;
	uint64_t x275 = 6784307748LLU;
	static int32_t x276 = -1;
	volatile uint64_t t56 = 9192777752918LLU;

	t56 = ((x273^x274)&(x275-x276));

	if (t56 != 6784307712LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x277 = -1;
	uint64_t x278 = 482670431027266LLU;
	static volatile int8_t x279 = INT8_MIN;
	static int64_t x280 = INT64_MIN;
	uint64_t t57 = 189LLU;

	t57 = ((x277^x278)&(x279-x280));

	if (t57 != 9222889366423748480LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = 10;
	int32_t x282 = -191917;
	int32_t x284 = INT32_MIN;
	int32_t t58 = 899977;

	t58 = ((x281^x282)&(x283-x284));

	if (t58 != 2147291648) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x285 = 1;
	static int32_t x286 = INT32_MAX;
	static uint16_t x287 = 630U;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t59 = 1;

	t59 = ((x285^x286)&(x287-x288));

	if (t59 != 758) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x289 = 919177781LLU;
	volatile int32_t x290 = INT32_MIN;
	static int64_t x292 = -3LL;
	uint64_t t60 = 41833152974878LLU;

	t60 = ((x289^x290)&(x291-x292));

	if (t60 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x293 = -1;
	int16_t x295 = INT16_MIN;
	int8_t x296 = -1;
	static volatile int32_t t61 = 384;

	t61 = ((x293^x294)&(x295-x296));

	if (t61 != 2147450881) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x297 = UINT16_MAX;
	volatile int16_t x299 = 1299;
	volatile int32_t x300 = INT32_MAX;

	t62 = ((x297^x298)&(x299-x300));

	if (t62 != -2147482348) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = -1;
	int8_t x302 = 0;
	int64_t x303 = 825LL;
	volatile int64_t t63 = -363261542LL;

	t63 = ((x301^x302)&(x303-x304));

	if (t63 != -9223372036854774982LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = -1;
	static volatile int64_t x306 = INT64_MAX;
	static uint8_t x307 = 16U;
	uint64_t x308 = UINT64_MAX;

	t64 = ((x305^x306)&(x307-x308));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x310 = INT64_MIN;
	uint64_t x311 = 67082163LLU;
	int32_t x312 = INT32_MAX;
	uint64_t t65 = 1525692345170353867LLU;

	t65 = ((x309^x310)&(x311-x312));

	if (t65 != 9223372034774374324LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x313 = INT8_MAX;
	int8_t x314 = -1;
	volatile int16_t x315 = 3782;
	int8_t x316 = INT8_MIN;
	int32_t t66 = -3387753;

	t66 = ((x313^x314)&(x315-x316));

	if (t66 != 3840) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x317 = -1;
	uint8_t x319 = 47U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t67 = 105340096;

	t67 = ((x317^x318)&(x319-x320));

	if (t67 != 32810) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int8_t x322 = INT8_MAX;
	uint16_t x323 = 6124U;
	volatile uint16_t x324 = 4U;
	volatile uint64_t t68 = 796070942LLU;

	t68 = ((x321^x322)&(x323-x324));

	if (t68 != 6016LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x325 = -1;
	uint64_t x326 = 4LLU;
	uint16_t x327 = 10147U;
	uint64_t x328 = 192225623913LLU;
	static volatile uint64_t t69 = 30219LLU;

	t69 = ((x325^x326)&(x327-x328));

	if (t69 != 18446743881483937850LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x329 = INT64_MIN;
	int64_t x330 = 7944568LL;
	uint16_t x331 = 869U;
	int8_t x332 = INT8_MAX;
	int64_t t70 = 292144153490171LL;

	t70 = ((x329^x330)&(x331-x332));

	if (t70 != 96LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = 7566482342LL;
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = 7;
	int64_t t71 = -93779389105614LL;

	t71 = ((x333^x334)&(x335-x336));

	if (t71 != 8LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x337 = UINT8_MAX;
	int8_t x339 = -1;
	volatile int16_t x340 = INT16_MAX;
	int32_t t72 = 0;

	t72 = ((x337^x338)&(x339-x340));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x343 = INT8_MIN;
	int8_t x344 = -7;
	volatile uint32_t t73 = 169U;

	t73 = ((x341^x342)&(x343-x344));

	if (t73 != 2147483527U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x345 = 1043U;
	static uint8_t x346 = 50U;
	uint8_t x347 = 70U;
	int32_t x348 = -1;
	int32_t t74 = -26;

	t74 = ((x345^x346)&(x347-x348));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = -1;
	int16_t x350 = -25;
	int16_t x351 = INT16_MAX;
	static int64_t x352 = 50647718354LL;

	t75 = ((x349^x350)&(x351-x352));

	if (t75 != 8LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = 2;
	static int64_t x355 = 3639603297018769220LL;
	int16_t x356 = INT16_MIN;
	volatile int64_t t76 = -8544791310057LL;

	t76 = ((x353^x354)&(x355-x356));

	if (t76 != 3639603297018801920LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x357 = 0;
	int16_t x358 = -7;
	volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t77 = 4869LLU;

	t77 = ((x357^x358)&(x359-x360));

	if (t77 != 929253616LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x361 = 3209;
	uint16_t x362 = UINT16_MAX;
	int64_t x363 = -910887848084192850LL;
	static int32_t x364 = INT32_MAX;
	volatile int64_t t78 = -265836003700LL;

	t78 = ((x361^x362)&(x363-x364));

	if (t78 != 49446LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x365 = 15100U;
	int16_t x366 = INT16_MIN;
	int16_t x367 = -56;
	volatile int32_t x368 = -1;

	t79 = ((x365^x366)&(x367-x368));

	if (t79 != -17720) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t80 = -1;

	t80 = ((x369^x370)&(x371-x372));

	if (t80 != 108) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x374 = -1LL;
	uint16_t x375 = UINT16_MAX;
	static uint16_t x376 = 4U;
	static volatile int64_t t81 = -207415LL;

	t81 = ((x373^x374)&(x375-x376));

	if (t81 != 19LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x378 = 41U;
	int32_t x379 = -1;
	uint16_t x380 = 1U;
	int32_t t82 = -376114;

	t82 = ((x377^x378)&(x379-x380));

	if (t82 != -2147483608) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = INT32_MAX;
	volatile int32_t x382 = -49;
	int8_t x383 = -1;
	int64_t x384 = -1LL;

	t83 = ((x381^x382)&(x383-x384));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = -1;
	volatile uint64_t x387 = 3361990117418556093LLU;
	uint8_t x388 = UINT8_MAX;
	uint64_t t84 = 60LLU;

	t84 = ((x385^x386)&(x387-x388));

	if (t84 != 3361990117418555838LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x389 = 0U;
	int64_t x390 = -337LL;
	static int16_t x392 = INT16_MIN;
	volatile int64_t t85 = 287488LL;

	t85 = ((x389^x390)&(x391-x392));

	if (t85 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x393 = INT8_MIN;
	int32_t x394 = -305136638;
	uint64_t x395 = 500841885057941LLU;
	int64_t x396 = INT64_MIN;
	uint64_t t86 = 0LLU;

	t86 = ((x393^x394)&(x395-x396));

	if (t86 != 304087936LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	int64_t x400 = INT64_MIN;
	volatile uint64_t t87 = 23360951417LLU;

	t87 = ((x397^x398)&(x399-x400));

	if (t87 != 32767LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = 4115645U;
	uint8_t x402 = UINT8_MAX;
	int16_t x404 = -1;
	uint32_t t88 = 8840U;

	t88 = ((x401^x402)&(x403-x404));

	if (t88 != 66U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = 330;
	uint64_t x406 = 256LLU;
	uint64_t t89 = 540070004173332LLU;

	t89 = ((x405^x406)&(x407-x408));

	if (t89 != 64LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = -1;
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = INT64_MIN;
	volatile int32_t x412 = INT32_MIN;

	t90 = ((x409^x410)&(x411-x412));

	if (t90 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x413 = -30;
	static int32_t x414 = -891;
	static volatile uint64_t x415 = 3149566774LLU;
	static volatile uint64_t t91 = 729992291490LLU;

	t91 = ((x413^x414)&(x415-x416));

	if (t91 != 327LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = -1LL;
	static int16_t x418 = -1;
	int64_t x419 = -5708652334LL;
	int64_t x420 = -7210880579042929LL;

	t92 = ((x417^x418)&(x419-x420));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x422 = INT64_MAX;
	int64_t t93 = -12LL;

	t93 = ((x421^x422)&(x423-x424));

	if (t93 != 5769803136LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = -3;
	int64_t x426 = -187187LL;
	int32_t x427 = INT32_MIN;
	int64_t x428 = INT64_MIN;
	int64_t t94 = -10633486010930203LL;

	t94 = ((x425^x426)&(x427-x428));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x433 = 0LL;
	uint16_t x435 = 6941U;
	int8_t x436 = INT8_MAX;
	volatile int64_t t95 = -296029LL;

	t95 = ((x433^x434)&(x435-x436));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = INT8_MIN;
	uint64_t x438 = 2203656700058LLU;
	int64_t x439 = 1957LL;

	t96 = ((x437^x438)&(x439-x440));

	if (t96 != 1794LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x441 = INT16_MAX;
	static int64_t x442 = 235321878993LL;
	volatile uint32_t x444 = UINT32_MAX;
	static volatile int64_t t97 = -8161LL;

	t97 = ((x441^x442)&(x443-x444));

	if (t97 != 2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = 447608;
	uint32_t x450 = 918080266U;
	int16_t x451 = INT16_MIN;
	int32_t x452 = 186572;
	volatile uint32_t t98 = 2U;

	t98 = ((x449^x450)&(x451-x452));

	if (t98 != 918292272U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x455 = INT8_MIN;
	uint8_t x456 = 43U;
	int32_t t99 = INT32_MIN;

	t99 = ((x453^x454)&(x455-x456));

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

