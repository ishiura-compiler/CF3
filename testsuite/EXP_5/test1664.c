#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
int64_t x2 = INT64_MIN;
uint32_t x18 = UINT32_MAX;
int64_t x21 = 436038LL;
uint32_t x23 = 150690U;
volatile int64_t t5 = -29405357LL;
uint8_t x25 = 73U;
uint16_t x27 = UINT16_MAX;
volatile uint16_t x28 = 0U;
volatile int32_t t6 = 441065;
static uint64_t t7 = 37536LLU;
volatile uint64_t t8 = 2654LLU;
volatile uint64_t x46 = 699LLU;
static volatile uint64_t x49 = 37754377787LLU;
uint32_t x50 = UINT32_MAX;
uint8_t x57 = 54U;
static volatile uint16_t x69 = 1U;
int8_t x71 = INT8_MIN;
int8_t x78 = INT8_MIN;
static uint64_t x79 = UINT64_MAX;
volatile uint64_t x81 = 168736052877LLU;
uint64_t x90 = 110723322006176LLU;
int8_t x92 = INT8_MAX;
static volatile int32_t t22 = -29062;
static volatile int8_t x94 = INT8_MAX;
int64_t x108 = INT64_MIN;
int16_t x111 = INT16_MIN;
static volatile int32_t t27 = 2;
int16_t x116 = INT16_MIN;
volatile int32_t t28 = INT32_MIN;
uint64_t x118 = 18559325591436LLU;
int32_t x120 = 50583;
static int8_t x124 = INT8_MAX;
uint64_t x126 = 1056709272LLU;
volatile int32_t x130 = INT32_MIN;
volatile uint32_t t33 = UINT32_MAX;
uint8_t x137 = 1U;
volatile int32_t x141 = 1;
volatile uint16_t x147 = UINT16_MAX;
int16_t x151 = INT16_MIN;
static volatile uint64_t t39 = 17039890115054LLU;
volatile int8_t x163 = -8;
int8_t x166 = INT8_MIN;
int16_t x172 = 1015;
int64_t t42 = 14803207291LL;
int32_t t45 = 100272;
uint64_t x186 = UINT64_MAX;
static uint16_t x187 = UINT16_MAX;
int8_t x188 = INT8_MAX;
uint32_t x195 = 296432533U;
static int32_t t48 = 14;
uint32_t x200 = UINT32_MAX;
volatile uint64_t t49 = 1LLU;
int32_t x202 = INT32_MIN;
int16_t x203 = INT16_MAX;
uint16_t x205 = 147U;
int16_t x206 = 0;
volatile uint32_t x207 = 114006208U;
volatile int32_t x208 = INT32_MIN;
int8_t x210 = -1;
uint32_t x212 = UINT32_MAX;
static volatile int16_t x230 = -1;
static volatile uint64_t t57 = 126021092921LLU;
int32_t t58 = INT32_MAX;
static uint64_t x237 = 3LLU;
uint64_t t59 = 564528799608598348LLU;
static volatile int8_t x241 = -1;
static uint64_t x243 = UINT64_MAX;
uint32_t x249 = UINT32_MAX;
static volatile int32_t t63 = 16731197;
uint32_t x259 = 496896U;
int64_t x261 = -4363403956LL;
volatile int64_t t65 = -930841268377LL;
static int8_t x269 = INT8_MAX;
int64_t x278 = INT64_MIN;
int64_t x284 = INT64_MIN;
static volatile int64_t x286 = INT64_MIN;
uint32_t x288 = 529573489U;
volatile int32_t t72 = 34618274;
uint8_t x307 = 0U;
static int64_t x309 = 880549049200LL;
uint16_t x314 = 18340U;
int16_t x318 = INT16_MIN;
int8_t x324 = INT8_MIN;
volatile int32_t t80 = INT32_MIN;
int32_t x326 = 1516;
int32_t t82 = -18272478;
int64_t x333 = -20964440395489LL;
uint32_t t85 = 78927U;
int32_t x346 = 4105925;
int32_t t88 = 51;
int32_t x358 = 1;
static int64_t x360 = -834013670LL;
int32_t x362 = -1;
uint64_t x363 = 2LLU;
volatile uint16_t x364 = 43U;
volatile int32_t t90 = -710076159;
uint64_t x370 = 15LLU;
int8_t x371 = INT8_MIN;
uint8_t x373 = 2U;
static volatile int64_t x374 = INT64_MAX;
volatile int64_t t93 = 52226998203LL;
int64_t x378 = 422909232650LL;
int64_t t95 = 1LL;
int8_t x386 = -1;
volatile int64_t t96 = 35249609387843954LL;
int64_t x389 = -1LL;
int32_t x392 = INT32_MIN;
uint32_t x395 = 101U;
static volatile uint64_t x397 = UINT64_MAX;


void f0(void) {
	int64_t x3 = INT64_MAX;
	static volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 54;

	t0 = (x1^((x2<=x3)&x4));

	if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	static int8_t x7 = INT8_MAX;
	volatile int64_t x8 = -1906257LL;
	volatile int64_t t1 = -482624733699299LL;

	t1 = (x5^((x6<=x7)&x8));

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint16_t x10 = 1U;
	int8_t x11 = INT8_MIN;
	int16_t x12 = -1;
	int32_t t2 = INT32_MIN;

	t2 = (x9^((x10<=x11)&x12));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = INT64_MIN;
	static uint64_t x14 = 507590LLU;
	int8_t x15 = -27;
	int64_t x16 = -1LL;
	int64_t t3 = -158LL;

	t3 = (x13^((x14<=x15)&x16));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	int32_t x19 = 258;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 4506;

	t4 = (x17^((x18<=x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x22 = 7490U;
	int16_t x24 = -1;

	t5 = (x21^((x22<=x23)&x24));

	if (t5 != 436039LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 6047354116LLU;

	t6 = (x25^((x26<=x27)&x28));

	if (t6 != 73) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MAX;
	volatile int16_t x30 = -1;
	uint16_t x31 = UINT16_MAX;
	static volatile uint64_t x32 = 129666LLU;

	t7 = (x29^((x30<=x31)&x32));

	if (t7 != 127LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint16_t x34 = UINT16_MAX;
	uint64_t x35 = 2132LLU;
	static uint64_t x36 = 795285LLU;

	t8 = (x33^((x34<=x35)&x36));

	if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 313LLU;

	t9 = (x37^((x38<=x39)&x40));

	if (t9 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 5;
	int8_t x42 = -1;
	static uint16_t x43 = 247U;
	int32_t x44 = -1;
	volatile int32_t t10 = -23;

	t10 = (x41^((x42<=x43)&x44));

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = INT16_MIN;
	int64_t x47 = INT64_MAX;
	int32_t x48 = -14784515;
	int32_t t11 = -102660323;

	t11 = (x45^((x46<=x47)&x48));

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = -1;
	int8_t x52 = -1;
	uint64_t t12 = 5817311094377969814LLU;

	t12 = (x49^((x50<=x51)&x52));

	if (t12 != 37754377786LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MAX;
	int64_t x54 = INT64_MIN;
	uint16_t x55 = UINT16_MAX;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 91023283063431052LL;

	t13 = (x53^((x54<=x55)&x56));

	if (t13 != 2147483646LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x58 = UINT16_MAX;
	int64_t x59 = INT64_MAX;
	volatile int8_t x60 = INT8_MAX;
	static volatile int32_t t14 = -634545146;

	t14 = (x57^((x58<=x59)&x60));

	if (t14 != 55) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -46;
	int16_t x62 = -1;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = 896;

	t15 = (x61^((x62<=x63)&x64));

	if (t15 != -46) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	int64_t x66 = INT64_MIN;
	static int64_t x67 = -1LL;
	static uint32_t x68 = 127U;
	volatile uint32_t t16 = 26467U;

	t16 = (x65^((x66<=x67)&x68));

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int16_t x72 = -7;
	volatile int32_t t17 = -56140411;

	t17 = (x69^((x70<=x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int64_t x74 = 11466017342LL;
	uint32_t x75 = 1U;
	int64_t x76 = 453101LL;
	volatile int64_t t18 = -498809733117LL;

	t18 = (x73^((x74<=x75)&x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MAX;
	int16_t x80 = INT16_MIN;
	int64_t t19 = INT64_MAX;

	t19 = (x77^((x78<=x79)&x80));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	uint64_t x83 = 14217LLU;
	volatile uint64_t x84 = 476LLU;
	volatile uint64_t t20 = 7132397588358128591LLU;

	t20 = (x81^((x82<=x83)&x84));

	if (t20 != 168736052877LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x85 = INT64_MIN;
	int64_t x86 = -1LL;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = 2692400LLU;
	static uint64_t t21 = 3506056146954LLU;

	t21 = (x85^((x86<=x87)&x88));

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -1;
	uint64_t x91 = 1402765LLU;

	t22 = (x89^((x90<=x91)&x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 5667U;
	static int32_t x95 = INT32_MAX;
	uint32_t x96 = 44340U;
	static uint32_t t23 = 439649U;

	t23 = (x93^((x94<=x95)&x96));

	if (t23 != 5667U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MAX;
	int8_t x98 = INT8_MIN;
	volatile int16_t x99 = -572;
	static int8_t x100 = INT8_MAX;
	int32_t t24 = -1;

	t24 = (x97^((x98<=x99)&x100));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint64_t x102 = 55002616372416640LLU;
	int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MIN;
	int64_t t25 = INT64_MIN;

	t25 = (x101^((x102<=x103)&x104));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	volatile uint8_t x106 = UINT8_MAX;
	uint16_t x107 = 1U;
	int64_t t26 = -863LL;

	t26 = (x105^((x106<=x107)&x108));

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x109 = -3945;
	int64_t x110 = INT64_MAX;
	int8_t x112 = -1;

	t27 = (x109^((x110<=x111)&x112));

	if (t27 != -3945) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	static int64_t x114 = 1149562239651LL;
	static uint64_t x115 = UINT64_MAX;

	t28 = (x113^((x114<=x115)&x116));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int64_t x119 = INT64_MAX;
	static int32_t t29 = -461;

	t29 = (x117^((x118<=x119)&x120));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = UINT8_MAX;
	int32_t x122 = INT32_MIN;
	volatile int64_t x123 = INT64_MIN;
	static int32_t t30 = -56084;

	t30 = (x121^((x122<=x123)&x124));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 15131LL;
	volatile int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MIN;
	int64_t t31 = 92352885723LL;

	t31 = (x125^((x126<=x127)&x128));

	if (t31 != 15131LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	int16_t x131 = INT16_MIN;
	uint64_t x132 = 13649575903LLU;
	static volatile uint64_t t32 = 107574633LLU;

	t32 = (x129^((x130<=x131)&x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 3550745U;

	t33 = (x133^((x134<=x135)&x136));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MIN;
	int16_t x139 = -326;
	volatile int8_t x140 = INT8_MIN;
	static int32_t t34 = 345;

	t34 = (x137^((x138<=x139)&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = -36;
	uint32_t x143 = UINT32_MAX;
	static int32_t x144 = INT32_MAX;
	static volatile int32_t t35 = 122128;

	t35 = (x141^((x142<=x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	static int16_t x146 = -1;
	int64_t x148 = INT64_MIN;
	volatile int64_t t36 = -55413713LL;

	t36 = (x145^((x146<=x147)&x148));

	if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MAX;
	uint8_t x150 = UINT8_MAX;
	uint32_t x152 = 261328U;
	volatile uint32_t t37 = 19U;

	t37 = (x149^((x150<=x151)&x152));

	if (t37 != 2147483647U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MIN;
	int8_t x154 = INT8_MIN;
	static int64_t x155 = INT64_MAX;
	int64_t x156 = INT64_MIN;
	volatile int64_t t38 = -53041701LL;

	t38 = (x153^((x154<=x155)&x156));

	if (t38 != -2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	static int32_t x158 = -1;
	volatile uint32_t x159 = 13U;
	static uint64_t x160 = UINT64_MAX;

	t39 = (x157^((x158<=x159)&x160));

	if (t39 != 32767LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = 0;
	static int32_t x162 = 25967;
	static int16_t x164 = -748;
	int32_t t40 = -28864;

	t40 = (x161^((x162<=x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	volatile int8_t x167 = INT8_MIN;
	volatile uint32_t x168 = 33046977U;
	volatile uint32_t t41 = 32U;

	t41 = (x165^((x166<=x167)&x168));

	if (t41 != 4294967169U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -1LL;
	int32_t x170 = INT32_MAX;
	int32_t x171 = INT32_MIN;

	t42 = (x169^((x170<=x171)&x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MIN;
	volatile int8_t x175 = INT8_MIN;
	static uint32_t x176 = 163268U;
	uint32_t t43 = 337757306U;

	t43 = (x173^((x174<=x175)&x176));

	if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 11U;
	uint16_t x178 = UINT16_MAX;
	static uint64_t x179 = 19231503633LLU;
	int64_t x180 = 13704982219632LL;
	int64_t t44 = -2370533311126724561LL;

	t44 = (x177^((x178<=x179)&x180));

	if (t44 != 11LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -34;
	volatile int8_t x182 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MIN;

	t45 = (x181^((x182<=x183)&x184));

	if (t45 != -34) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = 5;
	volatile int32_t t46 = -85380;

	t46 = (x185^((x186<=x187)&x188));

	if (t46 != 5) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static int16_t x190 = INT16_MIN;
	uint16_t x191 = UINT16_MAX;
	uint8_t x192 = 3U;
	static volatile int32_t t47 = 8366044;

	t47 = (x189^((x190<=x191)&x192));

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	static int64_t x194 = INT64_MIN;
	volatile int32_t x196 = INT32_MIN;

	t48 = (x193^((x194<=x195)&x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 3472707107133LLU;
	static int64_t x198 = INT64_MIN;
	volatile uint32_t x199 = UINT32_MAX;

	t49 = (x197^((x198<=x199)&x200));

	if (t49 != 3472707107132LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -666524047LL;
	int64_t x204 = -7LL;
	int64_t t50 = -24616LL;

	t50 = (x201^((x202<=x203)&x204));

	if (t50 != -666524048LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t t51 = -57;

	t51 = (x205^((x206<=x207)&x208));

	if (t51 != 147) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = 15;
	static uint8_t x211 = 84U;
	volatile uint32_t t52 = 445U;

	t52 = (x209^((x210<=x211)&x212));

	if (t52 != 14U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = -238;
	int32_t x214 = -1318;
	int32_t x215 = INT32_MAX;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = -738;

	t53 = (x213^((x214<=x215)&x216));

	if (t53 != -237) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = 1;
	volatile int8_t x218 = INT8_MIN;
	static int8_t x219 = 0;
	uint16_t x220 = 11064U;
	volatile int32_t t54 = -719822;

	t54 = (x217^((x218<=x219)&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	volatile int32_t x222 = -1;
	volatile int32_t x223 = INT32_MIN;
	static int64_t x224 = INT64_MAX;
	int64_t t55 = -7887183LL;

	t55 = (x221^((x222<=x223)&x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 15;
	static volatile int16_t x226 = INT16_MIN;
	volatile int16_t x227 = INT16_MIN;
	uint16_t x228 = 14U;
	int32_t t56 = 5534;

	t56 = (x225^((x226<=x227)&x228));

	if (t56 != 15) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 6U;
	int64_t x231 = INT64_MAX;
	uint64_t x232 = UINT64_MAX;

	t57 = (x229^((x230<=x231)&x232));

	if (t57 != 7LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	int8_t x234 = INT8_MIN;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MIN;

	t58 = (x233^((x234<=x235)&x236));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	static int64_t x239 = INT64_MIN;
	int64_t x240 = 254777LL;

	t59 = (x237^((x238<=x239)&x240));

	if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = 12071;
	int64_t x244 = 3LL;
	int64_t t60 = 186765889465LL;

	t60 = (x241^((x242<=x243)&x244));

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	uint16_t x246 = 4U;
	int64_t x247 = INT64_MAX;
	uint8_t x248 = 2U;
	static volatile int32_t t61 = 0;

	t61 = (x245^((x246<=x247)&x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = INT8_MIN;
	int8_t x252 = 22;
	static uint32_t t62 = UINT32_MAX;

	t62 = (x249^((x250<=x251)&x252));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MAX;
	int16_t x254 = -7168;
	int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;

	t63 = (x253^((x254<=x255)&x256));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = -1;
	int16_t x260 = INT16_MAX;
	int32_t t64 = 5;

	t64 = (x257^((x258<=x259)&x260));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = 951;
	int16_t x263 = INT16_MAX;
	static uint8_t x264 = 106U;

	t65 = (x261^((x262<=x263)&x264));

	if (t65 != -4363403956LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 13U;
	volatile int32_t x266 = INT32_MIN;
	uint16_t x267 = 7U;
	volatile uint32_t x268 = 146U;
	volatile uint32_t t66 = 113U;

	t66 = (x265^((x266<=x267)&x268));

	if (t66 != 13U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = UINT16_MAX;
	static int32_t x271 = INT32_MAX;
	int16_t x272 = -1;
	int32_t t67 = 27;

	t67 = (x269^((x270<=x271)&x272));

	if (t67 != 126) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MAX;
	static int64_t x274 = 13972916952LL;
	static int64_t x275 = INT64_MAX;
	int8_t x276 = INT8_MAX;
	int32_t t68 = 32913;

	t68 = (x273^((x274<=x275)&x276));

	if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = UINT32_MAX;
	uint64_t x279 = 14LLU;
	int64_t x280 = INT64_MIN;
	static int64_t t69 = -22225LL;

	t69 = (x277^((x278<=x279)&x280));

	if (t69 != 4294967295LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -47862533LL;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = INT16_MIN;
	volatile int64_t t70 = 7786414265387364LL;

	t70 = (x281^((x282<=x283)&x284));

	if (t70 != -47862533LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 1209634LL;
	uint64_t x287 = 4571587023337597LLU;
	int64_t t71 = 1676120148780LL;

	t71 = (x285^((x286<=x287)&x288));

	if (t71 != 1209634LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MAX;
	volatile int64_t x290 = INT64_MIN;
	int8_t x291 = -1;
	uint8_t x292 = UINT8_MAX;

	t72 = (x289^((x290<=x291)&x292));

	if (t72 != 32766) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	int64_t x294 = INT64_MAX;
	int32_t x295 = -206339379;
	int32_t x296 = 3001637;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x293^((x294<=x295)&x296));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	int32_t x298 = -1;
	int32_t x299 = -1737535;
	int8_t x300 = INT8_MIN;
	static int32_t t74 = 1;

	t74 = (x297^((x298<=x299)&x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -1LL;
	static uint16_t x302 = 4747U;
	static int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	int64_t t75 = 24339537681534687LL;

	t75 = (x301^((x302<=x303)&x304));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 1U;
	int64_t x306 = INT64_MIN;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 56;

	t76 = (x305^((x306<=x307)&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = -27431887944LL;
	volatile int8_t x311 = -1;
	int64_t x312 = INT64_MAX;
	volatile int64_t t77 = 1LL;

	t77 = (x309^((x310<=x311)&x312));

	if (t77 != 880549049201LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x313 = 8U;
	int64_t x315 = -1LL;
	uint8_t x316 = UINT8_MAX;
	uint32_t t78 = 1U;

	t78 = (x313^((x314<=x315)&x316));

	if (t78 != 8U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	int16_t x319 = 1;
	int64_t x320 = INT64_MAX;
	volatile int64_t t79 = -1958071LL;

	t79 = (x317^((x318<=x319)&x320));

	if (t79 != 32766LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x321 = INT32_MIN;
	static int8_t x322 = INT8_MIN;
	int16_t x323 = 1;

	t80 = (x321^((x322<=x323)&x324));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MIN;
	int32_t x327 = -1;
	int16_t x328 = -3996;
	static volatile int32_t t81 = INT32_MIN;

	t81 = (x325^((x326<=x327)&x328));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	uint8_t x330 = 40U;
	static int64_t x331 = 181351336202677800LL;
	int16_t x332 = -1267;

	t82 = (x329^((x330<=x331)&x332));

	if (t82 != 126) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = 727U;
	int16_t x335 = INT16_MAX;
	int16_t x336 = -199;
	int64_t t83 = -5641054661423029LL;

	t83 = (x333^((x334<=x335)&x336));

	if (t83 != -20964440395490LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = UINT32_MAX;
	volatile int64_t t84 = 576935469006273LL;

	t84 = (x337^((x338<=x339)&x340));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	static int32_t x342 = INT32_MIN;
	int8_t x343 = 0;
	uint32_t x344 = 23U;

	t85 = (x341^((x342<=x343)&x344));

	if (t85 != 2147483649U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = -78275;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = 307920473430249178LLU;
	uint64_t t86 = 422267033125LLU;

	t86 = (x345^((x346<=x347)&x348));

	if (t86 != 18446744073709473341LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 96LLU;
	static int16_t x350 = -5;
	uint64_t x351 = 0LLU;
	uint8_t x352 = 0U;
	uint64_t t87 = 153188832796263070LLU;

	t87 = (x349^((x350<=x351)&x352));

	if (t87 != 96LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 21;
	volatile int32_t x354 = -613527;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MAX;

	t88 = (x353^((x354<=x355)&x356));

	if (t88 != 20) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	volatile int64_t x359 = INT64_MIN;
	volatile int64_t t89 = INT64_MAX;

	t89 = (x357^((x358<=x359)&x360));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = 48;

	t90 = (x361^((x362<=x363)&x364));

	if (t90 != 48) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 450681718U;
	uint8_t x366 = 37U;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = UINT16_MAX;
	static volatile uint32_t t91 = 1793835U;

	t91 = (x365^((x366<=x367)&x368));

	if (t91 != 450681718U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	static uint64_t x372 = UINT64_MAX;
	volatile uint64_t t92 = 5160332LLU;

	t92 = (x369^((x370<=x371)&x372));

	if (t92 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x375 = UINT64_MAX;
	int64_t x376 = INT64_MAX;

	t93 = (x373^((x374<=x375)&x376));

	if (t93 != 3LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 18042U;
	int64_t x379 = -1LL;
	static volatile int16_t x380 = -3156;
	int32_t t94 = 370;

	t94 = (x377^((x378<=x379)&x380));

	if (t94 != 18042) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	static int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	static volatile int8_t x384 = -5;

	t95 = (x381^((x382<=x383)&x384));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MAX;
	int32_t x387 = 57263;
	volatile int64_t x388 = INT64_MIN;

	t96 = (x385^((x386<=x387)&x388));

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x390 = INT32_MIN;
	volatile int32_t x391 = INT32_MIN;
	volatile int64_t t97 = -7374590660169966LL;

	t97 = (x389^((x390<=x391)&x392));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 2U;
	uint8_t x394 = 57U;
	uint16_t x396 = 437U;
	int32_t t98 = -2193;

	t98 = (x393^((x394<=x395)&x396));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x398 = 29U;
	int16_t x399 = INT16_MAX;
	int64_t x400 = -1LL;
	uint64_t t99 = 2764005LLU;

	t99 = (x397^((x398<=x399)&x400));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

