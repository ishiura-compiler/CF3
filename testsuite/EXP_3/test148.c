#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x18 = 50;
uint32_t x21 = 10U;
int8_t x23 = -5;
int64_t x26 = 123LL;
int16_t x29 = -23;
int16_t x32 = INT16_MAX;
static int16_t x34 = -1;
int64_t x36 = INT64_MIN;
volatile int16_t x38 = 8084;
int32_t x39 = INT32_MIN;
volatile int32_t t6 = -1;
uint64_t t7 = 429261865596886940LLU;
static uint32_t x53 = 21608U;
static uint32_t x54 = UINT32_MAX;
static int64_t x55 = 9583390LL;
uint32_t x60 = 23492U;
int16_t x63 = -1;
int64_t x69 = INT64_MIN;
int8_t x71 = INT8_MAX;
int32_t t14 = 11019212;
int8_t x87 = INT8_MIN;
volatile int16_t x91 = 3513;
int8_t x99 = INT8_MIN;
int32_t x104 = 10491159;
static volatile int16_t x106 = 220;
int64_t x107 = INT64_MIN;
static int16_t x108 = INT16_MAX;
static uint64_t x111 = 914355LLU;
uint16_t x113 = UINT16_MAX;
int64_t x118 = -1LL;
static int16_t x125 = INT16_MAX;
int64_t t24 = -23009657LL;
uint8_t x131 = UINT8_MAX;
int64_t x142 = INT64_MAX;
int32_t x143 = INT32_MAX;
int64_t x148 = 1672320012LL;
static uint64_t t30 = 37LLU;
static volatile int64_t t31 = -4345923065953363LL;
int64_t x168 = -1LL;
int8_t x169 = INT8_MAX;
int16_t x174 = INT16_MAX;
volatile uint16_t x189 = 24856U;
volatile uint16_t x210 = UINT16_MAX;
int8_t x211 = INT8_MIN;
volatile int32_t x227 = -1;
volatile int64_t x233 = INT64_MIN;
uint64_t x234 = UINT64_MAX;
volatile int16_t x237 = INT16_MIN;
uint64_t t46 = 20528879LLU;
int16_t x247 = INT16_MIN;
int16_t x248 = INT16_MIN;
volatile uint64_t t48 = 25632874495709LLU;
int64_t x249 = INT64_MIN;
int32_t x251 = INT32_MIN;
uint16_t x252 = UINT16_MAX;
uint64_t t50 = 118912207LLU;
volatile int16_t x263 = INT16_MIN;
volatile int8_t x268 = INT8_MIN;
static int16_t x273 = -911;
static int16_t x274 = INT16_MIN;
int8_t x277 = -1;
int8_t x278 = -25;
int64_t t55 = 2003LL;
static volatile int64_t x287 = -1LL;
int64_t t56 = -3785237972LL;
volatile uint32_t t57 = 223097U;
int16_t x295 = INT16_MIN;
int32_t x296 = INT32_MAX;
uint16_t x312 = 95U;
volatile int32_t t60 = -214256591;
int8_t x313 = INT8_MIN;
uint64_t x322 = UINT64_MAX;
int32_t x323 = INT32_MAX;
int8_t x325 = INT8_MIN;
volatile int64_t x326 = INT64_MAX;
int16_t x340 = INT16_MIN;
int32_t t67 = 2608585;
static int16_t x343 = -45;
int8_t x360 = 6;
int32_t x366 = INT32_MIN;
int32_t x376 = -1;
int64_t x382 = -33322076957103LL;
volatile uint64_t x393 = 228136LLU;
int16_t x396 = 0;
int8_t x405 = -1;
uint32_t x412 = 15U;
volatile int16_t x414 = INT16_MIN;
int8_t x417 = INT8_MIN;
volatile int64_t x422 = INT64_MIN;
int16_t x424 = 135;
volatile int64_t x428 = INT64_MAX;
volatile int8_t x430 = -1;
static int64_t x431 = INT64_MIN;
volatile int64_t t89 = 2104681387145176LL;
static int8_t x436 = 1;
int16_t x439 = -1;
int64_t t91 = 16243194792877LL;
uint64_t x442 = 6418943479LLU;
uint16_t x447 = 1186U;
static uint32_t x450 = UINT32_MAX;
volatile int16_t x452 = 6077;
volatile uint32_t t94 = 4561675U;
static int16_t x463 = -3;
volatile int8_t x467 = -1;


void f0(void) {
	volatile uint32_t x9 = 1509010029U;
	int8_t x10 = -1;
	static uint64_t x11 = 11911310928387LLU;
	static int8_t x12 = INT8_MIN;
	volatile uint64_t t0 = 137974392203603LLU;

	t0 = ((x9|x10)%(x11+x12));

	if (t0 != 4294967295LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = -2614;
	volatile int16_t x19 = 8;
	volatile int32_t x20 = 3677592;
	static volatile int32_t t1 = -146888866;

	t1 = ((x17|x18)%(x19+x20));

	if (t1 != -2566) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x22 = -1LL;
	int32_t x24 = 31465818;
	volatile int64_t t2 = 165LL;

	t2 = ((x21|x22)%(x23+x24));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = INT32_MIN;
	int16_t x27 = -1;
	static uint64_t x28 = 124517096611691432LLU;
	volatile uint64_t t3 = 49734559494623761LLU;

	t3 = ((x25|x26)%(x27+x28));

	if (t3 != 18213773031736303LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x30 = -1;
	int16_t x31 = -61;
	int32_t t4 = -338;

	t4 = ((x29|x30)%(x31+x32));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = INT32_MIN;
	uint64_t x35 = UINT64_MAX;
	static uint64_t t5 = 291LLU;

	t5 = ((x33|x34)%(x35+x36));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -5;
	uint16_t x40 = UINT16_MAX;

	t6 = ((x37|x38)%(x39+x40));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MAX;
	uint64_t x43 = 3869468872LLU;
	int8_t x44 = INT8_MIN;

	t7 = ((x41|x42)%(x43+x44));

	if (t7 != 3571643887LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x45 = 14614;
	uint16_t x46 = 0U;
	uint8_t x47 = 1U;
	static uint32_t x48 = 1U;
	static uint32_t t8 = 120U;

	t8 = ((x45|x46)%(x47+x48));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MAX;
	static uint64_t x50 = 47330051LLU;
	volatile int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MAX;
	uint64_t t9 = 30707069294855972LLU;

	t9 = ((x49|x50)%(x51+x52));

	if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x56 = INT8_MIN;
	int64_t t10 = -248451918076097381LL;

	t10 = ((x53|x54)%(x55+x56));

	if (t10 != 1665919LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -15;
	uint64_t x58 = 72LLU;
	volatile uint8_t x59 = UINT8_MAX;
	static uint64_t t11 = 24082022221171LLU;

	t11 = ((x57|x58)%(x59+x60));

	if (t11 != 21702LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = 3U;
	int8_t x62 = INT8_MIN;
	static int64_t x64 = INT64_MAX;
	static volatile int64_t t12 = 53336547064303LL;

	t12 = ((x61|x62)%(x63+x64));

	if (t12 != -125LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x70 = 1303823U;
	static int8_t x72 = INT8_MAX;
	int64_t t13 = 6LL;

	t13 = ((x69|x70)%(x71+x72));

	if (t13 != -87LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = UINT8_MAX;
	int16_t x78 = -1;
	static int16_t x79 = -6;
	uint16_t x80 = 14U;

	t14 = ((x77|x78)%(x79+x80));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MAX;
	volatile uint32_t x86 = 1U;
	static uint16_t x88 = UINT16_MAX;
	volatile uint32_t t15 = 6293878U;

	t15 = ((x85|x86)%(x87+x88));

	if (t15 != 127U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 13U;
	uint8_t x90 = 1U;
	static int8_t x92 = -59;
	int32_t t16 = 4;

	t16 = ((x89|x90)%(x91+x92));

	if (t16 != 13) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = -192;
	int16_t x98 = -2878;
	int32_t x100 = -15090;
	volatile int32_t t17 = 1004475;

	t17 = ((x97|x98)%(x99+x100));

	if (t17 != -62) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x101 = UINT8_MAX;
	int16_t x102 = -9573;
	static int64_t x103 = -225957878980LL;
	volatile int64_t t18 = -2280878833135592919LL;

	t18 = ((x101|x102)%(x103+x104));

	if (t18 != -9473LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = 653206173;
	volatile int64_t t19 = -19557086892LL;

	t19 = ((x105|x106)%(x107+x108));

	if (t19 != 653206237LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x109 = -1;
	uint64_t x110 = 9LLU;
	volatile uint16_t x112 = 25U;
	volatile uint64_t t20 = 7030803LLU;

	t20 = ((x109|x110)%(x111+x112));

	if (t20 != 207175LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x114 = 1176U;
	volatile int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MAX;
	int64_t t21 = -100LL;

	t21 = ((x113|x114)%(x115+x116));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 981699304984948LLU;
	int16_t x119 = 3157;
	uint16_t x120 = 14U;
	uint64_t t22 = 8202241LLU;

	t22 = ((x117|x118)%(x119+x120));

	if (t22 != 15LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MIN;
	int32_t x123 = 20219464;
	volatile uint16_t x124 = 206U;
	int64_t t23 = -4205390LL;

	t23 = ((x121|x122)%(x123+x124));

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x126 = -3758937329905399LL;
	volatile uint32_t x127 = 1U;
	uint16_t x128 = 148U;

	t24 = ((x125|x126)%(x127+x128));

	if (t24 != -97LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x130 = 4037874466976824LLU;
	int8_t x132 = -29;
	volatile uint64_t t25 = 4107875645410LLU;

	t25 = ((x129|x130)%(x131+x132));

	if (t25 != 178LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = 0;
	int32_t x138 = INT32_MIN;
	static uint8_t x139 = 47U;
	static int64_t x140 = INT64_MIN;
	volatile int64_t t26 = 26LL;

	t26 = ((x137|x138)%(x139+x140));

	if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x141 = 1618U;
	int32_t x144 = INT32_MIN;
	volatile int64_t t27 = 115633902122448050LL;

	t27 = ((x141|x142)%(x143+x144));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = 1LL;
	uint64_t x146 = UINT64_MAX;
	int16_t x147 = 132;
	volatile uint64_t t28 = 215703LLU;

	t28 = ((x145|x146)%(x147+x148));

	if (t28 != 988489935LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = INT8_MAX;
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MAX;
	static volatile int64_t x152 = INT64_MIN;
	volatile int64_t t29 = 566075LL;

	t29 = ((x149|x150)%(x151+x152));

	if (t29 != -32641LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = -3;
	volatile uint64_t x158 = UINT64_MAX;
	volatile int32_t x159 = INT32_MIN;
	static volatile uint16_t x160 = 6034U;

	t30 = ((x157|x158)%(x159+x160));

	if (t30 != 2147477613LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x161 = -1;
	int64_t x162 = INT64_MAX;
	int8_t x163 = -1;
	volatile int32_t x164 = INT32_MAX;

	t31 = ((x161|x162)%(x163+x164));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int32_t x166 = 7674;
	int32_t x167 = INT32_MIN;
	int64_t t32 = -288720183LL;

	t32 = ((x165|x166)%(x167+x168));

	if (t32 != 7679LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x170 = INT16_MAX;
	static volatile int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MAX;
	volatile int64_t t33 = -857886219823066LL;

	t33 = ((x169|x170)%(x171+x172));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x173 = UINT64_MAX;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = 38572LL;
	volatile uint64_t t34 = 1809837LLU;

	t34 = ((x173|x174)%(x175+x176));

	if (t34 != 11091LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = INT16_MAX;
	static int64_t x186 = INT64_MIN;
	static int16_t x187 = INT16_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile int64_t t35 = 38070LL;

	t35 = ((x185|x186)%(x187+x188));

	if (t35 != -70391LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x190 = -1748218LL;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 3538U;
	int64_t t36 = -29818084475740LL;

	t36 = ((x189|x190)%(x191+x192));

	if (t36 != -902LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x193 = INT64_MIN;
	volatile uint64_t x194 = 890LLU;
	int32_t x195 = -1;
	static uint64_t x196 = 54950282LLU;
	volatile uint64_t t37 = 3057788559124637349LLU;

	t37 = ((x193|x194)%(x195+x196));

	if (t37 != 42032250LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = INT32_MIN;
	int16_t x198 = 13;
	static uint8_t x199 = 0U;
	static int32_t x200 = -59;
	int32_t t38 = 6387518;

	t38 = ((x197|x198)%(x199+x200));

	if (t38 != -42) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x201 = INT16_MIN;
	uint64_t x202 = 557634LLU;
	volatile int16_t x203 = -3;
	uint8_t x204 = UINT8_MAX;
	static volatile uint64_t t39 = 9291574051593753LLU;

	t39 = ((x201|x202)%(x203+x204));

	if (t39 != 82LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x209 = 1562LLU;
	uint32_t x212 = 104167494U;
	volatile uint64_t t40 = 194369LLU;

	t40 = ((x209|x210)%(x211+x212));

	if (t40 != 65535LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x213 = -1;
	static int16_t x214 = 444;
	int64_t x215 = -1LL;
	int64_t x216 = 4LL;
	static int64_t t41 = -8944374LL;

	t41 = ((x213|x214)%(x215+x216));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x221 = INT32_MIN;
	uint32_t x222 = UINT32_MAX;
	static int32_t x223 = -1;
	uint64_t x224 = 1809LLU;
	static volatile uint64_t t42 = 5534518443095859973LLU;

	t42 = ((x221|x222)%(x223+x224));

	if (t42 != 15LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x225 = INT64_MIN;
	volatile int64_t x226 = -1LL;
	volatile int32_t x228 = INT32_MAX;
	int64_t t43 = 3828628280327543819LL;

	t43 = ((x225|x226)%(x227+x228));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = -1;
	static int16_t x230 = -1;
	int16_t x231 = INT16_MAX;
	int16_t x232 = -1;
	static int32_t t44 = 33204011;

	t44 = ((x229|x230)%(x231+x232));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x235 = INT8_MIN;
	uint32_t x236 = UINT32_MAX;
	uint64_t t45 = 252795192553289652LLU;

	t45 = ((x233|x234)%(x235+x236));

	if (t45 != 16640LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x238 = INT16_MIN;
	volatile uint64_t x239 = 1LLU;
	int32_t x240 = INT32_MAX;

	t46 = ((x237|x238)%(x239+x240));

	if (t46 != 2147450880LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x241 = 15647U;
	static volatile int32_t x242 = -58323072;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = 58U;
	static int32_t t47 = 89;

	t47 = ((x241|x242)%(x243+x244));

	if (t47 != -53) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x245 = UINT64_MAX;
	uint64_t x246 = 2627181388053LLU;

	t48 = ((x245|x246)%(x247+x248));

	if (t48 != 65535LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x250 = 70591204;
	int64_t t49 = 16638LL;

	t49 = ((x249|x250)%(x251+x252));

	if (t49 != -2076826907LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x253 = 16162704U;
	uint16_t x254 = UINT16_MAX;
	volatile uint64_t x255 = 87407LLU;
	static uint32_t x256 = 883U;

	t50 = ((x253|x254)%(x255+x256));

	if (t50 != 30321LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x261 = INT16_MIN;
	static uint8_t x262 = UINT8_MAX;
	int32_t x264 = INT32_MAX;
	volatile int32_t t51 = 0;

	t51 = ((x261|x262)%(x263+x264));

	if (t51 != -32513) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x265 = -152LL;
	uint32_t x266 = 20485U;
	int16_t x267 = INT16_MIN;
	volatile int64_t t52 = 453610759277LL;

	t52 = ((x265|x266)%(x267+x268));

	if (t52 != -147LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = INT8_MIN;
	volatile int64_t x270 = INT64_MAX;
	int8_t x271 = 1;
	uint16_t x272 = 4701U;
	volatile int64_t t53 = -31866672490LL;

	t53 = ((x269|x270)%(x271+x272));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x275 = 2;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t54 = -263269120;

	t54 = ((x273|x274)%(x275+x276));

	if (t54 != -911) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x279 = -3433LL;
	int8_t x280 = -1;

	t55 = ((x277|x278)%(x279+x280));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x285 = 129726U;
	int64_t x286 = INT64_MIN;
	static int8_t x288 = INT8_MAX;

	t56 = ((x285|x286)%(x287+x288));

	if (t56 != -62LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x289 = INT32_MIN;
	int32_t x290 = -210547613;
	uint32_t x291 = 1U;
	static int16_t x292 = INT16_MAX;

	t57 = ((x289|x290)%(x291+x292));

	if (t57 != 19555U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = INT16_MIN;
	static uint32_t x294 = 14349U;
	static volatile uint32_t t58 = 17934154U;

	t58 = ((x293|x294)%(x295+x296));

	if (t58 != 47119U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x297 = INT8_MIN;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = 7U;
	uint32_t x300 = UINT32_MAX;
	static volatile uint32_t t59 = 334302U;

	t59 = ((x297|x298)%(x299+x300));

	if (t59 != 2U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x309 = UINT8_MAX;
	int32_t x310 = INT32_MAX;
	volatile uint8_t x311 = 51U;

	t60 = ((x309|x310)%(x311+x312));

	if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x314 = INT32_MAX;
	uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MAX;
	uint64_t t61 = 29990737231322LLU;

	t61 = ((x313|x314)%(x315+x316));

	if (t61 != 3LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x317 = 7803370484LL;
	static volatile int64_t x318 = INT64_MIN;
	uint8_t x319 = 35U;
	uint16_t x320 = 26U;
	int64_t t62 = -139895504529861578LL;

	t62 = ((x317|x318)%(x319+x320));

	if (t62 != -51LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x324 = -36705LL;
	uint64_t t63 = 2995538993LLU;

	t63 = ((x321|x322)%(x323+x324));

	if (t63 != 1094427859LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x327 = UINT16_MAX;
	uint32_t x328 = UINT32_MAX;
	int64_t t64 = 3663149803092979LL;

	t64 = ((x325|x326)%(x327+x328));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = INT16_MAX;
	int32_t x330 = 12555278;
	uint32_t x331 = 2659U;
	int64_t x332 = 26182839379678LL;
	int64_t t65 = -8LL;

	t65 = ((x329|x330)%(x331+x332));

	if (t65 != 12582911LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = -1;
	uint64_t x335 = 870555055LLU;
	uint8_t x336 = UINT8_MAX;
	static volatile uint64_t t66 = 2045942603516771107LLU;

	t66 = ((x333|x334)%(x335+x336));

	if (t66 != 360125765LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x337 = 8U;
	static uint16_t x338 = 25969U;
	uint16_t x339 = UINT16_MAX;

	t67 = ((x337|x338)%(x339+x340));

	if (t67 != 25977) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = INT16_MAX;
	static int64_t x342 = INT64_MIN;
	uint64_t x344 = 42012577789556489LLU;
	volatile uint64_t t68 = 36480LLU;

	t68 = ((x341|x342)%(x343+x344));

	if (t68 != 22617500941947339LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = INT16_MIN;
	static int32_t x346 = -4146038;
	volatile int64_t x347 = 29153LL;
	volatile int32_t x348 = -15127;
	volatile int64_t t69 = 322975079243922LL;

	t69 = ((x345|x346)%(x347+x348));

	if (t69 != -3244LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = -1LL;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = -1;
	volatile int64_t x352 = 32533LL;
	volatile int64_t t70 = -160825540483851LL;

	t70 = ((x349|x350)%(x351+x352));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = INT32_MIN;
	int8_t x354 = -1;
	int32_t x355 = -621310;
	int8_t x356 = -1;
	int32_t t71 = 2;

	t71 = ((x353|x354)%(x355+x356));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x357 = 0U;
	volatile int8_t x358 = INT8_MIN;
	int16_t x359 = -1;
	int32_t t72 = -117707;

	t72 = ((x357|x358)%(x359+x360));

	if (t72 != -3) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x361 = 28102U;
	volatile int64_t x362 = -1381468559235642178LL;
	volatile int8_t x363 = -3;
	volatile int16_t x364 = 153;
	volatile int64_t t73 = 50063933LL;

	t73 = ((x361|x362)%(x363+x364));

	if (t73 != -32LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x365 = 4U;
	volatile uint32_t x367 = UINT32_MAX;
	int32_t x368 = 0;
	uint32_t t74 = 88998169U;

	t74 = ((x365|x366)%(x367+x368));

	if (t74 != 2147483652U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x369 = 466164320;
	volatile int32_t x370 = -1;
	uint32_t x371 = 970844U;
	volatile uint64_t x372 = 13777880934LLU;
	uint64_t t75 = 432157327991LLU;

	t75 = ((x369|x370)%(x371+x372));

	if (t75 != 7152433787LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x373 = INT16_MIN;
	static uint16_t x374 = 1846U;
	int8_t x375 = 0;
	static volatile int32_t t76 = 578380;

	t76 = ((x373|x374)%(x375+x376));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x381 = 27038LLU;
	uint8_t x383 = 60U;
	volatile int64_t x384 = -1LL;
	volatile uint64_t t77 = 23778386LLU;

	t77 = ((x381|x382)%(x383+x384));

	if (t77 != 27LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x385 = INT8_MIN;
	uint16_t x386 = UINT16_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = -54498LL;
	int64_t t78 = -6549LL;

	t78 = ((x385|x386)%(x387+x388));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x389 = INT64_MIN;
	uint16_t x390 = 11U;
	uint32_t x391 = 1864528U;
	static volatile uint64_t x392 = 2499817111613LLU;
	volatile uint64_t t79 = 111177155LLU;

	t79 = ((x389|x390)%(x391+x392));

	if (t79 != 2445200300104LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x394 = INT16_MIN;
	static int16_t x395 = -669;
	volatile uint64_t t80 = 175972047676869LLU;

	t80 = ((x393|x394)%(x395+x396));

	if (t80 != 18446744073709550376LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x397 = 22U;
	int16_t x398 = INT16_MAX;
	volatile int16_t x399 = -5267;
	volatile uint8_t x400 = 5U;
	volatile int32_t t81 = 263;

	t81 = ((x397|x398)%(x399+x400));

	if (t81 != 1195) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x401 = 15999634235172989LLU;
	int32_t x402 = 0;
	int16_t x403 = INT16_MIN;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t82 = 3038580157463164987LLU;

	t82 = ((x401|x402)%(x403+x404));

	if (t82 != 15999634235172989LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x406 = -1;
	int16_t x407 = -1;
	uint64_t x408 = UINT64_MAX;
	uint64_t t83 = 22LLU;

	t83 = ((x405|x406)%(x407+x408));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = INT32_MIN;
	int32_t x410 = INT32_MAX;
	int16_t x411 = INT16_MIN;
	uint32_t t84 = 6U;

	t84 = ((x409|x410)%(x411+x412));

	if (t84 != 32752U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x413 = INT8_MIN;
	uint8_t x415 = UINT8_MAX;
	volatile int8_t x416 = -1;
	static volatile int32_t t85 = -9034374;

	t85 = ((x413|x414)%(x415+x416));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x418 = INT8_MIN;
	volatile int8_t x419 = 1;
	static uint16_t x420 = 5421U;
	int32_t t86 = 141702;

	t86 = ((x417|x418)%(x419+x420));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x421 = INT8_MIN;
	int16_t x423 = -1;
	volatile int64_t t87 = 2967771LL;

	t87 = ((x421|x422)%(x423+x424));

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x425 = INT16_MIN;
	int64_t x426 = INT64_MIN;
	int16_t x427 = INT16_MIN;
	static volatile int64_t t88 = -331444LL;

	t88 = ((x425|x426)%(x427+x428));

	if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x429 = -1LL;
	static volatile uint8_t x432 = 24U;

	t89 = ((x429|x430)%(x431+x432));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x433 = 5252706767069LL;
	int32_t x434 = INT32_MIN;
	uint64_t x435 = 78818500559947LLU;
	uint64_t t90 = 1306475415041551161LLU;

	t90 = ((x433|x434)%(x435+x436));

	if (t90 != 62202621085757LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x437 = -1LL;
	int16_t x438 = INT16_MIN;
	static volatile int8_t x440 = INT8_MIN;

	t91 = ((x437|x438)%(x439+x440));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x441 = 4646857506LLU;
	int64_t x443 = 135960175650LL;
	int16_t x444 = 4037;
	volatile uint64_t t92 = 477LLU;

	t92 = ((x441|x442)%(x443+x444));

	if (t92 != 6425243639LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x445 = -60;
	uint64_t x446 = 101728LLU;
	uint8_t x448 = UINT8_MAX;
	volatile uint64_t t93 = 6346579319100271307LLU;

	t93 = ((x445|x446)%(x447+x448));

	if (t93 != 692LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x449 = -1;
	static int8_t x451 = -1;

	t94 = ((x449|x450)%(x451+x452));

	if (t94 != 871U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x457 = INT32_MIN;
	uint16_t x458 = 166U;
	int8_t x459 = -25;
	int32_t x460 = -1;
	volatile int32_t t95 = 34782;

	t95 = ((x457|x458)%(x459+x460));

	if (t95 != -14) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x461 = UINT32_MAX;
	uint32_t x462 = UINT32_MAX;
	int8_t x464 = -1;
	uint32_t t96 = 88993599U;

	t96 = ((x461|x462)%(x463+x464));

	if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x465 = 103;
	int8_t x466 = INT8_MIN;
	int64_t x468 = -1LL;
	static volatile int64_t t97 = -127629420600060531LL;

	t97 = ((x465|x466)%(x467+x468));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x469 = 105U;
	static int64_t x470 = INT64_MAX;
	int16_t x471 = INT16_MIN;
	int8_t x472 = INT8_MIN;
	static int64_t t98 = 1LL;

	t98 = ((x469|x470)%(x471+x472));

	if (t98 != 32767LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x473 = 81U;
	static int64_t x474 = -1LL;
	int64_t x475 = INT64_MIN;
	volatile int64_t x476 = 131LL;
	int64_t t99 = -249755LL;

	t99 = ((x473|x474)%(x475+x476));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

