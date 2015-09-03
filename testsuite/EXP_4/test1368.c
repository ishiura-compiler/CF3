#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = INT32_MIN;
static uint64_t x9 = 318523LLU;
int16_t x12 = INT16_MAX;
volatile uint64_t t2 = 338138963734LLU;
uint64_t x13 = UINT64_MAX;
static volatile int8_t x15 = 0;
int32_t x28 = INT32_MIN;
uint32_t x32 = UINT32_MAX;
int16_t x33 = INT16_MIN;
static uint64_t x35 = 2157738534734400LLU;
int32_t t6 = -189596;
int32_t x41 = -1;
static int32_t x48 = 33054;
int32_t x55 = INT32_MIN;
int32_t x56 = 14941;
static int32_t x67 = INT32_MIN;
uint64_t t15 = 212736048269268LLU;
int32_t x82 = -155471;
static uint8_t x94 = 67U;
volatile int32_t t21 = 130;
int32_t x116 = INT32_MIN;
uint32_t t22 = 360589635U;
int16_t x128 = INT16_MAX;
uint64_t x132 = 1LLU;
uint64_t x137 = UINT64_MAX;
int32_t x151 = 907312842;
uint8_t x152 = 9U;
int16_t x153 = -49;
uint32_t x154 = 1400U;
int32_t x156 = 1436626;
int16_t x161 = INT16_MAX;
uint8_t x164 = 39U;
uint64_t x165 = UINT64_MAX;
int8_t x167 = 5;
int16_t x174 = -1;
static volatile int64_t x180 = -4LL;
uint16_t x186 = 7U;
uint32_t x187 = 80928U;
volatile uint64_t x201 = UINT64_MAX;
uint32_t x204 = UINT32_MAX;
volatile uint64_t t38 = 6696208653353819LLU;
static uint64_t x212 = 8LLU;
int64_t x213 = -1LL;
uint32_t x214 = UINT32_MAX;
static int16_t x216 = INT16_MIN;
int64_t t41 = -28369649LL;
uint8_t x217 = UINT8_MAX;
static volatile uint64_t x218 = 12LLU;
int16_t x226 = INT16_MAX;
uint32_t x235 = 103475U;
uint8_t x236 = 32U;
int32_t x238 = -1;
uint8_t x243 = 5U;
int8_t x251 = -1;
int8_t x255 = -1;
uint16_t x262 = 55U;
uint8_t x263 = 57U;
uint16_t x306 = 48U;
static int8_t x313 = 0;
volatile int16_t x315 = 285;
int32_t x316 = -1;
int32_t x317 = INT32_MAX;
static uint64_t x319 = UINT64_MAX;
volatile int64_t t62 = 73309441LL;
int64_t x321 = -1LL;
int8_t x338 = -1;
int32_t t66 = -389;
volatile int32_t x358 = -1;
uint64_t x359 = UINT64_MAX;
volatile uint64_t t69 = 115433LLU;
static uint8_t x376 = 0U;
uint64_t x377 = UINT64_MAX;
int32_t x380 = INT32_MAX;
volatile int16_t x382 = 1;
int64_t x394 = INT64_MIN;
uint64_t x412 = UINT64_MAX;
int8_t x414 = INT8_MIN;
int32_t x417 = -1;
int32_t x419 = INT32_MAX;
uint64_t x420 = 20LLU;
static uint16_t x421 = 62U;
int32_t x424 = INT32_MIN;
uint16_t x426 = 1U;
volatile int16_t x438 = -1;
int8_t x441 = 0;
int32_t x444 = -1;
int16_t x445 = INT16_MAX;
volatile uint64_t t85 = 37LLU;
int32_t x455 = -43041217;
volatile int16_t x456 = -1;
static int32_t t86 = -428274399;
static int32_t x464 = 1;
volatile int16_t x466 = 188;
uint32_t t89 = 211923814U;
uint32_t t94 = 3456U;
volatile int64_t x505 = -1LL;
volatile int64_t x517 = -31254945LL;
int8_t x521 = -1;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int16_t x2 = 108;
	static int8_t x4 = INT8_MIN;
	uint32_t t0 = 35024463U;

	t0 = (x1*(x2-(x3<x4)));

	if (t0 != 4294967189U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 334770691LL;
	int32_t x6 = INT32_MIN;
	volatile int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 1LL;

	t1 = (x5*(x6-(x7<x8)));

	if (t1 != -718914584752160768LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 83U;
	static int8_t x11 = INT8_MIN;

	t2 = (x9*(x10-(x11<x12)));

	if (t2 != 26118886LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	int8_t x16 = 1;
	uint64_t t3 = 52132287534877018LLU;

	t3 = (x13*(x14-(x15<x16)));

	if (t3 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MAX;
	int64_t t4 = -5060871957LL;

	t4 = (x25*(x26-(x27<x28)));

	if (t4 != 128LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = INT8_MIN;
	int64_t x30 = -1LL;
	uint16_t x31 = 16U;
	static int64_t t5 = -131465486624283LL;

	t5 = (x29*(x30-(x31<x32)));

	if (t5 != 256LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x34 = -1143;
	static int32_t x36 = INT32_MIN;

	t6 = (x33*(x34-(x35<x36)));

	if (t6 != 37486592) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = 14685;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = INT16_MIN;
	volatile uint16_t x40 = 5U;
	volatile uint32_t t7 = 444U;

	t7 = (x37*(x38-(x39<x40)));

	if (t7 != 4294937926U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x42 = INT16_MAX;
	int64_t x43 = 3717LL;
	int8_t x44 = 0;
	static volatile int32_t t8 = 9622;

	t8 = (x41*(x42-(x43<x44)));

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 17983257132992LLU;
	volatile uint8_t x46 = 51U;
	uint64_t x47 = UINT64_MAX;
	uint64_t t9 = 236252818LLU;

	t9 = (x45*(x46-(x47<x48)));

	if (t9 != 917146113782592LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x50 = -1;
	uint8_t x51 = 54U;
	volatile uint64_t x52 = UINT64_MAX;
	int32_t t10 = 0;

	t10 = (x49*(x50-(x51<x52)));

	if (t10 != -510) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 131681596501239125LLU;
	static int8_t x54 = -19;
	uint64_t t11 = 63650120LLU;

	t11 = (x53*(x54-(x55<x56)));

	if (t11 != 15813112143684769116LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -997024890;
	static volatile int16_t x58 = -1;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = 0U;
	volatile int32_t t12 = 219378;

	t12 = (x57*(x58-(x59<x60)));

	if (t12 != 1994049780) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = 0;
	volatile int16_t x62 = INT16_MIN;
	int64_t x63 = -1LL;
	uint16_t x64 = UINT16_MAX;
	int32_t t13 = 617527940;

	t13 = (x61*(x62-(x63<x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = -1;
	int64_t x68 = INT64_MIN;
	volatile int32_t t14 = 7896;

	t14 = (x65*(x66-(x67<x68)));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = UINT64_MAX;
	static uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MIN;
	int8_t x72 = -19;

	t15 = (x69*(x70-(x71<x72)));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	uint64_t x74 = 30182955501LLU;
	int16_t x75 = -180;
	int8_t x76 = INT8_MIN;
	uint64_t t16 = 6183LLU;

	t16 = (x73*(x74-(x75<x76)));

	if (t16 != 18446744043526596116LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -131322445LL;
	int8_t x83 = INT8_MAX;
	uint16_t x84 = 342U;
	int64_t t17 = 3740230311311LL;

	t17 = (x81*(x82-(x83<x84)));

	if (t17 != 20416963169040LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -134038219LL;
	uint32_t x86 = 138421089U;
	int32_t x87 = -1;
	uint64_t x88 = 6111245653LLU;
	int64_t t18 = 1LL;

	t18 = (x85*(x86-(x87<x88)));

	if (t18 != -18553716241600491LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = -52LL;
	int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	static int16_t x92 = 12;
	volatile int64_t t19 = -5092LL;

	t19 = (x89*(x90-(x91<x92)));

	if (t19 != 6708LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x93 = UINT32_MAX;
	int16_t x95 = INT16_MAX;
	static int64_t x96 = -1LL;
	static volatile uint32_t t20 = 111U;

	t20 = (x93*(x94-(x95<x96)));

	if (t20 != 4294967229U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = 6;
	volatile int16_t x98 = -2;
	int8_t x99 = 0;
	int16_t x100 = INT16_MIN;

	t21 = (x97*(x98-(x99<x100)));

	if (t21 != -12) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = UINT8_MAX;
	volatile uint32_t x114 = 121U;
	volatile int8_t x115 = -1;

	t22 = (x113*(x114-(x115<x116)));

	if (t22 != 30855U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x121 = 20737489U;
	int8_t x122 = INT8_MAX;
	uint8_t x123 = 12U;
	int16_t x124 = INT16_MAX;
	uint32_t t23 = 0U;

	t23 = (x121*(x122-(x123<x124)));

	if (t23 != 2612923614U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = INT16_MAX;
	int16_t x126 = 0;
	uint8_t x127 = 0U;
	int32_t t24 = 3168765;

	t24 = (x125*(x126-(x127<x128)));

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x129 = 108U;
	int32_t x130 = 5;
	int16_t x131 = -8464;
	int32_t t25 = 34836075;

	t25 = (x129*(x130-(x131<x132)));

	if (t25 != 540) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x133 = 11331802794146LLU;
	int32_t x134 = INT32_MIN;
	static int32_t x135 = 98728479;
	uint16_t x136 = 7U;
	uint64_t t26 = 2719627711LLU;

	t26 = (x133*(x134-(x135<x136)));

	if (t26 != 14840974507363008512LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x138 = -2;
	static uint8_t x139 = 5U;
	static uint16_t x140 = UINT16_MAX;
	uint64_t t27 = 793358LLU;

	t27 = (x137*(x138-(x139<x140)));

	if (t27 != 3LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x141 = 1U;
	int32_t x142 = -1;
	int64_t x143 = 59559993LL;
	int8_t x144 = INT8_MIN;
	int32_t t28 = 1;

	t28 = (x141*(x142-(x143<x144)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x149 = INT16_MIN;
	int32_t x150 = -1;
	int32_t t29 = -10;

	t29 = (x149*(x150-(x151<x152)));

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x155 = INT64_MIN;
	static volatile uint32_t t30 = 7104U;

	t30 = (x153*(x154-(x155<x156)));

	if (t30 != 4294898745U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x162 = 1329536LL;
	int8_t x163 = -12;
	volatile int64_t t31 = 31LL;

	t31 = (x161*(x162-(x163<x164)));

	if (t31 != 43564873345LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x166 = 1046U;
	static int8_t x168 = INT8_MIN;
	volatile uint64_t t32 = 131723848LLU;

	t32 = (x165*(x166-(x167<x168)));

	if (t32 != 18446744073709550570LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x169 = INT64_MAX;
	static uint64_t x170 = 4336097086416LLU;
	int8_t x171 = 10;
	int8_t x172 = INT8_MIN;
	uint64_t t33 = 29LLU;

	t33 = (x169*(x170-(x171<x172)));

	if (t33 != 18446739737612465200LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = -20578919;
	volatile int16_t x175 = INT16_MIN;
	uint8_t x176 = 3U;
	int32_t t34 = 1987;

	t34 = (x173*(x174-(x175<x176)));

	if (t34 != 41157838) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = INT8_MIN;
	static int32_t x178 = 0;
	int32_t x179 = INT32_MIN;
	volatile int32_t t35 = -504447;

	t35 = (x177*(x178-(x179<x180)));

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x181 = -1;
	int16_t x182 = -1;
	int64_t x183 = -1LL;
	int64_t x184 = 140763375LL;
	volatile int32_t t36 = 1178969;

	t36 = (x181*(x182-(x183<x184)));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x185 = UINT8_MAX;
	volatile int8_t x188 = 2;
	int32_t t37 = 6766495;

	t37 = (x185*(x186-(x187<x188)));

	if (t37 != 1785) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x202 = -8LL;
	int16_t x203 = -1;

	t38 = (x201*(x202-(x203<x204)));

	if (t38 != 8LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x205 = UINT32_MAX;
	uint8_t x206 = UINT8_MAX;
	volatile int32_t x207 = -1;
	int32_t x208 = INT32_MAX;
	volatile uint32_t t39 = 6082902U;

	t39 = (x205*(x206-(x207<x208)));

	if (t39 != 4294967042U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x209 = UINT32_MAX;
	uint16_t x210 = UINT16_MAX;
	int16_t x211 = INT16_MIN;
	uint32_t t40 = 234U;

	t40 = (x209*(x210-(x211<x212)));

	if (t40 != 4294901761U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x215 = 136777279528LLU;

	t41 = (x213*(x214-(x215<x216)));

	if (t41 != -4294967294LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x219 = INT16_MIN;
	static int64_t x220 = INT64_MIN;
	uint64_t t42 = 5330LLU;

	t42 = (x217*(x218-(x219<x220)));

	if (t42 != 3060LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x225 = INT16_MAX;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t43 = 38929;

	t43 = (x225*(x226-(x227<x228)));

	if (t43 != 1073643522) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = UINT64_MAX;
	static uint8_t x230 = 13U;
	static int32_t x231 = INT32_MIN;
	static volatile int32_t x232 = INT32_MIN;
	volatile uint64_t t44 = 398383494651LLU;

	t44 = (x229*(x230-(x231<x232)));

	if (t44 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x234 = 3U;
	volatile uint32_t t45 = 2686U;

	t45 = (x233*(x234-(x235<x236)));

	if (t45 != 2147483648U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x237 = 29720U;
	int16_t x239 = INT16_MIN;
	int32_t x240 = 491104;
	int32_t t46 = 11014;

	t46 = (x237*(x238-(x239<x240)));

	if (t46 != -59440) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = -1;
	int32_t x244 = INT32_MAX;
	int32_t t47 = -11367;

	t47 = (x241*(x242-(x243<x244)));

	if (t47 != -510) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x249 = 0;
	int16_t x250 = -1;
	int8_t x252 = 6;
	volatile int32_t t48 = -294;

	t48 = (x249*(x250-(x251<x252)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x253 = INT64_MIN;
	uint64_t x254 = UINT64_MAX;
	volatile int64_t x256 = INT64_MAX;
	uint64_t t49 = 455703958LLU;

	t49 = (x253*(x254-(x255<x256)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = -1;
	int8_t x258 = INT8_MIN;
	volatile int16_t x259 = -3160;
	static uint8_t x260 = 0U;
	static int32_t t50 = 31;

	t50 = (x257*(x258-(x259<x260)));

	if (t50 != 129) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x264 = INT16_MIN;
	uint32_t t51 = 9569275U;

	t51 = (x261*(x262-(x263<x264)));

	if (t51 != 4294967241U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = -5290616;
	uint16_t x266 = 134U;
	int16_t x267 = -10;
	volatile uint64_t x268 = 1482384750LLU;
	int32_t t52 = 12769;

	t52 = (x265*(x266-(x267<x268)));

	if (t52 != -708942544) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x273 = -52689071LL;
	int8_t x274 = 0;
	volatile uint32_t x275 = 2981U;
	int32_t x276 = -1;
	volatile int64_t t53 = 334977266873LL;

	t53 = (x273*(x274-(x275<x276)));

	if (t53 != 52689071LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x277 = 115U;
	int8_t x278 = 22;
	int64_t x279 = 54LL;
	static volatile uint8_t x280 = UINT8_MAX;
	int32_t t54 = -6070033;

	t54 = (x277*(x278-(x279<x280)));

	if (t54 != 2415) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x281 = 2U;
	int8_t x282 = 3;
	static uint64_t x283 = UINT64_MAX;
	uint32_t x284 = 849U;
	volatile uint32_t t55 = 13U;

	t55 = (x281*(x282-(x283<x284)));

	if (t55 != 6U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x285 = -1LL;
	static uint32_t x286 = 291116U;
	int16_t x287 = 3;
	uint64_t x288 = 5LLU;
	volatile int64_t t56 = -183238747447240286LL;

	t56 = (x285*(x286-(x287<x288)));

	if (t56 != -291115LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x293 = UINT8_MAX;
	uint64_t x294 = 50093730LLU;
	int64_t x295 = -508726LL;
	static uint16_t x296 = UINT16_MAX;
	static uint64_t t57 = 659681LLU;

	t57 = (x293*(x294-(x295<x296)));

	if (t57 != 12773900895LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x301 = 8345258569756476LLU;
	int8_t x302 = -1;
	int64_t x303 = INT64_MIN;
	int64_t x304 = -3LL;
	uint64_t t58 = 105727172905117LLU;

	t58 = (x301*(x302-(x303<x304)));

	if (t58 != 18430053556570038664LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x305 = -46;
	static uint32_t x307 = 11U;
	uint32_t x308 = 14U;
	static volatile int32_t t59 = 26;

	t59 = (x305*(x306-(x307<x308)));

	if (t59 != -2162) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x309 = UINT16_MAX;
	uint16_t x310 = 6796U;
	int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t60 = -893058599;

	t60 = (x309*(x310-(x311<x312)));

	if (t60 != 445375860) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x314 = 117021568450126LLU;
	uint64_t t61 = 2790698551872LLU;

	t61 = (x313*(x314-(x315<x316)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x318 = 2248767384LL;
	int32_t x320 = -6;

	t62 = (x317*(x318-(x319<x320)));

	if (t62 != 4829191183046969448LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x322 = 3099140493835LLU;
	int16_t x323 = INT16_MAX;
	int64_t x324 = INT64_MIN;
	volatile uint64_t t63 = 30089239102191LLU;

	t63 = (x321*(x322-(x323<x324)));

	if (t63 != 18446740974569057781LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = 130700943238LL;
	volatile int32_t x326 = -1;
	int8_t x327 = -1;
	volatile uint8_t x328 = 2U;
	static int64_t t64 = 0LL;

	t64 = (x325*(x326-(x327<x328)));

	if (t64 != -261401886476LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x333 = -1;
	int8_t x334 = 0;
	int32_t x335 = INT32_MAX;
	int32_t x336 = -1;
	int32_t t65 = 3880331;

	t65 = (x333*(x334-(x335<x336)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x337 = INT8_MIN;
	volatile int32_t x339 = -1;
	static int32_t x340 = INT32_MIN;

	t66 = (x337*(x338-(x339<x340)));

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x345 = INT8_MIN;
	static int32_t x346 = -606;
	uint32_t x347 = 1562324U;
	static int16_t x348 = INT16_MAX;
	int32_t t67 = -56398438;

	t67 = (x345*(x346-(x347<x348)));

	if (t67 != 77568) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x357 = 4U;
	uint8_t x360 = UINT8_MAX;
	static volatile uint32_t t68 = 32342U;

	t68 = (x357*(x358-(x359<x360)));

	if (t68 != 4294967292U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x361 = UINT64_MAX;
	uint8_t x362 = UINT8_MAX;
	uint32_t x363 = UINT32_MAX;
	int64_t x364 = -1LL;

	t69 = (x361*(x362-(x363<x364)));

	if (t69 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x365 = -432912588;
	volatile uint32_t x366 = 56U;
	volatile int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;
	volatile uint32_t t70 = 30U;

	t70 = (x365*(x366-(x367<x368)));

	if (t70 != 1526698848U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x373 = UINT32_MAX;
	static int64_t x374 = -256693LL;
	static int32_t x375 = INT32_MIN;
	volatile int64_t t71 = -5003436676527541LL;

	t71 = (x373*(x374-(x375<x376)));

	if (t71 != -1102492334822730LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x378 = UINT8_MAX;
	volatile int16_t x379 = INT16_MIN;
	uint64_t t72 = 725LLU;

	t72 = (x377*(x378-(x379<x380)));

	if (t72 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x381 = INT16_MIN;
	int32_t x383 = -978;
	uint64_t x384 = 4LLU;
	static volatile int32_t t73 = -6827;

	t73 = (x381*(x382-(x383<x384)));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x393 = UINT64_MAX;
	int32_t x395 = -6052;
	volatile int64_t x396 = INT64_MIN;
	volatile uint64_t t74 = 15704963945515LLU;

	t74 = (x393*(x394-(x395<x396)));

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x401 = 1134U;
	uint8_t x402 = 10U;
	uint8_t x403 = UINT8_MAX;
	volatile int32_t x404 = 2184730;
	uint32_t t75 = 413824378U;

	t75 = (x401*(x402-(x403<x404)));

	if (t75 != 10206U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x409 = 1041992604102023392LLU;
	int32_t x410 = -1;
	int32_t x411 = -1;
	static uint64_t t76 = 10326667LLU;

	t76 = (x409*(x410-(x411<x412)));

	if (t76 != 17404751469607528224LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x413 = INT16_MIN;
	static uint32_t x415 = 747279275U;
	int64_t x416 = INT64_MAX;
	volatile int32_t t77 = -229;

	t77 = (x413*(x414-(x415<x416)));

	if (t77 != 4227072) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x418 = 1;
	volatile int32_t t78 = -7;

	t78 = (x417*(x418-(x419<x420)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x422 = 3U;
	int8_t x423 = 25;
	volatile int32_t t79 = 29153578;

	t79 = (x421*(x422-(x423<x424)));

	if (t79 != 186) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x425 = INT32_MIN;
	int16_t x427 = -351;
	static int16_t x428 = INT16_MAX;
	volatile int32_t t80 = -19;

	t80 = (x425*(x426-(x427<x428)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x433 = 7U;
	int16_t x434 = INT16_MAX;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = 1U;
	static int32_t t81 = 32;

	t81 = (x433*(x434-(x435<x436)));

	if (t81 != 229362) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x437 = 3U;
	uint8_t x439 = 1U;
	volatile uint16_t x440 = 31932U;
	volatile int32_t t82 = 113;

	t82 = (x437*(x438-(x439<x440)));

	if (t82 != -6) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x442 = 71U;
	int16_t x443 = 222;
	volatile int32_t t83 = 245911;

	t83 = (x441*(x442-(x443<x444)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x446 = -1;
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = INT8_MIN;
	volatile int32_t t84 = -410703784;

	t84 = (x445*(x446-(x447<x448)));

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x449 = -279;
	uint64_t x450 = UINT64_MAX;
	volatile int16_t x451 = -397;
	volatile uint32_t x452 = UINT32_MAX;

	t85 = (x449*(x450-(x451<x452)));

	if (t85 != 558LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x453 = -1;
	int16_t x454 = 1;

	t86 = (x453*(x454-(x455<x456)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x461 = UINT32_MAX;
	int8_t x462 = INT8_MIN;
	uint8_t x463 = 60U;
	volatile uint32_t t87 = 431U;

	t87 = (x461*(x462-(x463<x464)));

	if (t87 != 128U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x465 = UINT32_MAX;
	uint16_t x467 = 1130U;
	uint64_t x468 = 271166680217LLU;
	uint32_t t88 = 15425U;

	t88 = (x465*(x466-(x467<x468)));

	if (t88 != 4294967109U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x469 = 37U;
	uint16_t x470 = 3U;
	int8_t x471 = INT8_MIN;
	int32_t x472 = 2178;

	t89 = (x469*(x470-(x471<x472)));

	if (t89 != 74U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x481 = 3729139240LLU;
	int16_t x482 = INT16_MIN;
	uint8_t x483 = UINT8_MAX;
	int8_t x484 = INT8_MAX;
	uint64_t t90 = 184786919308519233LLU;

	t90 = (x481*(x482-(x483<x484)));

	if (t90 != 18446621877274935296LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x489 = -1;
	int64_t x490 = -42LL;
	int8_t x491 = INT8_MIN;
	static uint8_t x492 = 1U;
	static volatile int64_t t91 = 1395300989104477LL;

	t91 = (x489*(x490-(x491<x492)));

	if (t91 != 43LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x493 = -1;
	int16_t x494 = 1540;
	static int64_t x495 = -47874033440LL;
	int32_t x496 = -52340540;
	volatile int32_t t92 = -166732760;

	t92 = (x493*(x494-(x495<x496)));

	if (t92 != -1539) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x497 = 445U;
	uint32_t x498 = 2720U;
	volatile int8_t x499 = 27;
	uint8_t x500 = 0U;
	static uint32_t t93 = 160574773U;

	t93 = (x497*(x498-(x499<x500)));

	if (t93 != 1210400U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x501 = 705798U;
	uint16_t x502 = 31882U;
	int64_t x503 = -1LL;
	uint32_t x504 = 45318536U;

	t94 = (x501*(x502-(x503<x504)));

	if (t94 != 1026709558U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x506 = -1LL;
	int8_t x507 = -1;
	int64_t x508 = INT64_MIN;
	volatile int64_t t95 = 620456653201759486LL;

	t95 = (x505*(x506-(x507<x508)));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x513 = 1382LL;
	int8_t x514 = INT8_MAX;
	int16_t x515 = 11558;
	static volatile int64_t x516 = INT64_MIN;
	int64_t t96 = -55671LL;

	t96 = (x513*(x514-(x515<x516)));

	if (t96 != 175514LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x518 = INT32_MAX;
	static int32_t x519 = INT32_MIN;
	volatile uint8_t x520 = UINT8_MAX;
	volatile int64_t t97 = 1145LL;

	t97 = (x517*(x518-(x519<x520)));

	if (t97 != -67119483244129470LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x522 = INT8_MIN;
	int16_t x523 = INT16_MIN;
	uint32_t x524 = 12495912U;
	int32_t t98 = -17850;

	t98 = (x521*(x522-(x523<x524)));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x525 = -1;
	int8_t x526 = INT8_MIN;
	int16_t x527 = 0;
	int32_t x528 = INT32_MIN;
	int32_t t99 = 152492152;

	t99 = (x525*(x526-(x527<x528)));

	if (t99 != 128) { NG(); } else { ; }
	
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

