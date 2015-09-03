#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 323LLU;
volatile int8_t x8 = INT8_MAX;
static volatile int16_t x21 = -1;
static int8_t x22 = INT8_MAX;
static uint16_t x30 = 15849U;
int32_t x47 = INT32_MAX;
int64_t t12 = -3125683421172LL;
volatile uint32_t x63 = 855909656U;
uint16_t x73 = UINT16_MAX;
int16_t x82 = INT16_MAX;
int16_t x87 = INT16_MIN;
static uint64_t x89 = UINT64_MAX;
volatile int8_t x91 = INT8_MIN;
uint32_t x98 = 119956317U;
uint64_t t22 = 3393188307632268LLU;
uint32_t x101 = 345U;
volatile uint32_t t23 = 6U;
int16_t x108 = INT16_MIN;
volatile uint64_t t24 = 444218854454LLU;
uint8_t x113 = 102U;
volatile uint64_t t25 = 8453576323LLU;
static volatile int8_t x119 = 1;
volatile int16_t x123 = INT16_MAX;
int16_t x126 = INT16_MAX;
volatile int64_t t29 = -1355LL;
int16_t x136 = INT16_MIN;
static int8_t x166 = -50;
volatile int8_t x168 = -1;
volatile uint16_t x171 = UINT16_MAX;
static uint64_t t38 = 1237869216LLU;
volatile uint64_t x177 = UINT64_MAX;
int64_t x182 = INT64_MIN;
volatile uint64_t t41 = 116100971885159752LLU;
int32_t x189 = INT32_MIN;
static int8_t x192 = INT8_MIN;
volatile int64_t t43 = -1502351858602LL;
static volatile int64_t t45 = 16LL;
static int16_t x215 = INT16_MIN;
volatile int32_t x216 = -859291;
uint64_t x220 = UINT64_MAX;
static uint16_t x223 = 7660U;
static int8_t x231 = INT8_MAX;
static volatile uint64_t t51 = 204104574944578291LLU;
uint32_t x234 = UINT32_MAX;
volatile int16_t x235 = INT16_MAX;
int32_t t53 = 3974;
uint64_t x241 = 1361954331368050LLU;
int32_t x248 = INT32_MAX;
int16_t x252 = -1;
volatile int64_t t56 = 3459123444517LL;
volatile int32_t x259 = INT32_MAX;
static volatile int64_t x267 = -4219736117LL;
static uint32_t x272 = 2725216U;
uint8_t x275 = 63U;
uint64_t x277 = 7373982060028LLU;
uint64_t t62 = 70263197579142LLU;
static int32_t x283 = INT32_MAX;
int64_t t64 = 7410834436LL;
int8_t x293 = -1;
int16_t x296 = INT16_MIN;
int32_t x300 = INT32_MIN;
int16_t x302 = INT16_MAX;
uint64_t x303 = 19167404522888LLU;
int32_t x304 = INT32_MIN;
volatile uint32_t x305 = 3706848U;
int8_t x306 = INT8_MIN;
int64_t x310 = 2LL;
int8_t x313 = 18;
int16_t x315 = INT16_MIN;
int16_t x321 = -1;
volatile uint64_t t73 = 3532261379117031LLU;
static int32_t x328 = INT32_MIN;
int32_t x330 = 0;
volatile int32_t x331 = INT32_MIN;
uint16_t x337 = 3U;
static volatile int32_t t77 = -7023;
int16_t x344 = 0;
int16_t x345 = 3;
int32_t x348 = 3443983;
uint16_t x360 = UINT16_MAX;
int16_t x361 = INT16_MIN;
uint8_t x368 = 60U;
int16_t x370 = INT16_MAX;
int32_t x373 = INT32_MAX;
static int16_t x378 = -1;
uint64_t x380 = 3LLU;
uint64_t t86 = 138435345LLU;
static uint8_t x388 = 32U;
int8_t x391 = 6;
int8_t x408 = INT8_MIN;
int32_t t94 = -193763;
uint32_t x416 = 3604U;
int32_t x417 = -1;
uint32_t x418 = 1176U;
static int32_t x424 = INT32_MAX;
int16_t x426 = 1;
uint8_t x430 = 24U;
int16_t x431 = -1;


void f0(void) {
	uint16_t x1 = 544U;
	static uint8_t x2 = 25U;
	uint64_t x3 = 9LLU;
	volatile int8_t x4 = -2;

	t0 = (x1/((x2/x3)^x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 19566505U;
	uint64_t x6 = 1635455353707673198LLU;
	static volatile int64_t x7 = INT64_MIN;
	uint64_t t1 = 994490674LLU;

	t1 = (x5/((x6/x7)^x8));

	if (t1 != 154066LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	volatile int64_t x10 = INT64_MAX;
	int32_t x11 = 86976;
	static volatile int8_t x12 = -1;
	volatile int64_t t2 = 35LL;

	t2 = (x9/((x10/x11)^x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 32U;
	int32_t x18 = -215;
	volatile uint64_t x19 = 13125960LLU;
	int32_t x20 = INT32_MIN;
	uint64_t t3 = 2399982774365063LLU;

	t3 = (x17/((x18/x19)^x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x23 = 60U;
	int32_t x24 = -3;
	int32_t t4 = -27129323;

	t4 = (x21/((x22/x23)^x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	int32_t x26 = -1156;
	int64_t x27 = 3763LL;
	static uint8_t x28 = UINT8_MAX;
	volatile int64_t t5 = 439LL;

	t5 = (x25/((x26/x27)^x28));

	if (t5 != 8421504LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -1;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = 717;
	static volatile uint32_t t6 = 29U;

	t6 = (x29/((x30/x31)^x32));

	if (t6 != 5990191U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 1U;
	int16_t x34 = INT16_MAX;
	int64_t x35 = INT64_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int64_t t7 = 4921LL;

	t7 = (x33/((x34/x35)^x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = 489;
	int16_t x38 = -1;
	static uint64_t x39 = 216866588485474LLU;
	int64_t x40 = -240197784030067LL;
	volatile uint64_t t8 = 13LLU;

	t8 = (x37/((x38/x39)^x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -161;
	static volatile uint16_t x42 = 7U;
	int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = -138070390880133LL;

	t9 = (x41/((x42/x43)^x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int16_t x46 = -1;
	int32_t x48 = INT32_MIN;
	int32_t t10 = -72897;

	t10 = (x45/((x46/x47)^x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = 1;
	uint64_t x50 = UINT64_MAX;
	static volatile int64_t x51 = 18LL;
	uint64_t x52 = 1534245LLU;
	uint64_t t11 = 1748850089952356460LLU;

	t11 = (x49/((x50/x51)^x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = 6271702473680570LL;
	static int8_t x54 = 4;
	int16_t x55 = INT16_MAX;
	int8_t x56 = 4;

	t12 = (x53/((x54/x55)^x56));

	if (t12 != 1567925618420142LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 86U;
	uint16_t x58 = 678U;
	int8_t x59 = -1;
	volatile int16_t x60 = INT16_MAX;
	int32_t t13 = -246;

	t13 = (x57/((x58/x59)^x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	int8_t x62 = -12;
	int64_t x64 = -1LL;
	static int64_t t14 = 1554588490900009LL;

	t14 = (x61/((x62/x63)^x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x69 = 0;
	uint16_t x70 = 641U;
	int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	static int64_t t15 = -73LL;

	t15 = (x69/((x70/x71)^x72));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x74 = -1;
	uint16_t x75 = UINT16_MAX;
	int16_t x76 = 867;
	int32_t t16 = 1916;

	t16 = (x73/((x74/x75)^x76));

	if (t16 != 75) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = UINT8_MAX;
	uint32_t x78 = UINT32_MAX;
	uint32_t x79 = 505072U;
	static uint16_t x80 = 492U;
	volatile uint32_t t17 = 1U;

	t17 = (x77/((x78/x79)^x80));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	static int32_t x83 = -725938790;
	static uint64_t x84 = 218LLU;
	volatile uint64_t t18 = 6324263743804LLU;

	t18 = (x81/((x82/x83)^x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	uint16_t x86 = UINT16_MAX;
	volatile int8_t x88 = INT8_MIN;
	volatile int64_t t19 = -519001302100265034LL;

	t19 = (x85/((x86/x87)^x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x90 = UINT32_MAX;
	uint64_t x92 = 18127016155LLU;
	uint64_t t20 = 58339379633111LLU;

	t20 = (x89/((x90/x91)^x92));

	if (t20 != 1017638199LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 369U;
	static int64_t x94 = INT64_MAX;
	int16_t x95 = INT16_MAX;
	int8_t x96 = INT8_MIN;
	static volatile int64_t t21 = -2824666321221407LL;

	t21 = (x93/((x94/x95)^x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = 210;
	int64_t x99 = INT64_MIN;
	static uint64_t x100 = 389LLU;

	t22 = (x97/((x98/x99)^x100));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x102 = -3903;
	static int8_t x103 = INT8_MAX;
	int8_t x104 = -1;

	t23 = (x101/((x102/x103)^x104));

	if (t23 != 11U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 17965592LLU;
	uint32_t x106 = 45595U;
	volatile int8_t x107 = -1;

	t24 = (x105/((x106/x107)^x108));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x114 = 13026688764186LLU;
	uint16_t x115 = 6U;
	static volatile int64_t x116 = INT64_MAX;

	t25 = (x113/((x114/x115)^x116));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x117 = INT8_MAX;
	int16_t x118 = 10222;
	int32_t x120 = INT32_MIN;
	static int32_t t26 = -62915871;

	t26 = (x117/((x118/x119)^x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	static int8_t x122 = INT8_MIN;
	int64_t x124 = 10LL;
	volatile int64_t t27 = 93766095644LL;

	t27 = (x121/((x122/x123)^x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	volatile uint32_t x127 = 2U;
	static uint16_t x128 = UINT16_MAX;
	uint32_t t28 = 0U;

	t28 = (x125/((x126/x127)^x128));

	if (t28 != 43690U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x129 = INT8_MIN;
	int64_t x130 = -149196LL;
	uint8_t x131 = UINT8_MAX;
	int64_t x132 = 4472759181LL;

	t29 = (x129/((x130/x131)^x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x133 = UINT16_MAX;
	static int16_t x134 = -1;
	uint64_t x135 = UINT64_MAX;
	uint64_t t30 = 1LLU;

	t30 = (x133/((x134/x135)^x136));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	volatile int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MAX;
	int8_t x140 = -1;
	volatile int64_t t31 = 1795626124918233380LL;

	t31 = (x137/((x138/x139)^x140));

	if (t31 != 2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x141 = 432084;
	uint64_t x142 = 3184952391096LLU;
	int8_t x143 = INT8_MIN;
	int64_t x144 = INT64_MAX;
	volatile uint64_t t32 = 6268567625109LLU;

	t32 = (x141/((x142/x143)^x144));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x145 = -3588LL;
	uint32_t x146 = UINT32_MAX;
	volatile int8_t x147 = INT8_MIN;
	uint64_t x148 = UINT64_MAX;
	uint64_t t33 = 2201166LLU;

	t33 = (x145/((x146/x147)^x148));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MAX;
	int8_t x151 = -1;
	static uint64_t x152 = 3660228014472906954LLU;
	volatile uint64_t t34 = 209321445631LLU;

	t34 = (x149/((x150/x151)^x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = UINT16_MAX;
	uint16_t x162 = 1U;
	int32_t x163 = INT32_MAX;
	uint8_t x164 = 85U;
	volatile int32_t t35 = -5;

	t35 = (x161/((x162/x163)^x164));

	if (t35 != 771) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -1;
	static uint16_t x167 = UINT16_MAX;
	int32_t t36 = 6079;

	t36 = (x165/((x166/x167)^x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 1624828U;
	static int16_t x170 = INT16_MAX;
	volatile int64_t x172 = INT64_MIN;
	volatile int64_t t37 = 37125792867LL;

	t37 = (x169/((x170/x171)^x172));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MAX;
	uint64_t x175 = 99934217LLU;
	uint16_t x176 = UINT16_MAX;

	t38 = (x173/((x174/x175)^x176));

	if (t38 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x178 = UINT64_MAX;
	int8_t x179 = 11;
	int8_t x180 = INT8_MIN;
	static uint64_t t39 = 3948319073211297335LLU;

	t39 = (x177/((x178/x179)^x180));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x181 = 12U;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = 0;
	volatile int64_t t40 = 793876348854362268LL;

	t40 = (x181/((x182/x183)^x184));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = -1;
	volatile int64_t x186 = 0LL;
	uint64_t x187 = 31880920LLU;
	int32_t x188 = INT32_MAX;

	t41 = (x185/((x186/x187)^x188));

	if (t41 != 8589934596LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x190 = -1;
	volatile int64_t x191 = INT64_MIN;
	int64_t t42 = 497442327LL;

	t42 = (x189/((x190/x191)^x192));

	if (t42 != 16777216LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 26U;
	int8_t x194 = -6;
	int64_t x195 = -1LL;
	int32_t x196 = INT32_MIN;

	t43 = (x193/((x194/x195)^x196));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = -2300467;
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	static uint32_t x200 = 22387U;
	volatile int64_t t44 = -304263213534923LL;

	t44 = (x197/((x198/x199)^x200));

	if (t44 != -102LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x201 = INT32_MAX;
	int32_t x202 = 510630;
	int64_t x203 = 442594577LL;
	uint32_t x204 = UINT32_MAX;

	t45 = (x201/((x202/x203)^x204));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = INT32_MAX;
	int16_t x206 = INT16_MIN;
	static uint16_t x207 = 24276U;
	uint8_t x208 = 47U;
	int32_t t46 = -77;

	t46 = (x205/((x206/x207)^x208));

	if (t46 != -44739242) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = 9815;
	int16_t x210 = INT16_MIN;
	static int32_t x211 = -483;
	int32_t x212 = -1;
	int32_t t47 = 1;

	t47 = (x209/((x210/x211)^x212));

	if (t47 != -144) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x214 = -1;
	int32_t t48 = -39;

	t48 = (x213/((x214/x215)^x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x217 = INT64_MAX;
	int32_t x218 = INT32_MIN;
	uint16_t x219 = 1372U;
	uint64_t t49 = 1370479LLU;

	t49 = (x217/((x218/x219)^x220));

	if (t49 != 5892700091268LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x221 = -1;
	static int8_t x222 = -63;
	uint8_t x224 = 1U;
	static volatile int32_t t50 = 11757;

	t50 = (x221/((x222/x223)^x224));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 118081119282LLU;
	int64_t x230 = INT64_MIN;
	static int32_t x232 = INT32_MIN;

	t51 = (x229/((x230/x231)^x232));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x233 = 4U;
	static uint32_t x236 = 460909301U;
	uint32_t t52 = 1U;

	t52 = (x233/((x234/x235)^x236));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = INT16_MIN;
	volatile int32_t x238 = INT32_MAX;
	int8_t x239 = -3;
	static int8_t x240 = INT8_MIN;

	t53 = (x237/((x238/x239)^x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x242 = 32195U;
	static int64_t x243 = INT64_MIN;
	int32_t x244 = -28291964;
	uint64_t t54 = 11856374876LLU;

	t54 = (x241/((x242/x243)^x244));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = -10;
	static uint64_t x247 = 112184146661049LLU;
	volatile uint64_t t55 = 22LLU;

	t55 = (x245/((x246/x247)^x248));

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = -1;
	int64_t x250 = 714520881LL;
	uint16_t x251 = 20U;

	t56 = (x249/((x250/x251)^x252));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	int8_t x260 = -31;
	static int32_t t57 = 17664;

	t57 = (x257/((x258/x259)^x260));

	if (t57 != 1057) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = INT32_MAX;
	static uint32_t x262 = 65157U;
	uint64_t x263 = 60808093LLU;
	uint8_t x264 = UINT8_MAX;
	volatile uint64_t t58 = 1LLU;

	t58 = (x261/((x262/x263)^x264));

	if (t58 != 8421504LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	volatile uint16_t x268 = 1100U;
	int64_t t59 = 1022LL;

	t59 = (x265/((x266/x267)^x268));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MAX;
	int32_t x270 = INT32_MIN;
	int16_t x271 = INT16_MIN;
	static uint32_t t60 = 2196U;

	t60 = (x269/((x270/x271)^x272));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = -63664724576658722LL;
	uint32_t x274 = 1275729031U;
	int16_t x276 = -10;
	volatile int64_t t61 = 278603402115LL;

	t61 = (x273/((x274/x275)^x276));

	if (t61 != -14893316LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x278 = 345U;
	static uint32_t x279 = 93769170U;
	static volatile int32_t x280 = -124;

	t62 = (x277/((x278/x279)^x280));

	if (t62 != 1716LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x281 = UINT32_MAX;
	static volatile int16_t x282 = -1;
	int8_t x284 = 7;
	static volatile uint32_t t63 = 293902U;

	t63 = (x281/((x282/x283)^x284));

	if (t63 != 613566756U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = -4421;
	static uint32_t x286 = 1328U;
	int64_t x287 = 65873019261188LL;
	uint16_t x288 = 29U;

	t64 = (x285/((x286/x287)^x288));

	if (t64 != -152LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = INT32_MIN;
	uint64_t x290 = UINT64_MAX;
	volatile uint16_t x291 = 1U;
	int64_t x292 = INT64_MAX;
	static uint64_t t65 = 54LLU;

	t65 = (x289/((x290/x291)^x292));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x294 = 1;
	static uint16_t x295 = 4312U;
	int32_t t66 = -7613;

	t66 = (x293/((x294/x295)^x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = -1400LL;
	uint32_t x298 = 738893198U;
	int32_t x299 = -45802;
	volatile int64_t t67 = 403LL;

	t67 = (x297/((x298/x299)^x300));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MIN;
	volatile uint64_t t68 = 9001468713LLU;

	t68 = (x301/((x302/x303)^x304));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x307 = -200932;
	volatile int8_t x308 = -1;
	volatile uint32_t t69 = 50U;

	t69 = (x305/((x306/x307)^x308));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x309 = -699LL;
	int8_t x311 = INT8_MIN;
	uint16_t x312 = 12U;
	static volatile int64_t t70 = -141625LL;

	t70 = (x309/((x310/x311)^x312));

	if (t70 != -58LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x314 = -1LL;
	int32_t x316 = -1;
	int64_t t71 = -2LL;

	t71 = (x313/((x314/x315)^x316));

	if (t71 != -18LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = 19;
	static int8_t x319 = INT8_MAX;
	uint64_t x320 = 6809757LLU;
	uint64_t t72 = 159509851315LLU;

	t72 = (x317/((x318/x319)^x320));

	if (t72 != 2708869651840LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MIN;
	static uint64_t x324 = 753031LLU;

	t73 = (x321/((x322/x323)^x324));

	if (t73 != 4294214397LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = INT32_MAX;
	int8_t x326 = 58;
	volatile uint64_t x327 = 220LLU;
	uint64_t t74 = 3798LLU;

	t74 = (x325/((x326/x327)^x328));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x329 = -230;
	int64_t x332 = INT64_MIN;
	volatile int64_t t75 = 981307961650307126LL;

	t75 = (x329/((x330/x331)^x332));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = INT32_MAX;
	int8_t x334 = 1;
	int32_t x335 = 1;
	static int16_t x336 = INT16_MIN;
	int32_t t76 = -147479;

	t76 = (x333/((x334/x335)^x336));

	if (t76 != -65538) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x338 = 6932;
	int32_t x339 = INT32_MIN;
	uint8_t x340 = 45U;

	t77 = (x337/((x338/x339)^x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x341 = 4U;
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	int64_t t78 = 1812312LL;

	t78 = (x341/((x342/x343)^x344));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x346 = 1223557;
	int32_t x347 = INT32_MIN;
	volatile int32_t t79 = -335;

	t79 = (x345/((x346/x347)^x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x349 = UINT64_MAX;
	int32_t x350 = INT32_MIN;
	int64_t x351 = -192355LL;
	int8_t x352 = INT8_MAX;
	volatile uint64_t t80 = 34759711010816LLU;

	t80 = (x349/((x350/x351)^x352));

	if (t80 != 1641899784041793LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x357 = 0U;
	uint32_t x358 = 78U;
	static int8_t x359 = 1;
	volatile uint32_t t81 = 0U;

	t81 = (x357/((x358/x359)^x360));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x362 = INT8_MAX;
	volatile int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MAX;
	int32_t t82 = -4081682;

	t82 = (x361/((x362/x363)^x364));

	if (t82 != -258) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x365 = UINT32_MAX;
	uint16_t x366 = 1U;
	uint16_t x367 = 13040U;
	volatile uint32_t t83 = 598U;

	t83 = (x365/((x366/x367)^x368));

	if (t83 != 71582788U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = 4848;
	volatile int64_t x371 = -1LL;
	static uint16_t x372 = 0U;
	int64_t t84 = 220952325LL;

	t84 = (x369/((x370/x371)^x372));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x374 = INT16_MIN;
	int32_t x375 = -31688;
	volatile int16_t x376 = -1;
	int32_t t85 = 8;

	t85 = (x373/((x374/x375)^x376));

	if (t85 != -1073741823) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = INT64_MAX;
	uint32_t x379 = UINT32_MAX;

	t86 = (x377/((x378/x379)^x380));

	if (t86 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = 0;
	static volatile int64_t x382 = -1LL;
	int32_t x383 = -1;
	uint32_t x384 = 53U;
	static volatile int64_t t87 = -843044171LL;

	t87 = (x381/((x382/x383)^x384));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x385 = -1;
	volatile int64_t x386 = -1LL;
	uint64_t x387 = 92295197540LLU;
	uint64_t t88 = 4590109LLU;

	t88 = (x385/((x386/x387)^x388));

	if (t88 != 92295182961LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = 2;
	static uint64_t x390 = 5713632377045LLU;
	int16_t x392 = INT16_MIN;
	volatile uint64_t t89 = 1902LLU;

	t89 = (x389/((x390/x391)^x392));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x393 = INT8_MIN;
	int16_t x394 = 3;
	int8_t x395 = -1;
	int64_t x396 = INT64_MIN;
	volatile int64_t t90 = -1LL;

	t90 = (x393/((x394/x395)^x396));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	static uint64_t x399 = 103971LLU;
	uint32_t x400 = 3326242U;
	uint64_t t91 = 2083945408074LLU;

	t91 = (x397/((x398/x399)^x400));

	if (t91 != 103970LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x401 = UINT16_MAX;
	static uint64_t x402 = 3286277LLU;
	static int32_t x403 = INT32_MIN;
	uint32_t x404 = UINT32_MAX;
	volatile uint64_t t92 = 1255563154052704895LLU;

	t92 = (x401/((x402/x403)^x404));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x405 = UINT64_MAX;
	static int32_t x406 = INT32_MAX;
	volatile int16_t x407 = 3;
	uint64_t t93 = 37433474634LLU;

	t93 = (x405/((x406/x407)^x408));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = 7U;
	uint16_t x410 = 120U;
	int8_t x411 = INT8_MAX;
	uint8_t x412 = 29U;

	t94 = (x409/((x410/x411)^x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = -1528213;
	static volatile int64_t x414 = -4528LL;
	uint32_t x415 = 16379437U;
	int64_t t95 = -228466LL;

	t95 = (x413/((x414/x415)^x416));

	if (t95 != -424LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x419 = 40U;
	uint64_t x420 = 42859LLU;
	uint64_t t96 = 38441LLU;

	t96 = (x417/((x418/x419)^x420));

	if (t96 != 430294939904584LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x421 = -1LL;
	int16_t x422 = INT16_MIN;
	int16_t x423 = -27;
	volatile int64_t t97 = -3431714925LL;

	t97 = (x421/((x422/x423)^x424));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = INT16_MIN;
	static int16_t x427 = INT16_MIN;
	static int8_t x428 = -1;
	int32_t t98 = 1;

	t98 = (x425/((x426/x427)^x428));

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x429 = 1491;
	int64_t x432 = INT64_MAX;
	int64_t t99 = -57260648400451LL;

	t99 = (x429/((x430/x431)^x432));

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

