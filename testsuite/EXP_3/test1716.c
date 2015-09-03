#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int32_t x8 = INT32_MIN;
static volatile uint16_t x10 = UINT16_MAX;
uint64_t t3 = 984LLU;
int8_t x28 = -31;
volatile int64_t t5 = 22LL;
uint8_t x32 = 23U;
volatile uint64_t t6 = 822362LLU;
uint16_t x51 = 17369U;
uint16_t x52 = UINT16_MAX;
int8_t x58 = -1;
int64_t x77 = -1LL;
int32_t x80 = -1;
int64_t t17 = 32685384994LL;
int8_t x86 = INT8_MIN;
int8_t x87 = -37;
uint64_t t18 = 3178687865514662497LLU;
uint16_t x92 = 54U;
uint64_t t19 = 649029796LLU;
static volatile uint32_t x93 = 572248U;
uint8_t x94 = 6U;
volatile int64_t t20 = -80872LL;
uint16_t x97 = UINT16_MAX;
uint32_t t21 = 5855842U;
int8_t x102 = INT8_MAX;
int32_t t22 = -34129;
static volatile int64_t t23 = INT64_MIN;
static int16_t x109 = INT16_MIN;
uint16_t x124 = UINT16_MAX;
volatile int64_t x128 = -1LL;
volatile int32_t x136 = INT32_MIN;
uint64_t t29 = 26735LLU;
volatile uint16_t x145 = 11849U;
volatile int16_t x147 = INT16_MIN;
volatile int64_t x148 = -1LL;
uint8_t x162 = 6U;
uint64_t x168 = 1046618LLU;
static volatile int32_t x171 = 257015519;
static int32_t x179 = -25505;
volatile uint32_t x184 = UINT32_MAX;
uint8_t x194 = 7U;
uint8_t x196 = 13U;
static int16_t x197 = 54;
int32_t x199 = -31779;
int64_t x204 = INT64_MAX;
static uint32_t x208 = 29801210U;
int16_t x211 = INT16_MIN;
static uint32_t t45 = 2U;
static int16_t x219 = INT16_MIN;
int16_t x225 = INT16_MIN;
static int64_t x229 = INT64_MIN;
int32_t x232 = -2;
uint64_t t49 = 397682LLU;
int64_t x233 = INT64_MIN;
int32_t x235 = INT32_MIN;
static uint16_t x247 = UINT16_MAX;
uint64_t t54 = 0LLU;
volatile uint8_t x259 = 0U;
uint16_t x268 = UINT16_MAX;
volatile uint32_t x269 = 459U;
int8_t x270 = INT8_MIN;
uint32_t t59 = 827352U;
int8_t x273 = INT8_MIN;
static volatile int32_t x275 = INT32_MIN;
int8_t x283 = -1;
static int8_t x284 = 13;
int16_t x288 = -1;
static uint64_t t64 = 2233999LLU;
int16_t x294 = -2891;
int16_t x306 = INT16_MIN;
volatile int8_t x320 = INT8_MAX;
static int16_t x334 = 7;
int8_t x335 = -1;
int64_t t74 = 18671LL;
volatile int64_t t75 = 420834LL;
static volatile uint32_t x346 = UINT32_MAX;
int32_t x351 = INT32_MAX;
volatile int32_t t78 = -1;
static uint16_t x359 = 0U;
static int64_t x361 = INT64_MAX;
uint64_t t81 = 14100128992369567LLU;
int32_t x371 = INT32_MIN;
volatile int64_t x379 = -231LL;
uint64_t x385 = 3932204264LLU;
static uint64_t t88 = 9692474768LLU;
int64_t x396 = INT64_MIN;
static volatile int64_t t89 = -80811827605755180LL;
int64_t x398 = -77930257LL;
int16_t x400 = 161;
int64_t x402 = -1LL;
volatile int16_t x403 = -1;
int16_t x417 = -1;
volatile int32_t x419 = INT32_MAX;
volatile int32_t t94 = 178392425;
volatile int32_t x431 = -1;
volatile uint32_t x432 = 46062213U;
uint16_t x436 = 2U;
volatile int16_t x447 = INT16_MIN;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	volatile int16_t x3 = -1;
	volatile int16_t x4 = INT16_MIN;
	static int32_t t0 = -19;

	t0 = ((x1-x2)^(x3&x4));

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	volatile int32_t t1 = 1;

	t1 = ((x5-x6)^(x7&x8));

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -4850;
	volatile int64_t x11 = INT64_MIN;
	int32_t x12 = -1;
	int64_t t2 = -123479844LL;

	t2 = ((x9-x10)^(x11&x12));

	if (t2 != 9223372036854705423LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = 1015673658505308188LLU;
	static uint32_t x18 = UINT32_MAX;
	int64_t x19 = -1LL;
	int8_t x20 = INT8_MAX;

	t3 = ((x17-x18)^(x19&x20));

	if (t3 != 1015673654210340962LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MIN;
	int64_t x22 = 154596995144014811LL;
	volatile int8_t x23 = INT8_MIN;
	uint32_t x24 = 935149U;
	static int64_t t4 = -413850415LL;

	t4 = ((x21-x22)^(x23&x24));

	if (t4 != -154596995144163163LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MAX;
	int64_t x26 = INT64_MAX;
	volatile int16_t x27 = -1;

	t5 = ((x25-x26)^(x27&x28));

	if (t5 != 9223372036854775649LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 1206739288184LLU;
	uint16_t x30 = 28U;
	int8_t x31 = -1;

	t6 = ((x29-x30)^(x31&x32));

	if (t6 != 1206739288139LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = UINT8_MAX;
	int16_t x34 = 5;
	int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MIN;
	int32_t t7 = 11;

	t7 = ((x33-x34)^(x35&x36));

	if (t7 != -2147483398) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = UINT8_MAX;
	uint16_t x42 = 7U;
	int64_t x43 = 389982029LL;
	static uint16_t x44 = UINT16_MAX;
	volatile int64_t t8 = 15092285376462LL;

	t8 = ((x41-x42)^(x43&x44));

	if (t8 != 42933LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -8931;
	int64_t x46 = 17LL;
	int16_t x47 = -7;
	uint64_t x48 = 543350551364575LLU;
	uint64_t t9 = 620940426463159833LLU;

	t9 = ((x45-x46)^(x47&x48));

	if (t9 != 18446200723158179541LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x49 = 6706LLU;
	static uint16_t x50 = UINT16_MAX;
	uint64_t t10 = 139061LLU;

	t10 = ((x49-x50)^(x51&x52));

	if (t10 != 18446744073709509098LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	uint16_t x54 = 24U;
	int64_t x55 = -1LL;
	volatile int16_t x56 = INT16_MIN;
	volatile uint64_t t11 = 1414436529306LLU;

	t11 = ((x53-x54)^(x55&x56));

	if (t11 != 32743LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	int32_t x59 = INT32_MAX;
	static int32_t x60 = -3159524;
	volatile int32_t t12 = 30577903;

	t12 = ((x57-x58)^(x59&x60));

	if (t12 != 2144324124) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 0LLU;
	volatile int32_t x62 = INT32_MAX;
	static uint64_t x63 = 150106585251211LLU;
	volatile int32_t x64 = -1;
	uint64_t t13 = 6723838484LLU;

	t13 = ((x61-x62)^(x63&x64));

	if (t13 != 18446593968523263370LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	uint16_t x67 = 77U;
	int8_t x68 = -1;
	volatile int64_t t14 = 1613552336747363073LL;

	t14 = ((x65-x66)^(x67&x68));

	if (t14 != -2147483572LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	int8_t x70 = 1;
	static int32_t x71 = INT32_MIN;
	static int32_t x72 = -1;
	int32_t t15 = 1167281;

	t15 = ((x69-x70)^(x71&x72));

	if (t15 != -2147483522) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x78 = UINT16_MAX;
	int16_t x79 = -1;
	int64_t t16 = 14820693LL;

	t16 = ((x77-x78)^(x79&x80));

	if (t16 != 65535LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = 1LL;
	int16_t x82 = INT16_MIN;
	volatile int8_t x83 = 0;
	int32_t x84 = INT32_MAX;

	t17 = ((x81-x82)^(x83&x84));

	if (t17 != 32769LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 1146831066U;
	volatile uint64_t x88 = UINT64_MAX;

	t18 = ((x85-x86)^(x87&x88));

	if (t18 != 18446744072562720385LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	static volatile uint64_t x90 = 13077393402LLU;
	int16_t x91 = INT16_MIN;

	t19 = ((x89-x90)^(x91&x92));

	if (t19 != 18446744058484674566LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x95 = INT64_MIN;
	int8_t x96 = 25;

	t20 = ((x93-x94)^(x95&x96));

	if (t20 != 572242LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x98 = 11446U;
	static int32_t x99 = 6207;
	uint32_t x100 = 72U;

	t21 = ((x97-x98)^(x99&x100));

	if (t21 != 54081U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 1209U;
	static int32_t x103 = -1;
	int32_t x104 = 72;

	t22 = ((x101-x102)^(x103&x104));

	if (t22 != 1138) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MAX;
	int64_t x106 = INT64_MAX;
	static int64_t x107 = INT64_MIN;
	int8_t x108 = -1;

	t23 = ((x105-x106)^(x107&x108));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x110 = UINT16_MAX;
	volatile uint32_t x111 = UINT32_MAX;
	static volatile int16_t x112 = 859;
	uint32_t t24 = 4751723U;

	t24 = ((x109-x110)^(x111&x112));

	if (t24 != 4294869850U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x113 = INT8_MIN;
	uint8_t x114 = 14U;
	uint64_t x115 = UINT64_MAX;
	static volatile int64_t x116 = -717761097413LL;
	volatile uint64_t t25 = 7890570540902517555LLU;

	t25 = ((x113-x114)^(x115&x116));

	if (t25 != 717761097289LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x121 = INT64_MIN;
	int8_t x122 = -1;
	static uint16_t x123 = 453U;
	volatile int64_t t26 = 724LL;

	t26 = ((x121-x122)^(x123&x124));

	if (t26 != -9223372036854775356LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = INT16_MAX;
	int8_t x126 = INT8_MIN;
	volatile int32_t x127 = INT32_MIN;
	volatile int64_t t27 = 65074641601626379LL;

	t27 = ((x125-x126)^(x127&x128));

	if (t27 != -2147450753LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MAX;
	int64_t x130 = -1LL;
	uint8_t x131 = 126U;
	uint64_t x132 = UINT64_MAX;
	static volatile uint64_t t28 = 969364LLU;

	t28 = ((x129-x130)^(x131&x132));

	if (t28 != 254LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = -29120;
	static uint8_t x135 = 1U;

	t29 = ((x133-x134)^(x135&x136));

	if (t29 != 29119LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -480;
	uint8_t x138 = 105U;
	volatile int32_t x139 = INT32_MAX;
	uint16_t x140 = 17954U;
	volatile int32_t t30 = 1;

	t30 = ((x137-x138)^(x139&x140));

	if (t30 != -17515) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x146 = 904772712216541878LLU;
	uint64_t t31 = 2661953876301487682LLU;

	t31 = ((x145-x146)^(x147&x148));

	if (t31 != 904772712216556435LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MAX;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = UINT64_MAX;
	volatile uint16_t x152 = 48U;
	static volatile uint64_t t32 = 140880926LLU;

	t32 = ((x149-x150)^(x151&x152));

	if (t32 != 2147483696LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MAX;
	int8_t x154 = -3;
	volatile uint32_t x155 = 2485U;
	int16_t x156 = -1;
	uint32_t t33 = 283285263U;

	t33 = ((x153-x154)^(x155&x156));

	if (t33 != 35255U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x161 = 1U;
	int64_t x163 = -4033603274624LL;
	int64_t x164 = INT64_MIN;
	static volatile int64_t t34 = 60354561LL;

	t34 = ((x161-x162)^(x163&x164));

	if (t34 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = 0LL;
	volatile int32_t x166 = -1;
	uint64_t x167 = 166LLU;
	volatile uint64_t t35 = 4504263551LLU;

	t35 = ((x165-x166)^(x167&x168));

	if (t35 != 3LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = INT16_MIN;
	static uint32_t x170 = 18U;
	uint8_t x172 = 0U;
	volatile uint32_t t36 = 49U;

	t36 = ((x169-x170)^(x171&x172));

	if (t36 != 4294934510U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x173 = UINT8_MAX;
	int16_t x174 = INT16_MIN;
	int32_t x175 = -1;
	static int16_t x176 = INT16_MIN;
	int32_t t37 = 0;

	t37 = ((x173-x174)^(x175&x176));

	if (t37 != -65281) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x177 = 259180084267899047LLU;
	uint32_t x178 = UINT32_MAX;
	volatile uint8_t x180 = 1U;
	uint64_t t38 = 347LLU;

	t38 = ((x177-x178)^(x179&x180));

	if (t38 != 259180079972931753LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x181 = INT64_MIN;
	int8_t x182 = -30;
	uint32_t x183 = UINT32_MAX;
	int64_t t39 = -5465643LL;

	t39 = ((x181-x182)^(x183&x184));

	if (t39 != -9223372032559808543LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = -61958997;
	static uint32_t x190 = 10417748U;
	static uint8_t x191 = UINT8_MAX;
	volatile int8_t x192 = -46;
	volatile uint32_t t40 = 3064710U;

	t40 = ((x189-x190)^(x191&x192));

	if (t40 != 4222590597U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MAX;
	volatile uint8_t x195 = 118U;
	volatile int32_t t41 = -193;

	t41 = ((x193-x194)^(x195&x196));

	if (t41 != 124) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x198 = -1;
	static int8_t x200 = INT8_MAX;
	static volatile int32_t t42 = -58;

	t42 = ((x197-x198)^(x199&x200));

	if (t42 != 106) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = -31;
	static int64_t x202 = -1LL;
	static int64_t x203 = INT64_MIN;
	int64_t t43 = -3306346644627180586LL;

	t43 = ((x201-x202)^(x203&x204));

	if (t43 != -30LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x205 = 72202954247903LL;
	static int16_t x206 = INT16_MAX;
	volatile int32_t x207 = 1;
	int64_t t44 = 2243601087173783LL;

	t44 = ((x205-x206)^(x207&x208));

	if (t44 != 72202954215136LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = 15688U;
	volatile int32_t x210 = 60;
	uint16_t x212 = 3U;

	t45 = ((x209-x210)^(x211&x212));

	if (t45 != 15628U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = -1;
	int64_t x214 = -1LL;
	volatile uint16_t x215 = UINT16_MAX;
	int64_t x216 = INT64_MAX;
	static volatile int64_t t46 = 707LL;

	t46 = ((x213-x214)^(x215&x216));

	if (t46 != 65535LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = 874LLU;
	uint8_t x218 = 0U;
	uint64_t x220 = 1920698401LLU;
	volatile uint64_t t47 = 2145955360LLU;

	t47 = ((x217-x218)^(x219&x220));

	if (t47 != 1920697194LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x226 = UINT8_MAX;
	int16_t x227 = -1;
	int64_t x228 = INT64_MIN;
	volatile int64_t t48 = 356508705530LL;

	t48 = ((x225-x226)^(x227&x228));

	if (t48 != 9223372036854742785LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x230 = INT64_MIN;
	volatile uint64_t x231 = 20775543478LLU;

	t49 = ((x229-x230)^(x231&x232));

	if (t49 != 20775543478LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x234 = INT16_MIN;
	static int16_t x236 = -1;
	int64_t t50 = -45639941LL;

	t50 = ((x233-x234)^(x235&x236));

	if (t50 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x237 = 1;
	uint32_t x238 = UINT32_MAX;
	static uint8_t x239 = UINT8_MAX;
	volatile uint16_t x240 = UINT16_MAX;
	uint32_t t51 = 422U;

	t51 = ((x237-x238)^(x239&x240));

	if (t51 != 253U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x241 = 3515671367LLU;
	int64_t x242 = -1903559225LL;
	static int64_t x243 = 2187969728512LL;
	int8_t x244 = INT8_MAX;
	volatile uint64_t t52 = 393117321043429146LLU;

	t52 = ((x241-x242)^(x243&x244));

	if (t52 != 5419230592LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x245 = 4444U;
	uint64_t x246 = 22448513460698LLU;
	int8_t x248 = -1;
	volatile uint64_t t53 = 1790704722292882883LLU;

	t53 = ((x245-x246)^(x247&x248));

	if (t53 != 18446721625196107901LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x249 = UINT8_MAX;
	static uint64_t x250 = 13932550563252LLU;
	uint16_t x251 = UINT16_MAX;
	uint16_t x252 = 2U;

	t54 = ((x249-x250)^(x251&x252));

	if (t54 != 18446730141158988617LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = -568639115;
	volatile uint64_t x254 = 29155403LLU;
	uint64_t x255 = 59997322832LLU;
	uint32_t x256 = UINT32_MAX;
	volatile uint64_t t55 = 53LLU;

	t55 = ((x253-x254)^(x255&x256));

	if (t55 != 18446744070022766458LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = -1;
	volatile int64_t x258 = INT64_MIN;
	int32_t x260 = INT32_MAX;
	int64_t t56 = INT64_MAX;

	t56 = ((x257-x258)^(x259&x260));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = INT8_MAX;
	volatile uint32_t x262 = 688199U;
	int16_t x263 = 218;
	int32_t x264 = -1;
	volatile uint32_t t57 = 5024588U;

	t57 = ((x261-x262)^(x263&x264));

	if (t57 != 4294279394U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = -1;
	uint16_t x266 = 20083U;
	volatile int32_t x267 = -3853629;
	int32_t t58 = 2221;

	t58 = ((x265-x266)^(x267&x268));

	if (t58 != -31921) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x271 = 2;
	volatile int32_t x272 = -1;

	t59 = ((x269-x270)^(x271&x272));

	if (t59 != 585U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x274 = -1;
	static int32_t x276 = -520434;
	volatile int32_t t60 = 0;

	t60 = ((x273-x274)^(x275&x276));

	if (t60 != 2147483521) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = 429979U;
	int64_t x278 = 46LL;
	static int32_t x279 = -7020;
	volatile int64_t x280 = INT64_MIN;
	static volatile int64_t t61 = 60LL;

	t61 = ((x277-x278)^(x279&x280));

	if (t61 != -9223372036854345875LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x281 = -1;
	static int16_t x282 = -6;
	int32_t t62 = 2;

	t62 = ((x281-x282)^(x283&x284));

	if (t62 != 8) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = INT64_MAX;
	static int16_t x286 = 2;
	volatile int64_t x287 = -321823411517162145LL;
	static volatile int64_t t63 = 1391LL;

	t63 = ((x285-x286)^(x287&x288));

	if (t63 != -8901548625337613662LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x289 = -1;
	uint64_t x290 = 1036570163032LLU;
	uint32_t x291 = 1U;
	volatile int64_t x292 = -670231LL;

	t64 = ((x289-x290)^(x291&x292));

	if (t64 != 18446743037139388582LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x293 = INT16_MIN;
	int32_t x295 = -241404;
	static int64_t x296 = 7LL;
	int64_t t65 = -29185LL;

	t65 = ((x293-x294)^(x295&x296));

	if (t65 != -29873LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MIN;
	static int8_t x298 = INT8_MAX;
	uint32_t x299 = 1119197U;
	uint8_t x300 = 1U;
	volatile uint32_t t66 = 491293U;

	t66 = ((x297-x298)^(x299&x300));

	if (t66 != 4294934400U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x301 = INT16_MAX;
	int16_t x302 = -1;
	static uint64_t x303 = 71134LLU;
	int16_t x304 = INT16_MIN;
	uint64_t t67 = 260043LLU;

	t67 = ((x301-x302)^(x303&x304));

	if (t67 != 98304LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x305 = INT8_MIN;
	static int32_t x307 = -406;
	static int16_t x308 = INT16_MIN;
	int32_t t68 = 10;

	t68 = ((x305-x306)^(x307&x308));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = UINT64_MAX;
	static uint8_t x310 = 30U;
	int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MIN;
	volatile uint64_t t69 = 39605132LLU;

	t69 = ((x309-x310)^(x311&x312));

	if (t69 != 2147483617LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x313 = INT64_MAX;
	volatile uint64_t x314 = 481469822307594569LLU;
	int16_t x315 = -1;
	static int8_t x316 = -1;
	uint64_t t70 = 1407168LLU;

	t70 = ((x313-x314)^(x315&x316));

	if (t70 != 9704841859162370377LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x317 = INT8_MIN;
	volatile int8_t x318 = INT8_MAX;
	int8_t x319 = 30;
	volatile int32_t t71 = 6651;

	t71 = ((x317-x318)^(x319&x320));

	if (t71 != -225) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x325 = INT16_MAX;
	int32_t x326 = INT32_MAX;
	uint16_t x327 = 3527U;
	static volatile uint8_t x328 = 1U;
	volatile int32_t t72 = 853318002;

	t72 = ((x325-x326)^(x327&x328));

	if (t72 != -2147450879) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int16_t x331 = 1;
	uint8_t x332 = UINT8_MAX;
	int32_t t73 = -1;

	t73 = ((x329-x330)^(x331&x332));

	if (t73 != 32766) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = 977638;
	int64_t x336 = -1LL;

	t74 = ((x333-x334)^(x335&x336));

	if (t74 != -977632LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x337 = INT16_MAX;
	int64_t x338 = -1LL;
	int64_t x339 = -1LL;
	volatile uint16_t x340 = 1U;

	t75 = ((x337-x338)^(x339&x340));

	if (t75 != 32769LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x341 = 40U;
	volatile uint8_t x342 = UINT8_MAX;
	static volatile uint32_t x343 = UINT32_MAX;
	static int16_t x344 = -1;
	static uint32_t t76 = 790524U;

	t76 = ((x341-x342)^(x343&x344));

	if (t76 != 214U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x345 = 399U;
	int32_t x347 = INT32_MIN;
	int32_t x348 = 60;
	static uint32_t t77 = 13007U;

	t77 = ((x345-x346)^(x347&x348));

	if (t77 != 400U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	static int16_t x352 = INT16_MIN;

	t78 = ((x349-x350)^(x351&x352));

	if (t78 != 2147451135) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = -1LL;
	static int8_t x354 = 52;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = -1;
	volatile uint64_t t79 = 896109516534728397LLU;

	t79 = ((x353-x354)^(x355&x356));

	if (t79 != 52LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = 93LL;
	int32_t x358 = INT32_MAX;
	static uint32_t x360 = 4799U;
	volatile int64_t t80 = -313939343458284181LL;

	t80 = ((x357-x358)^(x359&x360));

	if (t80 != -2147483554LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x362 = UINT64_MAX;
	int8_t x363 = -1;
	static uint64_t x364 = 80562LLU;

	t81 = ((x361-x362)^(x363&x364));

	if (t81 != 9223372036854856370LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x365 = UINT8_MAX;
	int16_t x366 = -1;
	int8_t x367 = 0;
	int8_t x368 = INT8_MAX;
	static int32_t t82 = 1;

	t82 = ((x365-x366)^(x367&x368));

	if (t82 != 256) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x369 = 0U;
	uint16_t x370 = 31U;
	static uint16_t x372 = 14867U;
	volatile int32_t t83 = 471;

	t83 = ((x369-x370)^(x371&x372));

	if (t83 != -31) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = -1;
	volatile uint16_t x374 = UINT16_MAX;
	int16_t x375 = 9118;
	volatile int16_t x376 = 5739;
	volatile int32_t t84 = -1625;

	t84 = ((x373-x374)^(x375&x376));

	if (t84 != -65014) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = -47;
	int16_t x378 = -1;
	uint8_t x380 = 12U;
	static volatile int64_t t85 = -43527016LL;

	t85 = ((x377-x378)^(x379&x380));

	if (t85 != -38LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = 1;
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = -1;
	int8_t x384 = 8;
	volatile uint32_t t86 = 14U;

	t86 = ((x381-x382)^(x383&x384));

	if (t86 != 10U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x386 = INT8_MAX;
	uint64_t x387 = UINT64_MAX;
	uint64_t x388 = 5977613101138841627LLU;
	volatile uint64_t t87 = 991689LLU;

	t87 = ((x385-x386)^(x387&x388));

	if (t87 != 5977613098293050482LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = -7617544;
	uint64_t x390 = 91290550459871890LLU;
	volatile int16_t x391 = -30;
	static uint64_t x392 = 14605772855664LLU;

	t88 = ((x389-x390)^(x391&x392));

	if (t88 != 18355448268012259334LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = 7;
	static int16_t x395 = -2673;

	t89 = ((x393-x394)^(x395&x396));

	if (t89 != 9223372036854775673LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x397 = 1428U;
	int32_t x399 = 9;
	volatile int64_t t90 = -7356058LL;

	t90 = ((x397-x398)^(x399&x400));

	if (t90 != 77931684LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = INT8_MAX;
	static int8_t x404 = INT8_MIN;
	volatile int64_t t91 = -41404LL;

	t91 = ((x401-x402)^(x403&x404));

	if (t91 != -256LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x405 = 23U;
	static volatile uint64_t x406 = 42026592429LLU;
	volatile uint8_t x407 = UINT8_MAX;
	uint64_t x408 = UINT64_MAX;
	uint64_t t92 = 30985509977LLU;

	t92 = ((x405-x406)^(x407&x408));

	if (t92 != 18446744031682959253LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = 2992;
	int8_t x414 = INT8_MIN;
	static int64_t x415 = -8716402859476LL;
	static volatile int8_t x416 = INT8_MIN;
	volatile int64_t t93 = 0LL;

	t93 = ((x413-x414)^(x415&x416));

	if (t93 != -8716402856400LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x418 = INT8_MIN;
	int16_t x420 = -1;

	t94 = ((x417-x418)^(x419&x420));

	if (t94 != 2147483520) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x425 = 482U;
	static uint64_t x426 = UINT64_MAX;
	int32_t x427 = -1;
	uint16_t x428 = 14939U;
	volatile uint64_t t95 = 938LLU;

	t95 = ((x425-x426)^(x427&x428));

	if (t95 != 15288LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x429 = 15U;
	int8_t x430 = -3;
	volatile uint32_t t96 = 51U;

	t96 = ((x429-x430)^(x431&x432));

	if (t96 != 46062231U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x433 = 2U;
	uint8_t x434 = 70U;
	static volatile uint16_t x435 = 10U;
	volatile int32_t t97 = 1;

	t97 = ((x433-x434)^(x435&x436));

	if (t97 != -66) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = -699;
	int16_t x438 = -3545;
	static int64_t x439 = INT64_MIN;
	static int32_t x440 = -6092;
	int64_t t98 = -9391488LL;

	t98 = ((x437-x438)^(x439&x440));

	if (t98 != -9223372036854772962LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = -469134412;
	volatile uint32_t x446 = 10318U;
	uint8_t x448 = 0U;
	volatile uint32_t t99 = 291911U;

	t99 = ((x445-x446)^(x447&x448));

	if (t99 != 3825822566U) { NG(); } else { ; }
	
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

