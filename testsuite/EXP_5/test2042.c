#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = INT64_MIN;
int8_t x5 = -1;
static int8_t x6 = -10;
volatile int64_t x22 = -1LL;
int64_t x23 = 327LL;
static volatile uint32_t t6 = 1903U;
int8_t x31 = 8;
static volatile int64_t x33 = INT64_MIN;
int64_t x35 = 28212443247LL;
volatile int64_t t8 = -14616214LL;
volatile uint8_t x45 = UINT8_MAX;
int64_t t13 = 742492292298726LL;
volatile uint16_t x61 = 1942U;
int16_t x67 = 10131;
int64_t x71 = INT64_MIN;
volatile uint32_t x76 = 339430U;
volatile int16_t x83 = -1;
int32_t x84 = -1;
int8_t x100 = 1;
int32_t x109 = -1;
int32_t x110 = INT32_MIN;
int32_t x112 = INT32_MAX;
uint64_t x115 = 28139615683909LLU;
static uint32_t x138 = 119U;
static volatile int32_t x139 = -1;
static volatile int16_t x155 = INT16_MIN;
volatile uint32_t t32 = 1787U;
uint8_t x165 = 1U;
int32_t x168 = INT32_MIN;
int32_t t34 = -2776099;
int64_t x169 = -1LL;
static int64_t x181 = INT64_MIN;
uint32_t x185 = UINT32_MAX;
int8_t x186 = -1;
int16_t x189 = INT16_MIN;
volatile int32_t x193 = INT32_MAX;
int64_t x198 = INT64_MIN;
static int32_t x207 = INT32_MIN;
int64_t x217 = -11178248343243231LL;
uint16_t x218 = 1661U;
static int16_t x226 = -1;
uint64_t x228 = UINT64_MAX;
static int8_t x233 = INT8_MAX;
volatile int8_t x235 = 1;
int8_t x236 = -3;
volatile int64_t t48 = -115968966546832LL;
volatile uint64_t x238 = 16379014118824LLU;
int64_t x242 = 18879383488909426LL;
int8_t x252 = INT8_MAX;
static int16_t x273 = -5;
volatile int32_t t57 = 18;
volatile int8_t x280 = -1;
volatile int32_t x287 = INT32_MIN;
uint64_t t60 = 6835818576LLU;
uint64_t x298 = UINT64_MAX;
uint8_t x304 = 0U;
int16_t x305 = INT16_MIN;
int32_t x324 = -7;
uint64_t x327 = 15488LLU;
volatile uint32_t t70 = 467838U;
int8_t x336 = INT8_MIN;
volatile uint32_t t71 = 9878510U;
int16_t x338 = INT16_MIN;
uint8_t x339 = 5U;
int64_t x347 = INT64_MIN;
int64_t t74 = 16LL;
int32_t x354 = 581923077;
int32_t x357 = -312571;
uint64_t t76 = 3010LLU;
static int16_t x361 = 9;
uint32_t x363 = UINT32_MAX;
int8_t x365 = INT8_MIN;
int8_t x367 = INT8_MIN;
int32_t x368 = INT32_MIN;
int16_t x374 = INT16_MIN;
static volatile int16_t x376 = INT16_MIN;
volatile int32_t t79 = 0;
volatile int16_t x380 = -132;
uint32_t x382 = 1U;
int64_t x383 = -109LL;
int64_t x391 = -68850464900208631LL;
int8_t x406 = INT8_MIN;
volatile int16_t x407 = INT16_MIN;
int32_t x411 = INT32_MIN;
uint32_t t86 = 6U;
static uint64_t t88 = 5110117022045390LLU;
int8_t x426 = INT8_MIN;
volatile int64_t t89 = -3266LL;
volatile int8_t x432 = INT8_MIN;
volatile int64_t t90 = 32213378241124555LL;
volatile int64_t t91 = 4384022261764LL;
int16_t x438 = -1;
volatile uint16_t x439 = 4U;
uint32_t x440 = 4634633U;
static volatile uint32_t t92 = 54514875U;
uint64_t x451 = 23611809LLU;
static int32_t x452 = -1;
volatile int16_t x458 = INT16_MAX;
uint16_t x461 = UINT16_MAX;
static int8_t x462 = INT8_MAX;
uint8_t x474 = UINT8_MAX;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	uint64_t x3 = 984LLU;
	int8_t x4 = INT8_MIN;
	uint64_t t0 = 784927713467104223LLU;

	t0 = (x1+((x2^x3)-x4));

	if (t0 != 9223372036854774951LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = INT32_MAX;
	int8_t x8 = 0;
	volatile int32_t t1 = 28;

	t1 = (x5+((x6^x7)-x8));

	if (t1 != -2147483640) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = INT64_MIN;
	int32_t x11 = -44626;
	uint8_t x12 = 10U;
	volatile int64_t t2 = -1569701076085922LL;

	t2 = (x9+((x10^x11)-x12));

	if (t2 != 9223372036854731171LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint8_t x14 = 63U;
	static int64_t x15 = -1LL;
	uint16_t x16 = UINT16_MAX;
	int64_t t3 = 22592LL;

	t3 = (x13+((x14^x15)-x16));

	if (t3 != -65472LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static volatile int64_t x18 = INT64_MIN;
	int8_t x19 = -54;
	volatile int16_t x20 = INT16_MAX;
	volatile uint64_t t4 = 56484LLU;

	t4 = (x17+((x18^x19)-x20));

	if (t4 != 9223372036854742986LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 9U;
	int8_t x24 = INT8_MIN;
	static volatile int64_t t5 = -1470081929251LL;

	t5 = (x21+((x22^x23)-x24));

	if (t5 != -191LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int32_t x26 = 2948066;
	volatile int16_t x27 = -1;
	volatile uint16_t x28 = 22U;

	t6 = (x25+((x26^x27)-x28));

	if (t6 != 4292019206U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -5658;
	uint32_t x30 = 87U;
	uint8_t x32 = UINT8_MAX;
	volatile uint32_t t7 = 1249U;

	t7 = (x29+((x30^x31)-x32));

	if (t7 != 4294961478U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = -1115;
	static int64_t x36 = INT64_MIN;

	t8 = (x33+((x34^x35)-x36));

	if (t8 != -28212444214LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -270;
	static int8_t x38 = INT8_MIN;
	static uint32_t x39 = 7657075U;
	static int32_t x40 = -1;
	uint32_t t9 = 14459U;

	t9 = (x37+((x38^x39)-x40));

	if (t9 != 4287310054U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MAX;
	uint8_t x42 = 1U;
	volatile int32_t x43 = INT32_MIN;
	uint64_t x44 = 28301136487303LLU;
	static uint64_t t10 = 3291728637379547737LLU;

	t10 = (x41+((x42^x43)-x44));

	if (t10 != 9223343733570804857LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	int8_t x47 = 7;
	static volatile int64_t x48 = 4LL;
	int64_t t11 = 1LL;

	t11 = (x45+((x46^x47)-x48));

	if (t11 != -2147483390LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int32_t x50 = -1;
	int32_t x51 = -1;
	uint8_t x52 = 7U;
	uint64_t t12 = 1LLU;

	t12 = (x49+((x50^x51)-x52));

	if (t12 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int64_t x54 = INT64_MAX;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;

	t13 = (x53+((x54^x55)-x56));

	if (t13 != -9223372032559775746LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = 1;
	int8_t x59 = INT8_MAX;
	volatile uint16_t x60 = 144U;
	int32_t t14 = -151127795;

	t14 = (x57+((x58^x59)-x60));

	if (t14 != -146) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x62 = -494;
	static volatile uint32_t x63 = 3500607U;
	int16_t x64 = -14;
	uint32_t t15 = 59384U;

	t15 = (x61+((x62^x63)-x64));

	if (t15 != 4291468241U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int32_t x66 = INT32_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	int32_t t16 = -332745218;

	t16 = (x65+((x66^x67)-x68));

	if (t16 != 2147473516) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	int8_t x72 = 3;
	int64_t t17 = -2LL;

	t17 = (x69+((x70^x71)-x72));

	if (t17 != -9223372032559808644LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	uint16_t x74 = 30U;
	int64_t x75 = INT64_MAX;
	volatile int64_t t18 = -110LL;

	t18 = (x73+((x74^x75)-x76));

	if (t18 != 9223372036854403579LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x78 = -3;
	volatile uint8_t x79 = 47U;
	int16_t x80 = INT16_MIN;
	int32_t t19 = 234713224;

	t19 = (x77+((x78^x79)-x80));

	if (t19 != -2147450926) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 7603627U;
	uint16_t x82 = 5081U;
	static volatile uint32_t t20 = 470U;

	t20 = (x81+((x82^x83)-x84));

	if (t20 != 7598546U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MIN;
	int32_t x87 = 2677636;
	uint16_t x88 = 6642U;
	int32_t t21 = -9559;

	t21 = (x85+((x86^x87)-x88));

	if (t21 != -2717166) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -184;
	int32_t x90 = INT32_MIN;
	volatile int16_t x91 = -1688;
	volatile int16_t x92 = -125;
	int32_t t22 = 77;

	t22 = (x89+((x90^x91)-x92));

	if (t22 != 2147481901) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = -5;
	volatile uint8_t x94 = UINT8_MAX;
	volatile uint8_t x95 = 20U;
	int32_t x96 = 6242186;
	int32_t t23 = 1614;

	t23 = (x93+((x94^x95)-x96));

	if (t23 != -6241956) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 1U;
	int16_t x98 = 23;
	volatile uint16_t x99 = 3587U;
	volatile int32_t t24 = 982100;

	t24 = (x97+((x98^x99)-x100));

	if (t24 != 3604) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	int16_t x102 = -62;
	uint32_t x103 = 3773907U;
	int8_t x104 = INT8_MAX;
	uint32_t t25 = 342441847U;

	t25 = (x101+((x102^x103)-x104));

	if (t25 != 4291226001U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint64_t x106 = 51314824513586212LLU;
	uint32_t x107 = 1U;
	int32_t x108 = -1;
	volatile uint64_t t26 = 481744759914535523LLU;

	t26 = (x105+((x106^x107)-x108));

	if (t26 != 51314824513586086LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x111 = INT16_MIN;
	static int32_t t27 = 3959868;

	t27 = (x109+((x110^x111)-x112));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -3;
	uint16_t x114 = 382U;
	int32_t x116 = INT32_MIN;
	volatile uint64_t t28 = 1734324697815LLU;

	t28 = (x113+((x114^x115)-x116));

	if (t28 != 28141763167288LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 1;
	int16_t x126 = -1;
	int64_t x127 = 546390860733156LL;
	int64_t x128 = -12301761253701274LL;
	static volatile int64_t t29 = -160938394128167135LL;

	t29 = (x125+((x126^x127)-x128));

	if (t29 != 11755370392968118LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile int16_t x140 = INT16_MIN;
	static uint32_t t30 = 23757352U;

	t30 = (x137+((x138^x139)-x140));

	if (t30 != 4294967176U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = INT8_MIN;
	static int32_t x156 = -1;
	uint64_t t31 = 153072766650217306LLU;

	t31 = (x153+((x154^x155)-x156));

	if (t31 != 32640LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MAX;
	static int8_t x158 = 6;
	uint16_t x159 = 6U;
	volatile uint32_t x160 = UINT32_MAX;

	t32 = (x157+((x158^x159)-x160));

	if (t32 != 128U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	uint8_t x163 = UINT8_MAX;
	uint32_t x164 = 127U;
	volatile int64_t t33 = -7783LL;

	t33 = (x161+((x162^x163)-x164));

	if (t33 != -9223372032559808768LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x166 = INT32_MIN;
	uint8_t x167 = 12U;

	t34 = (x165+((x166^x167)-x168));

	if (t34 != 13) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x170 = 586;
	int16_t x171 = INT16_MIN;
	uint8_t x172 = UINT8_MAX;
	volatile int64_t t35 = 58627LL;

	t35 = (x169+((x170^x171)-x172));

	if (t35 != -32438LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x177 = 3276U;
	static int16_t x178 = INT16_MAX;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = 2U;
	volatile int64_t t36 = -918344360665LL;

	t36 = (x177+((x178^x179)-x180));

	if (t36 != -9223372036854739767LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x182 = -32;
	int64_t x183 = INT64_MIN;
	static int16_t x184 = -1;
	volatile int64_t t37 = -402319477820LL;

	t37 = (x181+((x182^x183)-x184));

	if (t37 != -31LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x187 = INT16_MIN;
	uint8_t x188 = UINT8_MAX;
	static uint32_t t38 = 3817177U;

	t38 = (x185+((x186^x187)-x188));

	if (t38 != 32511U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x190 = INT32_MIN;
	uint64_t x191 = 1557659287128LLU;
	int64_t x192 = INT64_MIN;
	uint64_t t39 = 166LLU;

	t39 = (x189+((x190^x191)-x192));

	if (t39 != 9223370478515256920LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x194 = INT8_MAX;
	static int32_t x195 = INT32_MIN;
	int16_t x196 = -1;
	static int32_t t40 = 793571;

	t40 = (x193+((x194^x195)-x196));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x197 = -2;
	volatile uint32_t x199 = 248968537U;
	static int8_t x200 = INT8_MIN;
	static int64_t t41 = -47682332LL;

	t41 = (x197+((x198^x199)-x200));

	if (t41 != -9223372036605807145LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x205 = INT16_MAX;
	static uint16_t x206 = 4732U;
	int8_t x208 = INT8_MIN;
	int32_t t42 = -30260;

	t42 = (x205+((x206^x207)-x208));

	if (t42 != -2147446021) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x209 = 12U;
	volatile int64_t x210 = INT64_MIN;
	static volatile int32_t x211 = INT32_MIN;
	uint32_t x212 = 285710U;
	volatile int64_t t43 = 1578620145561LL;

	t43 = (x209+((x210^x211)-x212));

	if (t43 != 9223372034707006462LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = 7690626U;
	int16_t x214 = INT16_MAX;
	uint16_t x215 = UINT16_MAX;
	static int32_t x216 = 1350861;
	uint32_t t44 = 62442982U;

	t44 = (x213+((x214^x215)-x216));

	if (t44 != 6372533U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x219 = 15275534748772672LL;
	int8_t x220 = 0;
	static volatile int64_t t45 = -46688423LL;

	t45 = (x217+((x218^x219)-x220));

	if (t45 != 4097286405530974LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x225 = 6LLU;
	uint16_t x227 = 10U;
	volatile uint64_t t46 = 253714LLU;

	t46 = (x225+((x226^x227)-x228));

	if (t46 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x229 = 3LLU;
	int8_t x230 = INT8_MIN;
	uint16_t x231 = 36U;
	int16_t x232 = INT16_MIN;
	volatile uint64_t t47 = 479495470889153LLU;

	t47 = (x229+((x230^x231)-x232));

	if (t47 != 32679LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x234 = 252770444760132LL;

	t48 = (x233+((x234^x235)-x236));

	if (t48 != 252770444760263LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = INT32_MAX;
	volatile uint8_t x239 = 2U;
	int8_t x240 = INT8_MIN;
	uint64_t t49 = 1LLU;

	t49 = (x237+((x238^x239)-x240));

	if (t49 != 16381161602601LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x241 = INT16_MIN;
	uint32_t x243 = UINT32_MAX;
	uint32_t x244 = UINT32_MAX;
	int64_t t50 = -15789757LL;

	t50 = (x241+((x242^x243)-x244));

	if (t50 != 18879383407177614LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = 5;
	static int8_t x250 = 1;
	uint8_t x251 = UINT8_MAX;
	int32_t t51 = -14815276;

	t51 = (x249+((x250^x251)-x252));

	if (t51 != 132) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x253 = UINT16_MAX;
	int16_t x254 = -31;
	int32_t x255 = -3177;
	uint16_t x256 = UINT16_MAX;
	static volatile int32_t t52 = -6;

	t52 = (x253+((x254^x255)-x256));

	if (t52 != 3190) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x257 = INT16_MIN;
	volatile uint32_t x258 = 0U;
	int8_t x259 = -1;
	int64_t x260 = 175227250875146446LL;
	volatile int64_t t53 = 10261LL;

	t53 = (x257+((x258^x259)-x260));

	if (t53 != -175227246580211919LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x261 = 3;
	uint32_t x262 = UINT32_MAX;
	static int8_t x263 = 0;
	static volatile int16_t x264 = 6;
	uint32_t t54 = 5549433U;

	t54 = (x261+((x262^x263)-x264));

	if (t54 != 4294967292U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = -1;
	int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MAX;
	static int32_t x268 = 288;
	int64_t t55 = 3847733952384LL;

	t55 = (x265+((x266^x267)-x268));

	if (t55 != -9223372036854743330LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x269 = INT8_MIN;
	static int32_t x270 = INT32_MIN;
	int64_t x271 = -162LL;
	uint64_t x272 = 215LLU;
	uint64_t t56 = 484017LLU;

	t56 = (x269+((x270^x271)-x272));

	if (t56 != 2147483143LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x274 = INT16_MAX;
	volatile uint16_t x275 = 9U;
	static int8_t x276 = -1;

	t57 = (x273+((x274^x275)-x276));

	if (t57 != 32754) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = 200837810;
	static uint64_t x278 = 909658756608813464LLU;
	int16_t x279 = INT16_MAX;
	volatile uint64_t t58 = 3243750857971996LLU;

	t58 = (x277+((x278^x279)-x280));

	if (t58 != 909658756809629978LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x281 = -1;
	int32_t x282 = -14584;
	int32_t x283 = INT32_MIN;
	static int16_t x284 = -1;
	volatile int32_t t59 = 127838066;

	t59 = (x281+((x282^x283)-x284));

	if (t59 != 2147469064) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x285 = 1U;
	uint64_t x286 = 8584184176LLU;
	int32_t x288 = INT32_MIN;

	t60 = (x285+((x286^x287)-x288));

	if (t60 != 18446744069408833905LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x289 = 74U;
	int32_t x290 = INT32_MAX;
	int64_t x291 = INT64_MAX;
	uint16_t x292 = 1490U;
	volatile int64_t t61 = 89043103606LL;

	t61 = (x289+((x290^x291)-x292));

	if (t61 != 9223372034707290744LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = 1329578U;
	uint32_t t62 = 51521245U;

	t62 = (x293+((x294^x295)-x296));

	if (t62 != 4293637717U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x297 = 13;
	int64_t x299 = -2190207182963582097LL;
	int8_t x300 = -2;
	uint64_t t63 = 9777LLU;

	t63 = (x297+((x298^x299)-x300));

	if (t63 != 2190207182963582111LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = -63;
	uint8_t x302 = UINT8_MAX;
	uint16_t x303 = UINT16_MAX;
	volatile int32_t t64 = 3231615;

	t64 = (x301+((x302^x303)-x304));

	if (t64 != 65217) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x306 = 2200778275721013591LL;
	static uint16_t x307 = 268U;
	static int32_t x308 = -2327017;
	volatile int64_t t65 = 12LL;

	t65 = (x305+((x306^x307)-x308));

	if (t65 != 2200778275723307588LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x309 = -1LL;
	int32_t x310 = -1;
	volatile int32_t x311 = 473;
	int32_t x312 = INT32_MIN;
	volatile int64_t t66 = 1481538044626348LL;

	t66 = (x309+((x310^x311)-x312));

	if (t66 != 2147483173LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = -3992408383179LL;
	int16_t x319 = INT16_MIN;
	static int32_t x320 = 161395661;
	int64_t t67 = -3593525862LL;

	t67 = (x317+((x318^x319)-x320));

	if (t67 != -9223368044607804056LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = -1;
	uint16_t x322 = 27U;
	static int32_t x323 = INT32_MIN;
	int32_t t68 = -3055;

	t68 = (x321+((x322^x323)-x324));

	if (t68 != -2147483615) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x325 = 5444347U;
	uint8_t x326 = 6U;
	volatile int8_t x328 = -18;
	volatile uint64_t t69 = 1865976LLU;

	t69 = (x325+((x326^x327)-x328));

	if (t69 != 5459859LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x329 = 180260006U;
	static int8_t x330 = -1;
	uint32_t x331 = 10U;
	int16_t x332 = INT16_MIN;

	t70 = (x329+((x330^x331)-x332));

	if (t70 != 180292763U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x333 = INT8_MIN;
	int8_t x334 = INT8_MIN;
	uint32_t x335 = 30920237U;

	t71 = (x333+((x334^x335)-x336));

	if (t71 != 4264047021U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	int64_t x340 = INT64_MIN;
	int64_t t72 = 966444612950316884LL;

	t72 = (x337+((x338^x339)-x340));

	if (t72 != 9223372036854743044LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x341 = 193U;
	volatile int16_t x342 = 181;
	uint16_t x343 = 1U;
	int16_t x344 = -1;
	volatile int32_t t73 = -159;

	t73 = (x341+((x342^x343)-x344));

	if (t73 != 374) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = INT8_MAX;
	volatile uint16_t x346 = 25258U;
	static volatile int32_t x348 = 0;

	t74 = (x345+((x346^x347)-x348));

	if (t74 != -9223372036854750423LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x353 = -61867;
	volatile uint32_t x355 = 3376U;
	int8_t x356 = -1;
	volatile uint32_t t75 = 13730U;

	t75 = (x353+((x354^x355)-x356));

	if (t75 != 581864075U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x358 = -1;
	int64_t x359 = INT64_MIN;
	volatile uint64_t x360 = 45LLU;

	t76 = (x357+((x358^x359)-x360));

	if (t76 != 9223372036854463191LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x362 = 3U;
	uint8_t x364 = UINT8_MAX;
	static volatile uint32_t t77 = 7U;

	t77 = (x361+((x362^x363)-x364));

	if (t77 != 4294967046U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x366 = 0U;
	volatile int32_t t78 = -23728;

	t78 = (x365+((x366^x367)-x368));

	if (t78 != 2147483392) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x373 = -12;
	int16_t x375 = 14;

	t79 = (x373+((x374^x375)-x376));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MIN;
	uint64_t x379 = UINT64_MAX;
	uint64_t t80 = 2980523121715117LLU;

	t80 = (x377+((x378^x379)-x380));

	if (t80 != 9223372039002259586LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x381 = INT64_MAX;
	volatile int8_t x384 = INT8_MAX;
	static int64_t t81 = 568495LL;

	t81 = (x381+((x382^x383)-x384));

	if (t81 != 9223372036854775570LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x385 = 542437423382013042LLU;
	volatile int64_t x386 = INT64_MIN;
	int64_t x387 = -949807203683LL;
	volatile int64_t x388 = 2148093148405408603LL;
	volatile uint64_t t82 = 655904544316021LLU;

	t82 = (x385+((x386^x387)-x388));

	if (t82 != 7617715362024176564LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x389 = -1;
	volatile int8_t x390 = -13;
	int8_t x392 = INT8_MAX;
	volatile int64_t t83 = 3951977018846185LL;

	t83 = (x389+((x390^x391)-x392));

	if (t83 != 68850464900208506LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x397 = -53064401903990619LL;
	int32_t x398 = INT32_MAX;
	static int32_t x399 = INT32_MIN;
	volatile int32_t x400 = 118723;
	static int64_t t84 = 34302LL;

	t84 = (x397+((x398^x399)-x400));

	if (t84 != -53064401904109343LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x405 = UINT64_MAX;
	uint16_t x408 = 30U;
	uint64_t t85 = 8516021568789989LLU;

	t85 = (x405+((x406^x407)-x408));

	if (t85 != 32609LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = UINT8_MAX;
	uint32_t x412 = UINT32_MAX;

	t86 = (x409+((x410^x411)-x412));

	if (t86 != 2147451136U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x413 = 55266986708301LLU;
	uint16_t x414 = UINT16_MAX;
	int32_t x415 = 112;
	int32_t x416 = 0;
	uint64_t t87 = 8LLU;

	t87 = (x413+((x414^x415)-x416));

	if (t87 != 55266986773724LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x421 = -1;
	static int8_t x422 = INT8_MAX;
	static uint64_t x423 = 6300784480955LLU;
	volatile int8_t x424 = -1;

	t88 = (x421+((x422^x423)-x424));

	if (t88 != 6300784480964LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x425 = 2;
	int64_t x427 = 12365069955986116LL;
	int16_t x428 = 1;

	t89 = (x425+((x426^x427)-x428));

	if (t89 != -12365069955986107LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x429 = INT8_MIN;
	int32_t x430 = INT32_MAX;
	int64_t x431 = INT64_MIN;

	t90 = (x429+((x430^x431)-x432));

	if (t90 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x433 = -1;
	int8_t x434 = -48;
	volatile int64_t x435 = INT64_MIN;
	uint32_t x436 = 3841U;

	t91 = (x433+((x434^x435)-x436));

	if (t91 != 9223372036854771918LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x437 = INT32_MIN;

	t92 = (x437+((x438^x439)-x440));

	if (t92 != 2142849010U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = 1;
	uint8_t x442 = UINT8_MAX;
	int64_t x443 = 16690LL;
	volatile uint32_t x444 = 287619U;
	volatile int64_t t93 = 6957229440LL;

	t93 = (x441+((x442^x443)-x444));

	if (t93 != -270773LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x449 = 206965LLU;
	int16_t x450 = -936;
	uint64_t t94 = 98096884651005LLU;

	t94 = (x449+((x450^x451)-x452));

	if (t94 != 18446744073686146671LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x453 = INT8_MIN;
	int64_t x454 = -24572406929652112LL;
	int8_t x455 = INT8_MAX;
	uint8_t x456 = 10U;
	static int64_t t95 = 51868338520LL;

	t95 = (x453+((x454^x455)-x456));

	if (t95 != -24572406929652347LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x457 = -1;
	int64_t x459 = INT64_MIN;
	int8_t x460 = INT8_MAX;
	volatile int64_t t96 = -53443053836407037LL;

	t96 = (x457+((x458^x459)-x460));

	if (t96 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x463 = UINT64_MAX;
	static uint64_t x464 = UINT64_MAX;
	static volatile uint64_t t97 = 531769576LLU;

	t97 = (x461+((x462^x463)-x464));

	if (t97 != 65408LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x465 = INT16_MIN;
	uint64_t x466 = UINT64_MAX;
	uint8_t x467 = 0U;
	static int8_t x468 = INT8_MIN;
	volatile uint64_t t98 = 27735738LLU;

	t98 = (x465+((x466^x467)-x468));

	if (t98 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = -1;
	int32_t x475 = -128076;
	static int16_t x476 = INT16_MIN;
	volatile int32_t t99 = 670459406;

	t99 = (x473+((x474^x475)-x476));

	if (t99 != -95414) { NG(); } else { ; }
	
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

