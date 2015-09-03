#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 5;
uint8_t x4 = UINT8_MAX;
int32_t x13 = INT32_MAX;
uint16_t x17 = UINT16_MAX;
static int16_t x19 = INT16_MIN;
int32_t x20 = 11685698;
volatile int64_t x21 = INT64_MAX;
static int64_t x23 = INT64_MIN;
volatile int32_t x24 = 187;
int32_t x28 = -1646327;
int32_t x34 = INT32_MIN;
int64_t x39 = 2062780LL;
uint16_t x42 = UINT16_MAX;
static volatile int64_t t9 = -271072981637966133LL;
static int64_t x46 = INT64_MIN;
uint64_t x47 = 25874474921LLU;
static uint8_t x55 = 0U;
uint32_t x56 = 6290524U;
uint64_t x61 = UINT64_MAX;
int16_t x70 = INT16_MAX;
int16_t x71 = INT16_MIN;
int64_t t16 = -1875137101LL;
volatile uint8_t x84 = 2U;
volatile int32_t t18 = 0;
static int64_t x99 = INT64_MAX;
volatile uint64_t t20 = 85503534LLU;
int64_t x109 = INT64_MIN;
int64_t x111 = INT64_MIN;
static uint64_t t23 = 36815746922LLU;
volatile uint32_t x126 = UINT32_MAX;
uint64_t x130 = 8613535555LLU;
int32_t x149 = INT32_MIN;
uint16_t x151 = 1452U;
volatile int64_t t30 = -117098LL;
static int16_t x158 = INT16_MIN;
uint16_t x162 = UINT16_MAX;
int8_t x165 = INT8_MIN;
volatile int8_t x173 = -1;
int32_t x180 = -1;
volatile int32_t t36 = -1805;
int64_t x184 = -13498526532902920LL;
volatile int64_t t37 = -1585412664150481LL;
int64_t x203 = 1013624430LL;
uint64_t x206 = 41140195318749LLU;
int32_t x209 = 9;
volatile uint8_t x221 = 9U;
int16_t x222 = INT16_MIN;
uint64_t x223 = 20066LLU;
static int32_t x225 = INT32_MAX;
int16_t x226 = INT16_MIN;
int16_t x232 = INT16_MIN;
int16_t x235 = INT16_MIN;
uint8_t x245 = 76U;
volatile int32_t t48 = -192;
uint64_t x253 = UINT64_MAX;
volatile uint64_t x255 = UINT64_MAX;
volatile int8_t x256 = -30;
uint16_t x259 = UINT16_MAX;
uint16_t x260 = 6U;
int32_t x261 = 15482;
static int8_t x262 = 1;
int32_t x265 = -716;
static volatile uint32_t x268 = 327384934U;
int32_t x269 = INT32_MIN;
volatile int64_t x271 = INT64_MIN;
int64_t t53 = -416LL;
volatile int32_t x282 = INT32_MIN;
int32_t x293 = INT32_MAX;
uint64_t x295 = 82057184893516LLU;
int8_t x301 = 1;
uint8_t x303 = UINT8_MAX;
volatile int64_t x311 = -1LL;
volatile int64_t x319 = INT64_MIN;
volatile int16_t x320 = INT16_MIN;
volatile int32_t t67 = 64;
int64_t x351 = INT64_MIN;
int16_t x356 = INT16_MIN;
int8_t x372 = -1;
static int8_t x378 = INT8_MIN;
int32_t x392 = 78480903;
uint16_t x402 = 478U;
uint8_t x412 = UINT8_MAX;
int64_t x413 = 105304086LL;
volatile int64_t x415 = -1LL;
int32_t x417 = INT32_MIN;
int32_t x419 = -1;
uint64_t t86 = 1713976636992933LLU;
int64_t x433 = -652989818833604LL;
volatile int32_t x435 = INT32_MIN;
volatile int64_t t88 = -497006LL;
int16_t x437 = INT16_MIN;
int32_t x439 = 15615;
int8_t x445 = -1;
static uint16_t x449 = UINT16_MAX;
int32_t x452 = INT32_MAX;
volatile uint16_t x458 = 991U;
uint8_t x467 = 4U;
uint32_t x471 = UINT32_MAX;
uint8_t x476 = 16U;
volatile uint32_t t98 = 244627751U;
int64_t t99 = -6316991LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int8_t x3 = INT8_MIN;
	int32_t t0 = 146205922;

	t0 = ((x1%(x2-x3))^x4);

	if (t0 != 156) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1LL;
	volatile uint16_t x6 = 2476U;
	int8_t x7 = -61;
	volatile int64_t x8 = -12112334006597833LL;
	int64_t t1 = 240066591970467LL;

	t1 = ((x5%(x6-x7))^x8);

	if (t1 != -12112334006597834LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	static int64_t x16 = -1LL;
	volatile int64_t t2 = -2611938LL;

	t2 = ((x13%(x14-x15))^x16);

	if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x18 = INT32_MIN;
	int32_t t3 = 272913485;

	t3 = ((x17%(x18-x19))^x20);

	if (t3 != 11710653) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x22 = -5920;
	static int64_t t4 = 21882LL;

	t4 = ((x21%(x22-x23))^x24);

	if (t4 != 6052LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 7U;
	uint64_t x26 = 2243758895466LLU;
	int64_t x27 = INT64_MIN;
	uint64_t t5 = 1722LLU;

	t5 = ((x25%(x26-x27))^x28);

	if (t5 != 18446744073707905294LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 114U;
	int32_t x30 = INT32_MIN;
	int16_t x31 = -1;
	volatile int16_t x32 = INT16_MIN;
	int32_t t6 = -1;

	t6 = ((x29%(x30-x31))^x32);

	if (t6 != -32654) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MIN;
	static int64_t x35 = -1LL;
	int8_t x36 = -22;
	int64_t t7 = -719448842685962050LL;

	t7 = ((x33%(x34-x35))^x36);

	if (t7 != 106LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = UINT16_MAX;
	volatile int16_t x40 = INT16_MIN;
	int64_t t8 = -7723007LL;

	t8 = ((x37%(x38-x39))^x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -22641064639LL;
	static int32_t x43 = -13072318;
	static uint16_t x44 = 841U;

	t9 = ((x41%(x42-x43))^x44);

	if (t9 != -4544231LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = 14;
	int16_t x48 = -1;
	volatile uint64_t t10 = 304137552106303LLU;

	t10 = ((x45%(x46-x47))^x48);

	if (t10 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 1U;
	static uint8_t x50 = 71U;
	uint8_t x51 = 22U;
	uint64_t x52 = 70871LLU;
	uint64_t t11 = 2698836522LLU;

	t11 = ((x49%(x50-x51))^x52);

	if (t11 != 70870LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -107216LL;
	int8_t x54 = INT8_MAX;
	int64_t t12 = -2835664491LL;

	t12 = ((x53%(x54-x55))^x56);

	if (t12 != -6290504LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MAX;
	int16_t x58 = -1;
	static uint64_t x59 = 63705190139773LLU;
	uint8_t x60 = 98U;
	uint64_t t13 = 4402372280971102LLU;

	t13 = ((x57%(x58-x59))^x60);

	if (t13 != 29LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = 5;
	static volatile uint16_t x63 = 9U;
	uint16_t x64 = 4661U;
	volatile uint64_t t14 = 1724354237220LLU;

	t14 = ((x61%(x62-x63))^x64);

	if (t14 != 4662LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = 7U;
	static uint8_t x66 = UINT8_MAX;
	static int64_t x67 = 41401330243LL;
	uint32_t x68 = 2896U;
	int64_t t15 = -11445110023382LL;

	t15 = ((x65%(x66-x67))^x68);

	if (t15 != 2903LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 3613U;
	int64_t x72 = 99389LL;

	t16 = ((x69%(x70-x71))^x72);

	if (t16 != 100896LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = INT64_MIN;
	static uint8_t x82 = UINT8_MAX;
	int64_t x83 = 50LL;
	volatile int64_t t17 = 3891744874471193LL;

	t17 = ((x81%(x82-x83))^x84);

	if (t17 != -6LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = 364U;
	static uint16_t x90 = 31063U;
	uint8_t x91 = UINT8_MAX;
	int32_t x92 = INT32_MIN;

	t18 = ((x89%(x90-x91))^x92);

	if (t18 != -2147483284) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x93 = -71;
	static uint32_t x94 = 21U;
	static int16_t x95 = INT16_MIN;
	int64_t x96 = 25958500LL;
	static int64_t t19 = 133121499146717LL;

	t19 = ((x93%(x94-x95))^x96);

	if (t19 != 25960185LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	uint64_t x98 = UINT64_MAX;
	int16_t x100 = INT16_MAX;

	t20 = ((x97%(x98-x99))^x100);

	if (t20 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 109U;
	uint64_t x102 = 2116250903695737LLU;
	int64_t x103 = -1LL;
	int16_t x104 = INT16_MAX;
	volatile uint64_t t21 = 104246809LLU;

	t21 = ((x101%(x102-x103))^x104);

	if (t21 != 32658LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MIN;
	uint16_t x106 = UINT16_MAX;
	uint64_t x107 = UINT64_MAX;
	int8_t x108 = -1;
	uint64_t t22 = UINT64_MAX;

	t22 = ((x105%(x106-x107))^x108);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x110 = UINT64_MAX;
	int8_t x112 = INT8_MAX;

	t23 = ((x109%(x110-x111))^x112);

	if (t23 != 126LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = UINT8_MAX;
	volatile int16_t x118 = INT16_MIN;
	volatile int8_t x119 = INT8_MIN;
	int8_t x120 = -5;
	int32_t t24 = 4518902;

	t24 = ((x117%(x118-x119))^x120);

	if (t24 != -252) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = -1;
	int8_t x127 = -14;
	uint16_t x128 = 3U;
	volatile uint32_t t25 = 7U;

	t25 = ((x125%(x126-x127))^x128);

	if (t25 != 11U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	int16_t x131 = INT16_MAX;
	int8_t x132 = -1;
	volatile uint64_t t26 = 6433LLU;

	t26 = ((x129%(x130-x131))^x132);

	if (t26 != 18446744067022323360LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x133 = INT64_MIN;
	static volatile int8_t x134 = 1;
	int32_t x135 = INT32_MAX;
	static volatile uint32_t x136 = 5443542U;
	volatile int64_t t27 = 531746486LL;

	t27 = ((x133%(x134-x135))^x136);

	if (t27 != -5443538LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x137 = UINT32_MAX;
	volatile uint32_t x138 = UINT32_MAX;
	static volatile int16_t x139 = INT16_MAX;
	int8_t x140 = INT8_MAX;
	static uint32_t t28 = 3792322U;

	t28 = ((x137%(x138-x139))^x140);

	if (t28 != 32640U) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x145 = INT32_MAX;
	int8_t x146 = -2;
	static int8_t x147 = INT8_MAX;
	int32_t x148 = 204413;
	volatile int32_t t29 = -2164;

	t29 = ((x145%(x146-x147))^x148);

	if (t29 != 204410) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x150 = 1U;
	int64_t x152 = -343287237450LL;

	t30 = ((x149%(x150-x151))^x152);

	if (t30 != 343287237024LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = 7610609566LLU;
	static volatile int64_t x159 = -1LL;
	uint8_t x160 = 9U;
	uint64_t t31 = 1021LLU;

	t31 = ((x157%(x158-x159))^x160);

	if (t31 != 7610609559LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = 265776LL;
	uint8_t x163 = UINT8_MAX;
	volatile uint16_t x164 = 23U;
	volatile int64_t t32 = -75227LL;

	t32 = ((x161%(x162-x163))^x164);

	if (t32 != 4647LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x166 = INT8_MIN;
	int64_t x167 = -1LL;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t33 = 2454495LLU;

	t33 = ((x165%(x166-x167))^x168);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x169 = UINT32_MAX;
	int16_t x170 = -111;
	uint64_t x171 = 14664826708LLU;
	int8_t x172 = -29;
	volatile uint64_t t34 = 1950LLU;

	t34 = ((x169%(x170-x171))^x172);

	if (t34 != 18446744069414584348LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x174 = -1;
	volatile int64_t x175 = -9292476135LL;
	int16_t x176 = INT16_MAX;
	int64_t t35 = 66550861540089400LL;

	t35 = ((x173%(x174-x175))^x176);

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MIN;
	int8_t x178 = 1;
	uint8_t x179 = UINT8_MAX;

	t36 = ((x177%(x178-x179))^x180);

	if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x181 = 13U;
	uint8_t x182 = 0U;
	static volatile int8_t x183 = INT8_MIN;

	t37 = ((x181%(x182-x183))^x184);

	if (t37 != -13498526532902923LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x189 = INT32_MAX;
	int32_t x190 = -9138131;
	volatile uint8_t x191 = UINT8_MAX;
	int8_t x192 = 7;
	int32_t t38 = 155709590;

	t38 = ((x189%(x190-x191))^x192);

	if (t38 != 9101324) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = INT32_MIN;
	static volatile int8_t x202 = INT8_MIN;
	uint8_t x204 = UINT8_MAX;
	int64_t t39 = -30915882LL;

	t39 = ((x201%(x202-x203))^x204);

	if (t39 != -120234717LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = -12117138LL;
	static uint32_t x207 = 3U;
	static int64_t x208 = -71222361769LL;
	uint64_t t40 = 13LLU;

	t40 = ((x205%(x206-x207))^x208);

	if (t40 != 18446728692181435831LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x210 = -1;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = UINT8_MAX;
	int32_t t41 = 15;

	t41 = ((x209%(x210-x211))^x212);

	if (t41 != 246) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x224 = 16159715;
	volatile uint64_t t42 = 33754205636984LLU;

	t42 = ((x221%(x222-x223))^x224);

	if (t42 != 16159722LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x227 = INT16_MAX;
	uint64_t x228 = UINT64_MAX;
	static uint64_t t43 = 11474002LLU;

	t43 = ((x225%(x226-x227))^x228);

	if (t43 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x229 = INT64_MAX;
	static uint8_t x230 = 3U;
	uint8_t x231 = UINT8_MAX;
	int64_t t44 = -5018982834LL;

	t44 = ((x229%(x230-x231))^x232);

	if (t44 != -32761LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x233 = UINT64_MAX;
	uint16_t x234 = 21U;
	int8_t x236 = 1;
	static volatile uint64_t t45 = 3037328LLU;

	t45 = ((x233%(x234-x235))^x236);

	if (t45 != 29528LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x237 = -1;
	uint16_t x238 = 3U;
	uint32_t x239 = 2920958U;
	int8_t x240 = -1;
	volatile uint32_t t46 = 3608396U;

	t46 = ((x237%(x238-x239))^x240);

	if (t46 != 4292046341U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x246 = INT64_MIN;
	int8_t x247 = -56;
	static int32_t x248 = INT32_MIN;
	static volatile int64_t t47 = 397631320LL;

	t47 = ((x245%(x246-x247))^x248);

	if (t47 != -2147483572LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = 50;
	int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MAX;

	t48 = ((x249%(x250-x251))^x252);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x254 = 786403LL;
	uint64_t t49 = 26220709248LLU;

	t49 = ((x253%(x254-x255))^x256);

	if (t49 != 18446744073709476325LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x257 = 20U;
	uint64_t x258 = 38815567165LLU;
	uint64_t t50 = 15673556976LLU;

	t50 = ((x257%(x258-x259))^x260);

	if (t50 != 18LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x263 = 0U;
	int64_t x264 = INT64_MIN;
	int64_t t51 = INT64_MIN;

	t51 = ((x261%(x262-x263))^x264);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x266 = 6760U;
	volatile uint8_t x267 = UINT8_MAX;
	uint32_t t52 = 0U;

	t52 = ((x265%(x266-x267))^x268);

	if (t52 != 3967582802U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x270 = -11750;
	volatile int32_t x272 = -1;

	t53 = ((x269%(x270-x271))^x272);

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = INT16_MIN;
	uint8_t x278 = UINT8_MAX;
	uint8_t x279 = 1U;
	volatile int8_t x280 = -1;
	volatile int32_t t54 = 159246634;

	t54 = ((x277%(x278-x279))^x280);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x281 = INT32_MIN;
	volatile int8_t x283 = 0;
	int64_t x284 = 0LL;
	static volatile int64_t t55 = -1610792LL;

	t55 = ((x281%(x282-x283))^x284);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x285 = 57052LLU;
	volatile int16_t x286 = INT16_MAX;
	volatile uint64_t x287 = 2757222039379LLU;
	int32_t x288 = 93430;
	uint64_t t56 = 62021427935LLU;

	t56 = ((x285%(x286-x287))^x288);

	if (t56 != 111146LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x289 = INT32_MAX;
	int16_t x290 = INT16_MAX;
	int64_t x291 = 5317613LL;
	uint8_t x292 = 1U;
	static int64_t t57 = 229898627844750LL;

	t57 = ((x289%(x290-x291))^x292);

	if (t57 != 1836170LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x294 = INT64_MAX;
	int64_t x296 = INT64_MAX;
	static volatile uint64_t t58 = 9776LLU;

	t58 = ((x293%(x294-x295))^x296);

	if (t58 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x302 = INT8_MAX;
	int32_t x304 = INT32_MAX;
	int32_t t59 = -213;

	t59 = ((x301%(x302-x303))^x304);

	if (t59 != 2147483646) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x305 = UINT8_MAX;
	int8_t x306 = -1;
	static uint64_t x307 = 32572921951LLU;
	static uint32_t x308 = 61999U;
	uint64_t t60 = 128160990LLU;

	t60 = ((x305%(x306-x307))^x308);

	if (t60 != 62160LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MIN;
	uint8_t x312 = 58U;
	int64_t t61 = -36312386513851313LL;

	t61 = ((x309%(x310-x311))^x312);

	if (t61 != -60LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x313 = 444;
	volatile uint32_t x314 = UINT32_MAX;
	int16_t x315 = INT16_MAX;
	static uint16_t x316 = 853U;
	static volatile uint32_t t62 = 28U;

	t62 = ((x313%(x314-x315))^x316);

	if (t62 != 745U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x317 = 80LLU;
	int16_t x318 = INT16_MIN;
	uint64_t t63 = 1367793619752132LLU;

	t63 = ((x317%(x318-x319))^x320);

	if (t63 != 18446744073709518928LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x321 = INT8_MAX;
	static uint32_t x322 = UINT32_MAX;
	volatile int64_t x323 = -1LL;
	int64_t x324 = INT64_MIN;
	volatile int64_t t64 = -4041LL;

	t64 = ((x321%(x322-x323))^x324);

	if (t64 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = -14888;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = -580;
	uint64_t x332 = 3630188346414LLU;
	volatile uint64_t t65 = 13LLU;

	t65 = ((x329%(x330-x331))^x332);

	if (t65 != 3630188346877LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x337 = -508982;
	static int16_t x338 = -11013;
	volatile int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MAX;
	int32_t t66 = 644992;

	t66 = ((x337%(x338-x339))^x340);

	if (t66 != -24152) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = -1;
	static int32_t x342 = INT32_MIN;
	static int16_t x343 = -8;
	uint16_t x344 = UINT16_MAX;

	t67 = ((x341%(x342-x343))^x344);

	if (t67 != -65536) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x345 = -1;
	int32_t x346 = 65614;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = INT32_MIN;
	volatile int32_t t68 = INT32_MAX;

	t68 = ((x345%(x346-x347))^x348);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x349 = INT64_MAX;
	int64_t x350 = -81193763929177LL;
	volatile int32_t x352 = 117746855;
	int64_t t69 = 480751936163282LL;

	t69 = ((x349%(x350-x351))^x352);

	if (t69 != 81193713291519LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int64_t x354 = 928LL;
	uint64_t x355 = UINT64_MAX;
	volatile uint64_t t70 = 19440217555LLU;

	t70 = ((x353%(x354-x355))^x356);

	if (t70 != 18446744073709519566LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x357 = -1;
	static int16_t x358 = -6502;
	int64_t x359 = -1LL;
	int64_t x360 = -1LL;
	int64_t t71 = 873111336501392307LL;

	t71 = ((x357%(x358-x359))^x360);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = -8153054201LL;
	int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	volatile int64_t t72 = 639690448477871LL;

	t72 = ((x361%(x362-x363))^x364);

	if (t72 != 32640LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x365 = INT32_MIN;
	static volatile uint8_t x366 = 11U;
	static uint32_t x367 = 45U;
	static int64_t x368 = 361055658LL;
	volatile int64_t t73 = -1006833LL;

	t73 = ((x365%(x366-x367))^x368);

	if (t73 != 2508539306LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x370 = UINT32_MAX;
	static int32_t x371 = INT32_MIN;
	int64_t t74 = 112420502783LL;

	t74 = ((x369%(x370-x371))^x372);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x377 = UINT64_MAX;
	static int32_t x379 = -1;
	int64_t x380 = 728604423154LL;
	uint64_t t75 = 2277252866195866867LLU;

	t75 = ((x377%(x378-x379))^x380);

	if (t75 != 728604423052LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = -1908;
	uint64_t x383 = 16217LLU;
	uint16_t x384 = 436U;
	volatile uint64_t t76 = 820420LLU;

	t76 = ((x381%(x382-x383))^x384);

	if (t76 != 459LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x385 = 16928352728LLU;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	static uint64_t x388 = UINT64_MAX;
	volatile uint64_t t77 = 12539040LLU;

	t77 = ((x385%(x386-x387))^x388);

	if (t77 != 18446744071813355047LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x389 = -29;
	volatile int8_t x390 = INT8_MAX;
	volatile uint64_t x391 = 456LLU;
	uint64_t t78 = 507LLU;

	t78 = ((x389%(x390-x391))^x392);

	if (t78 != 78481195LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x393 = INT16_MIN;
	uint32_t x394 = 154U;
	volatile int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MAX;
	uint32_t t79 = 901230U;

	t79 = ((x393%(x394-x395))^x396);

	if (t79 != 32687U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x397 = INT64_MAX;
	static uint16_t x398 = UINT16_MAX;
	int8_t x399 = -1;
	volatile int16_t x400 = -2182;
	int64_t t80 = -31246776482200LL;

	t80 = ((x397%(x398-x399))^x400);

	if (t80 != -63355LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x401 = INT64_MAX;
	int16_t x403 = INT16_MIN;
	volatile int8_t x404 = INT8_MIN;
	volatile int64_t t81 = 1LL;

	t81 = ((x401%(x402-x403))^x404);

	if (t81 != -29311LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x409 = INT32_MAX;
	int32_t x410 = INT32_MAX;
	uint64_t x411 = 3628308414102238266LLU;
	uint64_t t82 = 258715721561LLU;

	t82 = ((x409%(x410-x411))^x412);

	if (t82 != 2147483392LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x414 = INT32_MIN;
	volatile uint32_t x416 = 1420454067U;
	int64_t t83 = -1LL;

	t83 = ((x413%(x414-x415))^x416);

	if (t83 != 1391245477LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x418 = -9673LL;
	int64_t x420 = -1LL;
	int64_t t84 = 244LL;

	t84 = ((x417%(x418-x419))^x420);

	if (t84 != 9487LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x421 = -4576;
	int64_t x422 = -1LL;
	uint16_t x423 = 6306U;
	int64_t x424 = 0LL;
	static int64_t t85 = 58880283450936LL;

	t85 = ((x421%(x422-x423))^x424);

	if (t85 != -4576LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x425 = 1211422699440034LLU;
	static uint64_t x426 = 102173539106232LLU;
	uint32_t x427 = 71906928U;
	static uint8_t x428 = 16U;

	t86 = ((x425%(x426-x427))^x428);

	if (t86 != 87514560247706LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x429 = 6147960135079223972LLU;
	int16_t x430 = INT16_MIN;
	int8_t x431 = 1;
	int64_t x432 = INT64_MIN;
	volatile uint64_t t87 = 140410LLU;

	t87 = ((x429%(x430-x431))^x432);

	if (t87 != 15371332171933999780LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x434 = -1LL;
	int32_t x436 = INT32_MAX;

	t88 = ((x433%(x434-x435))^x436);

	if (t88 != -1976160629LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x438 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	static int32_t t89 = 71;

	t89 = ((x437%(x438-x439))^x440);

	if (t89 != 32640) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x441 = UINT32_MAX;
	static int8_t x442 = -1;
	int32_t x443 = -603946;
	int16_t x444 = -6039;
	uint32_t t90 = 74419815U;

	t90 = ((x441%(x442-x443))^x444);

	if (t90 != 4294648905U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x446 = 79U;
	volatile int8_t x447 = INT8_MAX;
	uint32_t x448 = UINT32_MAX;
	uint32_t t91 = 72023U;

	t91 = ((x445%(x446-x447))^x448);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x450 = 1U;
	uint8_t x451 = 10U;
	volatile int32_t t92 = -1;

	t92 = ((x449%(x450-x451))^x452);

	if (t92 != 2147483641) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x457 = UINT8_MAX;
	static uint64_t x459 = 190872426LLU;
	int8_t x460 = INT8_MIN;
	volatile uint64_t t93 = 44729555482657199LLU;

	t93 = ((x457%(x458-x459))^x460);

	if (t93 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x461 = 428699624U;
	int16_t x462 = INT16_MIN;
	int16_t x463 = INT16_MAX;
	uint32_t x464 = 158282940U;
	uint32_t t94 = 331110473U;

	t94 = ((x461%(x462-x463))^x464);

	if (t94 != 283269972U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x465 = INT8_MAX;
	static volatile int64_t x466 = INT64_MAX;
	int8_t x468 = -28;
	int64_t t95 = 65844127958515710LL;

	t95 = ((x465%(x466-x467))^x468);

	if (t95 != -101LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x469 = -1;
	int8_t x470 = INT8_MIN;
	static volatile int16_t x472 = 8254;
	volatile uint32_t t96 = 4072818U;

	t96 = ((x469%(x470-x471))^x472);

	if (t96 != 8256U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x473 = 2280;
	int16_t x474 = INT16_MIN;
	static uint8_t x475 = 2U;
	int32_t t97 = 0;

	t97 = ((x473%(x474-x475))^x476);

	if (t97 != 2296) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x481 = -1;
	int32_t x482 = INT32_MAX;
	volatile uint16_t x483 = 2978U;
	uint32_t x484 = UINT32_MAX;

	t98 = ((x481%(x482-x483))^x484);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = INT64_MIN;
	volatile int64_t x486 = -190774LL;
	int32_t x487 = -890932;
	int8_t x488 = INT8_MAX;

	t99 = ((x485%(x486-x487))^x488);

	if (t99 != -430779LL) { NG(); } else { ; }
	
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

