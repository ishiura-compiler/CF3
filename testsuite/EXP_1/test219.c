#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int8_t x2 = INT8_MIN;
int16_t x7 = INT16_MAX;
int32_t x20 = -1;
static volatile int16_t x23 = INT16_MAX;
int32_t x39 = INT32_MIN;
uint8_t x40 = 4U;
int16_t x51 = -1;
volatile int16_t x55 = INT16_MIN;
volatile int32_t x56 = INT32_MIN;
volatile int8_t x57 = 3;
static uint16_t x60 = UINT16_MAX;
int8_t x61 = INT8_MIN;
int32_t x63 = INT32_MAX;
volatile int64_t t13 = -16167LL;
int8_t x69 = 22;
int64_t x70 = -1LL;
volatile uint8_t x78 = 7U;
static volatile int32_t x91 = -1;
uint64_t x96 = 1903945790787LLU;
static uint64_t t20 = 136616LLU;
int64_t t21 = -41727LL;
uint64_t x113 = 7364657071LLU;
volatile int8_t x116 = -1;
int64_t x119 = -1393855LL;
static int32_t x121 = INT32_MAX;
int32_t t29 = 3084079;
static volatile uint64_t t30 = 1387913922081LLU;
int8_t x141 = INT8_MIN;
volatile int16_t x142 = -1;
uint32_t x143 = 17U;
int32_t x144 = -1;
static volatile int64_t t33 = 1LL;
int32_t x163 = -1623568;
int32_t t34 = 34295;
static uint32_t x184 = UINT32_MAX;
int16_t x186 = INT16_MAX;
int64_t x195 = 1614523LL;
uint64_t x197 = 17467301273673518LLU;
uint64_t t41 = 961223133474900718LLU;
uint64_t x202 = 86LLU;
volatile int64_t t43 = 63648503953LL;
static int64_t x210 = INT64_MIN;
int8_t x211 = INT8_MAX;
static int64_t x224 = INT64_MIN;
uint16_t x228 = UINT16_MAX;
int8_t x229 = -30;
volatile int32_t x232 = -1;
int16_t x233 = INT16_MIN;
int16_t x242 = INT16_MIN;
int16_t x244 = 1434;
uint32_t x251 = UINT32_MAX;
int16_t x252 = INT16_MIN;
uint8_t x253 = 50U;
int8_t x254 = INT8_MIN;
uint16_t x256 = 92U;
volatile uint64_t x257 = 110974LLU;
int32_t x264 = INT32_MIN;
int8_t x269 = INT8_MIN;
int64_t x272 = 1041936704LL;
int32_t x275 = -1;
volatile int8_t x282 = INT8_MIN;
static volatile int64_t t62 = 0LL;
int8_t x292 = INT8_MAX;
uint64_t x295 = 20087421505LLU;
volatile int32_t t65 = 1568013;
volatile int32_t x309 = INT32_MIN;
uint32_t x311 = 1U;
static uint32_t x324 = 135127U;
volatile uint64_t t71 = 14LLU;
uint64_t x329 = UINT64_MAX;
int32_t x334 = INT32_MIN;
static uint64_t t73 = 40050LLU;
uint8_t x344 = 4U;
volatile int64_t t75 = 241743861878LL;
int32_t x348 = -1;
int32_t x353 = -1;
static int64_t t77 = -21LL;
static int16_t x362 = -1;
static uint64_t x363 = UINT64_MAX;
static volatile uint32_t x365 = UINT32_MAX;
volatile uint32_t t80 = 3U;
volatile int32_t x384 = INT32_MIN;
volatile int32_t t83 = -161076836;
uint16_t x385 = UINT16_MAX;
static uint64_t t87 = 31085599LLU;
volatile int32_t x405 = INT32_MIN;
int16_t x406 = -1;
static volatile int64_t t89 = 1484974LL;
volatile uint32_t x413 = 479U;
int16_t x435 = -6;
int16_t x436 = 347;
int32_t x441 = -3;
int64_t x442 = 23699738882525LL;
int16_t x443 = INT16_MIN;
static volatile int64_t x446 = 153168034LL;
volatile int64_t x453 = 54410974643198172LL;
int8_t x467 = INT8_MAX;
int64_t x468 = 1764LL;


void f0(void) {
	volatile int32_t x3 = -1;
	int8_t x4 = 2;
	int32_t t0 = -23504;

	t0 = (((x1-x2)/x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MIN;
	int32_t x8 = -1;
	static volatile uint32_t t1 = 28U;

	t1 = (((x5-x6)/x7)&x8);

	if (t1 != 65538U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 87U;
	static int32_t x14 = 282463744;
	int64_t x15 = INT64_MAX;
	static int16_t x16 = 380;
	volatile int64_t t2 = -4318632021461875LL;

	t2 = (((x13-x14)/x15)&x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	uint8_t x18 = 103U;
	int8_t x19 = INT8_MIN;
	volatile int32_t t3 = -16822;

	t3 = (((x17-x18)/x19)&x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 204019LL;
	uint8_t x22 = 6U;
	static volatile uint32_t x24 = 21U;
	volatile int64_t t4 = -3940333730611LL;

	t4 = (((x21-x22)/x23)&x24);

	if (t4 != 4LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x29 = 0U;
	int8_t x30 = 62;
	volatile int64_t x31 = INT64_MAX;
	uint16_t x32 = 4U;
	static int64_t t5 = 242453200LL;

	t5 = (((x29-x30)/x31)&x32);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x33 = -28;
	volatile int64_t x34 = INT64_MIN;
	static int64_t x35 = -8484391513LL;
	static int8_t x36 = INT8_MAX;
	int64_t t6 = 1086106590961754512LL;

	t6 = (((x33-x34)/x35)&x36);

	if (t6 != 56LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -16;
	volatile int16_t x38 = INT16_MIN;
	volatile int32_t t7 = -2;

	t7 = (((x37-x38)/x39)&x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x41 = 1439098;
	static int64_t x42 = 209671508494365706LL;
	volatile int64_t x43 = INT64_MAX;
	static uint64_t x44 = UINT64_MAX;
	uint64_t t8 = 123826LLU;

	t8 = (((x41-x42)/x43)&x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 137428919526019LLU;
	int8_t x46 = 1;
	int32_t x47 = 16309;
	int16_t x48 = -1;
	uint64_t t9 = 3210435936236927852LLU;

	t9 = (((x45-x46)/x47)&x48);

	if (t9 != 8426569349LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 4361U;
	static uint64_t x50 = UINT64_MAX;
	int32_t x52 = -36;
	uint64_t t10 = 262887887LLU;

	t10 = (((x49-x50)/x51)&x52);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x53 = 4U;
	uint64_t x54 = 3LLU;
	uint64_t t11 = 585283790632927737LLU;

	t11 = (((x53-x54)/x55)&x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x58 = 136183993726LL;
	uint64_t x59 = UINT64_MAX;
	volatile uint64_t t12 = 30203056LLU;

	t12 = (((x57-x58)/x59)&x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x62 = -1LL;
	static uint32_t x64 = 36494U;

	t13 = (((x61-x62)/x63)&x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -1;
	uint32_t x66 = 56126U;
	int64_t x67 = -1LL;
	int8_t x68 = INT8_MIN;
	volatile int64_t t14 = 1367859635591737686LL;

	t14 = (((x65-x66)/x67)&x68);

	if (t14 != -4294911232LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x71 = 2386578LLU;
	int32_t x72 = -1;
	uint64_t t15 = 6719742713LLU;

	t15 = (((x69-x70)/x71)&x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 17;
	uint64_t x79 = 4929771647897948649LLU;
	static uint8_t x80 = 15U;
	static uint64_t t16 = 4123392025LLU;

	t16 = (((x77-x78)/x79)&x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -5;
	static int16_t x82 = INT16_MIN;
	uint64_t x83 = 3680399500101123023LLU;
	int8_t x84 = INT8_MIN;
	volatile uint64_t t17 = 8084333860903820LLU;

	t17 = (((x81-x82)/x83)&x84);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = UINT8_MAX;
	int8_t x86 = -4;
	int8_t x87 = -1;
	int32_t x88 = INT32_MIN;
	int32_t t18 = INT32_MIN;

	t18 = (((x85-x86)/x87)&x88);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = -1;
	volatile int16_t x90 = INT16_MIN;
	int32_t x92 = -1;
	int32_t t19 = -471;

	t19 = (((x89-x90)/x91)&x92);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = -1LL;
	volatile uint16_t x94 = UINT16_MAX;
	int16_t x95 = -2;

	t20 = (((x93-x94)/x95)&x96);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = -27107233183661663LL;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MAX;

	t21 = (((x97-x98)/x99)&x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	static volatile uint64_t x102 = 7921157402134LLU;
	volatile int16_t x103 = INT16_MIN;
	int64_t x104 = INT64_MAX;
	uint64_t t22 = 129LLU;

	t22 = (((x101-x102)/x103)&x104);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = -766;
	int32_t x106 = -2168;
	volatile uint32_t x107 = 499924U;
	int16_t x108 = INT16_MIN;
	static uint32_t t23 = 26784746U;

	t23 = (((x105-x106)/x107)&x108);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x109 = INT64_MAX;
	uint32_t x110 = UINT32_MAX;
	static uint16_t x111 = UINT16_MAX;
	static volatile int64_t x112 = -11193763256LL;
	volatile int64_t t24 = -2704512LL;

	t24 = (((x109-x110)/x111)&x112);

	if (t24 != 140739179461192LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x114 = 2478912487708LL;
	uint8_t x115 = 1U;
	uint64_t t25 = 851343144LLU;

	t25 = (((x113-x114)/x115)&x116);

	if (t25 != 18446741602161720979LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = -4392146128165LL;
	volatile uint16_t x118 = 5288U;
	int64_t x120 = INT64_MIN;
	static int64_t t26 = -2LL;

	t26 = (((x117-x118)/x119)&x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x122 = 0;
	int32_t x123 = INT32_MIN;
	static volatile int32_t x124 = INT32_MIN;
	volatile int32_t t27 = -66;

	t27 = (((x121-x122)/x123)&x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = 40;
	uint8_t x126 = UINT8_MAX;
	uint64_t x127 = 50890351185LLU;
	static uint16_t x128 = 19U;
	volatile uint64_t t28 = 97061LLU;

	t28 = (((x125-x126)/x127)&x128);

	if (t28 != 16LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = INT16_MAX;
	int16_t x130 = -22;
	volatile int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MIN;

	t29 = (((x129-x130)/x131)&x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = UINT64_MAX;
	static int32_t x140 = 775;

	t30 = (((x137-x138)/x139)&x140);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t t31 = 96U;

	t31 = (((x141-x142)/x143)&x144);

	if (t31 != 252645127U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x145 = 2506166603736LLU;
	int64_t x146 = -13659879327LL;
	uint16_t x147 = 362U;
	int64_t x148 = INT64_MAX;
	volatile uint64_t t32 = 6268179894873992706LLU;

	t32 = (((x145-x146)/x147)&x148);

	if (t32 != 6960846638LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x157 = UINT8_MAX;
	int64_t x158 = INT64_MAX;
	volatile int64_t x159 = INT64_MIN;
	uint8_t x160 = 1U;

	t33 = (((x157-x158)/x159)&x160);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x161 = 1;
	uint16_t x162 = UINT16_MAX;
	int8_t x164 = 0;

	t34 = (((x161-x162)/x163)&x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x165 = INT8_MAX;
	volatile int64_t x166 = -1LL;
	uint16_t x167 = 1051U;
	int8_t x168 = 0;
	volatile int64_t t35 = 3290041833192108466LL;

	t35 = (((x165-x166)/x167)&x168);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = 220780135;
	static volatile int32_t x174 = INT32_MAX;
	volatile int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MAX;
	int64_t t36 = -976631407241817310LL;

	t36 = (((x173-x174)/x175)&x176);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MAX;
	volatile int64_t t37 = 1LL;

	t37 = (((x181-x182)/x183)&x184);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = 5176;
	static uint16_t x187 = UINT16_MAX;
	int64_t x188 = -1LL;
	int64_t t38 = 138084448351LL;

	t38 = (((x185-x186)/x187)&x188);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = -1;
	static volatile uint32_t x190 = UINT32_MAX;
	uint32_t x191 = 1643U;
	int32_t x192 = 6;
	volatile uint32_t t39 = 5911U;

	t39 = (((x189-x190)/x191)&x192);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x193 = UINT64_MAX;
	int32_t x194 = -1;
	static volatile int32_t x196 = 21670;
	uint64_t t40 = 858741533074LLU;

	t40 = (((x193-x194)/x195)&x196);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x198 = INT32_MIN;
	uint16_t x199 = 2442U;
	uint64_t x200 = 1LLU;

	t41 = (((x197-x198)/x199)&x200);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = -1;
	int8_t x203 = -1;
	int64_t x204 = INT64_MIN;
	static uint64_t t42 = 12317777530LLU;

	t42 = (((x201-x202)/x203)&x204);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x205 = 2925U;
	int32_t x206 = INT32_MIN;
	static int64_t x207 = -1LL;
	int16_t x208 = 1;

	t43 = (((x205-x206)/x207)&x208);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MIN;
	int64_t x212 = 4029711854768961LL;
	static volatile int64_t t44 = 18884905929LL;

	t44 = (((x209-x210)/x211)&x212);

	if (t44 != 562949955518464LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = -1;
	static int64_t x214 = -1LL;
	int16_t x215 = -1;
	int32_t x216 = INT32_MIN;
	int64_t t45 = 27LL;

	t45 = (((x213-x214)/x215)&x216);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x217 = INT64_MIN;
	int8_t x218 = -1;
	int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MIN;
	int64_t t46 = 528651759342468072LL;

	t46 = (((x217-x218)/x219)&x220);

	if (t46 != 72057594037895168LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x221 = UINT32_MAX;
	int32_t x222 = 30;
	uint8_t x223 = 1U;
	int64_t t47 = 1LL;

	t47 = (((x221-x222)/x223)&x224);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x225 = INT32_MAX;
	static uint64_t x226 = 58959LLU;
	int32_t x227 = INT32_MIN;
	uint64_t t48 = 646524305435481LLU;

	t48 = (((x225-x226)/x227)&x228);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x230 = 3458LL;
	int8_t x231 = -2;
	static int64_t t49 = 1670466434373796433LL;

	t49 = (((x229-x230)/x231)&x232);

	if (t49 != 1744LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x234 = 91U;
	int16_t x235 = INT16_MAX;
	int16_t x236 = 5;
	uint32_t t50 = 5637415U;

	t50 = (((x233-x234)/x235)&x236);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = -1LL;
	int8_t x238 = -1;
	int64_t x239 = INT64_MIN;
	int64_t x240 = 30LL;
	volatile int64_t t51 = -35416980231LL;

	t51 = (((x237-x238)/x239)&x240);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x241 = 456743488LL;
	int32_t x243 = -1;
	int64_t t52 = -3952833471LL;

	t52 = (((x241-x242)/x243)&x244);

	if (t52 != 1408LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = INT64_MIN;
	volatile int8_t x246 = -1;
	volatile int16_t x247 = -1;
	uint32_t x248 = 466U;
	int64_t t53 = 1626912LL;

	t53 = (((x245-x246)/x247)&x248);

	if (t53 != 466LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 0U;
	uint16_t x250 = 0U;
	uint32_t t54 = 2657U;

	t54 = (((x249-x250)/x251)&x252);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x255 = UINT64_MAX;
	uint64_t t55 = 740196650211104545LLU;

	t55 = (((x253-x254)/x255)&x256);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x258 = INT16_MIN;
	static int64_t x259 = -21LL;
	volatile uint32_t x260 = UINT32_MAX;
	uint64_t t56 = 325800LLU;

	t56 = (((x257-x258)/x259)&x260);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x261 = 10U;
	int64_t x262 = -2770136LL;
	int32_t x263 = INT32_MIN;
	volatile int64_t t57 = -3614041710771LL;

	t57 = (((x261-x262)/x263)&x264);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = -1;
	int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MIN;
	int32_t x268 = -1;
	static int64_t t58 = 6LL;

	t58 = (((x265-x266)/x267)&x268);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x270 = INT32_MIN;
	int32_t x271 = -1;
	volatile int64_t t59 = 22426LL;

	t59 = (((x269-x270)/x271)&x272);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x273 = -1;
	int16_t x274 = -880;
	volatile int32_t x276 = INT32_MIN;
	int32_t t60 = INT32_MIN;

	t60 = (((x273-x274)/x275)&x276);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = INT8_MAX;
	static int32_t x278 = 1;
	static uint64_t x279 = 89192755LLU;
	uint16_t x280 = UINT16_MAX;
	uint64_t t61 = 94LLU;

	t61 = (((x277-x278)/x279)&x280);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = 7;
	int8_t x283 = -1;
	int64_t x284 = 818973049784778LL;

	t62 = (((x281-x282)/x283)&x284);

	if (t62 != 818973049784648LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x289 = UINT32_MAX;
	uint8_t x290 = 1U;
	static volatile uint8_t x291 = 6U;
	static uint32_t t63 = 165758U;

	t63 = (((x289-x290)/x291)&x292);

	if (t63 != 42U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	static uint64_t t64 = 2469969456600513LLU;

	t64 = (((x293-x294)/x295)&x296);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = -1;
	static int32_t x302 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = INT16_MAX;

	t65 = (((x301-x302)/x303)&x304);

	if (t65 != 128) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x305 = -1;
	int8_t x306 = INT8_MAX;
	volatile int32_t x307 = -197398519;
	static uint32_t x308 = 47385U;
	volatile uint32_t t66 = 59U;

	t66 = (((x305-x306)/x307)&x308);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x310 = UINT32_MAX;
	uint64_t x312 = 1477175LLU;
	uint64_t t67 = 11LLU;

	t67 = (((x309-x310)/x311)&x312);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = 0;
	int8_t x314 = INT8_MIN;
	int32_t x315 = INT32_MIN;
	int16_t x316 = INT16_MIN;
	static int32_t t68 = -981;

	t68 = (((x313-x314)/x315)&x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = -41275LL;
	volatile int8_t x319 = INT8_MAX;
	volatile int64_t x320 = -1LL;
	static volatile int64_t t69 = -119174179646213LL;

	t69 = (((x317-x318)/x319)&x320);

	if (t69 != 66LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = 1953845612575717073LL;
	volatile uint32_t x322 = UINT32_MAX;
	static uint8_t x323 = 4U;
	static int64_t t70 = -6975212521575LL;

	t70 = (((x321-x322)/x323)&x324);

	if (t70 != 3476LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x325 = INT32_MIN;
	static uint32_t x326 = 32759370U;
	int64_t x327 = -32083LL;
	uint64_t x328 = 14624053783433LLU;

	t71 = (((x325-x326)/x327)&x328);

	if (t71 != 14624053717632LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x330 = 126U;
	volatile int16_t x331 = INT16_MAX;
	int32_t x332 = -1;
	volatile uint64_t t72 = 4607LLU;

	t72 = (((x329-x330)/x331)&x332);

	if (t72 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MIN;
	uint64_t x335 = 44933556LLU;
	int64_t x336 = INT64_MIN;

	t73 = (((x333-x334)/x335)&x336);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = 6067700;
	int16_t x338 = -1;
	uint64_t x339 = 649006602090LLU;
	static int8_t x340 = -2;
	volatile uint64_t t74 = 4616144LLU;

	t74 = (((x337-x338)/x339)&x340);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = UINT8_MAX;
	static uint16_t x342 = UINT16_MAX;
	int64_t x343 = INT64_MAX;

	t75 = (((x341-x342)/x343)&x344);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x345 = INT16_MAX;
	static volatile int64_t x346 = 4569633143741395874LL;
	volatile int16_t x347 = 3393;
	volatile int64_t t76 = -35291LL;

	t76 = (((x345-x346)/x347)&x348);

	if (t76 != -1346782535732791LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x354 = INT32_MAX;
	volatile int16_t x355 = -107;
	int64_t x356 = 1551592131390018LL;

	t77 = (((x353-x354)/x355)&x356);

	if (t77 != 17967616LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x357 = UINT32_MAX;
	static uint16_t x358 = 1342U;
	static int64_t x359 = -16933749991LL;
	int32_t x360 = INT32_MAX;
	volatile int64_t t78 = -18791832680002606LL;

	t78 = (((x357-x358)/x359)&x360);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x361 = -987;
	uint8_t x364 = 26U;
	uint64_t t79 = 17951428581422568LLU;

	t79 = (((x361-x362)/x363)&x364);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x366 = 4686U;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MIN;

	t80 = (((x365-x366)/x367)&x368);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x369 = 1476U;
	uint64_t x370 = 4549100616033660LLU;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = 629;
	volatile uint64_t t81 = 4181902212235009522LLU;

	t81 = (((x369-x370)/x371)&x372);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = -1;
	static volatile uint8_t x379 = UINT8_MAX;
	uint16_t x380 = 52U;
	volatile int64_t t82 = -237272024370227551LL;

	t82 = (((x377-x378)/x379)&x380);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x381 = INT8_MIN;
	int32_t x382 = 382850036;
	static int8_t x383 = INT8_MIN;

	t83 = (((x381-x382)/x383)&x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x386 = 55;
	static int16_t x387 = 6908;
	int8_t x388 = -1;
	int32_t t84 = -213950870;

	t84 = (((x385-x386)/x387)&x388);

	if (t84 != 9) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x393 = UINT32_MAX;
	uint64_t x394 = 4417286568673LLU;
	static volatile int32_t x395 = -1;
	int8_t x396 = INT8_MIN;
	static volatile uint64_t t85 = 2247563LLU;

	t85 = (((x393-x394)/x395)&x396);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x397 = -1;
	int32_t x398 = INT32_MIN;
	int64_t x399 = -7LL;
	uint8_t x400 = 0U;
	volatile int64_t t86 = 18305LL;

	t86 = (((x397-x398)/x399)&x400);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = -1LL;
	uint64_t x402 = UINT64_MAX;
	int64_t x403 = -1LL;
	volatile uint16_t x404 = 5470U;

	t87 = (((x401-x402)/x403)&x404);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x407 = -193;
	int32_t x408 = INT32_MIN;
	volatile int32_t t88 = -97211958;

	t88 = (((x405-x406)/x407)&x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x409 = 30U;
	static uint8_t x410 = UINT8_MAX;
	static int64_t x411 = 1717485186934933LL;
	volatile int8_t x412 = INT8_MIN;

	t89 = (((x409-x410)/x411)&x412);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x414 = 3412U;
	volatile int8_t x415 = INT8_MIN;
	uint16_t x416 = UINT16_MAX;
	uint32_t t90 = 195114003U;

	t90 = (((x413-x414)/x415)&x416);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x417 = 1;
	uint16_t x418 = 13U;
	uint16_t x419 = 7U;
	int64_t x420 = INT64_MIN;
	volatile int64_t t91 = INT64_MIN;

	t91 = (((x417-x418)/x419)&x420);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = -2;
	int8_t x430 = INT8_MAX;
	int64_t x431 = INT64_MAX;
	int8_t x432 = INT8_MIN;
	volatile int64_t t92 = 71766170636LL;

	t92 = (((x429-x430)/x431)&x432);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x433 = INT64_MAX;
	uint16_t x434 = 8692U;
	volatile int64_t t93 = 787455842262463563LL;

	t93 = (((x433-x434)/x435)&x436);

	if (t93 != 80LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x437 = INT32_MAX;
	uint64_t x438 = 142826816725661LLU;
	static volatile int8_t x439 = 29;
	static int32_t x440 = -966;
	uint64_t t94 = 210977079635LLU;

	t94 = (((x437-x438)/x439)&x440);

	if (t94 != 636089698242768912LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x444 = INT16_MIN;
	int64_t t95 = 19112LL;

	t95 = (((x441-x442)/x443)&x444);

	if (t95 != 723255296LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x445 = -1;
	static uint8_t x447 = UINT8_MAX;
	volatile uint32_t x448 = 62100U;
	int64_t t96 = -260852852597LL;

	t96 = (((x445-x446)/x447)&x448);

	if (t96 != 53380LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x449 = 95U;
	int32_t x450 = 9;
	volatile uint8_t x451 = 19U;
	int8_t x452 = INT8_MIN;
	volatile int32_t t97 = 2046;

	t97 = (((x449-x450)/x451)&x452);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x454 = -1;
	volatile int64_t x455 = INT64_MAX;
	int8_t x456 = INT8_MAX;
	static volatile int64_t t98 = 4209LL;

	t98 = (((x453-x454)/x455)&x456);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x465 = UINT8_MAX;
	volatile uint64_t x466 = 213814409580LLU;
	uint64_t t99 = 51556432321533LLU;

	t99 = (((x465-x466)/x467)&x468);

	if (t99 != 1092LLU) { NG(); } else { ; }
	
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

