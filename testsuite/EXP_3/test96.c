#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = -349;
int8_t x9 = INT8_MIN;
static uint8_t x13 = 2U;
uint64_t t3 = 11335439LLU;
volatile int16_t x19 = -88;
int8_t x20 = INT8_MIN;
volatile int32_t t4 = -62;
static volatile uint8_t x24 = UINT8_MAX;
uint16_t x27 = UINT16_MAX;
volatile int32_t t6 = 37285;
int16_t x35 = INT16_MIN;
volatile uint32_t t8 = 418873921U;
volatile uint16_t x41 = 162U;
int32_t x50 = INT32_MIN;
int32_t x52 = INT32_MAX;
int16_t x54 = INT16_MIN;
uint8_t x55 = 2U;
uint8_t x56 = 108U;
int16_t x57 = -5763;
int32_t x59 = 7695916;
uint64_t x65 = 105912818LLU;
int64_t t20 = 24936493LL;
int64_t x88 = 0LL;
volatile uint16_t x90 = 20058U;
volatile uint32_t x100 = 119288403U;
int16_t x102 = -10313;
int32_t t24 = 5;
volatile int64_t x106 = INT64_MIN;
int16_t x111 = -12308;
static int16_t x112 = -440;
int8_t x124 = INT8_MAX;
int64_t x128 = -564046315404638561LL;
volatile int8_t x132 = INT8_MIN;
static uint32_t x149 = 202825460U;
int16_t x152 = -1668;
int8_t x153 = INT8_MAX;
uint64_t x162 = UINT64_MAX;
int8_t x163 = INT8_MIN;
static uint8_t x165 = 1U;
volatile uint8_t x169 = 1U;
volatile int8_t x173 = INT8_MAX;
volatile int8_t x174 = INT8_MAX;
uint16_t x176 = 16609U;
int8_t x182 = -15;
int64_t t42 = 2546LL;
int32_t t48 = 1484;
int8_t x213 = -6;
static uint64_t x214 = 9LLU;
uint8_t x216 = UINT8_MAX;
int32_t t51 = -1450060;
int8_t x222 = 10;
static volatile uint8_t x233 = 0U;
static uint32_t x247 = 5U;
int8_t x254 = INT8_MAX;
int64_t x257 = INT64_MAX;
uint16_t x259 = 1911U;
static int32_t t58 = 16449589;
volatile uint32_t t59 = 19905U;
volatile uint64_t t60 = 8555LLU;
volatile int32_t x270 = -117;
int8_t x274 = 6;
int8_t x278 = INT8_MIN;
int64_t x287 = -16282538190581447LL;
uint64_t x300 = UINT64_MAX;
volatile uint64_t t68 = 132194663LLU;
int32_t x301 = INT32_MIN;
int8_t x308 = INT8_MIN;
uint64_t x315 = 42360138545084375LLU;
static int64_t x316 = -1LL;
int8_t x319 = INT8_MAX;
static int8_t x328 = INT8_MAX;
int16_t x331 = INT16_MIN;
uint32_t x338 = 4469766U;
static uint64_t x343 = 131219399834LLU;
uint32_t x351 = 41941U;
int8_t x352 = INT8_MIN;
volatile int16_t x355 = -1;
uint8_t x357 = 4U;
uint16_t x360 = UINT16_MAX;
int64_t x373 = INT64_MAX;
volatile uint8_t x377 = UINT8_MAX;
volatile int32_t t89 = 5395846;
int16_t x389 = -2;
int32_t x390 = INT32_MIN;
int8_t x407 = INT8_MIN;
int8_t x408 = INT8_MIN;
uint16_t x413 = UINT16_MAX;
int16_t x414 = INT16_MIN;
uint16_t x421 = 107U;
int16_t x425 = -1;
int8_t x427 = 0;
int64_t t98 = 1990508739793271LL;
static uint64_t x435 = 3993LLU;
volatile uint64_t t99 = 7722360963LLU;


void f0(void) {
	static int64_t x1 = -1LL;
	int16_t x2 = INT16_MIN;
	volatile int32_t x3 = INT32_MIN;
	int16_t x4 = 0;
	static int32_t t0 = 2866;

	t0 = ((x1==x2)%(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -121;
	uint32_t x6 = 753412939U;
	uint32_t x8 = 27U;
	volatile uint32_t t1 = 983392151U;

	t1 = ((x5==x6)%(x7+x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 60;
	uint16_t x11 = 509U;
	static volatile int8_t x12 = INT8_MIN;
	int32_t t2 = 721;

	t2 = ((x9==x10)%(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = INT32_MIN;
	uint64_t x15 = 393LLU;
	int16_t x16 = -7280;

	t3 = ((x13==x14)%(x15+x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint8_t x18 = 2U;

	t4 = ((x17==x18)%(x19+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 51U;
	int8_t x22 = -1;
	volatile int32_t x23 = 1756407;
	volatile int32_t t5 = -14;

	t5 = ((x21==x22)%(x23+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	int16_t x26 = -1;
	int16_t x28 = INT16_MIN;

	t6 = ((x25==x26)%(x27+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	uint64_t x30 = 2814938775385LLU;
	static int16_t x31 = 84;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 391;

	t7 = ((x29==x30)%(x31+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint64_t x34 = UINT64_MAX;
	uint32_t x36 = 278044U;

	t8 = ((x33==x34)%(x35+x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	static int16_t x38 = -1;
	volatile int64_t x39 = INT64_MIN;
	uint64_t x40 = 4LLU;
	uint64_t t9 = 5230715084078750LLU;

	t9 = ((x37==x38)%(x39+x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = UINT32_MAX;
	int16_t x43 = -5758;
	int8_t x44 = 18;
	int32_t t10 = -3128570;

	t10 = ((x41==x42)%(x43+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	int32_t x46 = -23;
	int32_t x47 = INT32_MIN;
	static uint8_t x48 = 12U;
	static volatile int32_t t11 = 922733;

	t11 = ((x45==x46)%(x47+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MAX;
	uint16_t x51 = 0U;
	volatile int32_t t12 = -1708;

	t12 = ((x49==x50)%(x51+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	int32_t t13 = 2414186;

	t13 = ((x53==x54)%(x55+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	volatile uint8_t x60 = 78U;
	volatile int32_t t14 = -15840;

	t14 = ((x57==x58)%(x59+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 172425127LL;
	int16_t x62 = INT16_MIN;
	static int64_t x63 = INT64_MIN;
	int64_t x64 = 1523173301LL;
	int64_t t15 = 94020903731255883LL;

	t15 = ((x61==x62)%(x63+x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MAX;
	int8_t x67 = INT8_MAX;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 42;

	t16 = ((x65==x66)%(x67+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = -13770641268840LL;
	volatile int64_t x71 = -1299808883551502087LL;
	static uint32_t x72 = 4U;
	int64_t t17 = 1LL;

	t17 = ((x69==x70)%(x71+x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -959;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = INT8_MIN;
	int32_t t18 = -482434175;

	t18 = ((x73==x74)%(x75+x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int16_t x78 = 1;
	int16_t x79 = -1;
	static int64_t x80 = INT64_MAX;
	volatile int64_t t19 = -1006356476876152LL;

	t19 = ((x77==x78)%(x79+x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = 14088430;
	uint8_t x82 = 0U;
	volatile int64_t x83 = INT64_MIN;
	volatile uint16_t x84 = UINT16_MAX;

	t20 = ((x81==x82)%(x83+x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 468LLU;
	int16_t x86 = -1;
	uint32_t x87 = UINT32_MAX;
	int64_t t21 = 64136727LL;

	t21 = ((x85==x86)%(x87+x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int8_t x91 = 0;
	uint16_t x92 = UINT16_MAX;
	static volatile int32_t t22 = -1947207;

	t22 = ((x89==x90)%(x91+x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 12U;
	static int64_t x98 = INT64_MIN;
	uint32_t x99 = UINT32_MAX;
	volatile uint32_t t23 = 0U;

	t23 = ((x97==x98)%(x99+x100));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1LL;
	uint8_t x103 = UINT8_MAX;
	uint8_t x104 = 3U;

	t24 = ((x101==x102)%(x103+x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 8213U;
	int16_t x107 = -60;
	uint32_t x108 = 1487U;
	static uint32_t t25 = 16033U;

	t25 = ((x105==x106)%(x107+x108));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = INT32_MIN;
	volatile int16_t x110 = INT16_MAX;
	volatile int32_t t26 = -4;

	t26 = ((x109==x110)%(x111+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int16_t x119 = -1176;
	int32_t x120 = INT32_MAX;
	volatile int32_t t27 = -1;

	t27 = ((x117==x118)%(x119+x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = 137586583244506266LL;
	volatile uint8_t x122 = 9U;
	int64_t x123 = -117380LL;
	static volatile int64_t t28 = 1555491170LL;

	t28 = ((x121==x122)%(x123+x124));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x125 = UINT8_MAX;
	static volatile uint32_t x126 = UINT32_MAX;
	uint16_t x127 = UINT16_MAX;
	int64_t t29 = 29LL;

	t29 = ((x125==x126)%(x127+x128));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	uint16_t x131 = UINT16_MAX;
	int32_t t30 = -4055;

	t30 = ((x129==x130)%(x131+x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MAX;
	int8_t x134 = INT8_MIN;
	int64_t x135 = -1LL;
	uint8_t x136 = UINT8_MAX;
	volatile int64_t t31 = 44LL;

	t31 = ((x133==x134)%(x135+x136));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = 24502;
	int8_t x138 = -1;
	uint64_t x139 = 317LLU;
	int16_t x140 = INT16_MAX;
	volatile uint64_t t32 = 1415216203LLU;

	t32 = ((x137==x138)%(x139+x140));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x141 = INT32_MIN;
	int16_t x142 = INT16_MIN;
	uint16_t x143 = 14239U;
	int64_t x144 = INT64_MIN;
	volatile int64_t t33 = -10812682296961942LL;

	t33 = ((x141==x142)%(x143+x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x145 = -1;
	static uint64_t x146 = 31135323118280659LLU;
	uint64_t x147 = 303697527203125LLU;
	static uint32_t x148 = 6630U;
	volatile uint64_t t34 = 1957848661605504262LLU;

	t34 = ((x145==x146)%(x147+x148));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x150 = INT8_MAX;
	int8_t x151 = INT8_MIN;
	volatile int32_t t35 = 87942738;

	t35 = ((x149==x150)%(x151+x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = INT16_MIN;
	static uint32_t x155 = 45U;
	int16_t x156 = -1;
	uint32_t t36 = 2185U;

	t36 = ((x153==x154)%(x155+x156));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x161 = INT64_MAX;
	volatile int16_t x164 = INT16_MIN;
	static int32_t t37 = -124254510;

	t37 = ((x161==x162)%(x163+x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x166 = INT8_MIN;
	static uint8_t x167 = UINT8_MAX;
	volatile int32_t x168 = INT32_MIN;
	int32_t t38 = -203458;

	t38 = ((x165==x166)%(x167+x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x170 = INT64_MIN;
	volatile uint64_t x171 = UINT64_MAX;
	volatile int16_t x172 = INT16_MIN;
	static uint64_t t39 = 89640169282616023LLU;

	t39 = ((x169==x170)%(x171+x172));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x175 = INT32_MIN;
	int32_t t40 = 36;

	t40 = ((x173==x174)%(x175+x176));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 1U;
	int8_t x178 = 25;
	uint64_t x179 = 427644220201LLU;
	int64_t x180 = INT64_MIN;
	uint64_t t41 = 54536LLU;

	t41 = ((x177==x178)%(x179+x180));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = -1;
	int8_t x183 = INT8_MIN;
	int64_t x184 = 81173503348058LL;

	t42 = ((x181==x182)%(x183+x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = -1;
	int8_t x186 = INT8_MIN;
	int8_t x187 = -8;
	int16_t x188 = INT16_MIN;
	int32_t t43 = 218247267;

	t43 = ((x185==x186)%(x187+x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 2951692229180187LLU;
	uint32_t x190 = 670U;
	uint16_t x191 = UINT16_MAX;
	int8_t x192 = INT8_MAX;
	volatile int32_t t44 = -4;

	t44 = ((x189==x190)%(x191+x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x193 = 23U;
	volatile int16_t x194 = -1;
	static int64_t x195 = INT64_MAX;
	int32_t x196 = -272913;
	volatile int64_t t45 = -9296469114877LL;

	t45 = ((x193==x194)%(x195+x196));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x197 = INT32_MIN;
	volatile int64_t x198 = INT64_MAX;
	static int8_t x199 = 1;
	int8_t x200 = -7;
	int32_t t46 = -138614012;

	t46 = ((x197==x198)%(x199+x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x201 = 25;
	volatile uint16_t x202 = UINT16_MAX;
	volatile int64_t x203 = INT64_MIN;
	volatile int64_t x204 = INT64_MAX;
	int64_t t47 = 5858132462LL;

	t47 = ((x201==x202)%(x203+x204));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x205 = INT8_MIN;
	int8_t x206 = 1;
	int16_t x207 = 3014;
	int16_t x208 = INT16_MAX;

	t48 = ((x205==x206)%(x207+x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = 560601756578374LLU;
	static volatile int32_t x210 = INT32_MAX;
	static uint32_t x211 = 32017957U;
	uint64_t x212 = 1148881956911LLU;
	uint64_t t49 = 493LLU;

	t49 = ((x209==x210)%(x211+x212));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x215 = 450;
	int32_t t50 = 572;

	t50 = ((x213==x214)%(x215+x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 6437U;
	uint8_t x218 = UINT8_MAX;
	static int16_t x219 = INT16_MIN;
	int16_t x220 = -318;

	t51 = ((x217==x218)%(x219+x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x221 = INT32_MIN;
	volatile int64_t x223 = -2LL;
	uint16_t x224 = 899U;
	int64_t t52 = 28218492800675LL;

	t52 = ((x221==x222)%(x223+x224));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x229 = UINT64_MAX;
	static int8_t x230 = -1;
	static int32_t x231 = -1;
	static int8_t x232 = 35;
	int32_t t53 = -1040155;

	t53 = ((x229==x230)%(x231+x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x234 = -1328;
	int8_t x235 = 45;
	uint64_t x236 = 0LLU;
	static uint64_t t54 = 20348546629127LLU;

	t54 = ((x233==x234)%(x235+x236));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MAX;
	volatile uint64_t x239 = 21852LLU;
	static uint32_t x240 = 4389200U;
	uint64_t t55 = 6529983367620LLU;

	t55 = ((x237==x238)%(x239+x240));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = INT64_MAX;
	int8_t x246 = INT8_MAX;
	volatile uint64_t x248 = 6329225LLU;
	static volatile uint64_t t56 = 2474130936165LLU;

	t56 = ((x245==x246)%(x247+x248));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = 29;
	static uint16_t x255 = 125U;
	int8_t x256 = -1;
	volatile int32_t t57 = -20197672;

	t57 = ((x253==x254)%(x255+x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x258 = INT8_MIN;
	static int16_t x260 = 65;

	t58 = ((x257==x258)%(x259+x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = 42635523718898641LL;
	static int16_t x262 = -1;
	volatile uint32_t x263 = 649538U;
	int16_t x264 = INT16_MAX;

	t59 = ((x261==x262)%(x263+x264));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = UINT16_MAX;
	static uint8_t x266 = UINT8_MAX;
	volatile int64_t x267 = 660668620912LL;
	uint64_t x268 = 579783629441LLU;

	t60 = ((x265==x266)%(x267+x268));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MAX;
	uint32_t x271 = 11U;
	static int16_t x272 = INT16_MIN;
	uint32_t t61 = 0U;

	t61 = ((x269==x270)%(x271+x272));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x275 = 14050U;
	int16_t x276 = -13880;
	uint32_t t62 = 27U;

	t62 = ((x273==x274)%(x275+x276));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x277 = 79U;
	int8_t x279 = INT8_MIN;
	volatile uint64_t x280 = 1290104832853LLU;
	uint64_t t63 = 68636180021LLU;

	t63 = ((x277==x278)%(x279+x280));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = UINT32_MAX;
	int16_t x282 = INT16_MIN;
	volatile uint8_t x283 = 29U;
	static int16_t x284 = 4;
	volatile int32_t t64 = -90;

	t64 = ((x281==x282)%(x283+x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = 1840LL;
	int32_t x286 = -1;
	volatile int64_t x288 = -1LL;
	static volatile int64_t t65 = 1103665968425532LL;

	t65 = ((x285==x286)%(x287+x288));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x289 = INT16_MIN;
	int64_t x290 = -8024657896789LL;
	int32_t x291 = INT32_MIN;
	static uint32_t x292 = 1702U;
	volatile uint32_t t66 = 192U;

	t66 = ((x289==x290)%(x291+x292));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x293 = UINT16_MAX;
	uint16_t x294 = UINT16_MAX;
	volatile uint32_t x295 = 2275U;
	int16_t x296 = INT16_MIN;
	uint32_t t67 = 1150755685U;

	t67 = ((x293==x294)%(x295+x296));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x297 = -1;
	uint8_t x298 = 2U;
	volatile int16_t x299 = -2;

	t68 = ((x297==x298)%(x299+x300));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x302 = 1U;
	volatile int32_t x303 = 1;
	static int8_t x304 = INT8_MAX;
	int32_t t69 = -158;

	t69 = ((x301==x302)%(x303+x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x305 = 206274328U;
	static volatile int64_t x306 = -1LL;
	uint32_t x307 = UINT32_MAX;
	static volatile uint32_t t70 = 38U;

	t70 = ((x305==x306)%(x307+x308));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = 108784883250834457LL;
	uint64_t x310 = UINT64_MAX;
	int64_t x311 = INT64_MIN;
	uint16_t x312 = 2764U;
	volatile int64_t t71 = 18248LL;

	t71 = ((x309==x310)%(x311+x312));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x313 = -6480LL;
	static int32_t x314 = 2030914;
	volatile uint64_t t72 = 45129790LLU;

	t72 = ((x313==x314)%(x315+x316));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x317 = INT32_MIN;
	uint16_t x318 = 0U;
	uint16_t x320 = UINT16_MAX;
	int32_t t73 = -59815298;

	t73 = ((x317==x318)%(x319+x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = 0;
	volatile int64_t x323 = -417209188920LL;
	int64_t x324 = -17069212419LL;
	volatile int64_t t74 = -364254782LL;

	t74 = ((x321==x322)%(x323+x324));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = INT8_MIN;
	volatile int64_t x326 = INT64_MIN;
	volatile uint8_t x327 = 0U;
	volatile int32_t t75 = 215;

	t75 = ((x325==x326)%(x327+x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = -41755294204LL;
	static int32_t x330 = INT32_MIN;
	int16_t x332 = INT16_MAX;
	volatile int32_t t76 = 5073823;

	t76 = ((x329==x330)%(x331+x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x334 = 2U;
	static volatile int16_t x335 = INT16_MIN;
	int64_t x336 = 993968LL;
	volatile int64_t t77 = 425761996LL;

	t77 = ((x333==x334)%(x335+x336));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x337 = INT64_MIN;
	static int8_t x339 = -11;
	uint32_t x340 = 204U;
	uint32_t t78 = 2U;

	t78 = ((x337==x338)%(x339+x340));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x341 = -2714;
	static int8_t x342 = -1;
	volatile int64_t x344 = 3205220LL;
	static uint64_t t79 = 13504987651525LLU;

	t79 = ((x341==x342)%(x343+x344));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = INT32_MIN;
	int64_t x346 = -2447LL;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t80 = -22;

	t80 = ((x345==x346)%(x347+x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x349 = -1;
	static uint8_t x350 = 16U;
	uint32_t t81 = 320U;

	t81 = ((x349==x350)%(x351+x352));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = INT16_MAX;
	int16_t x354 = INT16_MAX;
	uint32_t x356 = 515502U;
	volatile uint32_t t82 = 63U;

	t82 = ((x353==x354)%(x355+x356));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int32_t t83 = 0;

	t83 = ((x357==x358)%(x359+x360));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = UINT32_MAX;
	int32_t x362 = INT32_MIN;
	static int16_t x363 = INT16_MIN;
	volatile int8_t x364 = INT8_MAX;
	static int32_t t84 = 19399;

	t84 = ((x361==x362)%(x363+x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = INT32_MIN;
	static int32_t x366 = 14;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t85 = -1;

	t85 = ((x365==x366)%(x367+x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x369 = 321429U;
	int64_t x370 = INT64_MIN;
	volatile int64_t x371 = 4403848889674479062LL;
	int64_t x372 = -4742LL;
	static volatile int64_t t86 = 1031376853200LL;

	t86 = ((x369==x370)%(x371+x372));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x374 = UINT16_MAX;
	int32_t x375 = 11;
	static int8_t x376 = INT8_MIN;
	int32_t t87 = -6216440;

	t87 = ((x373==x374)%(x375+x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x378 = 424669U;
	int8_t x379 = 7;
	static int64_t x380 = 395617310473787LL;
	int64_t t88 = 366748032099689139LL;

	t88 = ((x377==x378)%(x379+x380));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = UINT32_MAX;
	static uint16_t x382 = 0U;
	uint8_t x383 = UINT8_MAX;
	static int32_t x384 = INT32_MIN;

	t89 = ((x381==x382)%(x383+x384));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = -1;
	int8_t x386 = -5;
	uint64_t x387 = UINT64_MAX;
	static int16_t x388 = INT16_MAX;
	uint64_t t90 = 2203539000665084LLU;

	t90 = ((x385==x386)%(x387+x388));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x391 = -1LL;
	static int32_t x392 = INT32_MIN;
	volatile int64_t t91 = 549LL;

	t91 = ((x389==x390)%(x391+x392));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = 1;
	int32_t x394 = -1;
	int16_t x395 = 2004;
	uint32_t x396 = 253636U;
	volatile uint32_t t92 = 1643U;

	t92 = ((x393==x394)%(x395+x396));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x401 = -1;
	volatile int32_t x402 = INT32_MIN;
	static int8_t x403 = INT8_MAX;
	int32_t x404 = -23916713;
	volatile int32_t t93 = 5201776;

	t93 = ((x401==x402)%(x403+x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MIN;
	int64_t x406 = 26700140LL;
	volatile int32_t t94 = 16196722;

	t94 = ((x405==x406)%(x407+x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x415 = -1;
	volatile int8_t x416 = 0;
	volatile int32_t t95 = 806367;

	t95 = ((x413==x414)%(x415+x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = INT32_MAX;
	volatile uint8_t x418 = 0U;
	int16_t x419 = 458;
	volatile int8_t x420 = 44;
	volatile int32_t t96 = -101;

	t96 = ((x417==x418)%(x419+x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x422 = -1LL;
	int32_t x423 = INT32_MIN;
	uint16_t x424 = 14U;
	volatile int32_t t97 = -67468205;

	t97 = ((x421==x422)%(x423+x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x426 = 471427826681781LLU;
	int64_t x428 = -1LL;

	t98 = ((x425==x426)%(x427+x428));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x433 = 4692U;
	int8_t x434 = INT8_MIN;
	uint8_t x436 = 60U;

	t99 = ((x433==x434)%(x435+x436));

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

