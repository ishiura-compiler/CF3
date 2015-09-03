#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
int16_t x25 = INT16_MIN;
uint64_t x26 = 219695016904818LLU;
volatile uint32_t x31 = 229849741U;
static int32_t x32 = INT32_MAX;
volatile int16_t x36 = INT16_MIN;
int32_t x38 = -943763;
int32_t x41 = INT32_MAX;
static int8_t x44 = INT8_MIN;
volatile uint32_t x51 = 262496U;
volatile int64_t t9 = 29997370627LL;
volatile int16_t x53 = INT16_MIN;
int8_t x55 = 1;
volatile uint64_t t10 = 1228LLU;
static int64_t x58 = INT64_MIN;
static int8_t x69 = INT8_MAX;
int64_t x71 = INT64_MIN;
volatile uint32_t x85 = 3986860U;
volatile uint8_t x87 = 54U;
int16_t x95 = INT16_MIN;
int32_t x121 = 124647;
volatile uint32_t t22 = 7658U;
int64_t x128 = -1LL;
int16_t x132 = 0;
uint8_t x144 = UINT8_MAX;
uint64_t t28 = 602619811244LLU;
volatile int16_t x154 = -247;
static volatile uint32_t t30 = 179099U;
int16_t x162 = INT16_MAX;
uint8_t x163 = 65U;
int8_t x174 = -1;
static uint64_t x178 = 79LLU;
int8_t x182 = -1;
volatile uint32_t t35 = 94789578U;
uint8_t x193 = UINT8_MAX;
int8_t x194 = INT8_MIN;
volatile int64_t t36 = -318536131LL;
volatile uint32_t t38 = 697303456U;
int64_t x209 = INT64_MAX;
static int16_t x212 = INT16_MAX;
uint64_t x213 = 567199LLU;
volatile int8_t x219 = INT8_MAX;
volatile int16_t x222 = 1;
volatile int16_t x224 = INT16_MIN;
int32_t x237 = INT32_MIN;
uint8_t x239 = UINT8_MAX;
static int64_t x253 = 7135224253783196LL;
static int8_t x259 = INT8_MIN;
volatile int8_t x264 = INT8_MIN;
uint64_t t53 = 2027205427LLU;
uint16_t x289 = 14U;
volatile int32_t x291 = 18;
static volatile uint8_t x304 = 3U;
static volatile int64_t x305 = INT64_MIN;
int16_t x306 = 12;
volatile uint8_t x308 = 37U;
uint16_t x310 = 48U;
volatile uint64_t x314 = UINT64_MAX;
uint64_t t61 = 45244840978LLU;
int64_t x317 = 14LL;
int16_t x320 = -1;
static volatile uint64_t t63 = 121276343422402142LLU;
int32_t x328 = -496452;
uint32_t x329 = 31U;
volatile uint64_t x330 = 81659243464274LLU;
uint64_t t65 = 628392306LLU;
int64_t x346 = 47LL;
int32_t x347 = -1;
volatile int64_t t69 = -248LL;
static uint8_t x358 = UINT8_MAX;
int16_t x372 = INT16_MAX;
int8_t x373 = -1;
volatile int8_t x378 = INT8_MIN;
static int32_t x381 = 381411;
int16_t x384 = INT16_MAX;
static int16_t x405 = -1;
static volatile int8_t x407 = -1;
int64_t x409 = INT64_MIN;
volatile uint16_t x411 = UINT16_MAX;
int16_t x418 = INT16_MAX;
int64_t t87 = -1LL;
static int32_t x426 = -1;
int64_t x429 = INT64_MIN;
uint64_t x430 = 132049757630576402LLU;
int64_t x437 = INT64_MIN;
int32_t x456 = -1;
int64_t x461 = INT64_MAX;
volatile int32_t x469 = INT32_MAX;
int16_t x474 = INT16_MIN;
static uint32_t x475 = 32U;
int64_t x479 = INT64_MIN;
uint32_t t98 = 55263053U;


void f0(void) {
	uint8_t x10 = UINT8_MAX;
	int16_t x11 = -1;
	int16_t x12 = -7679;
	volatile int32_t t0 = 1;

	t0 = (x9&(x10-(x11-x12)));

	if (t0 != -7424) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 13685U;
	volatile int64_t x15 = -1LL;
	static uint8_t x16 = UINT8_MAX;
	volatile int64_t t1 = 50110238LL;

	t1 = (x13&(x14-(x15-x16)));

	if (t1 != 13941LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -1;
	int32_t x18 = -5170489;
	volatile uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MAX;
	uint32_t t2 = 5950U;

	t2 = (x17&(x18-(x19-x20)));

	if (t2 != 4289796935U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 118U;
	uint32_t x22 = 1171U;
	int32_t x23 = -1;
	uint16_t x24 = 0U;
	volatile uint32_t t3 = 5U;

	t3 = (x21&(x22-(x23-x24)));

	if (t3 != 20U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x27 = UINT32_MAX;
	static int32_t x28 = -1;
	static volatile uint64_t t4 = 15191362LLU;

	t4 = (x25&(x26-(x27-x28)));

	if (t4 != 219695016902656LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = INT16_MAX;
	static int16_t x30 = INT16_MIN;
	volatile uint32_t t5 = 14373205U;

	t5 = (x29&(x30-(x31-x32)));

	if (t5 != 17778U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = INT8_MAX;
	uint32_t x34 = 11332U;
	int16_t x35 = INT16_MAX;
	uint32_t t6 = 55U;

	t6 = (x33&(x34-(x35-x36)));

	if (t6 != 69U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = INT32_MIN;
	int32_t x39 = -1;
	int8_t x40 = 2;
	volatile int32_t t7 = INT32_MIN;

	t7 = (x37&(x38-(x39-x40)));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x42 = 2U;
	uint8_t x43 = UINT8_MAX;
	volatile int32_t t8 = 0;

	t8 = (x41&(x42-(x43-x44)));

	if (t8 != 2147483267) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = 15LL;
	volatile int32_t x50 = INT32_MIN;
	volatile uint16_t x52 = 13050U;

	t9 = (x49&(x50-(x51-x52)));

	if (t9 != 10LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x54 = 48471968115999LLU;
	static volatile uint8_t x56 = 2U;

	t10 = (x53&(x54-(x55-x56)));

	if (t10 != 48471968088064LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	volatile int32_t x60 = 709;
	static volatile int64_t t11 = INT64_MIN;

	t11 = (x57&(x58-(x59-x60)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x70 = -2LL;
	int64_t x72 = -1LL;
	volatile int64_t t12 = 25747LL;

	t12 = (x69&(x70-(x71-x72)));

	if (t12 != 125LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = INT32_MAX;
	volatile int64_t x78 = INT64_MAX;
	uint32_t x79 = 28U;
	int16_t x80 = -2;
	volatile int64_t t13 = 449743LL;

	t13 = (x77&(x78-(x79-x80)));

	if (t13 != 2147483617LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x86 = 106U;
	int64_t x88 = -279LL;
	volatile int64_t t14 = 49643447LL;

	t14 = (x85&(x86-(x87-x88)));

	if (t14 != 3986700LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	uint64_t x96 = 452605110223218LLU;
	uint64_t t15 = 4882794784591642LLU;

	t15 = (x93&(x94-(x95-x96)));

	if (t15 != 452605110256241LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MAX;
	int8_t x99 = -1;
	uint64_t x100 = 82034LLU;
	volatile uint64_t t16 = 960449771701608LLU;

	t16 = (x97&(x98-(x99-x100)));

	if (t16 != 49266LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = -1;
	int16_t x102 = INT16_MAX;
	int8_t x103 = INT8_MAX;
	uint16_t x104 = 105U;
	int32_t t17 = 3709379;

	t17 = (x101&(x102-(x103-x104)));

	if (t17 != 32745) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = 13;
	uint8_t x106 = UINT8_MAX;
	volatile int16_t x107 = INT16_MAX;
	uint32_t x108 = 12849294U;
	static uint32_t t18 = 22385U;

	t18 = (x105&(x106-(x107-x108)));

	if (t18 != 12U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MAX;
	int64_t x111 = -1LL;
	static int32_t x112 = -1;
	uint64_t t19 = 32130709502LLU;

	t19 = (x109&(x110-(x111-x112)));

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x113 = INT32_MAX;
	int64_t x114 = INT64_MIN;
	int8_t x115 = INT8_MIN;
	static volatile int8_t x116 = 0;
	int64_t t20 = -5978LL;

	t20 = (x113&(x114-(x115-x116)));

	if (t20 != 128LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x117 = -1;
	volatile uint64_t x118 = 275716717992111LLU;
	uint64_t x119 = 6LLU;
	int16_t x120 = INT16_MAX;
	static volatile uint64_t t21 = 472516LLU;

	t21 = (x117&(x118-(x119-x120)));

	if (t21 != 275716718024872LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x122 = INT16_MAX;
	volatile uint8_t x123 = 32U;
	volatile uint32_t x124 = 180873197U;

	t22 = (x121&(x122-(x123-x124)));

	if (t22 != 26308U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = INT64_MAX;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = -9493;
	volatile int64_t t23 = 24888721299397LL;

	t23 = (x125&(x126-(x127-x128)));

	if (t23 != 4294976787LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x129 = 1U;
	volatile int16_t x130 = 254;
	volatile int16_t x131 = INT16_MAX;
	int32_t t24 = 1668;

	t24 = (x129&(x130-(x131-x132)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = 61;
	volatile uint32_t x134 = UINT32_MAX;
	static int16_t x135 = 39;
	static volatile uint32_t x136 = 1821464U;
	volatile uint32_t t25 = 10536920U;

	t25 = (x133&(x134-(x135-x136)));

	if (t25 != 48U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x137 = INT8_MIN;
	int32_t x138 = -33;
	int32_t x139 = -1;
	int32_t x140 = -1;
	static volatile int32_t t26 = 12154305;

	t26 = (x137&(x138-(x139-x140)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x141 = UINT16_MAX;
	volatile int8_t x142 = 0;
	volatile uint8_t x143 = UINT8_MAX;
	int32_t t27 = 3446593;

	t27 = (x141&(x142-(x143-x144)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x145 = 55783854LLU;
	volatile int64_t x146 = -201181710385LL;
	uint64_t x147 = 1366447LLU;
	int64_t x148 = INT64_MAX;

	t28 = (x145&(x146-(x147-x148)));

	if (t28 != 69646LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x149 = 426LLU;
	int64_t x150 = 3LL;
	volatile uint8_t x151 = UINT8_MAX;
	int32_t x152 = 166700;
	volatile uint64_t t29 = 139784305082014941LLU;

	t29 = (x149&(x150-(x151-x152)));

	if (t29 != 32LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x153 = 28461U;
	volatile uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 955529U;

	t30 = (x153&(x154-(x155-x156)));

	if (t30 != 769U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x161 = 545395164U;
	int32_t x164 = 506773;
	static uint32_t t31 = 266646704U;

	t31 = (x161&(x162-(x163-x164)));

	if (t31 != 4432U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x173 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	uint8_t x176 = 3U;
	volatile int32_t t32 = 14686;

	t32 = (x173&(x174-(x175-x176)));

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = INT8_MIN;
	static int32_t x179 = 6504;
	static int64_t x180 = -1772519895122418721LL;
	static uint64_t t33 = 4429932LLU;

	t33 = (x177&(x178-(x179-x180)));

	if (t33 != 16674224178587126400LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -1LL;
	uint64_t x183 = 271087880082608LLU;
	uint32_t x184 = 3U;
	volatile uint64_t t34 = 12460LLU;

	t34 = (x181&(x182-(x183-x184)));

	if (t34 != 18446472985829469010LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = 4787;
	uint32_t x186 = 0U;
	static uint32_t x187 = UINT32_MAX;
	int32_t x188 = 562;

	t35 = (x185&(x186-(x187-x188)));

	if (t35 != 563U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x195 = -273157136468057973LL;
	volatile uint16_t x196 = UINT16_MAX;

	t36 = (x193&(x194-(x195-x196)));

	if (t36 != 244LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x197 = 1388U;
	uint16_t x198 = 2U;
	static uint16_t x199 = 302U;
	int8_t x200 = -6;
	volatile uint32_t t37 = 1U;

	t37 = (x197&(x198-(x199-x200)));

	if (t37 != 1100U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x201 = UINT32_MAX;
	volatile int32_t x202 = INT32_MIN;
	int8_t x203 = 0;
	volatile uint8_t x204 = 11U;

	t38 = (x201&(x202-(x203-x204)));

	if (t38 != 2147483659U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x205 = 5U;
	static int64_t x206 = INT64_MIN;
	uint64_t x207 = UINT64_MAX;
	volatile int32_t x208 = INT32_MAX;
	uint64_t t39 = 4091LLU;

	t39 = (x205&(x206-(x207-x208)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x210 = 113U;
	uint16_t x211 = 56U;
	volatile int64_t t40 = -79385LL;

	t40 = (x209&(x210-(x211-x212)));

	if (t40 != 32824LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = UINT16_MAX;
	static volatile uint64_t t41 = 80898734LLU;

	t41 = (x213&(x214-(x215-x216)));

	if (t41 != 30LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x217 = 1U;
	volatile int16_t x218 = INT16_MAX;
	uint64_t x220 = UINT64_MAX;
	uint64_t t42 = 901541392767LLU;

	t42 = (x217&(x218-(x219-x220)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x221 = INT64_MAX;
	uint64_t x223 = 1997250406960097LLU;
	volatile uint64_t t43 = 1326171286885LLU;

	t43 = (x221&(x222-(x223-x224)));

	if (t43 != 9221374786447782944LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x225 = INT64_MIN;
	volatile uint64_t x226 = UINT64_MAX;
	uint8_t x227 = 3U;
	volatile int8_t x228 = -1;
	static uint64_t t44 = 20817921LLU;

	t44 = (x225&(x226-(x227-x228)));

	if (t44 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x229 = INT64_MAX;
	uint64_t x230 = UINT64_MAX;
	int8_t x231 = INT8_MIN;
	static int32_t x232 = INT32_MIN;
	volatile uint64_t t45 = 197902040726761LLU;

	t45 = (x229&(x230-(x231-x232)));

	if (t45 != 9223372034707292287LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x233 = INT32_MIN;
	static uint32_t x234 = 19U;
	int16_t x235 = 1157;
	volatile int32_t x236 = INT32_MAX;
	volatile uint32_t t46 = 50629U;

	t46 = (x233&(x234-(x235-x236)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x238 = -1;
	int32_t x240 = INT32_MAX;
	int32_t t47 = -429745111;

	t47 = (x237&(x238-(x239-x240)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x245 = INT32_MAX;
	volatile int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MAX;
	static uint64_t x248 = 3764798LLU;
	uint64_t t48 = 777LLU;

	t48 = (x245&(x246-(x247-x248)));

	if (t48 != 3764799LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x249 = -2305;
	static uint16_t x250 = UINT16_MAX;
	uint32_t x251 = 169U;
	volatile int16_t x252 = -1;
	volatile uint32_t t49 = 57260U;

	t49 = (x249&(x250-(x251-x252)));

	if (t49 != 63061U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x254 = -1;
	static uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t50 = 28696916093937LLU;

	t50 = (x253&(x254-(x255-x256)));

	if (t50 != 7135224253775872LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = -66655962109LL;
	int32_t x258 = -1;
	int32_t x260 = -1;
	int64_t t51 = -166LL;

	t51 = (x257&(x258-(x259-x260)));

	if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x261 = -1;
	uint8_t x262 = 120U;
	static uint64_t x263 = 1752056829LLU;
	uint64_t t52 = 49105LLU;

	t52 = (x261&(x262-(x263-x264)));

	if (t52 != 18446744071957494779LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x265 = 3823LLU;
	uint64_t x266 = UINT64_MAX;
	volatile uint16_t x267 = UINT16_MAX;
	volatile int16_t x268 = -6558;

	t53 = (x265&(x266-(x267-x268)));

	if (t53 != 1634LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x269 = 3457LLU;
	static int32_t x270 = INT32_MIN;
	static int64_t x271 = 1574157427LL;
	uint64_t x272 = 7714531742164LLU;
	volatile uint64_t t54 = 141LLU;

	t54 = (x269&(x270-(x271-x272)));

	if (t54 != 1281LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x281 = INT16_MAX;
	int16_t x282 = INT16_MIN;
	int32_t x283 = -807;
	int32_t x284 = 336384477;
	static volatile int32_t t55 = -111;

	t55 = (x281&(x282-(x283-x284)));

	if (t55 != 21764) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x290 = 22063;
	static int32_t x292 = -792;
	volatile int32_t t56 = 1;

	t56 = (x289&(x290-(x291-x292)));

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x293 = 7601U;
	int16_t x294 = INT16_MIN;
	int64_t x295 = INT64_MIN;
	volatile int8_t x296 = INT8_MIN;
	int64_t t57 = -31318780LL;

	t57 = (x293&(x294-(x295-x296)));

	if (t57 != 7552LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x301 = 5U;
	uint64_t x302 = UINT64_MAX;
	volatile int16_t x303 = -44;
	volatile uint64_t t58 = 55587412106LLU;

	t58 = (x301&(x302-(x303-x304)));

	if (t58 != 4LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x307 = INT32_MAX;
	static volatile int64_t t59 = INT64_MIN;

	t59 = (x305&(x306-(x307-x308)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x309 = -1;
	uint32_t x311 = 48467U;
	int32_t x312 = -1;
	uint32_t t60 = 3U;

	t60 = (x309&(x310-(x311-x312)));

	if (t60 != 4294918876U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x313 = INT16_MIN;
	static int64_t x315 = 111605689185874277LL;
	static int32_t x316 = -1;

	t61 = (x313&(x314-(x315-x316)));

	if (t61 != 18335138384523657216LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x318 = 96997U;
	int32_t x319 = 876164236;
	static int64_t t62 = 3615362306947139408LL;

	t62 = (x317&(x318-(x319-x320)));

	if (t62 != 8LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x321 = 130LL;
	volatile int64_t x322 = 947478120624LL;
	static uint64_t x323 = UINT64_MAX;
	int64_t x324 = INT64_MAX;

	t63 = (x321&(x322-(x323-x324)));

	if (t63 != 128LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = -1;
	int8_t x326 = -1;
	int16_t x327 = -401;
	volatile int32_t t64 = -11;

	t64 = (x325&(x326-(x327-x328)));

	if (t64 != -496052) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x331 = 35896910278230476LLU;
	int32_t x332 = 12;

	t65 = (x329&(x330-(x331-x332)));

	if (t65 != 18LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x333 = -215;
	int16_t x334 = INT16_MAX;
	int8_t x335 = INT8_MIN;
	int32_t x336 = 0;
	static volatile int32_t t66 = 30;

	t66 = (x333&(x334-(x335-x336)));

	if (t66 != 32809) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x337 = 108;
	uint8_t x338 = 18U;
	int32_t x339 = INT32_MAX;
	uint64_t x340 = 23058LLU;
	volatile uint64_t t67 = 16670869752830LLU;

	t67 = (x337&(x338-(x339-x340)));

	if (t67 != 36LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x341 = INT32_MIN;
	volatile uint16_t x342 = 50U;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MAX;
	static volatile uint32_t t68 = 1270U;

	t68 = (x341&(x342-(x343-x344)));

	if (t68 != 2147483648U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x345 = 14U;
	int32_t x348 = 11;

	t69 = (x345&(x346-(x347-x348)));

	if (t69 != 10LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = INT64_MAX;
	uint32_t x350 = 15448U;
	static volatile uint64_t x351 = 4828LLU;
	int64_t x352 = -1LL;
	uint64_t t70 = 906396258010LLU;

	t70 = (x349&(x350-(x351-x352)));

	if (t70 != 10619LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x353 = -1;
	volatile int16_t x354 = -1;
	int32_t x355 = 1;
	static int32_t x356 = 54;
	volatile int32_t t71 = 208021;

	t71 = (x353&(x354-(x355-x356)));

	if (t71 != 52) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int16_t x359 = INT16_MIN;
	volatile int32_t x360 = 49118;
	volatile int32_t t72 = 7;

	t72 = (x357&(x358-(x359-x360)));

	if (t72 != 16605) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x361 = UINT8_MAX;
	volatile int32_t x362 = -1;
	static volatile uint64_t x363 = 1444170LLU;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t73 = 2381070973469LLU;

	t73 = (x361&(x362-(x363-x364)));

	if (t73 != 181LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x365 = UINT16_MAX;
	uint64_t x366 = 14105147539LLU;
	static volatile int16_t x367 = INT16_MAX;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t74 = 129551740675LLU;

	t74 = (x365&(x366-(x367-x368)));

	if (t74 != 63635LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x369 = -34;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = INT32_MAX;
	volatile uint32_t t75 = 3706U;

	t75 = (x369&(x370-(x371-x372)));

	if (t75 != 2147516382U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x374 = 451386U;
	volatile int64_t x375 = 49558579575531LL;
	volatile int8_t x376 = INT8_MIN;
	volatile int64_t t76 = -4036459020220781975LL;

	t76 = (x373&(x374-(x375-x376)));

	if (t76 != -49558579124273LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x377 = -1LL;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = UINT64_MAX;
	uint64_t t77 = 2443LLU;

	t77 = (x377&(x378-(x379-x380)));

	if (t77 != 2147483519LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x382 = -1;
	int16_t x383 = -163;
	static volatile int32_t t78 = -98281960;

	t78 = (x381&(x382-(x383-x384)));

	if (t78 != 32929) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x385 = INT16_MAX;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = UINT32_MAX;
	int16_t x388 = INT16_MIN;
	volatile uint32_t t79 = 11392U;

	t79 = (x385&(x386-(x387-x388)));

	if (t79 != 256U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x393 = 6822U;
	uint8_t x394 = 107U;
	volatile uint64_t x395 = 14012192240077335LLU;
	volatile uint8_t x396 = UINT8_MAX;
	volatile uint64_t t80 = 4371559746366LLU;

	t80 = (x393&(x394-(x395-x396)));

	if (t80 != 4610LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x397 = INT8_MIN;
	volatile int8_t x398 = -1;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = -2961215746286LL;
	int64_t t81 = 133620828987376LL;

	t81 = (x397&(x398-(x399-x400)));

	if (t81 != -2961215811840LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x401 = UINT8_MAX;
	volatile uint64_t x402 = UINT64_MAX;
	int64_t x403 = -1LL;
	static uint8_t x404 = 1U;
	uint64_t t82 = 1LLU;

	t82 = (x401&(x402-(x403-x404)));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x406 = INT32_MIN;
	uint64_t x408 = UINT64_MAX;
	uint64_t t83 = 2029697637LLU;

	t83 = (x405&(x406-(x407-x408)));

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x410 = -3;
	static uint16_t x412 = UINT16_MAX;
	static int64_t t84 = INT64_MIN;

	t84 = (x409&(x410-(x411-x412)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = INT32_MAX;
	uint64_t x414 = 15587034195LLU;
	uint64_t x415 = 332449461717LLU;
	static uint64_t x416 = 5733809LLU;
	volatile uint64_t t85 = 9068LLU;

	t85 = (x413&(x414-(x415-x416)));

	if (t85 != 970886191LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = INT32_MIN;
	int64_t x419 = -1LL;
	uint64_t x420 = 1243656LLU;
	volatile uint64_t t86 = 3532928764LLU;

	t86 = (x417&(x418-(x419-x420)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x421 = -786672580LL;
	uint8_t x422 = UINT8_MAX;
	static uint32_t x423 = 37703304U;
	volatile uint8_t x424 = 43U;

	t87 = (x421&(x422-(x423-x424)));

	if (t87 != 3506442272LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x425 = -1;
	static int16_t x427 = INT16_MIN;
	static int32_t x428 = -13397326;
	int32_t t88 = 59;

	t88 = (x425&(x426-(x427-x428)));

	if (t88 != -13364559) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x431 = 30U;
	volatile int8_t x432 = INT8_MIN;
	volatile uint64_t t89 = 158967084492881807LLU;

	t89 = (x429&(x430-(x431-x432)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x438 = -56716888181LL;
	int64_t x439 = INT64_MIN;
	int16_t x440 = -14;
	int64_t t90 = 72432113772LL;

	t90 = (x437&(x438-(x439-x440)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x445 = 14463429690673LLU;
	volatile int8_t x446 = INT8_MAX;
	static int16_t x447 = -468;
	static volatile int32_t x448 = 1;
	static volatile uint64_t t91 = 769LLU;

	t91 = (x445&(x446-(x447-x448)));

	if (t91 != 16LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x453 = UINT32_MAX;
	int16_t x454 = -11384;
	volatile int32_t x455 = INT32_MIN;
	uint32_t t92 = 241796U;

	t92 = (x453&(x454-(x455-x456)));

	if (t92 != 2147472263U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x457 = INT8_MIN;
	int64_t x458 = INT64_MIN;
	static int32_t x459 = -6751956;
	int16_t x460 = INT16_MIN;
	int64_t t93 = 128360040237568064LL;

	t93 = (x457&(x458-(x459-x460)));

	if (t93 != -9223372036848056704LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x462 = UINT16_MAX;
	static volatile int32_t x463 = -7194;
	volatile uint32_t x464 = 7U;
	volatile int64_t t94 = 78139172927684LL;

	t94 = (x461&(x462-(x463-x464)));

	if (t94 != 72736LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x470 = 1752220951864325LLU;
	int32_t x471 = -1;
	static int8_t x472 = 52;
	uint64_t t95 = 2465608317992LLU;

	t95 = (x469&(x470-(x471-x472)));

	if (t95 != 996631610LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x473 = 26802823;
	int64_t x476 = 4142817476LL;
	static int64_t t96 = 521833509LL;

	t96 = (x473&(x474-(x475-x476)));

	if (t96 != 8970372LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x477 = INT16_MIN;
	int64_t x478 = INT64_MIN;
	uint64_t x480 = 16000351678LLU;
	volatile uint64_t t97 = 15839945499LLU;

	t97 = (x477&(x478-(x479-x480)));

	if (t97 != 16000319488LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x481 = 1U;
	volatile int8_t x482 = INT8_MIN;
	uint32_t x483 = 3008289U;
	volatile uint32_t x484 = 25U;

	t98 = (x481&(x482-(x483-x484)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x485 = 8U;
	volatile int32_t x486 = 5;
	int16_t x487 = -1;
	volatile int64_t x488 = -1LL;
	int64_t t99 = -39184671133LL;

	t99 = (x485&(x486-(x487-x488)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

