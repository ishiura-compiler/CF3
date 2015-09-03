#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = 445010;
int16_t x11 = -1;
uint8_t x13 = UINT8_MAX;
static int16_t x15 = -1;
uint8_t x17 = 0U;
int32_t t4 = -13953646;
static int16_t x32 = 7;
static volatile int8_t x34 = -1;
volatile int32_t t7 = 534445758;
volatile uint64_t x43 = 76416485203LLU;
int32_t x62 = 1;
int64_t x77 = INT64_MAX;
uint16_t x79 = UINT16_MAX;
static volatile int8_t x83 = 0;
static int64_t x84 = INT64_MIN;
int32_t x94 = INT32_MIN;
volatile int8_t x95 = INT8_MIN;
int64_t x97 = INT64_MAX;
int8_t x100 = INT8_MAX;
uint16_t x109 = 1U;
int16_t x111 = INT16_MIN;
uint32_t x121 = 20U;
uint8_t x126 = 1U;
uint64_t x134 = 17987942LLU;
volatile int8_t x137 = -1;
volatile uint64_t x141 = 16252192737LLU;
volatile uint64_t x144 = 459LLU;
int16_t x147 = 1172;
static int8_t x165 = INT8_MIN;
uint8_t x169 = UINT8_MAX;
volatile int32_t t37 = -614345740;
int64_t x174 = INT64_MIN;
int16_t x180 = INT16_MAX;
volatile uint64_t t40 = 4364114087LLU;
static int8_t x201 = -1;
static int8_t x203 = INT8_MAX;
int64_t x205 = INT64_MIN;
int64_t x210 = INT64_MIN;
static volatile uint16_t x215 = 63U;
int32_t x217 = -13570976;
int8_t x221 = 0;
uint64_t t49 = 584859585LLU;
static volatile int32_t t50 = 1423436;
uint16_t x231 = 2U;
static int16_t x243 = -62;
static uint8_t x250 = 0U;
int16_t x252 = INT16_MAX;
volatile int32_t t55 = -14554;
int8_t x258 = -1;
int32_t x277 = INT32_MAX;
uint32_t x284 = 369650U;
int8_t x285 = -1;
volatile int8_t x288 = -1;
static volatile uint64_t t63 = 2121023469303466681LLU;
volatile uint64_t t65 = 29050571LLU;
static uint16_t x310 = 8286U;
uint16_t x312 = UINT16_MAX;
int32_t x319 = INT32_MIN;
uint16_t x320 = UINT16_MAX;
int64_t x323 = 8226560897LL;
volatile int32_t x324 = -1;
static int8_t x330 = INT8_MIN;
static uint32_t t74 = 16604799U;
uint16_t x345 = 69U;
static int32_t x348 = INT32_MIN;
uint64_t x349 = UINT64_MAX;
int16_t x354 = -8;
uint32_t x363 = 100U;
volatile int64_t x364 = 3082145208724276441LL;
int16_t x375 = -2507;
int8_t x376 = 6;
int8_t x381 = INT8_MIN;
int32_t x384 = -1;
static int64_t x391 = 7330997787540LL;
volatile int64_t t87 = 578167233496996140LL;
int16_t x396 = INT16_MAX;
int16_t x397 = -30;
static uint8_t x400 = 0U;
static int16_t x412 = -1;
volatile int8_t x415 = -4;
uint16_t x427 = 2043U;
volatile int32_t x428 = INT32_MIN;
static int32_t x429 = INT32_MIN;
volatile int32_t x430 = INT32_MIN;
int16_t x435 = -1;


void f0(void) {
	int32_t x6 = INT32_MIN;
	uint16_t x7 = 18026U;
	int8_t x8 = 46;
	volatile int32_t t0 = -4189;

	t0 = ((x5^x6)%(x7+x8));

	if (t0 != -12750) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -1LL;
	static volatile int32_t x10 = INT32_MIN;
	uint16_t x12 = 71U;
	static volatile int64_t t1 = 113340893989LL;

	t1 = ((x9^x10)%(x11+x12));

	if (t1 != 57LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 110U;
	int16_t x16 = INT16_MAX;
	static uint32_t t2 = 1U;

	t2 = ((x13^x14)%(x15+x16));

	if (t2 != 145U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = 35U;
	volatile int16_t x19 = 14536;
	uint64_t x20 = 54624249831LLU;
	uint64_t t3 = 7961LLU;

	t3 = ((x17^x18)%(x19+x20));

	if (t3 != 35LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x22 = 17U;
	uint16_t x23 = 558U;
	volatile int16_t x24 = -6;

	t4 = ((x21^x22)%(x23+x24));

	if (t4 != -111) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 182499U;
	static uint16_t x26 = UINT16_MAX;
	int32_t x27 = -9;
	int16_t x28 = -1;
	volatile uint32_t t5 = 86894954U;

	t5 = ((x25^x26)%(x27+x28));

	if (t5 != 145180U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MAX;
	static uint32_t x31 = UINT32_MAX;
	static int64_t t6 = 245575181010108326LL;

	t6 = ((x29^x30)%(x31+x32));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 562U;
	int16_t x35 = INT16_MAX;
	volatile int16_t x36 = INT16_MIN;

	t7 = ((x33^x34)%(x35+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = -1LL;
	uint64_t x39 = 1LLU;
	int32_t x40 = -186957499;
	uint64_t t8 = 5LLU;

	t8 = ((x37^x38)%(x39+x40));

	if (t8 != 32767LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MIN;
	int64_t x42 = 1LL;
	int8_t x44 = 19;
	static volatile uint64_t t9 = 23522997943LLU;

	t9 = ((x41^x42)%(x43+x44));

	if (t9 != 14487949365LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x53 = 661961845U;
	int8_t x54 = INT8_MAX;
	int32_t x55 = 0;
	int32_t x56 = 388;
	volatile uint32_t t10 = 1945361U;

	t10 = ((x53^x54)%(x55+x56));

	if (t10 != 370U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 1913591449U;
	static uint32_t x58 = 5333495U;
	volatile int64_t x59 = INT64_MAX;
	int32_t x60 = -1;
	static volatile int64_t t11 = 13869LL;

	t11 = ((x57^x58)%(x59+x60));

	if (t11 != 1918793582LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x61 = UINT8_MAX;
	volatile uint16_t x63 = UINT16_MAX;
	uint16_t x64 = UINT16_MAX;
	static int32_t t12 = 23340;

	t12 = ((x61^x62)%(x63+x64));

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x66 = 450402896560248872LL;
	int32_t x67 = -49789;
	volatile int32_t x68 = 56258044;
	volatile int64_t t13 = 1060400834820LL;

	t13 = ((x65^x66)%(x67+x68));

	if (t13 != 5943792LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x69 = 14780932U;
	static uint32_t x70 = 322U;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	volatile uint32_t t14 = 343212938U;

	t14 = ((x69^x70)%(x71+x72));

	if (t14 != 14781254U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 2U;
	int32_t x74 = INT32_MIN;
	volatile int32_t x75 = -1;
	int8_t x76 = -1;
	static volatile uint32_t t15 = 508718U;

	t15 = ((x73^x74)%(x75+x76));

	if (t15 != 2147483650U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x78 = -1;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int64_t t16 = -10LL;

	t16 = ((x77^x78)%(x79+x80));

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	uint32_t x82 = UINT32_MAX;
	int64_t t17 = -234304842046LL;

	t17 = ((x81^x82)%(x83+x84));

	if (t17 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -22803471;
	uint8_t x86 = 15U;
	volatile int16_t x87 = 6;
	int16_t x88 = -1;
	static int32_t t18 = -11998274;

	t18 = ((x85^x86)%(x87+x88));

	if (t18 != -3) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = 505283740LL;
	uint32_t x90 = 194023418U;
	int8_t x91 = INT8_MIN;
	volatile int8_t x92 = -1;
	int64_t t19 = 33842189471078157LL;

	t19 = ((x89^x90)%(x91+x92));

	if (t19 != 95LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 1604927561U;
	int8_t x96 = INT8_MIN;
	static volatile uint32_t t20 = 18005U;

	t20 = ((x93^x94)%(x95+x96));

	if (t20 != 3752411209U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x98 = 39U;
	static uint64_t x99 = 731323535LLU;
	uint64_t t21 = 4357813394446LLU;

	t21 = ((x97^x98)%(x99+x100));

	if (t21 != 406522588LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = 43538869791LL;
	static int32_t x102 = INT32_MIN;
	volatile uint8_t x103 = 0U;
	static int64_t x104 = INT64_MIN;
	volatile int64_t t22 = -5648462771132LL;

	t22 = ((x101^x102)%(x103+x104));

	if (t22 != -44507959777LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	int32_t x106 = INT32_MAX;
	uint32_t x107 = 1582717U;
	static int32_t x108 = -117;
	volatile uint32_t t23 = 6U;

	t23 = ((x105^x106)%(x107+x108));

	if (t23 != 1478048U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x110 = 92;
	int16_t x112 = -1;
	int32_t t24 = -46248;

	t24 = ((x109^x110)%(x111+x112));

	if (t24 != 93) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x113 = 0U;
	static uint32_t x114 = 3850389U;
	volatile int16_t x115 = INT16_MIN;
	static int8_t x116 = -1;
	uint32_t t25 = 1U;

	t25 = ((x113^x114)%(x115+x116));

	if (t25 != 3850389U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x122 = 15U;
	uint64_t x123 = 1555LLU;
	volatile int64_t x124 = -1LL;
	uint64_t t26 = 96868347659LLU;

	t26 = ((x121^x122)%(x123+x124));

	if (t26 != 27LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = UINT16_MAX;
	int64_t x127 = INT64_MIN;
	uint16_t x128 = 784U;
	volatile int64_t t27 = -8LL;

	t27 = ((x125^x126)%(x127+x128));

	if (t27 != 65534LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 79LLU;
	volatile int32_t x130 = -1;
	volatile int64_t x131 = -23446128554431LL;
	static int16_t x132 = -1;
	uint64_t t28 = 9607611LLU;

	t28 = ((x129^x130)%(x131+x132));

	if (t28 != 23446128554352LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = -1;
	int8_t x135 = -54;
	static int32_t x136 = 69447;
	volatile uint64_t t29 = 165664600810610913LLU;

	t29 = ((x133^x134)%(x135+x136));

	if (t29 != 11074LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x138 = INT64_MIN;
	int64_t x139 = -1LL;
	uint8_t x140 = UINT8_MAX;
	volatile int64_t t30 = 680967LL;

	t30 = ((x137^x138)%(x139+x140));

	if (t30 != 127LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x142 = INT64_MIN;
	static int64_t x143 = 56566277404LL;
	uint64_t t31 = 2714LLU;

	t31 = ((x141^x142)%(x143+x144));

	if (t31 != 40863900795LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x145 = INT32_MIN;
	int16_t x146 = INT16_MIN;
	int64_t x148 = INT64_MIN;
	int64_t t32 = 395204785LL;

	t32 = ((x145^x146)%(x147+x148));

	if (t32 != 2147450880LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MIN;
	static int32_t x150 = -31539;
	int16_t x151 = -1;
	volatile uint32_t x152 = 572273179U;
	uint32_t t33 = 2752861U;

	t33 = ((x149^x150)%(x151+x152));

	if (t33 != 1229U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x157 = 2U;
	volatile int64_t x158 = INT64_MIN;
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MIN;
	int64_t t34 = 195LL;

	t34 = ((x157^x158)%(x159+x160));

	if (t34 != -126LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 1298980138935LLU;
	uint64_t x162 = 320371480261LLU;
	volatile int8_t x163 = INT8_MAX;
	uint64_t x164 = UINT64_MAX;
	uint64_t t35 = 2LLU;

	t35 = ((x161^x162)%(x163+x164));

	if (t35 != 4LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = INT32_MIN;
	volatile int16_t x167 = INT16_MIN;
	uint32_t x168 = 53790241U;
	volatile uint32_t t36 = 88250U;

	t36 = ((x165^x166)%(x167+x168));

	if (t36 != 50942073U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x170 = UINT16_MAX;
	static int8_t x171 = -1;
	int8_t x172 = -1;

	t37 = ((x169^x170)%(x171+x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = 3442LL;
	int64_t x175 = INT64_MAX;
	int16_t x176 = -1;
	int64_t t38 = -98LL;

	t38 = ((x173^x174)%(x175+x176));

	if (t38 != -9223372036854772366LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x177 = -160;
	static int32_t x178 = INT32_MIN;
	uint64_t x179 = 356LLU;
	volatile uint64_t t39 = 1072770005770LLU;

	t39 = ((x177^x178)%(x179+x180));

	if (t39 != 20029LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x181 = INT32_MIN;
	uint64_t x182 = 6910905588963496LLU;
	int16_t x183 = INT16_MIN;
	static uint16_t x184 = UINT16_MAX;

	t40 = ((x181^x182)%(x183+x184));

	if (t40 != 21409LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x185 = INT64_MIN;
	static volatile int8_t x186 = INT8_MAX;
	static int8_t x187 = 52;
	static uint64_t x188 = 18362541488714078LLU;
	volatile uint64_t t41 = 980631LLU;

	t41 = ((x185^x186)%(x187+x188));

	if (t41 != 5376209520282675LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = -16;
	static int16_t x190 = 15;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 24156U;
	static volatile int64_t t42 = -847LL;

	t42 = ((x189^x190)%(x191+x192));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MIN;
	volatile uint32_t x198 = 108251674U;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = -6896;
	volatile uint32_t t43 = 4314U;

	t43 = ((x197^x198)%(x199+x200));

	if (t43 != 4186720794U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x202 = INT16_MAX;
	volatile uint16_t x204 = 26U;
	volatile int32_t t44 = 0;

	t44 = ((x201^x202)%(x203+x204));

	if (t44 != -26) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x206 = INT64_MAX;
	volatile int32_t x207 = -391;
	volatile int16_t x208 = INT16_MIN;
	volatile int64_t t45 = 393150LL;

	t45 = ((x205^x206)%(x207+x208));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	volatile uint8_t x211 = UINT8_MAX;
	uint16_t x212 = 1127U;
	int64_t t46 = -11641978422793LL;

	t46 = ((x209^x210)%(x211+x212));

	if (t46 != 558LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x213 = -1;
	static int16_t x214 = INT16_MAX;
	static uint32_t x216 = UINT32_MAX;
	uint32_t t47 = 44U;

	t47 = ((x213^x214)%(x215+x216));

	if (t47 != 34U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x218 = -141117;
	int8_t x219 = -1;
	volatile uint32_t x220 = 8048329U;
	static volatile uint32_t t48 = 2U;

	t48 = ((x217^x218)%(x219+x220));

	if (t48 != 5400027U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x222 = UINT64_MAX;
	static uint32_t x223 = 172U;
	static volatile int64_t x224 = INT64_MIN;

	t49 = ((x221^x222)%(x223+x224));

	if (t49 != 9223372036854775635LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x225 = 0;
	int8_t x226 = -5;
	int16_t x227 = INT16_MIN;
	volatile int32_t x228 = INT32_MAX;

	t50 = ((x225^x226)%(x227+x228));

	if (t50 != -5) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = 371;
	int32_t x230 = INT32_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t51 = 3040;

	t51 = ((x229^x230)%(x231+x232));

	if (t51 != 32402) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MIN;
	int16_t x235 = 6;
	int32_t x236 = -1088;
	int64_t t52 = 4152752LL;

	t52 = ((x233^x234)%(x235+x236));

	if (t52 != 894LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x237 = -485981;
	int16_t x238 = -20;
	static uint16_t x239 = 1071U;
	volatile int64_t x240 = -241LL;
	int64_t t53 = 30LL;

	t53 = ((x237^x238)%(x239+x240));

	if (t53 != 417LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = 5445491;
	int8_t x242 = INT8_MIN;
	volatile int32_t x244 = -1;
	static volatile int32_t t54 = 9577;

	t54 = ((x241^x242)%(x243+x244));

	if (t54 != -47) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MAX;
	uint16_t x251 = 5U;

	t55 = ((x249^x250)%(x251+x252));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = INT64_MAX;
	int32_t x254 = -188467615;
	int64_t x255 = -1LL;
	static uint32_t x256 = UINT32_MAX;
	static volatile int64_t t56 = 171882218148923LL;

	t56 = ((x253^x254)%(x255+x256));

	if (t56 != -4106499682LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	static volatile uint32_t x259 = UINT32_MAX;
	uint32_t x260 = 257886U;
	static uint32_t t57 = 5U;

	t57 = ((x257^x258)%(x259+x260));

	if (t57 != 32767U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x261 = INT16_MIN;
	static int16_t x262 = INT16_MIN;
	uint64_t x263 = 1477231LLU;
	int8_t x264 = -1;
	uint64_t t58 = 292002117749LLU;

	t58 = ((x261^x262)%(x263+x264));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = -5;
	static uint8_t x266 = 25U;
	int64_t x267 = INT64_MIN;
	static volatile uint8_t x268 = 4U;
	int64_t t59 = -153575LL;

	t59 = ((x265^x266)%(x267+x268));

	if (t59 != -30LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = -5;
	int8_t x274 = INT8_MIN;
	int32_t x275 = -18861;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t60 = 45;

	t60 = ((x273^x274)%(x275+x276));

	if (t60 != 123) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x278 = INT64_MIN;
	int16_t x279 = -1;
	uint16_t x280 = 0U;
	int64_t t61 = -34577LL;

	t61 = ((x277^x278)%(x279+x280));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x281 = INT16_MIN;
	static uint16_t x282 = UINT16_MAX;
	uint16_t x283 = UINT16_MAX;
	uint32_t t62 = 38370U;

	t62 = ((x281^x282)%(x283+x284));

	if (t62 != 93762U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x286 = UINT64_MAX;
	int16_t x287 = -1;

	t63 = ((x285^x286)%(x287+x288));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MAX;
	static uint8_t x290 = UINT8_MAX;
	volatile int16_t x291 = -4606;
	static int64_t x292 = -10689155091531LL;
	static volatile int64_t t64 = 6500LL;

	t64 = ((x289^x290)%(x291+x292));

	if (t64 != 2147483392LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x293 = 29;
	int16_t x294 = -2;
	uint64_t x295 = 1960985LLU;
	static volatile uint64_t x296 = 19025237478267LLU;

	t65 = ((x293^x294)%(x295+x296));

	if (t65 != 5090086887151LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = 4U;
	uint16_t x298 = 27U;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = 576414;
	static uint32_t t66 = 2118553207U;

	t66 = ((x297^x298)%(x299+x300));

	if (t66 != 31U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = -1LL;
	int64_t x306 = INT64_MIN;
	static volatile int64_t x307 = -1LL;
	int64_t x308 = 11099753529282LL;
	int64_t t67 = 230703422281385981LL;

	t67 = ((x305^x306)%(x307+x308));

	if (t67 != 9642191670295LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x309 = INT8_MIN;
	int16_t x311 = 442;
	int32_t t68 = -113546;

	t68 = ((x309^x310)%(x311+x312));

	if (t68 != -8226) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x313 = -1;
	int8_t x314 = 1;
	static int8_t x315 = INT8_MIN;
	int64_t x316 = 182518155466315125LL;
	volatile int64_t t69 = -2120008069LL;

	t69 = ((x313^x314)%(x315+x316));

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x317 = UINT16_MAX;
	uint64_t x318 = 1986017LLU;
	volatile uint64_t t70 = 3575LLU;

	t70 = ((x317^x318)%(x319+x320));

	if (t70 != 2011678LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MIN;
	static int64_t t71 = 1308LL;

	t71 = ((x321^x322)%(x323+x324));

	if (t71 != -5376228353LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = INT16_MIN;
	static int32_t x326 = INT32_MIN;
	uint16_t x327 = 1158U;
	static uint8_t x328 = 3U;
	int32_t t72 = -29221;

	t72 = ((x325^x326)%(x327+x328));

	if (t72 != 264) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = INT8_MIN;
	volatile uint8_t x331 = 7U;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t73 = 112;

	t73 = ((x329^x330)%(x331+x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x333 = INT8_MAX;
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MIN;
	uint32_t x336 = 250U;

	t74 = ((x333^x334)%(x335+x336));

	if (t74 != 2147483775U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x337 = UINT16_MAX;
	int16_t x338 = INT16_MAX;
	int16_t x339 = -93;
	uint8_t x340 = 5U;
	volatile int32_t t75 = 1;

	t75 = ((x337^x338)%(x339+x340));

	if (t75 != 32) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x341 = INT16_MIN;
	int32_t x342 = -37913042;
	uint16_t x343 = UINT16_MAX;
	static volatile int8_t x344 = INT8_MIN;
	int32_t t76 = 189;

	t76 = ((x341^x342)%(x343+x344));

	if (t76 != 8818) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	volatile uint64_t t77 = 44862107984986955LLU;

	t77 = ((x345^x346)%(x347+x348));

	if (t77 != 70LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x350 = -1;
	int64_t x351 = 408686768263188225LL;
	volatile uint8_t x352 = 84U;
	static uint64_t t78 = 62735085657600LLU;

	t78 = ((x349^x350)%(x351+x352));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = -1LL;
	static int32_t x355 = INT32_MIN;
	int64_t x356 = -1LL;
	volatile int64_t t79 = 158411842574363LL;

	t79 = ((x353^x354)%(x355+x356));

	if (t79 != 7LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x357 = INT64_MIN;
	uint32_t x358 = 6U;
	int64_t x359 = -1LL;
	uint64_t x360 = UINT64_MAX;
	uint64_t t80 = 19655691242LLU;

	t80 = ((x357^x358)%(x359+x360));

	if (t80 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x361 = 114U;
	int64_t x362 = 792394359LL;
	volatile int64_t t81 = -17458115241864LL;

	t81 = ((x361^x362)%(x363+x364));

	if (t81 != 792394245LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = 2U;
	static int16_t x366 = 15673;
	int8_t x367 = INT8_MAX;
	static int32_t x368 = INT32_MIN;
	static int32_t t82 = -11419375;

	t82 = ((x365^x366)%(x367+x368));

	if (t82 != 15675) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = -21988121;
	static int16_t x370 = INT16_MIN;
	static uint16_t x371 = UINT16_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t83 = 5401LL;

	t83 = ((x369^x370)%(x371+x372));

	if (t83 != 22019303LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = 22226U;
	int32_t x374 = INT32_MIN;
	volatile uint32_t t84 = 33U;

	t84 = ((x373^x374)%(x375+x376));

	if (t84 != 2147505874U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = INT16_MAX;
	int64_t x378 = -1LL;
	int64_t x379 = 3826538527LL;
	uint64_t x380 = 8332284041664980LLU;
	static volatile uint64_t t85 = 28679294143LLU;

	t85 = ((x377^x378)%(x379+x380));

	if (t85 != 7391021375157857LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x382 = 758447351361LLU;
	uint32_t x383 = 77666345U;
	volatile uint64_t t86 = 698496LLU;

	t86 = ((x381^x382)%(x383+x384));

	if (t86 != 44783225LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	int16_t x392 = -1;

	t87 = ((x389^x390)%(x391+x392));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = 10U;
	int8_t x394 = INT8_MAX;
	int16_t x395 = -1;
	int32_t t88 = 1049900381;

	t88 = ((x393^x394)%(x395+x396));

	if (t88 != 117) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	static int32_t t89 = 2135032;

	t89 = ((x397^x398)%(x399+x400));

	if (t89 != 98) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = -1;
	static int16_t x403 = -1;
	static uint16_t x404 = UINT16_MAX;
	volatile int32_t t90 = 5073271;

	t90 = ((x401^x402)%(x403+x404));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = -1;
	int16_t x406 = -1;
	volatile uint32_t x407 = 21500785U;
	static uint64_t x408 = 744101LLU;
	static uint64_t t91 = 482044LLU;

	t91 = ((x405^x406)%(x407+x408));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x409 = 864019U;
	int16_t x410 = -33;
	int32_t x411 = 840;
	volatile uint32_t t92 = 218U;

	t92 = ((x409^x410)%(x411+x412));

	if (t92 != 564U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x413 = UINT32_MAX;
	int16_t x414 = 1;
	volatile int8_t x416 = INT8_MIN;
	uint32_t t93 = 3U;

	t93 = ((x413^x414)%(x415+x416));

	if (t93 != 130U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = -5329;
	int16_t x418 = INT16_MIN;
	uint8_t x419 = 6U;
	volatile int16_t x420 = INT16_MIN;
	int32_t t94 = 44358227;

	t94 = ((x417^x418)%(x419+x420));

	if (t94 != 27439) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = 1018U;
	int16_t x422 = INT16_MAX;
	int64_t x423 = -1LL;
	uint32_t x424 = UINT32_MAX;
	volatile int64_t t95 = -236914986LL;

	t95 = ((x421^x422)%(x423+x424));

	if (t95 != 31749LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x425 = UINT64_MAX;
	uint16_t x426 = UINT16_MAX;
	static volatile uint64_t t96 = 557LLU;

	t96 = ((x425^x426)%(x427+x428));

	if (t96 != 2147416069LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x431 = -1;
	uint64_t x432 = 10098LLU;
	volatile uint64_t t97 = 119132311894551LLU;

	t97 = ((x429^x430)%(x431+x432));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MIN;
	static uint64_t x434 = UINT64_MAX;
	volatile uint8_t x436 = UINT8_MAX;
	volatile uint64_t t98 = 4010351487LLU;

	t98 = ((x433^x434)%(x435+x436));

	if (t98 != 127LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x437 = -1;
	int64_t x438 = -1LL;
	uint64_t x439 = UINT64_MAX;
	volatile int64_t x440 = INT64_MIN;
	static volatile uint64_t t99 = 18LLU;

	t99 = ((x437^x438)%(x439+x440));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

