#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
int8_t x3 = -2;
int32_t x6 = 3882;
int32_t t1 = 112882;
uint16_t x12 = UINT16_MAX;
int64_t x16 = -1LL;
int64_t x27 = -1LL;
uint64_t t5 = 427344870334345515LLU;
int8_t x29 = INT8_MIN;
uint16_t x38 = 7963U;
int32_t x49 = INT32_MIN;
uint16_t x54 = 389U;
volatile int16_t x55 = 252;
volatile uint8_t x56 = 59U;
int8_t x60 = INT8_MIN;
volatile int32_t x66 = -1;
uint32_t t14 = 699254U;
int16_t x72 = 3956;
volatile int64_t x75 = 39LL;
static uint16_t x77 = UINT16_MAX;
volatile uint8_t x78 = UINT8_MAX;
int8_t x89 = INT8_MIN;
uint16_t x94 = 879U;
int8_t x97 = -1;
int16_t x105 = 767;
int16_t x108 = INT16_MAX;
int8_t x115 = 14;
uint16_t x119 = 104U;
int16_t x121 = 8008;
volatile int32_t x122 = 159575;
int32_t x137 = -407003;
uint64_t x142 = UINT64_MAX;
static int64_t x144 = -1LL;
volatile uint64_t t30 = 3LLU;
static int32_t x160 = 3429067;
uint32_t x161 = 957196U;
uint32_t x172 = UINT32_MAX;
uint32_t x174 = 4777263U;
int64_t x177 = -1LL;
volatile int8_t x180 = INT8_MIN;
int16_t x181 = 5;
uint64_t x187 = 126LLU;
static uint64_t t39 = 87016864127LLU;
volatile int64_t x191 = 1LL;
int32_t x192 = -546559533;
static volatile int16_t x193 = 1;
volatile int16_t x195 = INT16_MAX;
int8_t x196 = INT8_MIN;
volatile int32_t t41 = -295533232;
int32_t x198 = -1024;
int32_t t43 = -129670;
volatile int32_t t44 = -32682;
volatile int8_t x226 = -3;
static int32_t x229 = 2029;
volatile uint8_t x238 = UINT8_MAX;
uint64_t t49 = 1001937555043514LLU;
volatile uint64_t t50 = 5476376818102LLU;
volatile uint32_t t51 = 76207185U;
uint8_t x250 = 25U;
int64_t x251 = -3841LL;
volatile int16_t x258 = 166;
volatile uint8_t x263 = UINT8_MAX;
static uint16_t x267 = UINT16_MAX;
static uint32_t x271 = 0U;
int64_t t57 = -4854293226LL;
uint64_t x274 = 13268007LLU;
volatile uint32_t x275 = 678939924U;
int16_t x280 = INT16_MIN;
uint64_t x281 = 5577LLU;
uint8_t x282 = 115U;
uint64_t x284 = 3952LLU;
int32_t x285 = INT32_MIN;
uint16_t x291 = 0U;
int8_t x292 = INT8_MIN;
uint32_t x293 = 727827132U;
volatile int64_t x296 = -38007350057408LL;
uint16_t x298 = UINT16_MAX;
volatile uint64_t t65 = 30533488257597944LLU;
static uint8_t x306 = 1U;
uint64_t t67 = 748681LLU;
int8_t x317 = -2;
uint16_t x320 = 99U;
static int16_t x322 = -10;
int64_t t72 = 344189445890LL;
volatile int16_t x340 = INT16_MIN;
volatile uint32_t t73 = 394331201U;
volatile uint16_t x358 = 4U;
static volatile int64_t t78 = 5170582668LL;
volatile uint32_t t80 = 1198368U;
static volatile uint64_t x378 = 23160573LLU;
uint64_t x382 = UINT64_MAX;
int32_t x383 = 3513;
int16_t x389 = INT16_MAX;
int16_t x390 = 4;
int64_t t84 = 654639LL;
uint64_t x399 = UINT64_MAX;
int16_t x402 = INT16_MIN;
static uint64_t x403 = 452062198051076284LLU;
volatile uint64_t t86 = 41161993756052LLU;
uint8_t x405 = 14U;
int64_t x407 = 56549178LL;
static int8_t x409 = INT8_MAX;
int8_t x412 = INT8_MAX;
int64_t t91 = 57426946969460LL;
int8_t x428 = INT8_MAX;
int64_t x437 = INT64_MIN;
int8_t x438 = INT8_MIN;
int64_t x444 = INT64_MIN;
static volatile uint32_t t97 = 6202154U;
static volatile uint64_t x463 = UINT64_MAX;
int64_t x465 = -1LL;
int8_t x466 = 3;
uint32_t x468 = 11033654U;


void f0(void) {
	int8_t x2 = -1;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 0;

	t0 = ((x1%x2)^(x3+x4));

	if (t0 != 2147483645) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint16_t x7 = 0U;
	static volatile uint16_t x8 = 1U;

	t1 = ((x5%x6)^(x7+x8));

	if (t1 != 3422) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint16_t x10 = 3316U;
	int16_t x11 = INT16_MAX;
	volatile int32_t t2 = 36484182;

	t2 = ((x9%x10)^(x11+x12));

	if (t2 != 98049) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	int8_t x14 = 12;
	int32_t x15 = -1;
	int64_t t3 = 1LL;

	t3 = ((x13%x14)^(x15+x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 1U;
	int32_t x22 = -1;
	int16_t x23 = INT16_MIN;
	static uint64_t x24 = 288LLU;
	volatile uint64_t t4 = 1416810LLU;

	t4 = ((x21%x22)^(x23+x24));

	if (t4 != 18446744073709519136LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 1877777770934086LL;
	uint64_t x26 = 2449672148LLU;
	volatile int16_t x28 = -1;

	t5 = ((x25%x26)^(x27+x28));

	if (t5 != 18446744072526289744LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MAX;
	volatile int8_t x31 = INT8_MIN;
	uint32_t x32 = UINT32_MAX;
	static volatile uint32_t t6 = 114177U;

	t6 = ((x29%x30)^(x31+x32));

	if (t6 != 128U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	int16_t x34 = INT16_MAX;
	static int32_t x35 = INT32_MIN;
	static volatile uint8_t x36 = 2U;
	volatile int32_t t7 = 12;

	t7 = ((x33%x34)^(x35+x36));

	if (t7 != 2147483644) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	static uint32_t x39 = 46U;
	static uint16_t x40 = UINT16_MAX;
	uint32_t t8 = 1391246364U;

	t8 = ((x37%x38)^(x39+x40));

	if (t8 != 65746U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	int16_t x46 = INT16_MIN;
	static uint8_t x47 = 1U;
	volatile uint64_t x48 = 2473481029574LLU;
	uint64_t t9 = 108838410349956LLU;

	t9 = ((x45%x46)^(x47+x48));

	if (t9 != 2473481025592LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = -1;
	int32_t x51 = INT32_MIN;
	int64_t x52 = -269965036LL;
	volatile int64_t t10 = -50061296240165LL;

	t10 = ((x49%x50)^(x51+x52));

	if (t10 != -2417448684LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	volatile int32_t t11 = -2;

	t11 = ((x53%x54)^(x55+x56));

	if (t11 != -312) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	int8_t x58 = -1;
	volatile uint64_t x59 = 2711785667400084071LLU;
	uint64_t t12 = 190LLU;

	t12 = ((x57%x58)^(x59+x60));

	if (t12 != 2711785667400083943LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MAX;
	static volatile int8_t x62 = -1;
	int32_t x63 = -28279464;
	int8_t x64 = INT8_MIN;
	volatile int32_t t13 = -3;

	t13 = ((x61%x62)^(x63+x64));

	if (t13 != -28279592) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 2;
	uint32_t x67 = 18U;
	int8_t x68 = 26;

	t14 = ((x65%x66)^(x67+x68));

	if (t14 != 44U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = 4;
	uint16_t x71 = 11U;
	int32_t t15 = 4;

	t15 = ((x69%x70)^(x71+x72));

	if (t15 != 3967) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	int16_t x74 = INT16_MIN;
	int64_t x76 = -1LL;
	int64_t t16 = 304512007LL;

	t16 = ((x73%x74)^(x75+x76));

	if (t16 != -39LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x79 = 3U;
	static int32_t x80 = -40927553;
	static int32_t t17 = -15742;

	t17 = ((x77%x78)^(x79+x80));

	if (t17 != -40927550) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x90 = INT32_MIN;
	static int32_t x91 = INT32_MIN;
	int64_t x92 = -1LL;
	volatile int64_t t18 = 2143418492LL;

	t18 = ((x89%x90)^(x91+x92));

	if (t18 != 2147483775LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x93 = UINT8_MAX;
	static int8_t x95 = INT8_MAX;
	static int32_t x96 = -1;
	int32_t t19 = -214651023;

	t19 = ((x93%x94)^(x95+x96));

	if (t19 != 129) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x98 = -1LL;
	int64_t x99 = -1LL;
	int16_t x100 = -1;
	volatile int64_t t20 = 464LL;

	t20 = ((x97%x98)^(x99+x100));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x106 = 6766636;
	int8_t x107 = 0;
	int32_t t21 = -423;

	t21 = ((x105%x106)^(x107+x108));

	if (t21 != 32000) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x109 = 29U;
	volatile uint64_t x110 = UINT64_MAX;
	int8_t x111 = -1;
	uint64_t x112 = UINT64_MAX;
	uint64_t t22 = 22202970LLU;

	t22 = ((x109%x110)^(x111+x112));

	if (t22 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -12;
	static volatile int64_t x114 = 179426LL;
	uint32_t x116 = 0U;
	volatile int64_t t23 = 348173095214279426LL;

	t23 = ((x113%x114)^(x115+x116));

	if (t23 != -6LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x117 = UINT16_MAX;
	uint32_t x118 = 1376379691U;
	volatile uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t24 = 2508406984791767003LLU;

	t24 = ((x117%x118)^(x119+x120));

	if (t24 != 65432LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x123 = UINT16_MAX;
	static int64_t x124 = INT64_MIN;
	volatile int64_t t25 = -980033264049033LL;

	t25 = ((x121%x122)^(x123+x124));

	if (t25 != -9223372036854718281LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = UINT64_MAX;
	static volatile uint16_t x126 = UINT16_MAX;
	static uint8_t x127 = 2U;
	int16_t x128 = -1;
	static uint64_t t26 = 3359268736030721613LLU;

	t26 = ((x125%x126)^(x127+x128));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x138 = -1;
	uint32_t x139 = UINT32_MAX;
	uint64_t x140 = UINT64_MAX;
	uint64_t t27 = 25948648549LLU;

	t27 = ((x137%x138)^(x139+x140));

	if (t27 != 4294967294LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile int16_t x143 = INT16_MIN;
	static volatile uint64_t t28 = 521731LLU;

	t28 = ((x141%x142)^(x143+x144));

	if (t28 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = -3576;
	int8_t x146 = INT8_MIN;
	int32_t x147 = -39392;
	volatile int32_t x148 = -1;
	volatile int32_t t29 = 263;

	t29 = ((x145%x146)^(x147+x148));

	if (t29 != 39319) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x149 = 1368067887288867090LLU;
	int16_t x150 = -19;
	int16_t x151 = INT16_MIN;
	static volatile int16_t x152 = INT16_MIN;

	t30 = ((x149%x150)^(x151+x152));

	if (t30 != 17078676186420730130LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = UINT16_MAX;
	volatile uint16_t x154 = 16255U;
	uint64_t x155 = UINT64_MAX;
	uint64_t x156 = UINT64_MAX;
	uint64_t t31 = 732573089653349116LLU;

	t31 = ((x153%x154)^(x155+x156));

	if (t31 != 18446744073709551101LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -1;
	static int64_t x158 = 69779832935LL;
	uint8_t x159 = UINT8_MAX;
	volatile int64_t t32 = -1LL;

	t32 = ((x157%x158)^(x159+x160));

	if (t32 != -3429323LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x162 = INT32_MIN;
	int64_t x163 = INT64_MIN;
	int8_t x164 = 4;
	volatile int64_t t33 = 843213986165LL;

	t33 = ((x161%x162)^(x163+x164));

	if (t33 != -9223372036853818616LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x165 = INT64_MIN;
	volatile int8_t x166 = -37;
	uint16_t x167 = 3906U;
	int8_t x168 = INT8_MIN;
	volatile int64_t t34 = 1417326269LL;

	t34 = ((x165%x166)^(x167+x168));

	if (t34 != -3784LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = INT64_MAX;
	int64_t x170 = -46548768866659583LL;
	volatile uint64_t x171 = 2LLU;
	volatile uint64_t t35 = 64070383507LLU;

	t35 = ((x169%x170)^(x171+x172));

	if (t35 != 6715805551145668LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = 1;
	static int8_t x175 = 39;
	int8_t x176 = INT8_MIN;
	static uint32_t t36 = 2321266U;

	t36 = ((x173%x174)^(x175+x176));

	if (t36 != 4294967206U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x178 = INT64_MIN;
	int32_t x179 = INT32_MAX;
	volatile int64_t t37 = 1LL;

	t37 = ((x177%x178)^(x179+x180));

	if (t37 != -2147483520LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x182 = -15155247;
	int16_t x183 = INT16_MIN;
	static int64_t x184 = -1LL;
	static int64_t t38 = 3LL;

	t38 = ((x181%x182)^(x183+x184));

	if (t38 != -32774LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 38U;
	int64_t x188 = -1LL;

	t39 = ((x185%x186)^(x187+x188));

	if (t39 != 94LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x189 = INT16_MAX;
	int8_t x190 = INT8_MAX;
	volatile int64_t t40 = -11413773329384LL;

	t40 = ((x189%x190)^(x191+x192));

	if (t40 != -546559531LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x194 = -211938967;

	t41 = ((x193%x194)^(x195+x196));

	if (t41 != 32638) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x197 = 1;
	int32_t x199 = -1;
	volatile uint32_t x200 = 6788U;
	uint32_t t42 = 68U;

	t42 = ((x197%x198)^(x199+x200));

	if (t42 != 6786U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = 9U;
	static volatile uint8_t x202 = 2U;
	volatile int32_t x203 = -1;
	static int8_t x204 = INT8_MAX;

	t43 = ((x201%x202)^(x203+x204));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = -43;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = 0;
	volatile int16_t x208 = INT16_MIN;

	t44 = ((x205%x206)^(x207+x208));

	if (t44 != 32725) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = INT32_MIN;
	static int8_t x210 = INT8_MAX;
	int64_t x211 = -64695420LL;
	uint32_t x212 = UINT32_MAX;
	static int64_t t45 = 4124LL;

	t45 = ((x209%x210)^(x211+x212));

	if (t45 != -4230271877LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	volatile int16_t x223 = -2254;
	int32_t x224 = -1;
	uint32_t t46 = 29027U;

	t46 = ((x221%x222)^(x223+x224));

	if (t46 != 4294965070U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x225 = -1670;
	static uint16_t x227 = 49U;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t47 = 606;

	t47 = ((x225%x226)^(x227+x228));

	if (t47 != 32719) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x230 = INT8_MIN;
	int16_t x231 = -5;
	int16_t x232 = INT16_MAX;
	volatile int32_t t48 = 281782184;

	t48 = ((x229%x230)^(x231+x232));

	if (t48 != 32663) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x237 = UINT64_MAX;
	uint8_t x239 = 4U;
	static int16_t x240 = INT16_MAX;

	t49 = ((x237%x238)^(x239+x240));

	if (t49 != 32771LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x241 = -3396199;
	uint16_t x242 = UINT16_MAX;
	uint16_t x243 = UINT16_MAX;
	uint64_t x244 = UINT64_MAX;

	t50 = ((x241%x242)^(x243+x244));

	if (t50 != 18446744073709539992LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = -1;
	uint32_t x246 = 209U;
	static uint16_t x247 = UINT16_MAX;
	static uint8_t x248 = 4U;

	t51 = ((x245%x246)^(x247+x248));

	if (t51 != 65694U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x249 = INT16_MIN;
	int16_t x252 = INT16_MAX;
	int64_t t52 = 3245198210420465906LL;

	t52 = ((x249%x250)^(x251+x252));

	if (t52 != -28912LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = 124U;
	static int8_t x254 = -1;
	int8_t x255 = INT8_MIN;
	int32_t x256 = 6135;
	int32_t t53 = 90;

	t53 = ((x253%x254)^(x255+x256));

	if (t53 != 6007) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x257 = -1;
	uint8_t x259 = 2U;
	int8_t x260 = -1;
	volatile int32_t t54 = 8775;

	t54 = ((x257%x258)^(x259+x260));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = 6U;
	int64_t x262 = INT64_MAX;
	uint32_t x264 = UINT32_MAX;
	static volatile int64_t t55 = 21763005643LL;

	t55 = ((x261%x262)^(x263+x264));

	if (t55 != 248LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x265 = 358U;
	int32_t x266 = 15172127;
	static volatile int8_t x268 = INT8_MIN;
	uint32_t t56 = 241700555U;

	t56 = ((x265%x266)^(x267+x268));

	if (t56 != 65049U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = 20813069;
	uint16_t x270 = 3775U;
	int64_t x272 = -1LL;

	t57 = ((x269%x270)^(x271+x272));

	if (t57 != -1495LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = -1;
	static int32_t x276 = INT32_MIN;
	uint64_t t58 = 1309997289LLU;

	t58 = ((x273%x274)^(x275+x276));

	if (t58 != 2823488979LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = -1;
	int8_t x278 = 1;
	int64_t x279 = -1LL;
	static int64_t t59 = 40279298675263352LL;

	t59 = ((x277%x278)^(x279+x280));

	if (t59 != -32769LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x283 = -4604409606LL;
	uint64_t t60 = 1236258890066755034LLU;

	t60 = ((x281%x282)^(x283+x284));

	if (t60 != 18446744069105145939LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MAX;
	static int32_t x288 = INT32_MIN;
	static int32_t t61 = -823446;

	t61 = ((x285%x286)^(x287+x288));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x289 = 506982U;
	int16_t x290 = INT16_MIN;
	uint32_t t62 = 849460449U;

	t62 = ((x289%x290)^(x291+x292));

	if (t62 != 4294460390U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x294 = UINT16_MAX;
	static uint32_t x295 = 948463090U;
	volatile int64_t t63 = 1LL;

	t63 = ((x293%x294)^(x295+x296));

	if (t63 != -38006401539537LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = 508;
	uint8_t x299 = 0U;
	int32_t x300 = 6651916;
	static volatile int32_t t64 = -1568065;

	t64 = ((x297%x298)^(x299+x300));

	if (t64 != 6652400) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x301 = 1U;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MIN;
	uint64_t x304 = UINT64_MAX;

	t65 = ((x301%x302)^(x303+x304));

	if (t65 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x305 = 18U;
	uint64_t x307 = UINT64_MAX;
	volatile int64_t x308 = INT64_MAX;
	volatile uint64_t t66 = 5496LLU;

	t66 = ((x305%x306)^(x307+x308));

	if (t66 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x309 = -150431LL;
	int8_t x310 = -9;
	volatile int32_t x311 = INT32_MIN;
	uint64_t x312 = UINT64_MAX;

	t67 = ((x309%x310)^(x311+x312));

	if (t67 != 2147483652LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x318 = INT32_MIN;
	static uint8_t x319 = 2U;
	static int32_t t68 = -777;

	t68 = ((x317%x318)^(x319+x320));

	if (t68 != -101) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x321 = INT64_MAX;
	int64_t x323 = -931091796262291LL;
	int8_t x324 = INT8_MIN;
	int64_t t69 = 3499032976786LL;

	t69 = ((x321%x322)^(x323+x324));

	if (t69 != -931091796262422LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = INT64_MIN;
	static int16_t x326 = -1;
	volatile int32_t x327 = INT32_MAX;
	uint64_t x328 = 3798712483885061LLU;
	uint64_t t70 = 1587LLU;

	t70 = ((x325%x326)^(x327+x328));

	if (t70 != 3798714631368708LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x329 = -6565;
	int8_t x330 = -1;
	int64_t x331 = -1LL;
	volatile int16_t x332 = 0;
	int64_t t71 = -29181484812470999LL;

	t71 = ((x329%x330)^(x331+x332));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = -1LL;
	int8_t x334 = INT8_MIN;
	uint16_t x335 = UINT16_MAX;
	int16_t x336 = INT16_MIN;

	t72 = ((x333%x334)^(x335+x336));

	if (t72 != -32768LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x337 = 923322;
	uint32_t x338 = 7U;
	int16_t x339 = INT16_MIN;

	t73 = ((x337%x338)^(x339+x340));

	if (t73 != 4294901761U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = INT32_MAX;
	uint32_t x346 = UINT32_MAX;
	uint64_t x347 = 0LLU;
	int8_t x348 = -1;
	uint64_t t74 = 71110687556804286LLU;

	t74 = ((x345%x346)^(x347+x348));

	if (t74 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x349 = INT32_MAX;
	volatile int32_t x350 = INT32_MIN;
	int64_t x351 = -703743211687570784LL;
	static int64_t x352 = -1LL;
	int64_t t75 = 410493158LL;

	t75 = ((x349%x350)^(x351+x352));

	if (t75 != -703743210018902688LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x353 = UINT64_MAX;
	uint8_t x354 = 6U;
	static int16_t x355 = INT16_MAX;
	static volatile uint32_t x356 = UINT32_MAX;
	static uint64_t t76 = 16522084LLU;

	t76 = ((x353%x354)^(x355+x356));

	if (t76 != 32765LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x357 = -85;
	uint32_t x359 = 5666953U;
	int32_t x360 = INT32_MIN;
	uint32_t t77 = 156U;

	t77 = ((x357%x358)^(x359+x360));

	if (t77 != 2141816694U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	int64_t x363 = -6LL;
	int16_t x364 = INT16_MIN;

	t78 = ((x361%x362)^(x363+x364));

	if (t78 != -32774LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MAX;
	int64_t x368 = 480850819LL;
	volatile int64_t t79 = 507LL;

	t79 = ((x365%x366)^(x367+x368));

	if (t79 != 2628373629LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = INT16_MIN;
	volatile uint16_t x370 = 544U;
	volatile uint16_t x371 = 12268U;
	uint32_t x372 = 3U;

	t80 = ((x369%x370)^(x371+x372));

	if (t80 != 4294955119U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x377 = INT64_MIN;
	uint8_t x379 = 3U;
	int64_t x380 = INT64_MIN;
	uint64_t t81 = 1055114176882602LLU;

	t81 = ((x377%x378)^(x379+x380));

	if (t81 != 9223372036873224796LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x381 = INT32_MIN;
	int8_t x384 = INT8_MAX;
	volatile uint64_t t82 = 1335118LLU;

	t82 = ((x381%x382)^(x383+x384));

	if (t82 != 18446744071562071608LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x391 = -1;
	int8_t x392 = -1;
	int32_t t83 = 790401897;

	t83 = ((x389%x390)^(x391+x392));

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x393 = 1;
	int32_t x394 = -1;
	static int8_t x395 = 23;
	int64_t x396 = -1LL;

	t84 = ((x393%x394)^(x395+x396));

	if (t84 != 22LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x397 = 1LLU;
	int8_t x398 = INT8_MIN;
	int16_t x400 = 3;
	uint64_t t85 = 179972340881111LLU;

	t85 = ((x397%x398)^(x399+x400));

	if (t85 != 3LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x401 = -1;
	int64_t x404 = -483603607417739663LL;

	t86 = ((x401%x402)^(x403+x404));

	if (t86 != 31541409366663378LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x406 = INT8_MAX;
	int16_t x408 = INT16_MIN;
	static int64_t t87 = -1791743601418621LL;

	t87 = ((x405%x406)^(x407+x408));

	if (t87 != 56516404LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x410 = 1929922059LLU;
	uint8_t x411 = UINT8_MAX;
	static volatile uint64_t t88 = 59386703579380LLU;

	t88 = ((x409%x410)^(x411+x412));

	if (t88 != 257LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = -1;
	uint8_t x414 = UINT8_MAX;
	static uint16_t x415 = 3680U;
	static uint32_t x416 = 24U;
	volatile uint32_t t89 = 1876743U;

	t89 = ((x413%x414)^(x415+x416));

	if (t89 != 4294963591U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = INT64_MAX;
	uint8_t x418 = 26U;
	static uint8_t x419 = 100U;
	int32_t x420 = -55981;
	int64_t t90 = 298043746239339LL;

	t90 = ((x417%x418)^(x419+x420));

	if (t90 != -55888LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x421 = UINT8_MAX;
	int64_t x422 = INT64_MAX;
	static int32_t x423 = INT32_MIN;
	uint8_t x424 = UINT8_MAX;

	t91 = ((x421%x422)^(x423+x424));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x425 = 6;
	int16_t x426 = 113;
	int16_t x427 = INT16_MIN;
	int32_t t92 = -638817;

	t92 = ((x425%x426)^(x427+x428));

	if (t92 != -32647) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x429 = -516960997043318LL;
	static int16_t x430 = -1;
	int64_t x431 = 952LL;
	static uint64_t x432 = 550511239468LLU;
	uint64_t t93 = 266694008190LLU;

	t93 = ((x429%x430)^(x431+x432));

	if (t93 != 550511240420LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x433 = UINT64_MAX;
	int32_t x434 = -20;
	int16_t x435 = INT16_MIN;
	uint64_t x436 = UINT64_MAX;
	uint64_t t94 = 0LLU;

	t94 = ((x433%x434)^(x435+x436));

	if (t94 != 18446744073709518828LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x439 = INT32_MAX;
	uint32_t x440 = 1762U;
	volatile int64_t t95 = -16122327855LL;

	t95 = ((x437%x438)^(x439+x440));

	if (t95 != 2147485409LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x441 = -29;
	uint64_t x442 = UINT64_MAX;
	static uint64_t x443 = 69367930524931543LLU;
	uint64_t t96 = 6201349608351035850LLU;

	t96 = ((x441%x442)^(x443+x444));

	if (t96 != 9154004106329844276LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x453 = INT8_MIN;
	uint32_t x454 = 7818028U;
	static uint8_t x455 = 4U;
	volatile int8_t x456 = -1;

	t97 = ((x453%x454)^(x455+x456));

	if (t97 != 2869799U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = 5;
	int32_t x462 = -431998201;
	static int32_t x464 = INT32_MIN;
	uint64_t t98 = 29609531LLU;

	t98 = ((x461%x462)^(x463+x464));

	if (t98 != 18446744071562067962LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x467 = -2;
	int64_t t99 = 4921643499385810LL;

	t99 = ((x465%x466)^(x467+x468));

	if (t99 != -11033653LL) { NG(); } else { ; }
	
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

