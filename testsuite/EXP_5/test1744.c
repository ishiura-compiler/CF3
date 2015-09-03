#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int8_t x4 = 2;
volatile uint16_t x5 = UINT16_MAX;
uint16_t x15 = UINT16_MAX;
static uint64_t x17 = 13LLU;
int16_t x18 = 126;
volatile uint64_t x24 = UINT64_MAX;
static int32_t x26 = INT32_MIN;
volatile uint32_t t5 = 621336U;
int64_t x49 = INT64_MIN;
static volatile int64_t t10 = INT64_MIN;
int32_t x66 = INT32_MAX;
int16_t x77 = INT16_MIN;
int64_t x80 = INT64_MIN;
int64_t x81 = INT64_MIN;
static uint64_t x82 = 7105LLU;
int64_t x83 = INT64_MIN;
uint64_t x85 = 17945620994890201LLU;
static int64_t x94 = -1LL;
uint32_t x100 = 2672264U;
uint16_t x102 = 1U;
int16_t x106 = INT16_MIN;
int8_t x107 = INT8_MIN;
int64_t t24 = -262964999106756LL;
uint16_t x109 = 14538U;
uint8_t x111 = UINT8_MAX;
uint32_t x112 = 1279784095U;
uint64_t x118 = 105824862279551LLU;
int64_t x126 = INT64_MIN;
int32_t x128 = INT32_MIN;
static volatile int64_t t30 = 28768101159865606LL;
static volatile int32_t x137 = 7;
uint32_t x140 = 26155637U;
volatile int64_t t32 = -111LL;
int32_t t33 = 2259942;
volatile int64_t x156 = -574234667772558395LL;
uint64_t x166 = 16174LLU;
static uint8_t x168 = UINT8_MAX;
int64_t x172 = 39944674773LL;
static volatile int64_t t40 = -6081LL;
uint32_t x176 = 53U;
int8_t x177 = INT8_MIN;
static uint32_t x179 = 6204U;
volatile int8_t x183 = -1;
volatile int8_t x184 = 5;
volatile int16_t x196 = 4024;
volatile uint64_t x198 = 487121LLU;
uint32_t x199 = 1375797U;
volatile uint64_t t47 = 552953LLU;
uint8_t x201 = UINT8_MAX;
volatile int8_t x209 = INT8_MIN;
int8_t x211 = -56;
int16_t x216 = -1;
int32_t x221 = INT32_MIN;
int64_t t52 = 624950726252322568LL;
static volatile uint16_t x225 = UINT16_MAX;
int16_t x247 = -4308;
volatile uint32_t t57 = 451411U;
uint8_t x250 = UINT8_MAX;
uint32_t x252 = UINT32_MAX;
volatile int64_t t58 = INT64_MAX;
uint16_t x254 = 9014U;
uint8_t x260 = 2U;
static volatile int32_t x262 = -2;
uint32_t x264 = 1151U;
volatile int16_t x273 = INT16_MIN;
volatile uint32_t t64 = 3U;
uint64_t x280 = UINT64_MAX;
uint64_t t65 = 142668196028LLU;
int8_t x287 = -1;
static int64_t x289 = INT64_MIN;
volatile uint16_t x293 = 281U;
static uint16_t x294 = UINT16_MAX;
uint16_t x305 = 5479U;
volatile int64_t t74 = 19037LL;
int32_t x322 = 313063101;
int64_t t76 = -307LL;
int8_t x329 = INT8_MIN;
volatile uint16_t x343 = UINT16_MAX;
int16_t x344 = INT16_MAX;
static volatile int64_t t81 = -11294757774LL;
int64_t t82 = -127315867406834LL;
int8_t x352 = 2;
int16_t x359 = 0;
uint8_t x360 = 46U;
uint8_t x361 = UINT8_MAX;
int32_t x362 = 1;
static int16_t x363 = INT16_MAX;
int32_t x368 = -1;
volatile int64_t t88 = -81961503120240728LL;
volatile uint32_t t89 = 113U;
static int16_t x377 = INT16_MIN;
int16_t x379 = 504;
uint32_t x382 = 4038826U;
int64_t x384 = INT64_MIN;
uint64_t x396 = UINT64_MAX;
volatile int64_t x398 = -69460LL;
static int8_t x399 = -1;
volatile int32_t x401 = INT32_MIN;
volatile uint64_t t96 = 9LLU;
int16_t x419 = INT16_MAX;
uint32_t t99 = 4844641U;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x3 = INT16_MAX;
	int32_t t0 = -117;

	t0 = (x1-((x2&x3)%x4));

	if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x6 = 1980U;
	int16_t x7 = INT16_MIN;
	static int8_t x8 = 3;
	volatile int32_t t1 = -1;

	t1 = (x5-((x6&x7)%x8));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	static int8_t x14 = INT8_MAX;
	uint8_t x16 = 88U;
	int32_t t2 = -1689;

	t2 = (x13-((x14&x15)%x16));

	if (t2 != 88) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x19 = INT32_MIN;
	static int16_t x20 = 2;
	static volatile uint64_t t3 = 1619LLU;

	t3 = (x17-((x18&x19)%x20));

	if (t3 != 13LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = -2;
	uint64_t x23 = 972889LLU;
	volatile uint64_t t4 = 1543657884726551LLU;

	t4 = (x21-((x22&x23)%x24));

	if (t4 != 9223372036853802920LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 5698;
	uint32_t x27 = 317134U;
	int16_t x28 = -1;

	t5 = (x25-((x26&x27)%x28));

	if (t5 != 5698U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	volatile uint8_t x30 = 22U;
	int16_t x31 = -2719;
	volatile int16_t x32 = -19;
	volatile int32_t t6 = INT32_MIN;

	t6 = (x29-((x30&x31)%x32));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	uint8_t x38 = 0U;
	static volatile int16_t x39 = 3;
	volatile int16_t x40 = -1;
	volatile int32_t t7 = -59179;

	t7 = (x37-((x38&x39)%x40));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x41 = 135;
	volatile int8_t x42 = -32;
	uint8_t x43 = 3U;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t8 = -40192;

	t8 = (x41-((x42&x43)%x44));

	if (t8 != 135) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1LL;
	uint64_t x46 = 256325810232361LLU;
	static int16_t x47 = -1;
	int8_t x48 = INT8_MAX;
	volatile uint64_t t9 = 1991434616495974763LLU;

	t9 = (x45-((x46&x47)%x48));

	if (t9 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x50 = 67575021542LL;
	int16_t x51 = 1;
	uint16_t x52 = 86U;

	t10 = (x49-((x50&x51)%x52));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MIN;
	volatile int8_t x55 = -1;
	static int16_t x56 = -2;
	static volatile int64_t t11 = -28LL;

	t11 = (x53-((x54&x55)%x56));

	if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 34U;
	static int32_t x58 = -85172;
	uint32_t x59 = UINT32_MAX;
	static int32_t x60 = INT32_MAX;
	static uint32_t t12 = 124449U;

	t12 = (x57-((x58&x59)%x60));

	if (t12 != 2147568853U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -155566425839LL;
	int8_t x62 = INT8_MIN;
	static int32_t x63 = INT32_MIN;
	volatile int16_t x64 = 234;
	int64_t t13 = 56351LL;

	t13 = (x61-((x62&x63)%x64));

	if (t13 != -155566425711LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = INT32_MIN;
	int64_t x67 = INT64_MAX;
	int16_t x68 = 5;
	volatile int64_t t14 = -522093401976452186LL;

	t14 = (x65-((x66&x67)%x68));

	if (t14 != -2147483650LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	volatile int16_t x70 = INT16_MAX;
	int8_t x71 = -33;
	int64_t x72 = -2465721828388LL;
	int64_t t15 = -49544878059543LL;

	t15 = (x69-((x70&x71)%x72));

	if (t15 != -2147516383LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x73 = UINT16_MAX;
	volatile int64_t x74 = 35051LL;
	int16_t x75 = INT16_MIN;
	uint32_t x76 = 4913300U;
	int64_t t16 = -244LL;

	t16 = (x73-((x74&x75)%x76));

	if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = INT8_MAX;
	static uint16_t x79 = 7455U;
	static int64_t t17 = 6350197LL;

	t17 = (x77-((x78&x79)%x80));

	if (t17 != -32799LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x84 = -1;
	volatile uint64_t t18 = 46010338270772LLU;

	t18 = (x81-((x82&x83)%x84));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = -1;
	static uint8_t x87 = 0U;
	int32_t x88 = -110;
	static volatile uint64_t t19 = 373LLU;

	t19 = (x85-((x86&x87)%x88));

	if (t19 != 17945620994890201LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x89 = 158153082972262LLU;
	uint8_t x90 = UINT8_MAX;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = 739;
	uint64_t t20 = 4852166LLU;

	t20 = (x89-((x90&x91)%x92));

	if (t20 != 158153082972007LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 1LLU;
	int8_t x95 = INT8_MIN;
	volatile uint64_t x96 = 5813840LLU;
	uint64_t t21 = 302037581LLU;

	t21 = (x93-((x94&x95)%x96));

	if (t21 != 18446744073707006449LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	static int8_t x98 = 4;
	static uint32_t x99 = 546U;
	uint32_t t22 = 245631U;

	t22 = (x97-((x98&x99)%x100));

	if (t22 != 255U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x101 = INT16_MIN;
	int8_t x103 = INT8_MAX;
	uint8_t x104 = UINT8_MAX;
	int32_t t23 = 0;

	t23 = (x101-((x102&x103)%x104));

	if (t23 != -32769) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -1LL;
	int8_t x108 = 4;

	t24 = (x105-((x106&x107)%x108));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x110 = 723U;
	uint32_t t25 = 417663U;

	t25 = (x109-((x110&x111)%x112));

	if (t25 != 14327U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x113 = 406482U;
	int8_t x114 = -1;
	int16_t x115 = -1;
	int64_t x116 = 1669LL;
	int64_t t26 = 1372645467123207213LL;

	t26 = (x113-((x114&x115)%x116));

	if (t26 != 406483LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x117 = 9U;
	uint64_t x119 = 7961327387864423369LLU;
	uint64_t x120 = UINT64_MAX;
	static uint64_t t27 = 261093473LLU;

	t27 = (x117-((x118&x119)%x120));

	if (t27 != 18446673618997669056LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = -23;
	int16_t x123 = INT16_MIN;
	int8_t x124 = -2;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x121-((x122&x123)%x124));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -46;
	uint64_t x127 = 2530LLU;
	uint64_t t29 = 335527019986688LLU;

	t29 = (x125-((x126&x127)%x128));

	if (t29 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -5285884LL;
	int16_t x130 = -99;
	int16_t x131 = INT16_MAX;
	volatile int8_t x132 = -1;

	t30 = (x129-((x130&x131)%x132));

	if (t30 != -5285884LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = UINT8_MAX;
	uint16_t x134 = 1292U;
	int16_t x135 = INT16_MIN;
	volatile int64_t x136 = INT64_MAX;
	int64_t t31 = 1648434710799930LL;

	t31 = (x133-((x134&x135)%x136));

	if (t31 != 255LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x138 = 4U;
	static int64_t x139 = -1476133249664LL;

	t32 = (x137-((x138&x139)%x140));

	if (t32 != 7LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x141 = 7304U;
	int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MIN;

	t33 = (x141-((x142&x143)%x144));

	if (t33 != 7304) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = 0;
	static int8_t x146 = INT8_MAX;
	int16_t x147 = 2;
	int64_t x148 = INT64_MIN;
	static int64_t t34 = -905391LL;

	t34 = (x145-((x146&x147)%x148));

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MAX;
	int8_t x150 = INT8_MAX;
	uint16_t x151 = 7792U;
	static volatile int8_t x152 = 1;
	volatile int32_t t35 = 6;

	t35 = (x149-((x150&x151)%x152));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x153 = 62634U;
	volatile uint8_t x154 = UINT8_MAX;
	int16_t x155 = INT16_MAX;
	static volatile int64_t t36 = -67623386161490LL;

	t36 = (x153-((x154&x155)%x156));

	if (t36 != 62379LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MIN;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = INT64_MIN;
	volatile int64_t t37 = 53LL;

	t37 = (x157-((x158&x159)%x160));

	if (t37 != -2147516416LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x161 = 291U;
	int16_t x162 = 300;
	static volatile int64_t x163 = 108989424331450000LL;
	int16_t x164 = INT16_MIN;
	int64_t t38 = -8463335LL;

	t38 = (x161-((x162&x163)%x164));

	if (t38 != 291LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -1LL;
	uint64_t x167 = 75456785217262826LLU;
	volatile uint64_t t39 = 51761130364LLU;

	t39 = (x165-((x166&x167)%x168));

	if (t39 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x169 = UINT16_MAX;
	int16_t x170 = -55;
	static int32_t x171 = INT32_MAX;

	t40 = (x169-((x170&x171)%x172));

	if (t40 != -2147418058LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = UINT16_MAX;
	volatile uint32_t x174 = UINT32_MAX;
	uint16_t x175 = UINT16_MAX;
	uint32_t t41 = 346331007U;

	t41 = (x173-((x174&x175)%x176));

	if (t41 != 65508U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = 407;
	volatile int32_t x180 = INT32_MIN;
	volatile uint32_t t42 = 18502U;

	t42 = (x177-((x178&x179)%x180));

	if (t42 != 4294967148U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x181 = -1LL;
	uint32_t x182 = UINT32_MAX;
	int64_t t43 = 706446808176036LL;

	t43 = (x181-((x182&x183)%x184));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x185 = INT16_MIN;
	int64_t x186 = -127LL;
	int16_t x187 = INT16_MIN;
	int64_t x188 = -1LL;
	volatile int64_t t44 = -30074750LL;

	t44 = (x185-((x186&x187)%x188));

	if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 487789LLU;
	int64_t x190 = INT64_MAX;
	volatile int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MAX;
	volatile uint64_t t45 = 220LLU;

	t45 = (x189-((x190&x191)%x192));

	if (t45 != 487789LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x193 = INT64_MIN;
	volatile uint32_t x194 = UINT32_MAX;
	uint64_t x195 = UINT64_MAX;
	uint64_t t46 = 6LLU;

	t46 = (x193-((x194&x195)%x196));

	if (t46 != 9223372036854772601LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x197 = 2;
	int16_t x200 = -1;

	t47 = (x197-((x198&x199)%x200));

	if (t47 != 18446744073709261297LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x202 = 33;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = INT32_MAX;
	volatile uint32_t t48 = 28U;

	t48 = (x201-((x202&x203)%x204));

	if (t48 != 222U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = 15;
	volatile int16_t x206 = 1488;
	static uint32_t x207 = 6175U;
	int16_t x208 = 1;
	uint32_t t49 = 16686362U;

	t49 = (x205-((x206&x207)%x208));

	if (t49 != 15U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x210 = UINT64_MAX;
	int8_t x212 = -24;
	static volatile uint64_t t50 = 4LLU;

	t50 = (x209-((x210&x211)%x212));

	if (t50 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = -116258522;
	static int8_t x214 = INT8_MIN;
	volatile int64_t x215 = INT64_MAX;
	static volatile int64_t t51 = 1580461579057LL;

	t51 = (x213-((x214&x215)%x216));

	if (t51 != -116258522LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x222 = -26;
	static int8_t x223 = 59;
	static volatile int64_t x224 = INT64_MAX;

	t52 = (x221-((x222&x223)%x224));

	if (t52 != -2147483682LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x226 = 0U;
	static volatile int8_t x227 = INT8_MAX;
	int8_t x228 = INT8_MIN;
	int32_t t53 = 338828230;

	t53 = (x225-((x226&x227)%x228));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x234 = INT64_MIN;
	static volatile int32_t x235 = -1;
	int32_t x236 = 105765;
	volatile int64_t t54 = 6640332LL;

	t54 = (x233-((x234&x235)%x236));

	if (t54 != 137648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -29124026290LL;
	int8_t x238 = -1;
	uint32_t x239 = 13594U;
	int32_t x240 = 24142073;
	static volatile int64_t t55 = 126LL;

	t55 = (x237-((x238&x239)%x240));

	if (t55 != -29124039884LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = UINT32_MAX;
	volatile int64_t x242 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	uint8_t x244 = UINT8_MAX;
	int64_t t56 = 81677318374908222LL;

	t56 = (x241-((x242&x243)%x244));

	if (t56 != 4294967423LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 54U;
	int16_t x246 = -1636;
	volatile uint32_t x248 = 42U;

	t57 = (x245-((x246&x247)%x248));

	if (t57 != 46U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MAX;
	static int8_t x251 = 0;

	t58 = (x249-((x250&x251)%x252));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -28;
	volatile int64_t x255 = -3LL;
	uint8_t x256 = 99U;
	volatile int64_t t59 = -5993547322754LL;

	t59 = (x253-((x254&x255)%x256));

	if (t59 != -31LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x257 = INT16_MAX;
	static int32_t x258 = INT32_MAX;
	int16_t x259 = -14;
	int32_t t60 = -21;

	t60 = (x257-((x258&x259)%x260));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = 4;
	int8_t x263 = -31;
	volatile uint32_t t61 = 0U;

	t61 = (x261-((x262&x263)%x264));

	if (t61 != 4294966895U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = -42;
	int32_t x266 = 424916;
	volatile uint8_t x267 = UINT8_MAX;
	uint64_t x268 = 230268LLU;
	uint64_t t62 = 168264144478420229LLU;

	t62 = (x265-((x266&x267)%x268));

	if (t62 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MAX;
	static volatile int16_t x270 = -1;
	uint8_t x271 = 7U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t63 = 1;

	t63 = (x269-((x270&x271)%x272));

	if (t63 != 2147483640) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x274 = 404881500U;
	volatile uint8_t x275 = UINT8_MAX;
	int16_t x276 = INT16_MIN;

	t64 = (x273-((x274&x275)%x276));

	if (t64 != 4294934436U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = -1LL;
	uint8_t x279 = UINT8_MAX;

	t65 = (x277-((x278&x279)%x280));

	if (t65 != 18446744073709518593LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = 2140;
	volatile uint8_t x282 = 94U;
	int64_t x283 = INT64_MAX;
	int64_t x284 = -17202167186819LL;
	volatile int64_t t66 = 5LL;

	t66 = (x281-((x282&x283)%x284));

	if (t66 != 2046LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x285 = -1LL;
	int8_t x286 = -1;
	int64_t x288 = INT64_MIN;
	volatile int64_t t67 = -140252LL;

	t67 = (x285-((x286&x287)%x288));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x290 = INT64_MAX;
	int64_t x291 = INT64_MIN;
	static int16_t x292 = INT16_MIN;
	int64_t t68 = INT64_MIN;

	t68 = (x289-((x290&x291)%x292));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x295 = 115U;
	volatile uint32_t x296 = 48U;
	uint32_t t69 = 57882822U;

	t69 = (x293-((x294&x295)%x296));

	if (t69 != 262U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x297 = -377LL;
	int16_t x298 = -126;
	uint64_t x299 = 2442568121833216LLU;
	static int16_t x300 = -1;
	static uint64_t t70 = 5236462LLU;

	t70 = (x297-((x298&x299)%x300));

	if (t70 != 18444301505587718023LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = -1;
	uint16_t x303 = 1077U;
	int16_t x304 = -3;
	int32_t t71 = 22;

	t71 = (x301-((x302&x303)%x304));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x306 = -1;
	int8_t x307 = -1;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t72 = 91674700231516645LLU;

	t72 = (x305-((x306&x307)%x308));

	if (t72 != 5479LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MAX;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = INT16_MIN;
	int16_t x312 = 144;
	uint32_t t73 = 1976664982U;

	t73 = (x309-((x310&x311)%x312));

	if (t73 != 32735U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x313 = 15439679357752941LL;
	int8_t x314 = 9;
	volatile uint16_t x315 = 9490U;
	int32_t x316 = -1;

	t74 = (x313-((x314&x315)%x316));

	if (t74 != 15439679357752941LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = INT32_MAX;
	int64_t x318 = INT64_MIN;
	int8_t x319 = INT8_MIN;
	uint64_t x320 = 11LLU;
	uint64_t t75 = 14LLU;

	t75 = (x317-((x318&x319)%x320));

	if (t75 != 2147483639LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = 9U;
	int64_t x323 = INT64_MAX;
	int32_t x324 = INT32_MIN;

	t76 = (x321-((x322&x323)%x324));

	if (t76 != -313063092LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = -117976907LL;
	static int8_t x326 = INT8_MIN;
	static volatile int16_t x327 = INT16_MIN;
	uint32_t x328 = 38U;
	int64_t t77 = 33LL;

	t77 = (x325-((x326&x327)%x328));

	if (t77 != -117976939LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x330 = INT64_MIN;
	int8_t x331 = -1;
	volatile int64_t x332 = INT64_MIN;
	static volatile int64_t t78 = 100292245402LL;

	t78 = (x329-((x330&x331)%x332));

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MAX;
	int32_t x336 = INT32_MIN;
	uint64_t t79 = UINT64_MAX;

	t79 = (x333-((x334&x335)%x336));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = -1;
	volatile uint32_t x339 = 4U;
	uint16_t x340 = 176U;
	static volatile uint32_t t80 = 1494U;

	t80 = (x337-((x338&x339)%x340));

	if (t80 != 2147483643U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x341 = 14;
	int64_t x342 = -1LL;

	t81 = (x341-((x342&x343)%x344));

	if (t81 != 13LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = -1LL;
	int8_t x346 = INT8_MAX;
	volatile int16_t x347 = 3;
	volatile int64_t x348 = INT64_MAX;

	t82 = (x345-((x346&x347)%x348));

	if (t82 != -4LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = -79;
	uint64_t x350 = UINT64_MAX;
	static int32_t x351 = -1;
	uint64_t t83 = 406153361787213LLU;

	t83 = (x349-((x350&x351)%x352));

	if (t83 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = 35;
	uint64_t x354 = 1994398844LLU;
	volatile uint16_t x355 = 3726U;
	uint16_t x356 = 2U;
	static volatile uint64_t t84 = 28406843042688655LLU;

	t84 = (x353-((x354&x355)%x356));

	if (t84 != 35LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = INT16_MAX;
	volatile int64_t x358 = INT64_MAX;
	volatile int64_t t85 = -538767678348625LL;

	t85 = (x357-((x358&x359)%x360));

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x364 = INT8_MIN;
	volatile int32_t t86 = -714;

	t86 = (x361-((x362&x363)%x364));

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = -4;
	uint32_t x366 = 125157136U;
	static int32_t x367 = 111437;
	volatile uint32_t t87 = 9399U;

	t87 = (x365-((x366&x367)%x368));

	if (t87 != 4294855932U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = 18;
	int64_t x370 = INT64_MAX;
	volatile int8_t x371 = -29;
	int8_t x372 = -2;

	t88 = (x369-((x370&x371)%x372));

	if (t88 != 17LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 6U;
	uint32_t x374 = 17U;
	int16_t x375 = 0;
	volatile uint8_t x376 = 44U;

	t89 = (x373-((x374&x375)%x376));

	if (t89 != 6U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x378 = INT16_MIN;
	static uint8_t x380 = 14U;
	int32_t t90 = 14934;

	t90 = (x377-((x378&x379)%x380));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x381 = -109LL;
	int64_t x383 = 34069061562218042LL;
	volatile int64_t t91 = -108LL;

	t91 = (x381-((x382&x383)%x384));

	if (t91 != -4006039LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	volatile int16_t x386 = -1;
	static int16_t x387 = INT16_MIN;
	static uint8_t x388 = 39U;
	int32_t t92 = 1305972;

	t92 = (x385-((x386&x387)%x388));

	if (t92 != -120) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x389 = 5920192521755803LLU;
	int64_t x390 = 59252273617738LL;
	int64_t x391 = INT64_MIN;
	static uint16_t x392 = 10U;
	volatile uint64_t t93 = 533933404759533417LLU;

	t93 = (x389-((x390&x391)%x392));

	if (t93 != 5920192521755803LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x393 = -5LL;
	int64_t x394 = 10840772LL;
	int16_t x395 = -1;
	volatile uint64_t t94 = 53467LLU;

	t94 = (x393-((x394&x395)%x396));

	if (t94 != 18446744073698710839LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x397 = -1;
	volatile int8_t x400 = -2;
	volatile int64_t t95 = 1804135LL;

	t95 = (x397-((x398&x399)%x400));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x402 = -4323;
	uint64_t x403 = UINT64_MAX;
	static uint64_t x404 = 139170LLU;

	t96 = (x401-((x402&x403)%x404));

	if (t96 != 18446744071561999915LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x410 = INT8_MIN;
	volatile int16_t x411 = INT16_MIN;
	uint8_t x412 = UINT8_MAX;
	uint64_t t97 = 8542812LLU;

	t97 = (x409-((x410&x411)%x412));

	if (t97 != 127LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x413 = INT16_MIN;
	static volatile uint32_t x414 = 7U;
	static volatile int16_t x415 = INT16_MIN;
	static int32_t x416 = INT32_MAX;
	volatile uint32_t t98 = 94321503U;

	t98 = (x413-((x414&x415)%x416));

	if (t98 != 4294934528U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x417 = 19U;
	uint32_t x418 = 3169U;
	uint32_t x420 = 665U;

	t99 = (x417-((x418&x419)%x420));

	if (t99 != 4294966806U) { NG(); } else { ; }
	
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

