#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x9 = INT64_MIN;
uint64_t x11 = 117452LLU;
static int32_t x21 = -101;
static int32_t x22 = INT32_MIN;
int64_t x24 = INT64_MAX;
int8_t x28 = INT8_MIN;
uint32_t x34 = 3399U;
volatile uint8_t x42 = UINT8_MAX;
uint32_t x43 = 1U;
int32_t x49 = INT32_MIN;
static uint64_t x51 = 6149030992623LLU;
int32_t x57 = -3906193;
static volatile int32_t t12 = 24701;
uint16_t x61 = 84U;
static uint64_t t14 = 447219780892LLU;
int64_t t15 = -2613250510LL;
uint16_t x74 = UINT16_MAX;
volatile int64_t t17 = 201276535794828LL;
volatile uint64_t t20 = 91000LLU;
uint64_t x97 = 181140310LLU;
volatile uint64_t t22 = 4212338311LLU;
int32_t x102 = INT32_MIN;
int32_t x104 = -1;
static uint32_t x108 = UINT32_MAX;
int16_t x109 = INT16_MAX;
uint16_t x116 = 2131U;
int32_t x120 = INT32_MAX;
volatile uint32_t x125 = UINT32_MAX;
static volatile uint64_t t32 = 132LLU;
uint64_t x147 = 42LLU;
volatile uint64_t t34 = 2LLU;
int64_t x157 = -1LL;
volatile int16_t x159 = INT16_MIN;
int64_t t37 = 853549070004471LL;
static uint32_t x174 = UINT32_MAX;
volatile int64_t t42 = 2773833367782LL;
int64_t x184 = -78948849LL;
int64_t x186 = -1LL;
volatile uint64_t t44 = 408180726805011068LLU;
int16_t x193 = INT16_MAX;
static uint64_t t46 = 7199917607025LLU;
uint64_t x201 = 2514400770466874125LLU;
int16_t x206 = 877;
volatile int64_t t48 = -15664LL;
int64_t x212 = INT64_MAX;
volatile uint16_t x214 = 2U;
int32_t x215 = INT32_MAX;
int32_t t50 = -17;
volatile int16_t x217 = INT16_MIN;
static volatile int16_t x228 = INT16_MIN;
int16_t x229 = -1;
uint16_t x231 = 3567U;
volatile uint64_t t54 = 61573538LLU;
int32_t x248 = INT32_MIN;
int32_t x250 = INT32_MIN;
volatile uint64_t t61 = 390659LLU;
volatile uint16_t x262 = UINT16_MAX;
uint32_t x263 = 226U;
static int16_t x268 = 3;
volatile int32_t t63 = 0;
static volatile int64_t t65 = -13040284592074858LL;
volatile int16_t x288 = INT16_MAX;
static uint16_t x291 = UINT16_MAX;
int32_t x305 = INT32_MIN;
static volatile int8_t x316 = -3;
int32_t x320 = -232440;
volatile int64_t t75 = -970879652717764476LL;
int16_t x321 = -1;
volatile int64_t x332 = INT64_MIN;
uint8_t x348 = 2U;
static uint8_t x350 = UINT8_MAX;
static int64_t t83 = -220658338733LL;
int64_t x362 = -1LL;
int32_t x374 = INT32_MIN;
volatile int32_t x382 = INT32_MAX;
int32_t t91 = 146;
volatile int16_t x389 = INT16_MIN;
int16_t x391 = -3;
uint32_t x394 = 20U;
int16_t x396 = INT16_MIN;
uint16_t x399 = 2784U;
volatile int32_t x407 = INT32_MIN;
int32_t t95 = 1;
uint8_t x409 = 87U;
uint8_t x419 = 22U;
int64_t x420 = INT64_MIN;
int64_t x421 = INT64_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint64_t x2 = 43264LLU;
	uint16_t x3 = UINT16_MAX;
	static int32_t x4 = 44966318;
	static volatile uint64_t t0 = 1072139483991951998LLU;

	t0 = ((x1^x2)-(x3^x4));

	if (t0 != 4249909422LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MIN;
	volatile int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MIN;
	int64_t t1 = 31461513207206026LL;

	t1 = ((x5^x6)-(x7^x8));

	if (t1 != -2147450880LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	static int16_t x12 = INT16_MAX;
	uint64_t t2 = 4LLU;

	t2 = ((x9^x10)-(x11^x12));

	if (t2 != 9223372036854729420LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	static int8_t x14 = INT8_MIN;
	volatile int32_t x15 = INT32_MIN;
	volatile uint8_t x16 = 90U;
	static int64_t t3 = 3444757556643LL;

	t3 = ((x13^x14)-(x15^x16));

	if (t3 != -9223372034707292123LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	volatile uint64_t x18 = UINT64_MAX;
	int64_t x19 = -1LL;
	int8_t x20 = INT8_MIN;
	static volatile uint64_t t4 = 558740236636388LLU;

	t4 = ((x17^x18)-(x19^x20));

	if (t4 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x23 = 40269779LLU;
	volatile uint64_t t5 = 4345054264121288601LLU;

	t5 = ((x21^x22)-(x23^x24));

	if (t5 != 9223372039042529135LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 0;
	static int16_t x26 = -94;
	volatile uint16_t x27 = 6515U;
	int32_t t6 = 1;

	t6 = ((x25^x26)-(x27^x28));

	if (t6 != 6319) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static volatile int32_t x30 = INT32_MIN;
	static int32_t x31 = INT32_MAX;
	volatile int8_t x32 = -30;
	int32_t t7 = -88390;

	t7 = ((x29^x30)-(x31^x32));

	if (t7 != 2147483619) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 206749930U;
	int64_t x35 = -1LL;
	int32_t x36 = INT32_MIN;
	volatile int64_t t8 = 2264530515530LL;

	t8 = ((x33^x34)-(x35^x36));

	if (t8 != -1940730450LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 97478743481867862LLU;
	int16_t x44 = INT16_MIN;
	uint64_t t9 = 74414961036LLU;

	t9 = ((x41^x42)-(x43^x44));

	if (t9 != 97478739186933416LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x50 = -1;
	volatile int32_t x52 = -1;
	volatile uint64_t t10 = 53777LLU;

	t10 = ((x49^x50)-(x51^x52));

	if (t10 != 6151178476271LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	static volatile int16_t x54 = 72;
	int64_t x55 = INT64_MAX;
	volatile int8_t x56 = INT8_MIN;
	volatile int64_t t11 = 1485782660592203LL;

	t11 = ((x53^x54)-(x55^x56));

	if (t11 != -55LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x58 = 1;
	int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MAX;

	t12 = ((x57^x58)-(x59^x60));

	if (t12 != -3938834) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = INT64_MIN;
	uint16_t x63 = 145U;
	int64_t x64 = -1LL;
	int64_t t13 = -30671755291574LL;

	t13 = ((x61^x62)-(x63^x64));

	if (t13 != -9223372036854775578LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = INT64_MIN;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = UINT64_MAX;
	uint8_t x68 = 91U;

	t14 = ((x65^x66)-(x67^x68));

	if (t14 != 9223372036854841435LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = -36495LL;
	int32_t x71 = -1;
	int32_t x72 = INT32_MIN;

	t15 = ((x69^x70)-(x71^x72));

	if (t15 != -2147545457LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	static volatile uint32_t x75 = 139979U;
	uint16_t x76 = UINT16_MAX;
	static volatile uint32_t t16 = 1442U;

	t16 = ((x73^x74)-(x75^x76));

	if (t16 != 2147230412U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	volatile int64_t x78 = -52LL;
	int32_t x79 = -452174;
	volatile int16_t x80 = 0;

	t17 = ((x77^x78)-(x79^x80));

	if (t17 != 2147935770LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = 209217650LL;
	int32_t x83 = -1;
	static volatile int32_t x84 = -6994;
	static volatile int64_t t18 = -2674770807540011482LL;

	t18 = ((x81^x82)-(x83^x84));

	if (t18 != -9223372036645565151LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = -1;
	volatile uint32_t x86 = UINT32_MAX;
	volatile int64_t x87 = INT64_MIN;
	int32_t x88 = -233890;
	static volatile int64_t t19 = -92LL;

	t19 = ((x85^x86)-(x87^x88));

	if (t19 != -9223372036854541918LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = UINT64_MAX;
	int64_t x90 = INT64_MIN;
	volatile int16_t x91 = 1;
	static int8_t x92 = INT8_MAX;

	t20 = ((x89^x90)-(x91^x92));

	if (t20 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = -56709;
	uint8_t x94 = 5U;
	uint32_t x95 = 2308786U;
	static int16_t x96 = -1;
	volatile uint32_t t21 = 314U;

	t21 = ((x93^x94)-(x95^x96));

	if (t21 != 2252081U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x98 = -1;
	volatile int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MIN;

	t22 = ((x97^x98)-(x99^x100));

	if (t22 != 18446744073528411305LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x101 = INT8_MAX;
	int8_t x103 = 0;
	volatile int32_t t23 = 77;

	t23 = ((x101^x102)-(x103^x104));

	if (t23 != -2147483520) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = 75LL;
	static int64_t x106 = -15031075109539517LL;
	int32_t x107 = -615352;
	static volatile int64_t t24 = -2139LL;

	t24 = ((x105^x106)-(x107^x108));

	if (t24 != -15031075110154927LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x110 = -1;
	static uint16_t x111 = 23U;
	int32_t x112 = -5593801;
	static int32_t t25 = -3;

	t25 = ((x109^x110)-(x111^x112));

	if (t25 != 5561056) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = INT8_MIN;
	static uint8_t x114 = 2U;
	static int32_t x115 = 0;
	volatile int32_t t26 = 1;

	t26 = ((x113^x114)-(x115^x116));

	if (t26 != -2257) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	static int64_t x118 = -718319938145LL;
	uint8_t x119 = UINT8_MAX;
	static int64_t t27 = -158471LL;

	t27 = ((x117^x118)-(x119^x120));

	if (t27 != 716172454752LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x121 = -11436;
	uint16_t x122 = UINT16_MAX;
	static int64_t x123 = -1LL;
	uint16_t x124 = 3072U;
	int64_t t28 = 51070986507186LL;

	t28 = ((x121^x122)-(x123^x124));

	if (t28 != -51028LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x126 = UINT8_MAX;
	int32_t x127 = INT32_MAX;
	uint64_t x128 = 646900557232LLU;
	volatile uint64_t t29 = 15532LLU;

	t29 = ((x125^x126)-(x127^x128));

	if (t29 != 18446743429972436145LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = INT16_MIN;
	volatile uint32_t x130 = 328289U;
	uint32_t x131 = UINT32_MAX;
	int64_t x132 = INT64_MIN;
	volatile int64_t t30 = -1LL;

	t30 = ((x129^x130)-(x131^x132));

	if (t30 != 9223372036854415970LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 134087119700442789LLU;
	static int32_t x134 = INT32_MIN;
	uint8_t x135 = UINT8_MAX;
	volatile int16_t x136 = -1;
	uint64_t t31 = 4LLU;

	t31 = ((x133^x134)-(x135^x136));

	if (t31 != 18312656955173453733LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = 1U;
	int32_t x138 = 66617341;
	uint64_t x139 = 803LLU;
	int8_t x140 = -3;

	t32 = ((x137^x138)-(x139^x140));

	if (t32 != 66618142LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 461LLU;
	volatile int64_t x142 = 1LL;
	uint64_t x143 = 878906354LLU;
	static int64_t x144 = INT64_MIN;
	volatile uint64_t t33 = 6703681762435108307LLU;

	t33 = ((x141^x142)-(x143^x144));

	if (t33 != 9223372035975869914LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = INT64_MAX;
	int64_t x146 = -1LL;
	int8_t x148 = INT8_MAX;

	t34 = ((x145^x146)-(x147^x148));

	if (t34 != 9223372036854775723LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = 1;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = 1689U;
	int32_t t35 = -1;

	t35 = ((x149^x150)-(x151^x152));

	if (t35 != -2147481880) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x153 = -8;
	volatile uint64_t x154 = 6326390648304956LLU;
	int64_t x155 = -1LL;
	uint8_t x156 = 3U;
	static uint64_t t36 = 5774923843450017114LLU;

	t36 = ((x153^x154)-(x155^x156));

	if (t36 != 18440417683061246664LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = INT16_MAX;
	int16_t x160 = INT16_MAX;

	t37 = ((x157^x158)-(x159^x160));

	if (t37 != -32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = 734;
	int16_t x162 = INT16_MIN;
	int64_t x163 = INT64_MAX;
	volatile int64_t x164 = INT64_MAX;
	static volatile int64_t t38 = -104LL;

	t38 = ((x161^x162)-(x163^x164));

	if (t38 != -32034LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x165 = INT64_MIN;
	static uint16_t x166 = UINT16_MAX;
	volatile int64_t x167 = INT64_MIN;
	uint64_t x168 = 4775988LLU;
	volatile uint64_t t39 = 678242684372565LLU;

	t39 = ((x165^x166)-(x167^x168));

	if (t39 != 18446744073704841163LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MAX;
	volatile uint32_t x170 = UINT32_MAX;
	uint16_t x171 = UINT16_MAX;
	volatile uint16_t x172 = 31911U;
	uint32_t t40 = 0U;

	t40 = ((x169^x170)-(x171^x172));

	if (t40 != 4294933544U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = UINT32_MAX;
	uint64_t x175 = 13LLU;
	int64_t x176 = 18654547504327011LL;
	uint64_t t41 = 8LLU;

	t41 = ((x173^x174)-(x175^x176));

	if (t41 != 18428089526205224594LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x177 = INT16_MIN;
	int16_t x178 = 11461;
	int8_t x179 = 1;
	static int64_t x180 = -62131935668LL;

	t42 = ((x177^x178)-(x179^x180));

	if (t42 != 62131914360LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = -1;
	int32_t x182 = -656020148;
	int8_t x183 = -1;
	static int64_t t43 = -21932075900410863LL;

	t43 = ((x181^x182)-(x183^x184));

	if (t43 != 577071299LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x185 = UINT64_MAX;
	uint64_t x187 = UINT64_MAX;
	volatile int32_t x188 = 0;

	t44 = ((x185^x186)-(x187^x188));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = 91032340U;
	int64_t x190 = INT64_MAX;
	static uint64_t x191 = 31738452483LLU;
	static volatile int16_t x192 = INT16_MIN;
	static uint64_t t45 = 8325LLU;

	t45 = ((x189^x190)-(x191^x192));

	if (t45 != 9223372068502182632LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x194 = INT64_MIN;
	int32_t x195 = -1;
	uint64_t x196 = 357615LLU;

	t46 = ((x193^x194)-(x195^x196));

	if (t46 != 9223372036855166191LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	volatile uint64_t t47 = 4974216438230226685LLU;

	t47 = ((x201^x202)-(x203^x204));

	if (t47 != 15932343303242646285LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = INT16_MIN;
	int64_t x207 = INT64_MIN;
	static int16_t x208 = 2;

	t48 = ((x205^x206)-(x207^x208));

	if (t48 != 9223372036854743915LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = UINT32_MAX;
	uint64_t x210 = 437482392401LLU;
	volatile int16_t x211 = -4;
	uint64_t t49 = 15023909LLU;

	t49 = ((x209^x210)-(x211^x212));

	if (t49 != 9223372471250744491LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = 56062504;
	uint8_t x216 = 13U;

	t50 = ((x213^x214)-(x215^x216));

	if (t50 != -2091421128) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MIN;
	static uint32_t x220 = 25076U;
	int64_t t51 = -7223LL;

	t51 = ((x217^x218)-(x219^x220));

	if (t51 != 9223372034707234316LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = INT8_MIN;
	uint64_t x222 = 1959117LLU;
	int64_t x223 = -59235LL;
	uint8_t x224 = UINT8_MAX;
	volatile uint64_t t52 = 10324LLU;

	t52 = ((x221^x222)-(x223^x224));

	if (t52 != 18446744073707651819LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MAX;
	int16_t x227 = INT16_MIN;
	volatile int64_t t53 = -569054LL;

	t53 = ((x225^x226)-(x227^x228));

	if (t53 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x230 = 12336U;
	uint64_t x232 = 2359115228850630411LLU;

	t54 = ((x229^x230)-(x231^x232));

	if (t54 != 16087628844858911979LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x233 = -3260;
	volatile int64_t x234 = 61705640535LL;
	uint8_t x235 = UINT8_MAX;
	uint16_t x236 = UINT16_MAX;
	volatile int64_t t55 = 9361LL;

	t55 = ((x233^x234)-(x235^x236));

	if (t55 != -61705704941LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MAX;
	int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MIN;
	static volatile int16_t x240 = -1;
	static int64_t t56 = -2609LL;

	t56 = ((x237^x238)-(x239^x240));

	if (t56 != -2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = -1;
	int8_t x242 = -1;
	volatile uint32_t x243 = 1505109U;
	int16_t x244 = INT16_MAX;
	static volatile uint32_t t57 = 14198333U;

	t57 = ((x241^x242)-(x243^x244));

	if (t57 != 4293490518U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x245 = UINT32_MAX;
	uint16_t x246 = 2027U;
	uint64_t x247 = UINT64_MAX;
	volatile uint64_t t58 = 51413008LLU;

	t58 = ((x245^x246)-(x247^x248));

	if (t58 != 2147481621LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x249 = INT32_MIN;
	uint32_t x251 = 1819051U;
	int16_t x252 = INT16_MIN;
	volatile uint32_t t59 = 4058957U;

	t59 = ((x249^x250)-(x251^x252));

	if (t59 != 1818197U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = 48953920218635LLU;
	volatile int16_t x254 = INT16_MIN;
	static int16_t x255 = 127;
	int32_t x256 = 8478178;
	volatile uint64_t t60 = 7221826028LLU;

	t60 = ((x253^x254)-(x255^x256));

	if (t60 != 18446695119780874350LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x257 = UINT64_MAX;
	static volatile int64_t x258 = -9684810437951LL;
	uint64_t x259 = 7448930LLU;
	int8_t x260 = INT8_MAX;

	t61 = ((x257^x258)-(x259^x260));

	if (t61 != 9684802989089LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x261 = INT64_MAX;
	volatile int64_t x264 = 10740509652LL;
	volatile int64_t t62 = -10204884254626077LL;

	t62 = ((x261^x262)-(x263^x264));

	if (t62 != 9223372026114200778LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x265 = 7U;
	int32_t x266 = INT32_MIN;
	int32_t x267 = INT32_MIN;

	t63 = ((x265^x266)-(x267^x268));

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = 7969;
	uint16_t x270 = UINT16_MAX;
	volatile int8_t x271 = INT8_MAX;
	static volatile int8_t x272 = 27;
	int32_t t64 = 424002794;

	t64 = ((x269^x270)-(x271^x272));

	if (t64 != 57466) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MAX;
	int32_t x274 = -16125;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MAX;

	t65 = ((x273^x274)-(x275^x276));

	if (t65 != 9223372032559824637LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x277 = -1;
	static int8_t x278 = INT8_MAX;
	volatile uint64_t x279 = UINT64_MAX;
	volatile int32_t x280 = INT32_MIN;
	volatile uint64_t t66 = 91784970002667571LLU;

	t66 = ((x277^x278)-(x279^x280));

	if (t66 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x285 = 31774LLU;
	uint32_t x286 = UINT32_MAX;
	uint64_t x287 = 228315286LLU;
	uint64_t t67 = 8483LLU;

	t67 = ((x285^x286)-(x287^x288));

	if (t67 != 4066628728LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1LL;
	int8_t x290 = -1;
	static int64_t x292 = INT64_MIN;
	int64_t t68 = 0LL;

	t68 = ((x289^x290)-(x291^x292));

	if (t68 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	volatile int8_t x294 = 6;
	uint64_t x295 = 13426622LLU;
	int32_t x296 = -511;
	volatile uint64_t t69 = 11124728671LLU;

	t69 = ((x293^x294)-(x295^x296));

	if (t69 != 13426119LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = 1;
	volatile int32_t x298 = -1;
	uint32_t x299 = 231U;
	int32_t x300 = -1;
	static volatile uint32_t t70 = 921915706U;

	t70 = ((x297^x298)-(x299^x300));

	if (t70 != 230U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x301 = -1;
	static volatile int8_t x302 = 2;
	int16_t x303 = INT16_MAX;
	uint8_t x304 = UINT8_MAX;
	static volatile int32_t t71 = 649533863;

	t71 = ((x301^x302)-(x303^x304));

	if (t71 != -32515) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x306 = 1874066LLU;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 14387U;
	volatile uint64_t t72 = 779678LLU;

	t72 = ((x305^x306)-(x307^x308));

	if (t72 != 18446744071563956447LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x309 = -1;
	int64_t x310 = INT64_MIN;
	static int64_t x311 = 3LL;
	uint16_t x312 = 99U;
	int64_t t73 = -820049065132195LL;

	t73 = ((x309^x310)-(x311^x312));

	if (t73 != 9223372036854775711LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = -1;
	uint8_t x314 = 6U;
	uint64_t x315 = 79396650488LLU;
	static volatile uint64_t t74 = 124889818082305496LLU;

	t74 = ((x313^x314)-(x315^x316));

	if (t74 != 79396650484LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x317 = INT16_MIN;
	uint16_t x318 = 1U;
	int64_t x319 = -1LL;

	t75 = ((x317^x318)-(x319^x320));

	if (t75 != -265206LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x322 = -77;
	int8_t x323 = INT8_MAX;
	int16_t x324 = -79;
	static volatile int32_t t76 = 130;

	t76 = ((x321^x322)-(x323^x324));

	if (t76 != 126) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = -1;
	volatile uint32_t x326 = 58885987U;
	int16_t x327 = -9;
	int8_t x328 = INT8_MIN;
	uint32_t t77 = 798601469U;

	t77 = ((x325^x326)-(x327^x328));

	if (t77 != 4236081189U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = 172U;
	static int64_t x330 = INT64_MIN;
	uint16_t x331 = 27U;
	int64_t t78 = -14211802578LL;

	t78 = ((x329^x330)-(x331^x332));

	if (t78 != 145LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x333 = INT16_MAX;
	int64_t x334 = -1LL;
	static volatile int64_t x335 = INT64_MAX;
	int32_t x336 = -178;
	volatile int64_t t79 = 136328998LL;

	t79 = ((x333^x334)-(x335^x336));

	if (t79 != 9223372036854742863LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = -5348;
	int64_t x338 = INT64_MIN;
	int16_t x339 = 0;
	volatile int8_t x340 = -1;
	int64_t t80 = -7116650LL;

	t80 = ((x337^x338)-(x339^x340));

	if (t80 != 9223372036854770461LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = 43LLU;
	int32_t x342 = 253422841;
	int64_t x343 = INT64_MIN;
	int8_t x344 = -1;
	uint64_t t81 = 3899LLU;

	t81 = ((x341^x342)-(x343^x344));

	if (t81 != 9223372037108198611LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MAX;
	volatile int8_t x347 = -1;
	volatile int32_t t82 = 1;

	t82 = ((x345^x346)-(x347^x348));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x349 = INT32_MAX;
	int64_t x351 = -14271381369301LL;
	static int64_t x352 = INT64_MAX;

	t83 = ((x349^x350)-(x351^x352));

	if (t83 != 9223357767620889900LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x353 = 455528;
	uint32_t x354 = UINT32_MAX;
	volatile uint16_t x355 = 782U;
	static int8_t x356 = INT8_MAX;
	static uint32_t t84 = 17U;

	t84 = ((x353^x354)-(x355^x356));

	if (t84 != 4294510886U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x357 = -1;
	int8_t x358 = -1;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MAX;
	int64_t t85 = 1835014029696LL;

	t85 = ((x357^x358)-(x359^x360));

	if (t85 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = INT8_MIN;
	uint16_t x363 = 7U;
	volatile uint64_t x364 = 4237594139772LLU;
	volatile uint64_t t86 = 1809378LLU;

	t86 = ((x361^x362)-(x363^x364));

	if (t86 != 18446739836115411972LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MIN;
	static int32_t x366 = INT32_MIN;
	uint8_t x367 = UINT8_MAX;
	volatile int32_t x368 = -10561;
	int32_t t87 = 110;

	t87 = ((x365^x366)-(x367^x368));

	if (t87 != 10688) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MIN;
	int32_t x375 = INT32_MAX;
	volatile uint8_t x376 = 71U;
	int32_t t88 = -2;

	t88 = ((x373^x374)-(x375^x376));

	if (t88 != -32696) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = 1;
	uint64_t x378 = 38364LLU;
	static int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MIN;
	uint64_t t89 = 28889648672LLU;

	t89 = ((x377^x378)-(x379^x380));

	if (t89 != 38365LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 702U;
	int16_t x383 = INT16_MAX;
	volatile int8_t x384 = INT8_MIN;
	static uint32_t t90 = 3U;

	t90 = ((x381^x382)-(x383^x384));

	if (t90 != 2147515586U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = 0;
	int16_t x387 = INT16_MAX;
	uint8_t x388 = UINT8_MAX;

	t91 = ((x385^x386)-(x387^x388));

	if (t91 != 2147451135) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x390 = INT16_MAX;
	volatile int8_t x392 = -2;
	static int32_t t92 = -223738;

	t92 = ((x389^x390)-(x391^x392));

	if (t92 != -4) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x393 = 1LL;
	int32_t x395 = INT32_MIN;
	static int64_t t93 = 7566586176228LL;

	t93 = ((x393^x394)-(x395^x396));

	if (t93 != -2147450859LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x397 = UINT8_MAX;
	int64_t x398 = -23LL;
	static int16_t x400 = -1;
	int64_t t94 = -155802556093456944LL;

	t94 = ((x397^x398)-(x399^x400));

	if (t94 != 2551LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x405 = UINT8_MAX;
	static int32_t x406 = INT32_MIN;
	int32_t x408 = 311;

	t95 = ((x405^x406)-(x407^x408));

	if (t95 != -56) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x410 = -1;
	uint32_t x411 = 5473U;
	int16_t x412 = 10;
	static uint32_t t96 = 43097U;

	t96 = ((x409^x410)-(x411^x412));

	if (t96 != 4294961725U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x413 = INT32_MIN;
	volatile int32_t x414 = INT32_MIN;
	volatile int64_t x415 = INT64_MIN;
	volatile int64_t x416 = -1LL;
	int64_t t97 = -45426597335204585LL;

	t97 = ((x413^x414)-(x415^x416));

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x417 = INT32_MAX;
	volatile int64_t x418 = -1LL;
	int64_t t98 = -733661LL;

	t98 = ((x417^x418)-(x419^x420));

	if (t98 != 9223372034707292138LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x422 = UINT16_MAX;
	int8_t x423 = 4;
	volatile uint16_t x424 = 3U;
	static volatile int64_t t99 = -349107767884532805LL;

	t99 = ((x421^x422)-(x423^x424));

	if (t99 != 9223372036854710265LL) { NG(); } else { ; }
	
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

