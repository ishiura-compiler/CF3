#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MIN;
uint16_t x7 = UINT16_MAX;
int32_t t2 = -42;
static int64_t x21 = INT64_MAX;
uint64_t t4 = 242858LLU;
int16_t x28 = INT16_MIN;
int16_t x46 = 2;
volatile int64_t t9 = -2192288388080LL;
static volatile uint32_t t10 = 3439779U;
volatile int8_t x60 = INT8_MAX;
volatile int32_t t12 = -15485558;
int16_t x68 = -6340;
int64_t t14 = -1949LL;
int8_t x77 = INT8_MIN;
volatile int32_t t19 = -104987957;
volatile int8_t x102 = -1;
int8_t x103 = INT8_MAX;
volatile int32_t x108 = INT32_MAX;
uint32_t x110 = 619098835U;
uint8_t x111 = 28U;
int32_t x119 = -4;
int64_t x120 = INT64_MAX;
static uint16_t x124 = UINT16_MAX;
volatile int16_t x128 = INT16_MIN;
int64_t x131 = -1LL;
volatile uint32_t x138 = 74547772U;
volatile uint32_t t30 = 3U;
uint64_t x144 = 29335238290465639LLU;
static int8_t x145 = -1;
volatile int32_t t32 = 11;
volatile int64_t t33 = -1080129700392152LL;
static uint64_t t35 = 1042173784178737LLU;
int16_t x172 = 11;
volatile int64_t t36 = -84178896155LL;
static int64_t x175 = INT64_MIN;
static volatile uint64_t x177 = 33396202LLU;
volatile uint64_t t38 = 275LLU;
int32_t x183 = INT32_MIN;
static int64_t x195 = INT64_MIN;
int16_t x196 = -1;
uint32_t x204 = 1U;
uint64_t t43 = 119075817844639LLU;
int16_t x208 = -619;
static volatile uint8_t x215 = 1U;
volatile int32_t t46 = 8249814;
static uint16_t x222 = 4593U;
uint32_t t47 = 1851691615U;
uint64_t x229 = UINT64_MAX;
uint16_t x238 = UINT16_MAX;
uint8_t x249 = 75U;
int16_t x250 = INT16_MIN;
static uint64_t x256 = UINT64_MAX;
uint32_t x257 = 5202U;
int32_t x264 = 591389512;
int32_t x275 = INT32_MIN;
int8_t x280 = INT8_MIN;
uint8_t x281 = 27U;
static int8_t x286 = -5;
volatile uint64_t t61 = 105067434LLU;
int64_t x298 = -1LL;
int16_t x304 = -5;
static volatile int32_t t63 = 107255;
uint64_t x312 = UINT64_MAX;
uint8_t x313 = 12U;
volatile int64_t t68 = 481LL;
volatile int32_t x350 = INT32_MAX;
int32_t t75 = 83;
volatile uint32_t t76 = UINT32_MAX;
uint64_t t77 = 2LLU;
uint16_t x377 = UINT16_MAX;
int64_t x384 = -796058630848LL;
volatile uint32_t x390 = 95481U;
uint16_t x391 = UINT16_MAX;
int64_t x392 = INT64_MIN;
static uint8_t x396 = 1U;
volatile int16_t x405 = INT16_MIN;
static int64_t x407 = -29746906685773505LL;
uint64_t x412 = UINT64_MAX;
static uint8_t x418 = UINT8_MAX;
uint16_t x438 = UINT16_MAX;
static int32_t x440 = 169401;
int32_t t92 = -10;
uint32_t x441 = UINT32_MAX;
uint16_t x449 = 6U;
int32_t x453 = 204;
int32_t t96 = -486062471;
uint32_t x458 = UINT32_MAX;
volatile int64_t x459 = INT64_MIN;
int32_t x460 = 0;
int16_t x461 = -1;


void f0(void) {
	volatile uint64_t x2 = 85417435009LLU;
	uint64_t x3 = 285014966782959145LLU;
	int8_t x4 = -1;
	volatile uint64_t t0 = 898660650106306443LLU;

	t0 = (x1*(x2&(x3^x4)));

	if (t0 != 2269531912584298496LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	int16_t x6 = INT16_MIN;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = -3705;

	t1 = (x5*(x6&(x7^x8)));

	if (t1 != 8355840) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -3;
	int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	volatile int32_t x12 = 51012;

	t2 = (x9*(x10&(x11^x12)));

	if (t2 != 196608) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 7U;
	static int64_t x18 = -1LL;
	uint32_t x19 = 79501979U;
	int16_t x20 = INT16_MIN;
	int64_t t3 = -2041009966698682766LL;

	t3 = (x17*(x18&(x19^x20)));

	if (t3 != 29508123197LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x22 = INT64_MIN;
	uint64_t x23 = 835371LLU;
	static int8_t x24 = -1;

	t4 = (x21*(x22&(x23^x24)));

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	int16_t x26 = -1;
	int64_t x27 = INT64_MIN;
	static volatile int64_t t5 = 46942350609LL;

	t5 = (x25*(x26&(x27^x28)));

	if (t5 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 1U;
	volatile int64_t x30 = -116755052LL;
	int8_t x31 = INT8_MIN;
	uint16_t x32 = 1325U;
	int64_t t6 = 4526363898504476510LL;

	t6 = (x29*(x30&(x31^x32)));

	if (t6 != -116756348LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	uint32_t x34 = 15914U;
	uint64_t x35 = UINT64_MAX;
	int16_t x36 = INT16_MAX;
	volatile uint64_t t7 = 903124LLU;

	t7 = (x33*(x34&(x35^x36)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 78871344LLU;
	uint64_t x42 = UINT64_MAX;
	volatile int8_t x43 = INT8_MIN;
	int64_t x44 = -612074890183616LL;
	static uint64_t t8 = 999LLU;

	t8 = (x41*(x42&(x43^x44)));

	if (t8 != 39976536304120832LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = INT32_MAX;
	int64_t x47 = -1LL;
	int32_t x48 = 423;

	t9 = (x45*(x46&(x47^x48)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 0U;
	uint32_t x52 = 204338U;

	t10 = (x49*(x50&(x51^x52)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 50;
	int32_t x54 = -249296;
	uint64_t x55 = 25772190198LLU;
	volatile uint64_t x56 = 59891LLU;
	volatile uint64_t t11 = 271674605LLU;

	t11 = (x53*(x54&(x55^x56)));

	if (t11 != 1288608153600LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -1;
	int8_t x58 = 0;
	int32_t x59 = 1368180;

	t12 = (x57*(x58&(x59^x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x65 = INT16_MAX;
	uint8_t x66 = 4U;
	uint16_t x67 = UINT16_MAX;
	int32_t t13 = -1;

	t13 = (x65*(x66&(x67^x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	int32_t x72 = -1;

	t14 = (x69*(x70&(x71^x72)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MAX;
	uint64_t x76 = 74287221LLU;
	static volatile uint64_t t15 = 114425511LLU;

	t15 = (x73*(x74&(x75^x76)));

	if (t15 != 9434202112LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x78 = 980623U;
	volatile int64_t x79 = INT64_MIN;
	volatile int64_t x80 = INT64_MIN;
	int64_t t16 = 4136924812LL;

	t16 = (x77*(x78&(x79^x80)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MAX;
	uint32_t x82 = 9U;
	uint64_t x83 = 3LLU;
	int64_t x84 = 182214594274136645LL;
	uint64_t t17 = 2568252425LLU;

	t17 = (x81*(x82&(x83^x84)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MIN;
	static int32_t x86 = -3086982;
	int64_t x87 = -1LL;
	uint64_t x88 = 2571015LLU;
	uint64_t t18 = 2885LLU;

	t18 = (x85*(x86&(x87^x88)));

	if (t18 != 6647389603495936LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;

	t19 = (x89*(x90&(x91^x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MAX;
	int64_t x94 = -1LL;
	int32_t x95 = -891647;
	volatile int16_t x96 = INT16_MIN;
	volatile int64_t t20 = -56904784747LL;

	t20 = (x93*(x94&(x95^x96)));

	if (t20 != 29837400831LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = 492;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MAX;
	static int16_t x100 = -1;
	int32_t t21 = 458912;

	t21 = (x97*(x98&(x99^x100)));

	if (t21 != -16121856) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x101 = 13798846LLU;
	uint64_t x104 = UINT64_MAX;
	uint64_t t22 = 68934808798483LLU;

	t22 = (x101*(x102&(x103^x104)));

	if (t22 != 18446744071943299328LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = 0;
	int64_t x106 = INT64_MAX;
	volatile int32_t x107 = -1;
	static volatile int64_t t23 = -5831882431005LL;

	t23 = (x105*(x106&(x107^x108)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x109 = UINT64_MAX;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t24 = 8LLU;

	t24 = (x109*(x110&(x111^x112)));

	if (t24 != 18446744073090452848LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = 16687063181LLU;
	int8_t x118 = INT8_MIN;
	volatile uint64_t t25 = 805072642LLU;

	t25 = (x117*(x118&(x119^x120)));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 11LLU;
	int64_t x122 = INT64_MIN;
	int32_t x123 = INT32_MAX;
	volatile uint64_t t26 = 124286951LLU;

	t26 = (x121*(x122&(x123^x124)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x125 = 6U;
	static int16_t x126 = INT16_MIN;
	static int32_t x127 = -1;
	static uint32_t t27 = 10260U;

	t27 = (x125*(x126&(x127^x128)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = 0U;
	int64_t x130 = -1LL;
	int16_t x132 = INT16_MIN;
	int64_t t28 = -7416029LL;

	t28 = (x129*(x130&(x131^x132)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x133 = -1;
	int8_t x134 = INT8_MIN;
	static uint64_t x135 = UINT64_MAX;
	int16_t x136 = -248;
	volatile uint64_t t29 = 1290LLU;

	t29 = (x133*(x134&(x135^x136)));

	if (t29 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = -1;
	volatile uint16_t x139 = 130U;
	int8_t x140 = 1;

	t30 = (x137*(x138&(x139^x140)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = 0;
	uint8_t x142 = 9U;
	volatile int8_t x143 = 3;
	volatile uint64_t t31 = 557439385341LLU;

	t31 = (x141*(x142&(x143^x144)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	int16_t x148 = INT16_MAX;

	t32 = (x145*(x146&(x147^x148)));

	if (t32 != -2147450880) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = INT32_MIN;
	int8_t x154 = INT8_MAX;
	int64_t x155 = INT64_MAX;
	int16_t x156 = 0;

	t33 = (x153*(x154&(x155^x156)));

	if (t33 != -272730423296LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x161 = 3U;
	volatile int64_t x162 = -1LL;
	int8_t x163 = INT8_MAX;
	int64_t x164 = -1LL;
	volatile int64_t t34 = -3435LL;

	t34 = (x161*(x162&(x163^x164)));

	if (t34 != -384LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = -1;
	int16_t x166 = 2044;
	uint8_t x167 = 2U;
	uint64_t x168 = UINT64_MAX;

	t35 = (x165*(x166&(x167^x168)));

	if (t35 != 18446744073709549572LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x169 = UINT16_MAX;
	int64_t x170 = INT64_MAX;
	uint8_t x171 = UINT8_MAX;

	t36 = (x169*(x170&(x171^x172)));

	if (t36 != 15990540LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = 2U;
	volatile uint8_t x174 = 16U;
	uint16_t x176 = 42U;
	int64_t t37 = -1659750LL;

	t37 = (x173*(x174&(x175^x176)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x178 = 42U;
	int8_t x179 = -7;
	int32_t x180 = 2756785;

	t38 = (x177*(x178&(x179^x180)));

	if (t38 != 267169616LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x181 = INT32_MIN;
	uint16_t x182 = 7052U;
	int64_t x184 = INT64_MAX;
	volatile int64_t t39 = -1075931804441112594LL;

	t39 = (x181*(x182&(x183^x184)));

	if (t39 != -15144054685696LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x186 = UINT16_MAX;
	int32_t x187 = 321074559;
	int64_t x188 = INT64_MIN;
	static volatile int64_t t40 = -64859848LL;

	t40 = (x185*(x186&(x187^x188)));

	if (t40 != -1752960LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MAX;
	static uint16_t x194 = UINT16_MAX;
	int64_t t41 = -5045555770653LL;

	t41 = (x193*(x194&(x195^x196)));

	if (t41 != 8322945LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x197 = 2U;
	uint32_t x198 = 976U;
	volatile uint64_t x199 = UINT64_MAX;
	static int8_t x200 = -46;
	volatile uint64_t t42 = 294159LLU;

	t42 = (x197*(x198&(x199^x200)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = -1LL;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;

	t43 = (x201*(x202&(x203^x204)));

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x205 = 3910U;
	static uint64_t x206 = UINT64_MAX;
	int32_t x207 = 2;
	uint64_t t44 = 26LLU;

	t44 = (x205*(x206&(x207^x208)));

	if (t44 != 18446744073707139146LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = UINT64_MAX;
	int16_t x211 = -1;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t45 = 1163334413775833LLU;

	t45 = (x209*(x210&(x211^x212)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = -682;
	int8_t x214 = 25;
	int8_t x216 = -1;

	t46 = (x213*(x214&(x215^x216)));

	if (t46 != -16368) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x221 = INT8_MIN;
	int16_t x223 = -5732;
	uint32_t x224 = UINT32_MAX;

	t47 = (x221*(x222&(x223^x224)));

	if (t47 != 4294430592U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x225 = 112771U;
	int8_t x226 = INT8_MIN;
	static volatile int32_t x227 = -25;
	static int32_t x228 = -1690723;
	uint32_t t48 = 7600689U;

	t48 = (x225*(x226&(x227^x228)));

	if (t48 != 1674798080U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x230 = 7963U;
	int64_t x231 = -1084695LL;
	int64_t x232 = INT64_MIN;
	uint64_t t49 = 152413299LLU;

	t49 = (x229*(x230&(x231^x232)));

	if (t49 != 18446744073709546999LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = -2511;
	volatile int8_t x234 = -1;
	int8_t x235 = -17;
	int16_t x236 = -1;
	int32_t t50 = 7;

	t50 = (x233*(x234&(x235^x236)));

	if (t50 != -40176) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x237 = UINT32_MAX;
	uint16_t x239 = 30U;
	uint8_t x240 = 1U;
	volatile uint32_t t51 = 812U;

	t51 = (x237*(x238&(x239^x240)));

	if (t51 != 4294967265U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x251 = UINT64_MAX;
	int8_t x252 = -21;
	volatile uint64_t t52 = 118279LLU;

	t52 = (x249*(x250&(x251^x252)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x253 = 4U;
	uint64_t x254 = 14374182432138LLU;
	int32_t x255 = INT32_MAX;
	volatile uint64_t t53 = 534689245950284176LLU;

	t53 = (x253*(x254&(x255^x256)));

	if (t53 != 57492432224256LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x258 = UINT32_MAX;
	uint32_t x259 = 7073516U;
	static int16_t x260 = INT16_MIN;
	volatile uint32_t t54 = 103U;

	t54 = (x257*(x258&(x259^x260)));

	if (t54 != 1983248280U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x261 = 7120908U;
	int32_t x262 = 133955;
	volatile int16_t x263 = INT16_MIN;
	uint32_t t55 = 72486359U;

	t55 = (x261*(x262&(x263^x264)));

	if (t55 != 1629628160U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = INT64_MAX;
	int32_t x266 = -6355;
	uint64_t x267 = 12499995283LLU;
	int16_t x268 = 0;
	static uint64_t t56 = 119012945504LLU;

	t56 = (x265*(x266&(x267^x268)));

	if (t56 != 9223372024354782719LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MAX;
	int8_t x271 = -1;
	uint64_t x272 = 9291LLU;
	volatile uint64_t t57 = 20232032LLU;

	t57 = (x269*(x270&(x271^x272)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = -1LL;
	uint64_t x274 = 3442380420850LLU;
	static uint8_t x276 = 81U;
	volatile uint64_t t58 = 2892896048021446LLU;

	t58 = (x273*(x274&(x275^x276)));

	if (t58 != 18446740633440747440LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x277 = 118779744028LLU;
	uint32_t x278 = 1071304012U;
	uint8_t x279 = 30U;
	static uint64_t t59 = 1155773169LLU;

	t59 = (x277*(x278&(x279^x280)));

	if (t59 != 16568744277368512848LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x282 = INT32_MAX;
	volatile int16_t x283 = 124;
	int64_t x284 = -1LL;
	volatile int64_t t60 = 4618LL;

	t60 = (x281*(x282&(x283^x284)));

	if (t60 != 57982055121LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x285 = 11LLU;
	static uint32_t x287 = 16126U;
	int8_t x288 = INT8_MAX;

	t61 = (x285*(x286&(x287^x288)));

	if (t61 != 176011LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x297 = INT8_MIN;
	static int8_t x299 = INT8_MIN;
	int32_t x300 = 0;
	volatile int64_t t62 = -42663LL;

	t62 = (x297*(x298&(x299^x300)));

	if (t62 != 16384LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = -1;
	volatile int8_t x302 = -49;
	int32_t x303 = -1;

	t63 = (x301*(x302&(x303^x304)));

	if (t63 != -4) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = -2;
	static int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MIN;
	volatile int16_t x308 = -1;
	int64_t t64 = -600336058444715LL;

	t64 = (x305*(x306&(x307^x308)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = INT32_MAX;
	static int32_t x310 = -1;
	static volatile int64_t x311 = INT64_MIN;
	static uint64_t t65 = 3304LLU;

	t65 = (x309*(x310&(x311^x312)));

	if (t65 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x314 = INT64_MAX;
	uint32_t x315 = 3833U;
	int16_t x316 = -1;
	int64_t t66 = 1127559844079280LL;

	t66 = (x313*(x314&(x315^x316)));

	if (t66 != 51539561544LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = -11616242711996LL;
	uint8_t x322 = UINT8_MAX;
	uint32_t x323 = 12U;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t67 = -26665LL;

	t67 = (x321*(x322&(x323^x324)));

	if (t67 != -139394912543952LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x325 = INT8_MAX;
	int64_t x326 = INT64_MIN;
	uint32_t x327 = 12U;
	int32_t x328 = INT32_MAX;

	t68 = (x325*(x326&(x327^x328)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x329 = -1;
	uint32_t x330 = 4U;
	uint64_t x331 = 96LLU;
	int16_t x332 = INT16_MAX;
	static volatile uint64_t t69 = 1623601402851LLU;

	t69 = (x329*(x330&(x331^x332)));

	if (t69 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x337 = -1;
	int16_t x338 = 63;
	int16_t x339 = -1;
	int8_t x340 = INT8_MIN;
	int32_t t70 = 4613903;

	t70 = (x337*(x338&(x339^x340)));

	if (t70 != -63) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x341 = 1689898915797LLU;
	uint16_t x342 = UINT16_MAX;
	int32_t x343 = -1;
	uint8_t x344 = 60U;
	volatile uint64_t t71 = 185601631248LLU;

	t71 = (x341*(x342&(x343^x344)));

	if (t71 != 110646131511808575LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x349 = -1;
	uint64_t x351 = 0LLU;
	int32_t x352 = INT32_MAX;
	uint64_t t72 = 270678152341863LLU;

	t72 = (x349*(x350&(x351^x352)));

	if (t72 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x353 = 522U;
	volatile uint16_t x354 = 116U;
	int16_t x355 = -1;
	static uint64_t x356 = 19727713255LLU;
	static volatile uint64_t t73 = 1596492LLU;

	t73 = (x353*(x354&(x355^x356)));

	if (t73 != 8352LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x357 = INT64_MAX;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = 774LLU;
	uint64_t t74 = 4803353467332168273LLU;

	t74 = (x357*(x358&(x359^x360)));

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x361 = 404U;
	int32_t x362 = INT32_MIN;
	int16_t x363 = 9950;
	uint8_t x364 = UINT8_MAX;

	t75 = (x361*(x362&(x363^x364)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = -1;
	uint16_t x366 = 3U;
	uint8_t x367 = 1U;
	uint32_t x368 = 192270224U;

	t76 = (x365*(x366&(x367^x368)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x369 = 6690161529931690921LLU;
	static uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MAX;
	int8_t x372 = 1;

	t77 = (x369*(x370&(x371^x372)));

	if (t77 != 7172861851182864558LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x373 = -1;
	uint64_t x374 = 976144LLU;
	uint8_t x375 = UINT8_MAX;
	static uint16_t x376 = 1523U;
	volatile uint64_t t78 = 5981956080339LLU;

	t78 = (x373*(x374&(x375^x376)));

	if (t78 != 18446744073709550336LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x378 = INT32_MAX;
	volatile int64_t x379 = -1554249193LL;
	int32_t x380 = INT32_MIN;
	int64_t t79 = -2471158189842LL;

	t79 = (x377*(x378&(x379^x380)));

	if (t79 != 38877620008425LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = 3;
	uint64_t x383 = UINT64_MAX;
	uint64_t t80 = 66LLU;

	t80 = (x381*(x382&(x383^x384)));

	if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x385 = INT8_MIN;
	static uint32_t x386 = 37479U;
	static int32_t x387 = 5470387;
	uint64_t x388 = UINT64_MAX;
	uint64_t t81 = 262751LLU;

	t81 = (x385*(x386&(x387^x388)));

	if (t81 != 18446744073705283072LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x389 = 358U;
	volatile int64_t t82 = -1986LL;

	t82 = (x389*(x390&(x391^x392)));

	if (t82 != 10720310LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x393 = -1;
	int16_t x394 = -1;
	int8_t x395 = INT8_MAX;
	static int32_t t83 = -629257;

	t83 = (x393*(x394&(x395^x396)));

	if (t83 != -126) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x401 = UINT64_MAX;
	int32_t x402 = INT32_MIN;
	uint64_t x403 = 11133LLU;
	uint16_t x404 = 17U;
	uint64_t t84 = 5216954LLU;

	t84 = (x401*(x402&(x403^x404)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x406 = 7603694U;
	int64_t x408 = -3481987606612LL;
	int64_t t85 = 8243518172014LL;

	t85 = (x405*(x406&(x407^x408)));

	if (t85 != -8627748864LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x409 = -1;
	int16_t x410 = -1;
	static uint64_t x411 = 954146887401637391LLU;
	volatile uint64_t t86 = 2LLU;

	t86 = (x409*(x410&(x411^x412)));

	if (t86 != 954146887401637392LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x413 = 142317818U;
	uint32_t x414 = UINT32_MAX;
	volatile int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MAX;
	int64_t t87 = 0LL;

	t87 = (x413*(x414&(x415^x416)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x417 = INT16_MIN;
	int8_t x419 = -1;
	static volatile int64_t x420 = 49LL;
	int64_t t88 = 19141LL;

	t88 = (x417*(x418&(x419^x420)));

	if (t88 != -6750208LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = -35;
	int32_t x422 = -54;
	int16_t x423 = 34;
	int64_t x424 = -1LL;
	int64_t t89 = -4LL;

	t89 = (x421*(x422&(x423^x424)));

	if (t89 != 1960LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = -1;
	int16_t x426 = INT16_MIN;
	static int32_t x427 = 1047550;
	uint8_t x428 = 7U;
	int32_t t90 = 1746;

	t90 = (x425*(x426&(x427^x428)));

	if (t90 != -1015808) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x433 = INT8_MAX;
	uint32_t x434 = 96U;
	int32_t x435 = INT32_MIN;
	static int16_t x436 = -3545;
	static volatile uint32_t t91 = 938U;

	t91 = (x433*(x434&(x435^x436)));

	if (t91 != 4064U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = -1;
	int8_t x439 = INT8_MAX;

	t92 = (x437*(x438&(x439^x440)));

	if (t92 != -38342) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x442 = -37;
	int8_t x443 = 3;
	int32_t x444 = -13686804;
	uint32_t t93 = 15U;

	t93 = (x441*(x442&(x443^x444)));

	if (t93 != 13686837U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x445 = INT16_MIN;
	int32_t x446 = -165889068;
	int8_t x447 = 1;
	int8_t x448 = INT8_MAX;
	static int32_t t94 = 113;

	t94 = (x445*(x446&(x447^x448)));

	if (t94 != -2752512) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x450 = 421210860U;
	uint16_t x451 = 3U;
	uint16_t x452 = 16430U;
	volatile uint32_t t95 = 6790U;

	t95 = (x449*(x450&(x451^x452)));

	if (t95 != 264U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x454 = -1;
	static int16_t x455 = 7;
	int16_t x456 = 1754;

	t96 = (x453*(x454&(x455^x456)));

	if (t96 != 358428) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = -1;
	static int64_t t97 = 101510767286LL;

	t97 = (x457*(x458&(x459^x460)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x462 = 748LLU;
	int8_t x463 = 0;
	volatile uint8_t x464 = 2U;
	uint64_t t98 = 130654375379395LLU;

	t98 = (x461*(x462&(x463^x464)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x465 = INT16_MIN;
	uint8_t x466 = 58U;
	uint16_t x467 = 17278U;
	uint32_t x468 = 1U;
	uint32_t t99 = 188U;

	t99 = (x465*(x466&(x467^x468)));

	if (t99 != 4293066752U) { NG(); } else { ; }
	
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

