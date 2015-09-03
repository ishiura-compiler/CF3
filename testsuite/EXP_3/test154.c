#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 1;
volatile int32_t t0 = -414214;
volatile uint32_t t1 = 163243U;
volatile uint16_t x9 = 1304U;
volatile int64_t x12 = -1LL;
volatile int64_t t2 = -13LL;
uint64_t x15 = 17770089668407044LLU;
int32_t x16 = -3215413;
int16_t x20 = 0;
volatile int32_t t6 = 8;
volatile int16_t x32 = INT16_MAX;
static uint32_t t7 = 92920U;
volatile int16_t x43 = -24;
volatile uint64_t x50 = 3161446LLU;
int8_t x58 = INT8_MIN;
static uint64_t t14 = 11013LLU;
int8_t x61 = -1;
volatile int64_t x63 = 26808777LL;
int64_t x64 = INT64_MIN;
static int64_t t15 = -2170653808759LL;
uint16_t x68 = 86U;
int8_t x70 = INT8_MIN;
static int16_t x74 = -1;
int16_t x76 = INT16_MIN;
int16_t x79 = 3;
static volatile int8_t x81 = INT8_MAX;
volatile int32_t x90 = -4723;
int8_t x105 = INT8_MIN;
volatile uint16_t x119 = 1653U;
volatile uint16_t x121 = UINT16_MAX;
static uint64_t t29 = 65670949103770761LLU;
static uint32_t x126 = UINT32_MAX;
static int64_t x128 = -80382LL;
static volatile uint64_t x134 = UINT64_MAX;
volatile uint64_t t32 = 39667120438685LLU;
uint32_t x143 = 5354U;
static uint32_t x152 = UINT32_MAX;
int64_t t35 = -4456300985628028LL;
static int64_t x156 = 77372559083662962LL;
int8_t x161 = -1;
int16_t x163 = INT16_MAX;
int32_t x167 = 6982;
uint32_t x173 = 3U;
int8_t x179 = 0;
static int16_t x181 = INT16_MIN;
int16_t x187 = -63;
uint64_t x189 = UINT64_MAX;
int8_t x193 = -1;
int8_t x196 = -1;
static int8_t x200 = INT8_MAX;
volatile int64_t t46 = 777LL;
int64_t x205 = INT64_MIN;
int64_t t47 = -8987099787954871LL;
volatile uint32_t x219 = 14978U;
int16_t x227 = -1;
int8_t x232 = 0;
static uint64_t x237 = 6257826719281LLU;
int32_t x241 = -1;
int32_t x247 = 4013;
volatile uint32_t t56 = 212167U;
int64_t x252 = 2995411526491517513LL;
uint32_t x255 = UINT32_MAX;
uint8_t x259 = 3U;
volatile int64_t t59 = 139344LL;
int32_t x262 = -127;
uint8_t x268 = UINT8_MAX;
volatile uint32_t x276 = 749U;
uint64_t x283 = 4LLU;
volatile uint64_t t64 = 58145066183148423LLU;
int64_t x286 = 3210650059LL;
int32_t x290 = INT32_MIN;
int32_t x292 = INT32_MAX;
volatile int8_t x295 = INT8_MAX;
uint16_t x317 = UINT16_MAX;
int8_t x319 = INT8_MIN;
int8_t x320 = 9;
int32_t x321 = INT32_MIN;
uint32_t x323 = 27U;
volatile uint64_t t74 = 101245793696LLU;
static uint64_t x326 = UINT64_MAX;
volatile int8_t x335 = 0;
uint32_t x336 = 315U;
int32_t x338 = -1;
static int64_t x340 = 77LL;
static uint8_t x341 = 10U;
static volatile uint64_t t79 = 36302365LLU;
int32_t x345 = INT32_MIN;
int8_t x349 = INT8_MIN;
int8_t x350 = INT8_MAX;
int32_t t81 = -41;
volatile int64_t t82 = -31404124715432349LL;
volatile int32_t t83 = -242;
int32_t x370 = INT32_MAX;
int16_t x390 = 118;
static volatile int32_t x397 = 125;
static uint32_t x402 = 21U;
volatile uint32_t x404 = 47703U;
uint16_t x407 = UINT16_MAX;
static uint64_t x411 = 1LLU;
int8_t x412 = INT8_MIN;
static volatile int64_t t95 = -1569820899620075872LL;
volatile int8_t x428 = -1;
int64_t x431 = 116608425964LL;
int8_t x432 = INT8_MIN;
int64_t t98 = 541719081598920114LL;
volatile int32_t t99 = 5769877;


void f0(void) {
	static int16_t x1 = -1;
	static uint8_t x2 = UINT8_MAX;
	volatile int16_t x3 = INT16_MIN;

	t0 = ((x1|x2)&(x3+x4));

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	static uint32_t x6 = 21U;
	uint8_t x7 = UINT8_MAX;
	volatile int16_t x8 = 1;

	t1 = ((x5|x6)&(x7+x8));

	if (t1 != 256U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = INT8_MAX;
	volatile uint32_t x11 = 3421593U;

	t2 = ((x9|x10)&(x11+x12));

	if (t2 != 1304LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -3138;
	int16_t x14 = INT16_MIN;
	uint64_t t3 = 1700761388862035LLU;

	t3 = ((x13|x14)&(x15+x16));

	if (t3 != 17770089665188494LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = UINT64_MAX;
	uint64_t x19 = 847743436LLU;
	uint64_t t4 = 2889829LLU;

	t4 = ((x17|x18)&(x19+x20));

	if (t4 != 847743436LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MIN;
	uint16_t x23 = 7U;
	int16_t x24 = 1;
	static int32_t t5 = 117;

	t5 = ((x21|x22)&(x23+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MAX;
	int32_t x27 = INT32_MAX;
	static volatile int16_t x28 = INT16_MIN;

	t6 = ((x25|x26)&(x27+x28));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint32_t x30 = 432425U;
	int16_t x31 = INT16_MIN;

	t7 = ((x29|x30)&(x31+x32));

	if (t7 != 458751U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int32_t x34 = INT32_MIN;
	static volatile int32_t x35 = -1;
	int16_t x36 = -192;
	volatile int32_t t8 = INT32_MIN;

	t8 = ((x33|x34)&(x35+x36));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MIN;
	static volatile int64_t x40 = -19643LL;
	volatile int64_t t9 = 1770516971179LL;

	t9 = ((x37|x38)&(x39+x40));

	if (t9 != -2147516416LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint8_t x42 = 11U;
	static int8_t x44 = 1;
	int32_t t10 = -14229;

	t10 = ((x41|x42)&(x43+x44));

	if (t10 != -32759) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 279184822LLU;
	int32_t x46 = -1;
	static uint32_t x47 = 97683151U;
	volatile uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 521307124157132337LLU;

	t11 = ((x45|x46)&(x47+x48));

	if (t11 != 97683150LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 6554LLU;
	volatile uint16_t x51 = 13305U;
	uint8_t x52 = 19U;
	volatile uint64_t t12 = 770LLU;

	t12 = ((x49|x50)&(x51+x52));

	if (t12 != 13324LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	volatile int64_t x54 = 3643185894972LL;
	int32_t x55 = -1;
	static uint32_t x56 = UINT32_MAX;
	int64_t t13 = -14LL;

	t13 = ((x53|x54)&(x55+x56));

	if (t13 != 1053628158LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	uint64_t x59 = 1979911243758274487LLU;
	uint16_t x60 = 221U;

	t14 = ((x57|x58)&(x59+x60));

	if (t14 != 1979911243758274708LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x62 = -49;

	t15 = ((x61|x62)&(x63+x64));

	if (t15 != -9223372036827967031LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 210;
	int64_t x66 = INT64_MIN;
	uint8_t x67 = 116U;
	int64_t t16 = 837974617769170744LL;

	t16 = ((x65|x66)&(x67+x68));

	if (t16 != 194LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int32_t x71 = INT32_MAX;
	uint32_t x72 = UINT32_MAX;
	int64_t t17 = -1553248LL;

	t17 = ((x69|x70)&(x71+x72));

	if (t17 != 2147483520LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int64_t x75 = 32962700LL;
	static volatile int64_t t18 = -12159785750269LL;

	t18 = ((x73|x74)&(x75+x76));

	if (t18 != 32929932LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	int64_t x80 = 511327LL;
	int64_t t19 = -106400249459LL;

	t19 = ((x77|x78)&(x79+x80));

	if (t19 != 511232LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MAX;
	int16_t x83 = INT16_MAX;
	static int16_t x84 = -1;
	int32_t t20 = -8311518;

	t20 = ((x81|x82)&(x83+x84));

	if (t20 != 32766) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 28897;
	int64_t x86 = INT64_MAX;
	static int16_t x87 = INT16_MAX;
	int32_t x88 = INT32_MIN;
	volatile int64_t t21 = 798436654LL;

	t21 = ((x85|x86)&(x87+x88));

	if (t21 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 131U;
	volatile uint64_t x91 = 58599613306279LLU;
	int64_t x92 = -1LL;
	uint64_t t22 = 488850LLU;

	t22 = ((x89|x90)&(x91+x92));

	if (t22 != 58599613302150LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	static uint8_t x94 = UINT8_MAX;
	int64_t x95 = INT64_MAX;
	int16_t x96 = INT16_MIN;
	static int64_t t23 = -60804380466860152LL;

	t23 = ((x93|x94)&(x95+x96));

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	volatile uint16_t x98 = 1821U;
	int64_t x99 = -1LL;
	volatile uint64_t x100 = 254124071LLU;
	volatile uint64_t t24 = 51082317696897LLU;

	t24 = ((x97|x98)&(x99+x100));

	if (t24 != 254124070LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 1;
	int32_t x102 = INT32_MIN;
	volatile int16_t x103 = INT16_MIN;
	volatile uint8_t x104 = UINT8_MAX;
	static int32_t t25 = -2;

	t25 = ((x101|x102)&(x103+x104));

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x106 = INT32_MAX;
	int16_t x107 = INT16_MAX;
	uint64_t x108 = 2869524729904LLU;
	volatile uint64_t t26 = 11LLU;

	t26 = ((x105|x106)&(x107+x108));

	if (t26 != 2869524762671LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = UINT16_MAX;
	uint32_t x110 = 419U;
	int16_t x111 = 1;
	int16_t x112 = INT16_MIN;
	uint32_t t27 = 449136212U;

	t27 = ((x109|x110)&(x111+x112));

	if (t27 != 32769U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 128782357U;
	int32_t x118 = INT32_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile uint32_t t28 = 6U;

	t28 = ((x117|x118)&(x119+x120));

	if (t28 != 20U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x122 = UINT64_MAX;
	int64_t x123 = -14604080169LL;
	volatile uint64_t x124 = UINT64_MAX;

	t29 = ((x121|x122)&(x123+x124));

	if (t29 != 18446744059105471446LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 13U;
	uint64_t x127 = 75LLU;
	uint64_t t30 = 4077394309786188828LLU;

	t30 = ((x125|x126)&(x127+x128));

	if (t30 != 4294886989LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -4;
	uint8_t x135 = 7U;
	int8_t x136 = INT8_MIN;
	volatile uint64_t t31 = 3448865621211768591LLU;

	t31 = ((x133|x134)&(x135+x136));

	if (t31 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = 11;
	int64_t x138 = -538LL;
	uint8_t x139 = 27U;
	volatile uint64_t x140 = 6187010018882061043LLU;

	t32 = ((x137|x138)&(x139+x140));

	if (t32 != 6187010018882060558LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x141 = INT8_MAX;
	volatile int32_t x142 = INT32_MIN;
	static uint32_t x144 = 340727365U;
	static uint32_t t33 = 1896581605U;

	t33 = ((x141|x142)&(x143+x144));

	if (t33 != 47U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = -1;
	static int8_t x147 = INT8_MIN;
	uint8_t x148 = 22U;
	uint32_t t34 = 89891420U;

	t34 = ((x145|x146)&(x147+x148));

	if (t34 != 4294967190U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x149 = UINT16_MAX;
	volatile int64_t x150 = -187756278460LL;
	int16_t x151 = INT16_MIN;

	t35 = ((x149|x150)&(x151+x152));

	if (t35 != 1222279167LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x153 = 509U;
	int64_t x154 = -2058505397LL;
	uint8_t x155 = 13U;
	volatile int64_t t36 = -49327360LL;

	t36 = ((x153|x154)&(x155+x156));

	if (t36 != 77372558102045311LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x162 = INT32_MIN;
	int8_t x164 = -1;
	volatile int32_t t37 = 23612946;

	t37 = ((x161|x162)&(x163+x164));

	if (t37 != 32766) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 13U;
	int16_t x166 = INT16_MIN;
	volatile uint64_t x168 = 2565764084LLU;
	static volatile uint64_t t38 = 344644497237248721LLU;

	t38 = ((x165|x166)&(x167+x168));

	if (t38 != 2565767176LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x169 = INT32_MIN;
	volatile uint32_t x170 = 144252U;
	int64_t x171 = -225LL;
	int8_t x172 = 2;
	volatile int64_t t39 = 2075306LL;

	t39 = ((x169|x170)&(x171+x172));

	if (t39 != 2147627808LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x174 = 1670168U;
	uint16_t x175 = 430U;
	int64_t x176 = INT64_MIN;
	volatile int64_t t40 = -1108338140094028LL;

	t40 = ((x173|x174)&(x175+x176));

	if (t40 != 10LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 8250U;
	int32_t x178 = 209728048;
	int8_t x180 = INT8_MAX;
	volatile int32_t t41 = 287;

	t41 = ((x177|x178)&(x179+x180));

	if (t41 != 58) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x182 = 0LL;
	volatile int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MAX;
	volatile int64_t t42 = 8854326010633LL;

	t42 = ((x181|x182)&(x183+x184));

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x185 = 5578161LLU;
	int8_t x186 = -1;
	static int8_t x188 = INT8_MIN;
	volatile uint64_t t43 = 14LLU;

	t43 = ((x185|x186)&(x187+x188));

	if (t43 != 18446744073709551425LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x190 = 1LL;
	int32_t x191 = -58;
	static int8_t x192 = -1;
	volatile uint64_t t44 = 5569341612382115695LLU;

	t44 = ((x189|x190)&(x191+x192));

	if (t44 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x194 = -1;
	uint8_t x195 = UINT8_MAX;
	volatile int32_t t45 = 254771;

	t45 = ((x193|x194)&(x195+x196));

	if (t45 != 254) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -1LL;
	uint32_t x198 = UINT32_MAX;
	int16_t x199 = 70;

	t46 = ((x197|x198)&(x199+x200));

	if (t46 != 197LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x206 = 29771U;
	int32_t x207 = 280206409;
	volatile uint16_t x208 = UINT16_MAX;

	t47 = ((x205|x206)&(x207+x208));

	if (t47 != 5192LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -1;
	uint16_t x210 = 813U;
	int8_t x211 = INT8_MIN;
	uint64_t x212 = UINT64_MAX;
	uint64_t t48 = 405572409816778040LLU;

	t48 = ((x209|x210)&(x211+x212));

	if (t48 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = -1;
	int16_t x214 = INT16_MIN;
	int64_t x215 = -873610427826LL;
	static int8_t x216 = -14;
	volatile int64_t t49 = 209595761927LL;

	t49 = ((x213|x214)&(x215+x216));

	if (t49 != -873610427840LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x217 = -1;
	int16_t x218 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	volatile uint32_t t50 = 420084676U;

	t50 = ((x217|x218)&(x219+x220));

	if (t50 != 47745U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x221 = 1433U;
	uint32_t x222 = 3175U;
	uint16_t x223 = 195U;
	static volatile uint32_t x224 = UINT32_MAX;
	volatile uint32_t t51 = 2492231U;

	t51 = ((x221|x222)&(x223+x224));

	if (t51 != 194U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MIN;
	uint16_t x228 = UINT16_MAX;
	static int64_t t52 = -116892LL;

	t52 = ((x225|x226)&(x227+x228));

	if (t52 != 32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = UINT32_MAX;
	volatile int16_t x230 = -1;
	volatile int16_t x231 = INT16_MIN;
	static uint32_t t53 = 52U;

	t53 = ((x229|x230)&(x231+x232));

	if (t53 != 4294934528U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x238 = UINT8_MAX;
	volatile uint8_t x239 = 108U;
	volatile uint32_t x240 = UINT32_MAX;
	volatile uint64_t t54 = 700417233408217954LLU;

	t54 = ((x237|x238)&(x239+x240));

	if (t54 != 107LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = 190277196785722314LL;
	uint64_t x244 = 38612568267499718LLU;
	static volatile uint64_t t55 = 8251415805LLU;

	t55 = ((x241|x242)&(x243+x244));

	if (t55 != 1387809936LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x245 = 0U;
	uint32_t x246 = 34147U;
	static volatile uint32_t x248 = 24301824U;

	t56 = ((x245|x246)&(x247+x248));

	if (t56 != 32801U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = INT64_MIN;
	uint32_t x250 = UINT32_MAX;
	static uint32_t x251 = 13270U;
	int64_t t57 = 1491555645LL;

	t57 = ((x249|x250)&(x251+x252));

	if (t57 != 3097716255LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x253 = INT32_MAX;
	int8_t x254 = -1;
	volatile uint32_t x256 = UINT32_MAX;
	volatile uint32_t t58 = 420256605U;

	t58 = ((x253|x254)&(x255+x256));

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x257 = -1;
	int64_t x258 = INT64_MAX;
	int64_t x260 = INT64_MIN;

	t59 = ((x257|x258)&(x259+x260));

	if (t59 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x261 = INT16_MIN;
	int64_t x263 = 4LL;
	int32_t x264 = -1;
	volatile int64_t t60 = 1899007357707435206LL;

	t60 = ((x261|x262)&(x263+x264));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = 6634U;
	int8_t x266 = -1;
	volatile int32_t x267 = INT32_MIN;
	volatile int32_t t61 = 101847;

	t61 = ((x265|x266)&(x267+x268));

	if (t61 != -2147483393) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 917LLU;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = UINT8_MAX;
	static volatile uint64_t x272 = 31860LLU;
	uint64_t t62 = 6491396375551238LLU;

	t62 = ((x269|x270)&(x271+x272));

	if (t62 != 273LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x273 = -1;
	volatile int32_t x274 = 8084712;
	static uint16_t x275 = 2U;
	volatile uint32_t t63 = 232813U;

	t63 = ((x273|x274)&(x275+x276));

	if (t63 != 751U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x281 = UINT8_MAX;
	int64_t x282 = -1LL;
	volatile int32_t x284 = 2;

	t64 = ((x281|x282)&(x283+x284));

	if (t64 != 6LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = -6476148928196LL;
	int8_t x287 = -1;
	int8_t x288 = -1;
	volatile int64_t t65 = 50271379539282404LL;

	t65 = ((x285|x286)&(x287+x288));

	if (t65 != -6473597865474LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x289 = 172U;
	uint32_t x291 = UINT32_MAX;
	volatile uint32_t t66 = 150886282U;

	t66 = ((x289|x290)&(x291+x292));

	if (t66 != 172U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x293 = -2LL;
	uint32_t x294 = 25940U;
	int32_t x296 = -132975690;
	int64_t t67 = -1LL;

	t67 = ((x293|x294)&(x295+x296));

	if (t67 != -132975564LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x297 = INT64_MIN;
	int64_t x298 = -3LL;
	uint16_t x299 = UINT16_MAX;
	static int64_t x300 = -1LL;
	int64_t t68 = -19757296698625178LL;

	t68 = ((x297|x298)&(x299+x300));

	if (t68 != 65532LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = -1;
	volatile uint32_t x302 = UINT32_MAX;
	int64_t x303 = -702513429LL;
	uint32_t x304 = UINT32_MAX;
	int64_t t69 = -52026905954212LL;

	t69 = ((x301|x302)&(x303+x304));

	if (t69 != 3592453866LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MAX;
	uint64_t x306 = 133677458784LLU;
	volatile uint8_t x307 = 49U;
	uint16_t x308 = UINT16_MAX;
	volatile uint64_t t70 = 10769731314573303LLU;

	t70 = ((x305|x306)&(x307+x308));

	if (t70 != 48LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = INT64_MAX;
	static uint16_t x310 = 3U;
	uint64_t x311 = 143718281301104LLU;
	uint32_t x312 = UINT32_MAX;
	uint64_t t71 = 684261LLU;

	t71 = ((x309|x310)&(x311+x312));

	if (t71 != 143722576268399LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MIN;
	static volatile uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MAX;
	int32_t x316 = 1;
	uint64_t t72 = 10LLU;

	t72 = ((x313|x314)&(x315+x316));

	if (t72 != 32768LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x318 = 24;
	volatile int32_t t73 = 72592;

	t73 = ((x317|x318)&(x319+x320));

	if (t73 != 65417) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x322 = 7736LLU;
	uint32_t x324 = 833788859U;

	t74 = ((x321|x322)&(x323+x324));

	if (t74 != 6672LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = -1;
	int8_t x327 = -1;
	uint64_t x328 = UINT64_MAX;
	uint64_t t75 = 1397659281LLU;

	t75 = ((x325|x326)&(x327+x328));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x329 = 20964050992481LLU;
	uint8_t x330 = 27U;
	int8_t x331 = INT8_MIN;
	uint16_t x332 = UINT16_MAX;
	uint64_t t76 = 473294LLU;

	t76 = ((x329|x330)&(x331+x332));

	if (t76 != 64891LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x333 = INT64_MIN;
	volatile uint16_t x334 = 1803U;
	int64_t t77 = 467505574839600LL;

	t77 = ((x333|x334)&(x335+x336));

	if (t77 != 267LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x337 = 75U;
	uint16_t x339 = UINT16_MAX;
	volatile int64_t t78 = 993915380379576415LL;

	t78 = ((x337|x338)&(x339+x340));

	if (t78 != 65612LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x342 = 99318841188713498LLU;
	int32_t x343 = 1;
	int32_t x344 = INT32_MIN;

	t79 = ((x341|x342)&(x343+x344));

	if (t79 != 99318840239849472LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x346 = -1;
	int16_t x347 = -1;
	static int16_t x348 = -12887;
	int32_t t80 = 1;

	t80 = ((x345|x346)&(x347+x348));

	if (t80 != -12888) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x351 = 97U;
	int16_t x352 = -7;

	t81 = ((x349|x350)&(x351+x352));

	if (t81 != 90) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = 366973122U;
	int8_t x354 = -7;
	volatile int64_t x355 = -1287856589578LL;
	static uint8_t x356 = 59U;

	t82 = ((x353|x354)&(x355+x356));

	if (t82 != 633599281LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x357 = UINT8_MAX;
	int16_t x358 = 310;
	int8_t x359 = INT8_MAX;
	int32_t x360 = -14431;

	t83 = ((x357|x358)&(x359+x360));

	if (t83 != 32) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x361 = 3204U;
	uint8_t x362 = 72U;
	volatile int16_t x363 = 4423;
	int32_t x364 = INT32_MIN;
	volatile uint32_t t84 = 2371U;

	t84 = ((x361|x362)&(x363+x364));

	if (t84 != 68U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x365 = 32;
	volatile int16_t x366 = INT16_MAX;
	volatile uint32_t x367 = UINT32_MAX;
	static int16_t x368 = INT16_MIN;
	static volatile uint32_t t85 = 2812683U;

	t85 = ((x365|x366)&(x367+x368));

	if (t85 != 32767U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x369 = 26194U;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 1U;
	volatile int32_t t86 = 185587287;

	t86 = ((x369|x370)&(x371+x372));

	if (t86 != 2147483521) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x373 = UINT64_MAX;
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = 156649196302619548LLU;
	volatile uint64_t t87 = 251006234376439LLU;

	t87 = ((x373|x374)&(x375+x376));

	if (t87 != 156649196302619675LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = INT64_MIN;
	volatile int8_t x378 = INT8_MIN;
	uint32_t x379 = 47953483U;
	volatile int8_t x380 = INT8_MIN;
	static int64_t t88 = 7993979062309LL;

	t88 = ((x377|x378)&(x379+x380));

	if (t88 != 47953280LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MAX;
	int32_t x386 = INT32_MIN;
	static volatile int64_t x387 = 13786LL;
	uint64_t x388 = 10230010040LLU;
	uint64_t t89 = 4762726359145273LLU;

	t89 = ((x385|x386)&(x387+x388));

	if (t89 != 8589952658LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MAX;
	volatile uint64_t x391 = 1649347511LLU;
	int8_t x392 = -1;
	static uint64_t t90 = 0LLU;

	t90 = ((x389|x390)&(x391+x392));

	if (t90 != 1649347510LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x398 = -1;
	static int8_t x399 = -13;
	volatile int8_t x400 = -1;
	static volatile int32_t t91 = -194166;

	t91 = ((x397|x398)&(x399+x400));

	if (t91 != -14) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x401 = -203572LL;
	static int32_t x403 = INT32_MAX;
	volatile int64_t t92 = 2130476567809LL;

	t92 = ((x401|x402)&(x403+x404));

	if (t92 != 2147524692LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x405 = INT32_MIN;
	int16_t x406 = INT16_MIN;
	int64_t x408 = INT64_MIN;
	static volatile int64_t t93 = 64893423110976631LL;

	t93 = ((x405|x406)&(x407+x408));

	if (t93 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x409 = 15433U;
	int64_t x410 = -6916477LL;
	static uint64_t t94 = 804612186619LLU;

	t94 = ((x409|x410)&(x411+x412));

	if (t94 != 18446744073702637185LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x417 = UINT32_MAX;
	int64_t x418 = INT64_MIN;
	volatile int32_t x419 = INT32_MAX;
	int8_t x420 = INT8_MIN;

	t95 = ((x417|x418)&(x419+x420));

	if (t95 != 2147483519LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x421 = INT16_MIN;
	uint64_t x422 = 1139LLU;
	volatile int32_t x423 = -1;
	static int32_t x424 = -1;
	uint64_t t96 = 6777866735770512LLU;

	t96 = ((x421|x422)&(x423+x424));

	if (t96 != 18446744073709519986LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x425 = 6122391597412068127LLU;
	static int16_t x426 = -14;
	uint64_t x427 = UINT64_MAX;
	volatile uint64_t t97 = 73387268755648234LLU;

	t97 = ((x425|x426)&(x427+x428));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x429 = 14477;
	int32_t x430 = INT32_MIN;

	t98 = ((x429|x430)&(x431+x432));

	if (t98 != 115964123148LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x433 = INT16_MIN;
	int8_t x434 = -5;
	volatile int8_t x435 = INT8_MIN;
	uint16_t x436 = UINT16_MAX;

	t99 = ((x433|x434)&(x435+x436));

	if (t99 != 65403) { NG(); } else { ; }
	
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

