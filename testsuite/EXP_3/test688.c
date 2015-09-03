#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int64_t x9 = -1LL;
uint16_t x17 = 373U;
static volatile int64_t x29 = -1LL;
int16_t x35 = -1574;
volatile int64_t t7 = -22344564625LL;
uint16_t x45 = 84U;
volatile int8_t x55 = -1;
uint64_t x61 = UINT64_MAX;
static int32_t x62 = INT32_MIN;
uint16_t x63 = 0U;
uint8_t x72 = 37U;
int64_t x73 = INT64_MAX;
static int64_t x75 = INT64_MIN;
uint64_t x78 = 52LLU;
volatile int8_t x80 = INT8_MIN;
static uint64_t t18 = 298LLU;
volatile int64_t t19 = -1798350980968LL;
int8_t x89 = INT8_MIN;
volatile uint32_t x90 = 60U;
uint32_t t20 = 66U;
int16_t x93 = 89;
volatile int64_t t21 = -963LL;
int64_t x97 = -1LL;
uint16_t x120 = UINT16_MAX;
uint32_t x123 = UINT32_MAX;
volatile int16_t x125 = -2;
volatile int64_t x129 = INT64_MIN;
volatile uint8_t x130 = UINT8_MAX;
int32_t x135 = -1;
int16_t x142 = INT16_MAX;
int64_t x145 = 12LL;
uint16_t x151 = 484U;
static int16_t x158 = -13;
int32_t x161 = -1;
volatile uint64_t x164 = UINT64_MAX;
static uint64_t t36 = 8329261087LLU;
int64_t x169 = -342873116731435268LL;
volatile int8_t x175 = INT8_MIN;
static volatile int32_t t38 = -466163;
volatile uint64_t x178 = 13624722394430LLU;
volatile uint64_t x181 = 117299598770LLU;
int16_t x187 = -1;
int8_t x194 = -1;
uint64_t x196 = 59LLU;
volatile uint64_t t42 = 354141206LLU;
volatile uint32_t x198 = 1608U;
uint8_t x205 = UINT8_MAX;
volatile uint32_t t45 = 310232U;
int32_t t46 = -10;
uint16_t x218 = UINT16_MAX;
int8_t x224 = -1;
volatile uint8_t x226 = 9U;
volatile int32_t t50 = -373320;
int32_t x235 = INT32_MIN;
int32_t t51 = 476935985;
int16_t x239 = INT16_MIN;
int64_t t52 = 1LL;
uint8_t x241 = 10U;
int64_t x263 = INT64_MIN;
uint32_t x273 = 75U;
int32_t x275 = 5365714;
static int16_t x286 = 1821;
int16_t x289 = -1;
volatile int8_t x290 = -46;
static uint64_t x291 = 123447653LLU;
int16_t x292 = INT16_MAX;
int64_t x299 = -1LL;
static int8_t x300 = INT8_MIN;
int8_t x312 = -33;
int8_t x318 = -24;
volatile int32_t x320 = -962;
static int8_t x325 = INT8_MIN;
volatile uint64_t t72 = 58612799918022488LLU;
int8_t x351 = -1;
uint16_t x357 = 58U;
static int16_t x358 = INT16_MAX;
volatile uint64_t t78 = 1395295393821LLU;
static int64_t x377 = -1LL;
uint16_t x382 = 46U;
int32_t x385 = INT32_MAX;
static int64_t x388 = 47591LL;
uint16_t x391 = 308U;
int16_t x402 = -30;
uint32_t x406 = 203U;
volatile uint64_t t87 = 2266341222044LLU;
uint32_t x419 = UINT32_MAX;
volatile int64_t t90 = INT64_MAX;
int64_t x431 = INT64_MIN;
int64_t x436 = INT64_MIN;
volatile int64_t t92 = -239910895095LL;
uint32_t x448 = 1193051347U;
volatile int32_t x453 = -141;
int64_t t97 = 1814810LL;
static uint8_t x462 = UINT8_MAX;
int64_t x463 = INT64_MAX;


void f0(void) {
	static volatile int8_t x5 = INT8_MAX;
	uint8_t x7 = 1U;
	volatile int64_t x8 = INT64_MAX;
	volatile int64_t t0 = 551730LL;

	t0 = ((x5+x6)|(x7%x8));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = UINT16_MAX;
	int64_t x11 = INT64_MIN;
	volatile int32_t x12 = 273319;
	int64_t t1 = -1010522LL;

	t1 = ((x9+x10)|(x11%x12));

	if (t1 != -196609LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int16_t x14 = 0;
	int8_t x15 = 25;
	uint16_t x16 = 889U;
	volatile int32_t t2 = 15865;

	t2 = ((x13+x14)|(x15%x16));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = 571U;
	uint16_t x19 = UINT16_MAX;
	volatile uint16_t x20 = 2U;
	static int32_t t3 = -801;

	t3 = ((x17+x18)|(x19%x20));

	if (t3 != 945) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 7;
	uint32_t x22 = UINT32_MAX;
	static uint32_t x23 = 8U;
	int32_t x24 = -134087;
	static uint32_t t4 = 10U;

	t4 = ((x21+x22)|(x23%x24));

	if (t4 != 14U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 15U;
	int64_t x26 = 49493LL;
	int16_t x27 = -1;
	int32_t x28 = 2173425;
	int64_t t5 = -1656118LL;

	t5 = ((x25+x26)|(x27%x28));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = -2;
	static int16_t x31 = 63;
	int16_t x32 = 391;
	int64_t t6 = -272718960536190LL;

	t6 = ((x29+x30)|(x31%x32));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -39310020904695LL;
	int8_t x34 = INT8_MIN;
	volatile int8_t x36 = INT8_MIN;

	t7 = ((x33+x34)|(x35%x36));

	if (t7 != -37LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = INT16_MIN;
	int16_t x38 = -227;
	static volatile int64_t x39 = -83455LL;
	static int16_t x40 = 2;
	volatile int64_t t8 = 5467626426080LL;

	t8 = ((x37+x38)|(x39%x40));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;
	static int64_t x42 = -1LL;
	static uint64_t x43 = 318LLU;
	static int64_t x44 = -4213472780LL;
	volatile uint64_t t9 = 4278979837LLU;

	t9 = ((x41+x42)|(x43%x44));

	if (t9 != 382LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x46 = 8;
	uint16_t x47 = 1U;
	int16_t x48 = -34;
	int32_t t10 = 401606283;

	t10 = ((x45+x46)|(x47%x48));

	if (t10 != 93) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MAX;
	int32_t x50 = -148064;
	static int16_t x51 = 350;
	static int64_t x52 = -3LL;
	static int64_t t11 = -278226744268040732LL;

	t11 = ((x49+x50)|(x51%x52));

	if (t11 != 9223372036854627743LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = 3U;
	int64_t x54 = -1LL;
	volatile int64_t x56 = INT64_MIN;
	int64_t t12 = -4079141LL;

	t12 = ((x53+x54)|(x55%x56));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x64 = UINT64_MAX;
	volatile uint64_t t13 = 1824082575716250380LLU;

	t13 = ((x61+x62)|(x63%x64));

	if (t13 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = INT16_MIN;
	int16_t x66 = 19;
	static uint8_t x67 = UINT8_MAX;
	int64_t x68 = INT64_MIN;
	int64_t t14 = 1LL;

	t14 = ((x65+x66)|(x67%x68));

	if (t14 != -32513LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	static int8_t x70 = INT8_MIN;
	uint8_t x71 = UINT8_MAX;
	static int32_t t15 = 7205;

	t15 = ((x69+x70)|(x71%x72));

	if (t15 != 2147483519) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = INT16_MIN;
	static volatile uint64_t x76 = 57LLU;
	static uint64_t t16 = 104LLU;

	t16 = ((x73+x74)|(x75%x76));

	if (t16 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x77 = 3864U;
	volatile int64_t x79 = INT64_MIN;
	volatile uint64_t t17 = 3510438294LLU;

	t17 = ((x77+x78)|(x79%x80));

	if (t17 != 3916LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 3821845321100240LLU;
	static uint8_t x82 = 1U;
	int32_t x83 = INT32_MIN;
	uint64_t x84 = 136532593841136846LLU;

	t18 = ((x81+x82)|(x83%x84));

	if (t18 != 17381028237180895LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	static volatile int8_t x86 = -1;
	volatile int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MIN;

	t19 = ((x85+x86)|(x87%x88));

	if (t19 != -32769LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x91 = 0;
	int32_t x92 = -1;

	t20 = ((x89+x90)|(x91%x92));

	if (t20 != 4294967228U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = 2148041663792609129LL;
	volatile int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MIN;

	t21 = ((x93+x94)|(x95%x96));

	if (t21 != 2148041663792609279LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x98 = 28U;
	volatile int16_t x99 = -1;
	static uint16_t x100 = 204U;
	int64_t t22 = 3371759008LL;

	t22 = ((x97+x98)|(x99%x100));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -1LL;
	volatile int64_t x110 = 624LL;
	static int64_t x111 = INT64_MIN;
	uint32_t x112 = 126U;
	volatile int64_t t23 = -531930990422815LL;

	t23 = ((x109+x110)|(x111%x112));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x113 = UINT32_MAX;
	int16_t x114 = INT16_MIN;
	volatile int8_t x115 = -1;
	int32_t x116 = INT32_MIN;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = ((x113+x114)|(x115%x116));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -45;
	int16_t x118 = INT16_MIN;
	uint64_t x119 = 58579918LLU;
	volatile uint64_t t25 = 30423LLU;

	t25 = ((x117+x118)|(x119%x120));

	if (t25 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -1;
	int64_t x122 = 282072LL;
	uint32_t x124 = UINT32_MAX;
	int64_t t26 = -361330LL;

	t26 = ((x121+x122)|(x123%x124));

	if (t26 != 282071LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x126 = -1;
	volatile int8_t x127 = INT8_MAX;
	static volatile int64_t x128 = INT64_MIN;
	volatile int64_t t27 = 65087433538202570LL;

	t27 = ((x125+x126)|(x127%x128));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x131 = 7U;
	static int32_t x132 = INT32_MAX;
	static volatile int64_t t28 = -3689LL;

	t28 = ((x129+x130)|(x131%x132));

	if (t28 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = -983;
	int16_t x136 = -1;
	int32_t t29 = 436714;

	t29 = ((x133+x134)|(x135%x136));

	if (t29 != -33751) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x137 = -2313LL;
	int16_t x138 = 0;
	volatile int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;
	static volatile int64_t t30 = 3395035121805795LL;

	t30 = ((x137+x138)|(x139%x140));

	if (t30 != -2313LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x141 = -1LL;
	static int8_t x143 = INT8_MAX;
	int8_t x144 = INT8_MAX;
	static volatile int64_t t31 = -988408150928093LL;

	t31 = ((x141+x142)|(x143%x144));

	if (t31 != 32766LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x146 = UINT32_MAX;
	static volatile uint64_t x147 = UINT64_MAX;
	static int32_t x148 = INT32_MAX;
	static volatile uint64_t t32 = 7LLU;

	t32 = ((x145+x146)|(x147%x148));

	if (t32 != 4294967307LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = UINT8_MAX;
	static volatile int16_t x150 = -1;
	static uint16_t x152 = UINT16_MAX;
	volatile int32_t t33 = -120254725;

	t33 = ((x149+x150)|(x151%x152));

	if (t33 != 510) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int32_t x154 = -1;
	uint64_t x155 = 11820LLU;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t34 = 1014250907LLU;

	t34 = ((x153+x154)|(x155%x156));

	if (t34 != 4294967294LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x157 = 222U;
	int64_t x159 = -882521562470777995LL;
	uint64_t x160 = 2264LLU;
	uint64_t t35 = 165138477006LLU;

	t35 = ((x157+x158)|(x159%x160));

	if (t35 != 733LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x162 = INT32_MAX;
	volatile uint64_t x163 = 597840487LLU;

	t36 = ((x161+x162)|(x163%x164));

	if (t36 != 2147483647LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x170 = -3;
	int64_t x171 = INT64_MIN;
	int8_t x172 = 2;
	volatile int64_t t37 = 507465LL;

	t37 = ((x169+x170)|(x171%x172));

	if (t37 != -342873116731435271LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = -1;
	volatile uint16_t x176 = 1166U;

	t38 = ((x173+x174)|(x175%x176));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -297852LL;
	static volatile uint64_t x179 = 34699LLU;
	uint8_t x180 = 4U;
	static volatile uint64_t t39 = 109LLU;

	t39 = ((x177+x178)|(x179%x180));

	if (t39 != 13624722096579LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	int32_t x184 = -152839542;
	static volatile uint64_t t40 = 79108LLU;

	t40 = ((x181+x182)|(x183%x184));

	if (t40 != 18446744073702989174LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -1;
	volatile int64_t x186 = INT64_MAX;
	int32_t x188 = 73007;
	static volatile int64_t t41 = 8758425197771584LL;

	t41 = ((x185+x186)|(x187%x188));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = 2U;
	int16_t x195 = 13091;

	t42 = ((x193+x194)|(x195%x196));

	if (t42 != 53LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = -1;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MIN;
	uint64_t t43 = 9593564168LLU;

	t43 = ((x197+x198)|(x199%x200));

	if (t43 != 1663LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x201 = UINT8_MAX;
	int16_t x202 = -1392;
	static volatile int32_t x203 = -64088;
	int16_t x204 = 6328;
	int32_t t44 = 693989;

	t44 = ((x201+x202)|(x203%x204));

	if (t44 != -33) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x206 = UINT8_MAX;
	uint32_t x207 = UINT32_MAX;
	int16_t x208 = INT16_MIN;

	t45 = ((x205+x206)|(x207%x208));

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = INT32_MIN;
	int32_t x214 = INT32_MAX;
	int32_t x215 = 4509;
	int32_t x216 = INT32_MAX;

	t46 = ((x213+x214)|(x215%x216));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x217 = 37U;
	int64_t x219 = INT64_MIN;
	static volatile int8_t x220 = -1;
	volatile int64_t t47 = -311LL;

	t47 = ((x217+x218)|(x219%x220));

	if (t47 != 65572LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = 687134865414283366LL;
	static int64_t x223 = -1LL;
	int64_t t48 = -143079148245LL;

	t48 = ((x221+x222)|(x223%x224));

	if (t48 != 687134865414316133LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x225 = 368904LLU;
	uint8_t x227 = 112U;
	int32_t x228 = INT32_MIN;
	volatile uint64_t t49 = 5393426085583638LLU;

	t49 = ((x225+x226)|(x227%x228));

	if (t49 != 369009LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x229 = UINT8_MAX;
	volatile int32_t x230 = 89045488;
	static int16_t x231 = -6;
	int16_t x232 = INT16_MIN;

	t50 = ((x229+x230)|(x231%x232));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = 9;
	static volatile uint8_t x234 = UINT8_MAX;
	int32_t x236 = INT32_MIN;

	t51 = ((x233+x234)|(x235%x236));

	if (t51 != 264) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = 1;
	int64_t x238 = INT64_MIN;
	int64_t x240 = INT64_MIN;

	t52 = ((x237+x238)|(x239%x240));

	if (t52 != -32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x242 = -1;
	volatile int16_t x243 = 6;
	int8_t x244 = INT8_MIN;
	static int32_t t53 = -3298574;

	t53 = ((x241+x242)|(x243%x244));

	if (t53 != 15) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = INT8_MAX;
	static int32_t x246 = -5296;
	int32_t x247 = 60574;
	static int8_t x248 = INT8_MAX;
	volatile int32_t t54 = -474402;

	t54 = ((x245+x246)|(x247%x248));

	if (t54 != -5121) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x249 = INT8_MIN;
	volatile uint32_t x250 = 15U;
	int8_t x251 = -12;
	int64_t x252 = -1LL;
	volatile int64_t t55 = -11LL;

	t55 = ((x249+x250)|(x251%x252));

	if (t55 != 4294967183LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x261 = 7060849605124LLU;
	static volatile uint64_t x262 = UINT64_MAX;
	volatile int32_t x264 = INT32_MIN;
	uint64_t t56 = 819LLU;

	t56 = ((x261+x262)|(x263%x264));

	if (t56 != 7060849605123LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = -1872747LL;
	int32_t x270 = INT32_MIN;
	int64_t x271 = -1LL;
	int8_t x272 = -1;
	int64_t t57 = 3147563LL;

	t57 = ((x269+x270)|(x271%x272));

	if (t57 != -2149356395LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x274 = 48;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t58 = 14444792LL;

	t58 = ((x273+x274)|(x275%x276));

	if (t58 != 5365755LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x277 = 28555660787LL;
	static uint16_t x278 = UINT16_MAX;
	uint16_t x279 = UINT16_MAX;
	volatile int16_t x280 = 23;
	volatile int64_t t59 = 3966616239617LL;

	t59 = ((x277+x278)|(x279%x280));

	if (t59 != 28555726330LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MAX;
	static int8_t x283 = INT8_MIN;
	volatile int16_t x284 = -1;
	volatile int64_t t60 = -12519LL;

	t60 = ((x281+x282)|(x283%x284));

	if (t60 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	volatile int64_t x288 = 4390443899LL;
	int64_t t61 = -162LL;

	t61 = ((x285+x286)|(x287%x288));

	if (t61 != -99LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t t62 = 3667561LLU;

	t62 = ((x289+x290)|(x291%x292));

	if (t62 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = 94;
	volatile int16_t x294 = 1421;
	volatile int8_t x295 = INT8_MIN;
	uint16_t x296 = 123U;
	int32_t t63 = -26;

	t63 = ((x293+x294)|(x295%x296));

	if (t63 != -5) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x297 = 20U;
	int8_t x298 = -1;
	int64_t t64 = 0LL;

	t64 = ((x297+x298)|(x299%x300));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = 46455913875350950LL;
	volatile uint64_t x302 = UINT64_MAX;
	int64_t x303 = -3670548790909497LL;
	volatile int64_t x304 = INT64_MAX;
	static uint64_t t65 = 4946222LLU;

	t65 = ((x301+x302)|(x303%x304));

	if (t65 != 18444492204495857127LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = -15;
	uint64_t x306 = 3061099820LLU;
	static uint16_t x307 = 179U;
	static int64_t x308 = INT64_MIN;
	uint64_t t66 = 6596LLU;

	t66 = ((x305+x306)|(x307%x308));

	if (t66 != 3061099967LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x309 = 120U;
	uint16_t x310 = UINT16_MAX;
	volatile uint64_t x311 = 3212949918588013LLU;
	uint64_t t67 = 378083633338153LLU;

	t67 = ((x309+x310)|(x311%x312));

	if (t67 != 3212949918653567LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x317 = INT8_MAX;
	static uint32_t x319 = UINT32_MAX;
	volatile uint32_t t68 = 14588U;

	t68 = ((x317+x318)|(x319%x320));

	if (t68 != 999U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x326 = 3U;
	uint64_t x327 = 9437260LLU;
	int32_t x328 = INT32_MIN;
	volatile uint64_t t69 = 452777127719LLU;

	t69 = ((x325+x326)|(x327%x328));

	if (t69 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = -1;
	int16_t x334 = INT16_MIN;
	int64_t x335 = -7344423971222485LL;
	static int8_t x336 = INT8_MAX;
	volatile int64_t t70 = -101457410LL;

	t70 = ((x333+x334)|(x335%x336));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = INT8_MIN;
	static volatile uint8_t x338 = UINT8_MAX;
	int64_t x339 = INT64_MAX;
	uint8_t x340 = 11U;
	static int64_t t71 = -123LL;

	t71 = ((x337+x338)|(x339%x340));

	if (t71 != 127LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x341 = 176048247232484LLU;
	static int32_t x342 = -1;
	uint16_t x343 = UINT16_MAX;
	int16_t x344 = INT16_MIN;

	t72 = ((x341+x342)|(x343%x344));

	if (t72 != 176048247242751LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x345 = INT64_MAX;
	volatile uint32_t x346 = 0U;
	uint16_t x347 = 0U;
	int32_t x348 = INT32_MIN;
	static volatile int64_t t73 = INT64_MAX;

	t73 = ((x345+x346)|(x347%x348));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x349 = INT8_MAX;
	volatile int16_t x350 = 102;
	int16_t x352 = INT16_MIN;
	int32_t t74 = 14;

	t74 = ((x349+x350)|(x351%x352));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x353 = -1;
	static uint64_t x354 = 32063295LLU;
	uint64_t x355 = 10972713LLU;
	static uint64_t x356 = 2138526LLU;
	volatile uint64_t t75 = 166220LLU;

	t75 = ((x353+x354)|(x355%x356));

	if (t75 != 32341823LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x359 = UINT64_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	uint64_t t76 = 1795145204984LLU;

	t76 = ((x357+x358)|(x359%x360));

	if (t76 != 32825LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x361 = 0;
	int64_t x362 = -829975775360LL;
	volatile uint32_t x363 = 1U;
	int64_t x364 = -1101426799311466921LL;
	volatile int64_t t77 = 7778669459997LL;

	t77 = ((x361+x362)|(x363%x364));

	if (t77 != -829975775359LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = INT32_MIN;
	volatile uint64_t x366 = UINT64_MAX;
	static int64_t x367 = INT64_MIN;
	volatile uint64_t x368 = UINT64_MAX;

	t78 = ((x365+x366)|(x367%x368));

	if (t78 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x373 = UINT64_MAX;
	int32_t x374 = -1;
	int32_t x375 = -1;
	int64_t x376 = -1LL;
	volatile uint64_t t79 = 8247378LLU;

	t79 = ((x373+x374)|(x375%x376));

	if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x378 = -1;
	int16_t x379 = 12234;
	uint8_t x380 = 2U;
	static int64_t t80 = -816442348LL;

	t80 = ((x377+x378)|(x379%x380));

	if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x381 = UINT8_MAX;
	int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MAX;
	int32_t t81 = 13445;

	t81 = ((x381+x382)|(x383%x384));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x386 = INT32_MIN;
	int8_t x387 = -1;
	int64_t t82 = -3730642677418123LL;

	t82 = ((x385+x386)|(x387%x388));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x389 = UINT32_MAX;
	static volatile int8_t x390 = INT8_MIN;
	volatile uint32_t x392 = UINT32_MAX;
	uint32_t t83 = 113203U;

	t83 = ((x389+x390)|(x391%x392));

	if (t83 != 4294967167U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x397 = 28;
	uint64_t x398 = 585065289917LLU;
	volatile uint32_t x399 = 116U;
	static int32_t x400 = INT32_MAX;
	uint64_t t84 = 284629377144381LLU;

	t84 = ((x397+x398)|(x399%x400));

	if (t84 != 585065289981LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x401 = INT8_MIN;
	volatile int32_t x403 = -1;
	static uint16_t x404 = 1U;
	int32_t t85 = 258;

	t85 = ((x401+x402)|(x403%x404));

	if (t85 != -158) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x405 = UINT16_MAX;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = 133816452265299LLU;
	volatile uint64_t t86 = 3988569007381322LLU;

	t86 = ((x405+x406)|(x407%x408));

	if (t86 != 12310338335711LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x413 = 1U;
	volatile uint64_t x414 = 431300481554045LLU;
	uint16_t x415 = UINT16_MAX;
	static uint64_t x416 = UINT64_MAX;

	t87 = ((x413+x414)|(x415%x416));

	if (t87 != 431300481581055LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = INT16_MIN;
	static uint64_t x418 = UINT64_MAX;
	uint32_t x420 = UINT32_MAX;
	uint64_t t88 = 8212122352365830LLU;

	t88 = ((x417+x418)|(x419%x420));

	if (t88 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = INT8_MAX;
	int16_t x422 = INT16_MIN;
	static uint64_t x423 = 5449355069762LLU;
	int32_t x424 = INT32_MIN;
	uint64_t t89 = 3762866LLU;

	t89 = ((x421+x422)|(x423%x424));

	if (t89 != 18446744073709521279LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x425 = UINT32_MAX;
	static int64_t x426 = 15LL;
	static volatile int64_t x427 = INT64_MAX;
	int64_t x428 = INT64_MIN;

	t90 = ((x425+x426)|(x427%x428));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x429 = 25U;
	static volatile int16_t x430 = -1;
	volatile int8_t x432 = INT8_MIN;
	volatile int64_t t91 = -48LL;

	t91 = ((x429+x430)|(x431%x432));

	if (t91 != 24LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x433 = INT32_MAX;
	volatile int16_t x434 = INT16_MIN;
	int8_t x435 = -35;

	t92 = ((x433+x434)|(x435%x436));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x437 = UINT32_MAX;
	static volatile int16_t x438 = -1590;
	uint64_t x439 = UINT64_MAX;
	int64_t x440 = INT64_MAX;
	uint64_t t93 = 39666LLU;

	t93 = ((x437+x438)|(x439%x440));

	if (t93 != 4294965705LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = -1;
	int16_t x442 = 49;
	uint32_t x443 = UINT32_MAX;
	int16_t x444 = INT16_MIN;
	uint32_t t94 = 606281U;

	t94 = ((x441+x442)|(x443%x444));

	if (t94 != 32767U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x445 = UINT16_MAX;
	int64_t x446 = -30561217927LL;
	uint32_t x447 = UINT32_MAX;
	volatile int64_t t95 = -5099LL;

	t95 = ((x445+x446)|(x447%x448));

	if (t95 != -30418406402LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = INT8_MAX;
	int16_t x450 = INT16_MIN;
	uint16_t x451 = 1U;
	volatile int8_t x452 = INT8_MIN;
	int32_t t96 = -658561778;

	t96 = ((x449+x450)|(x451%x452));

	if (t96 != -32641) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x454 = -1LL;
	uint16_t x455 = 789U;
	static uint16_t x456 = 383U;

	t97 = ((x453+x454)|(x455%x456));

	if (t97 != -137LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x457 = INT32_MIN;
	int32_t x458 = 17;
	int8_t x459 = INT8_MAX;
	int16_t x460 = INT16_MIN;
	int32_t t98 = -3527;

	t98 = ((x457+x458)|(x459%x460));

	if (t98 != -2147483521) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x461 = INT64_MIN;
	int16_t x464 = -1;
	int64_t t99 = 2LL;

	t99 = ((x461+x462)|(x463%x464));

	if (t99 != -9223372036854775553LL) { NG(); } else { ; }
	
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

