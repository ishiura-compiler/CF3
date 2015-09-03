#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
static volatile uint64_t t0 = 3231828976232LLU;
volatile int64_t x13 = INT64_MAX;
static volatile uint64_t t1 = 2059182213922064909LLU;
static uint32_t x18 = 129U;
volatile uint64_t x20 = UINT64_MAX;
volatile uint64_t t2 = 374LLU;
uint8_t x22 = 3U;
int32_t t3 = -1;
static uint32_t x26 = 11872U;
int16_t x29 = -40;
int64_t x39 = 316LL;
int64_t x41 = -1LL;
int8_t x46 = 1;
int32_t x47 = -949826091;
uint32_t x48 = 14735953U;
uint8_t x59 = UINT8_MAX;
volatile int32_t t11 = 1929236;
volatile uint64_t t12 = 1400LLU;
static int64_t x69 = -1LL;
uint8_t x70 = 3U;
static volatile int8_t x79 = -6;
static int8_t x83 = -1;
volatile int16_t x88 = -9438;
uint16_t x90 = 5992U;
uint64_t x98 = 98337LLU;
uint32_t x99 = 281473282U;
int8_t x103 = -17;
int16_t x115 = INT16_MIN;
int16_t x130 = INT16_MAX;
int16_t x132 = 1558;
volatile int8_t x134 = -2;
volatile int64_t t25 = 50664060048849LL;
static volatile int32_t x141 = INT32_MIN;
volatile uint32_t x144 = 1808235305U;
uint8_t x146 = 8U;
volatile int8_t x148 = INT8_MIN;
volatile int32_t x163 = -1;
uint64_t x167 = UINT64_MAX;
uint8_t x187 = 62U;
volatile int64_t x188 = INT64_MIN;
volatile int64_t t36 = 112326111298875LL;
static uint16_t x215 = 1356U;
int8_t x223 = INT8_MIN;
uint8_t x227 = UINT8_MAX;
int16_t x231 = 3;
int64_t x234 = -1LL;
int64_t t46 = 2963529050549093143LL;
int8_t x247 = 9;
static uint64_t x255 = UINT64_MAX;
static uint32_t x256 = UINT32_MAX;
uint64_t x261 = 65841LLU;
uint64_t x269 = 35LLU;
volatile int32_t x272 = INT32_MIN;
int8_t x279 = -55;
uint32_t x288 = 4944329U;
uint32_t x293 = UINT32_MAX;
static uint32_t x295 = 9135911U;
int8_t x307 = -1;
static uint64_t x317 = 7020762LLU;
int8_t x323 = INT8_MIN;
uint32_t x326 = 54228310U;
uint16_t x332 = 4162U;
uint64_t x334 = UINT64_MAX;
int8_t x340 = 1;
static int32_t x342 = INT32_MIN;
int16_t x343 = INT16_MIN;
int16_t x344 = INT16_MAX;
int16_t x350 = INT16_MIN;
static uint8_t x351 = 4U;
uint8_t x353 = 3U;
static int64_t x354 = 6635261889095083LL;
int32_t x363 = INT32_MIN;
static int8_t x376 = INT8_MIN;
int16_t x386 = INT16_MIN;
int16_t x390 = -2552;
uint16_t x392 = 2668U;
int16_t x419 = -1;
int64_t t76 = -569652LL;
uint64_t x431 = 32522865994397LLU;
uint64_t t79 = 5634918152LLU;
uint8_t x435 = 3U;
int32_t x437 = INT32_MIN;
uint64_t x472 = UINT64_MAX;
int8_t x480 = -17;
int64_t t89 = 120042998587LL;
int64_t x493 = -1LL;
int8_t x496 = INT8_MIN;
volatile int64_t t92 = -1786LL;
static uint16_t x498 = 2985U;
volatile int32_t t93 = 1810033;
volatile int64_t t95 = -7LL;
int32_t x526 = 0;


void f0(void) {
	uint8_t x1 = 117U;
	int64_t x2 = 55026590046529LL;
	uint64_t x3 = 129925001LLU;

	t0 = ((x1-x2)&(x3+x4));

	if (t0 != 128198400LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x14 = UINT32_MAX;
	uint64_t x15 = UINT64_MAX;
	int32_t x16 = INT32_MIN;

	t1 = ((x13-x14)&(x15+x16));

	if (t1 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -8;
	static int64_t x19 = -1LL;

	t2 = ((x17-x18)&(x19+x20));

	if (t2 != 4294967158LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MIN;

	t3 = ((x21-x22)&(x23+x24));

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x25 = 69624;
	static volatile uint64_t x27 = 11191575LLU;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t4 = 56199LLU;

	t4 = ((x25-x26)&(x27+x28));

	if (t4 != 49296LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x30 = INT64_MIN;
	volatile int16_t x31 = -1;
	uint64_t x32 = 6869LLU;
	static uint64_t t5 = 2634LLU;

	t5 = ((x29-x30)&(x31+x32));

	if (t5 != 6864LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	volatile int64_t x35 = INT64_MIN;
	uint8_t x36 = 0U;
	volatile uint64_t t6 = 24418LLU;

	t6 = ((x33-x34)&(x35+x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 1U;
	int16_t x38 = -14939;
	volatile uint64_t x40 = 26198LLU;
	volatile uint64_t t7 = 40797LLU;

	t7 = ((x37-x38)&(x39+x40));

	if (t7 != 8720LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x42 = INT16_MAX;
	volatile int8_t x43 = INT8_MIN;
	volatile int64_t x44 = -1LL;
	volatile int64_t t8 = -602635LL;

	t8 = ((x41-x42)&(x43+x44));

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x45 = UINT32_MAX;
	volatile uint32_t t9 = 37488134U;

	t9 = ((x45-x46)&(x47+x48));

	if (t9 != 3359877158U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x54 = -1;
	uint64_t x55 = 2433778662LLU;
	int32_t x56 = INT32_MAX;
	volatile uint64_t t10 = 363889LLU;

	t10 = ((x53-x54)&(x55+x56));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = INT8_MIN;
	int16_t x60 = 15;

	t11 = ((x57-x58)&(x59+x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = INT8_MIN;
	uint32_t x62 = 276989703U;
	uint64_t x63 = 1077407LLU;
	static int8_t x64 = -38;

	t12 = ((x61-x62)&(x63+x64));

	if (t12 != 1077369LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	int64_t t13 = 2274904063245703341LL;

	t13 = ((x69-x70)&(x71+x72));

	if (t13 != 252LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = -1LL;
	int32_t x78 = -1;
	int32_t x80 = INT32_MAX;
	int64_t t14 = -57290829541LL;

	t14 = ((x77-x78)&(x79+x80));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = -880LL;
	int16_t x82 = -1;
	uint16_t x84 = UINT16_MAX;
	static volatile int64_t t15 = 372223391103331552LL;

	t15 = ((x81-x82)&(x83+x84));

	if (t15 != 64656LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = -41;
	int16_t x86 = INT16_MAX;
	volatile int8_t x87 = -1;
	int32_t t16 = 13906456;

	t16 = ((x85-x86)&(x87+x88));

	if (t16 != -42240) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x89 = 56562171310881LLU;
	volatile uint16_t x91 = 0U;
	volatile int32_t x92 = INT32_MIN;
	static uint64_t t17 = 233361LLU;

	t17 = ((x89-x90)&(x91+x92));

	if (t17 != 56560424321024LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x97 = INT8_MIN;
	int8_t x100 = -2;
	static volatile uint64_t t18 = 3794462464498LLU;

	t18 = ((x97-x98)&(x99+x100));

	if (t18 != 281440512LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = INT64_MIN;
	static int16_t x102 = -1;
	uint32_t x104 = 19538U;
	static volatile int64_t t19 = -658673LL;

	t19 = ((x101-x102)&(x103+x104));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x109 = UINT8_MAX;
	uint64_t x110 = 2LLU;
	volatile int16_t x111 = INT16_MAX;
	static int32_t x112 = -1;
	static volatile uint64_t t20 = 254881491LLU;

	t20 = ((x109-x110)&(x111+x112));

	if (t20 != 252LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x113 = -1;
	int32_t x114 = INT32_MAX;
	int8_t x116 = INT8_MAX;
	volatile int32_t t21 = INT32_MIN;

	t21 = ((x113-x114)&(x115+x116));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = INT8_MIN;
	volatile int8_t x118 = INT8_MIN;
	int32_t x119 = 434;
	uint8_t x120 = 10U;
	volatile int32_t t22 = 1;

	t22 = ((x117-x118)&(x119+x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x125 = -6142352;
	int64_t x126 = INT64_MIN;
	int64_t x127 = 3239753596037941364LL;
	static int16_t x128 = -7;
	volatile int64_t t23 = 341155202830084046LL;

	t23 = ((x125-x126)&(x127+x128));

	if (t23 != 3239753596037906528LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = -1620582;
	static int16_t x131 = INT16_MAX;
	volatile int32_t t24 = 1;

	t24 = ((x129-x130)&(x131+x132));

	if (t24 != 33809) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = 52U;
	uint16_t x135 = 13U;
	int64_t x136 = INT64_MIN;

	t25 = ((x133-x134)&(x135+x136));

	if (t25 != 4LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = -1;
	uint16_t x138 = 124U;
	int64_t x139 = INT64_MIN;
	static int32_t x140 = INT32_MAX;
	volatile int64_t t26 = -905LL;

	t26 = ((x137-x138)&(x139+x140));

	if (t26 != -9223372034707292285LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x142 = 284309640808227772LLU;
	volatile uint8_t x143 = UINT8_MAX;
	volatile uint64_t t27 = 42704874118LLU;

	t27 = ((x141-x142)&(x143+x144));

	if (t27 != 1094720512LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = -1443406513LL;
	uint16_t x147 = UINT16_MAX;
	int64_t t28 = 17349758LL;

	t28 = ((x145-x146)&(x147+x148));

	if (t28 != 23879LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = -53;
	volatile int16_t x155 = -113;
	volatile int8_t x156 = -1;
	volatile int32_t t29 = -43820070;

	t29 = ((x153-x154)&(x155+x156));

	if (t29 != -124) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x157 = 51283879U;
	volatile uint64_t x158 = 6962680LLU;
	uint16_t x159 = 195U;
	uint16_t x160 = 2009U;
	uint64_t t30 = 1759751LLU;

	t30 = ((x157-x158)&(x159+x160));

	if (t30 != 2188LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x161 = INT16_MAX;
	uint8_t x162 = 17U;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t31 = 47649691U;

	t31 = ((x161-x162)&(x163+x164));

	if (t31 != 32750U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x165 = 10U;
	uint32_t x166 = UINT32_MAX;
	int16_t x168 = -1;
	volatile uint64_t t32 = 859519LLU;

	t32 = ((x165-x166)&(x167+x168));

	if (t32 != 10LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x169 = -23;
	static int16_t x170 = -1;
	uint32_t x171 = 64332493U;
	uint8_t x172 = UINT8_MAX;
	uint32_t t33 = 650280294U;

	t33 = ((x169-x170)&(x171+x172));

	if (t33 != 64332744U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = INT8_MIN;
	static uint64_t x178 = 153938639LLU;
	int8_t x179 = -47;
	volatile int16_t x180 = INT16_MIN;
	volatile uint64_t t34 = 467502958782799LLU;

	t34 = ((x177-x178)&(x179+x180));

	if (t34 != 18446744073555612817LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x181 = 1U;
	static int16_t x182 = -169;
	volatile uint8_t x183 = UINT8_MAX;
	static int64_t x184 = -1LL;
	int64_t t35 = -2320139579LL;

	t35 = ((x181-x182)&(x183+x184));

	if (t35 != 170LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x185 = INT8_MAX;
	int8_t x186 = 1;

	t36 = ((x185-x186)&(x187+x188));

	if (t36 != 62LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = INT16_MAX;
	volatile int64_t x190 = 3284669432131459942LL;
	int32_t x191 = 17;
	int32_t x192 = -1;
	static int64_t t37 = -1LL;

	t37 = ((x189-x190)&(x191+x192));

	if (t37 != 16LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int32_t x198 = 18411287;
	volatile int32_t x199 = -1;
	int16_t x200 = INT16_MIN;
	uint64_t t38 = 241679432LLU;

	t38 = ((x197-x198)&(x199+x200));

	if (t38 != 18446744073691140328LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = -3594;
	uint64_t x206 = 23859474387961574LLU;
	int8_t x207 = INT8_MIN;
	static int8_t x208 = -5;
	uint64_t t39 = 2467067LLU;

	t39 = ((x205-x206)&(x207+x208));

	if (t39 != 18422884599321586448LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x209 = 11948U;
	volatile int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MIN;
	static int8_t x212 = -1;
	volatile int32_t t40 = -59644;

	t40 = ((x209-x210)&(x211+x212));

	if (t40 != 12076) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x213 = 981U;
	int16_t x214 = INT16_MAX;
	int16_t x216 = -1;
	uint32_t t41 = 1577U;

	t41 = ((x213-x214)&(x215+x216));

	if (t41 != 322U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = -1;
	static uint64_t x218 = 457594793LLU;
	int64_t x219 = INT64_MAX;
	int64_t x220 = -22844159977LL;
	uint64_t t42 = 151302LLU;

	t42 = ((x217-x218)&(x219+x220));

	if (t42 != 9223372013838632982LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x221 = UINT32_MAX;
	int16_t x222 = -1;
	int16_t x224 = -1;
	volatile uint32_t t43 = 307U;

	t43 = ((x221-x222)&(x223+x224));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x225 = UINT16_MAX;
	int16_t x226 = INT16_MIN;
	static volatile int64_t x228 = -1LL;
	int64_t t44 = 206886983746LL;

	t44 = ((x225-x226)&(x227+x228));

	if (t44 != 254LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = -1;
	uint8_t x230 = UINT8_MAX;
	int64_t x232 = -28LL;
	volatile int64_t t45 = -21471LL;

	t45 = ((x229-x230)&(x231+x232));

	if (t45 != -256LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x233 = UINT8_MAX;
	volatile uint32_t x235 = 1855283274U;
	static volatile int8_t x236 = INT8_MAX;

	t46 = ((x233-x234)&(x235+x236));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -1;
	volatile int32_t t47 = -4;

	t47 = ((x237-x238)&(x239+x240));

	if (t47 != 32640) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x245 = UINT16_MAX;
	int8_t x246 = INT8_MAX;
	static volatile int32_t x248 = 2572;
	int32_t t48 = 133711424;

	t48 = ((x245-x246)&(x247+x248));

	if (t48 != 2560) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = -1LL;
	uint64_t t49 = 971LLU;

	t49 = ((x253-x254)&(x255+x256));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x262 = -3583;
	static volatile uint8_t x263 = UINT8_MAX;
	static int8_t x264 = INT8_MIN;
	static volatile uint64_t t50 = 51295LLU;

	t50 = ((x261-x262)&(x263+x264));

	if (t50 != 48LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x270 = -1;
	uint64_t x271 = 67689145651LLU;
	volatile uint64_t t51 = 40750LLU;

	t51 = ((x269-x270)&(x271+x272));

	if (t51 != 32LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x277 = 888695U;
	int16_t x278 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	volatile uint32_t t52 = 232596U;

	t52 = ((x277-x278)&(x279+x280));

	if (t52 != 921409U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = 114939419417046571LL;
	static uint8_t x283 = 0U;
	int32_t x284 = -1;
	int64_t t53 = -697229998920881407LL;

	t53 = ((x281-x282)&(x283+x284));

	if (t53 != -114939419417079339LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x285 = 1606U;
	volatile uint8_t x286 = 23U;
	int8_t x287 = -1;
	uint32_t t54 = 734725U;

	t54 = ((x285-x286)&(x287+x288));

	if (t54 != 8U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x294 = 405;
	int8_t x296 = -1;
	volatile uint32_t t55 = 64U;

	t55 = ((x293-x294)&(x295+x296));

	if (t55 != 9135650U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x305 = 4343289475632276377LLU;
	int16_t x306 = INT16_MAX;
	int16_t x308 = 469;
	volatile uint64_t t56 = 1742794LLU;

	t56 = ((x305-x306)&(x307+x308));

	if (t56 != 400LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x309 = UINT16_MAX;
	uint16_t x310 = 25413U;
	static int16_t x311 = 0;
	uint64_t x312 = 52446627LLU;
	volatile uint64_t t57 = 19706419LLU;

	t57 = ((x309-x310)&(x311+x312));

	if (t57 != 1186LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x318 = 332493U;
	static int64_t x319 = -1LL;
	int32_t x320 = INT32_MIN;
	static uint64_t t58 = 1069LLU;

	t58 = ((x317-x318)&(x319+x320));

	if (t58 != 6688269LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = -1;
	volatile int16_t x324 = INT16_MIN;
	static volatile int32_t t59 = INT32_MIN;

	t59 = ((x321-x322)&(x323+x324));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x325 = 1U;
	static int32_t x327 = 1;
	int32_t x328 = -7;
	static volatile uint32_t t60 = 892829U;

	t60 = ((x325-x326)&(x327+x328));

	if (t60 != 4240738986U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x329 = INT64_MAX;
	int8_t x330 = 2;
	int32_t x331 = -1;
	int64_t t61 = 3692043123949079LL;

	t61 = ((x329-x330)&(x331+x332));

	if (t61 != 4161LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = INT16_MIN;
	static int8_t x335 = -31;
	volatile int32_t x336 = -1;
	volatile uint64_t t62 = 4LLU;

	t62 = ((x333-x334)&(x335+x336));

	if (t62 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x337 = UINT64_MAX;
	uint64_t x338 = 8654639371858573335LLU;
	static int8_t x339 = INT8_MAX;
	uint64_t t63 = 967441025789778036LLU;

	t63 = ((x337-x338)&(x339+x340));

	if (t63 != 128LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x341 = INT32_MIN;
	volatile int32_t t64 = 1;

	t64 = ((x341-x342)&(x343+x344));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x345 = INT32_MAX;
	static uint32_t x346 = 15642U;
	int8_t x347 = INT8_MIN;
	volatile uint8_t x348 = 122U;
	volatile uint32_t t65 = 12411851U;

	t65 = ((x345-x346)&(x347+x348));

	if (t65 != 2147468000U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x349 = INT16_MIN;
	int8_t x352 = -1;
	static volatile int32_t t66 = 2018795;

	t66 = ((x349-x350)&(x351+x352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x355 = INT16_MIN;
	uint32_t x356 = 6U;
	int64_t t67 = 1835391367541LL;

	t67 = ((x353-x354)&(x355+x356));

	if (t67 != 3021701120LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x361 = 41;
	int16_t x362 = INT16_MAX;
	uint16_t x364 = 4223U;
	int32_t t68 = -7;

	t68 = ((x361-x362)&(x363+x364));

	if (t68 != -2147483606) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x373 = INT16_MIN;
	uint16_t x374 = 35U;
	int8_t x375 = 4;
	volatile int32_t t69 = 406717;

	t69 = ((x373-x374)&(x375+x376));

	if (t69 != -32892) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 530237U;
	uint16_t x384 = 128U;
	uint32_t t70 = 243U;

	t70 = ((x381-x382)&(x383+x384));

	if (t70 != 61U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x385 = INT64_MIN;
	volatile uint64_t x387 = UINT64_MAX;
	int64_t x388 = -1LL;
	volatile uint64_t t71 = 3735566045LLU;

	t71 = ((x385-x386)&(x387+x388));

	if (t71 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x389 = INT16_MIN;
	uint64_t x391 = 357545305LLU;
	uint64_t t72 = 21907907113794034LLU;

	t72 = ((x389-x390)&(x391+x392));

	if (t72 != 357534144LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MIN;
	int8_t x395 = 4;
	int32_t x396 = -1;
	volatile int64_t t73 = 259715010683LL;

	t73 = ((x393-x394)&(x395+x396));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	int64_t x400 = 60449946999LL;
	volatile int64_t t74 = -32433590923820LL;

	t74 = ((x397-x398)&(x399+x400));

	if (t74 != 60449914113LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x405 = 88082U;
	static uint8_t x406 = 6U;
	uint64_t x407 = 128LLU;
	uint32_t x408 = 811233U;
	static volatile uint64_t t75 = 5566203342967LLU;

	t75 = ((x405-x406)&(x407+x408));

	if (t75 != 16384LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x417 = INT64_MIN;
	volatile int64_t x418 = -1LL;
	int16_t x420 = INT16_MAX;

	t76 = ((x417-x418)&(x419+x420));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x421 = UINT8_MAX;
	static uint16_t x422 = 50U;
	int8_t x423 = INT8_MIN;
	volatile int8_t x424 = INT8_MAX;
	int32_t t77 = -512990874;

	t77 = ((x421-x422)&(x423+x424));

	if (t77 != 205) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x425 = UINT32_MAX;
	uint64_t x426 = 2162LLU;
	uint32_t x427 = 8494U;
	int64_t x428 = 1267764180LL;
	uint64_t t78 = 1519LLU;

	t78 = ((x425-x426)&(x427+x428));

	if (t78 != 1267770624LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x429 = UINT16_MAX;
	uint8_t x430 = UINT8_MAX;
	volatile uint32_t x432 = UINT32_MAX;

	t79 = ((x429-x430)&(x431+x432));

	if (t79 != 59904LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x433 = 45U;
	uint64_t x434 = UINT64_MAX;
	int16_t x436 = -1;
	volatile uint64_t t80 = 28LLU;

	t80 = ((x433-x434)&(x435+x436));

	if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x438 = -1LL;
	int16_t x439 = -1;
	volatile int32_t x440 = -91;
	int64_t t81 = -804121433087492264LL;

	t81 = ((x437-x438)&(x439+x440));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = INT8_MAX;
	int8_t x442 = -1;
	static int8_t x443 = -1;
	volatile int64_t x444 = 246059595502LL;
	int64_t t82 = 92269668209722LL;

	t82 = ((x441-x442)&(x443+x444));

	if (t82 != 128LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x445 = INT16_MIN;
	volatile int64_t x446 = -77207345349755LL;
	uint16_t x447 = 97U;
	static volatile int8_t x448 = INT8_MAX;
	int64_t t83 = 491LL;

	t83 = ((x445-x446)&(x447+x448));

	if (t83 != 96LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x457 = 7;
	static int64_t x458 = INT64_MAX;
	static volatile int16_t x459 = INT16_MIN;
	int16_t x460 = INT16_MAX;
	volatile int64_t t84 = -44017571LL;

	t84 = ((x457-x458)&(x459+x460));

	if (t84 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x461 = -237986427;
	uint8_t x462 = UINT8_MAX;
	volatile uint64_t x463 = UINT64_MAX;
	uint64_t x464 = 259LLU;
	uint64_t t85 = 37098581109438LLU;

	t85 = ((x461-x462)&(x463+x464));

	if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x469 = -1LL;
	int64_t x470 = -769LL;
	volatile uint32_t x471 = UINT32_MAX;
	uint64_t t86 = 18490349337285935LLU;

	t86 = ((x469-x470)&(x471+x472));

	if (t86 != 768LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x473 = 2612737914142289841LLU;
	static int64_t x474 = -1LL;
	volatile int8_t x475 = INT8_MAX;
	static int16_t x476 = INT16_MAX;
	volatile uint64_t t87 = 226274252880788292LLU;

	t87 = ((x473-x474)&(x475+x476));

	if (t87 != 50LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x477 = 1;
	int64_t x478 = -1LL;
	volatile int8_t x479 = INT8_MAX;
	int64_t t88 = 1728651005761323142LL;

	t88 = ((x477-x478)&(x479+x480));

	if (t88 != 2LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x481 = 2U;
	volatile int64_t x482 = -1LL;
	volatile int16_t x483 = 6;
	int8_t x484 = -1;

	t89 = ((x481-x482)&(x483+x484));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x485 = -2;
	uint16_t x486 = 15082U;
	static uint64_t x487 = 9431LLU;
	int32_t x488 = -15252;
	uint64_t t90 = 32925922161079LLU;

	t90 = ((x485-x486)&(x487+x488));

	if (t90 != 18446744073709535488LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x489 = INT32_MAX;
	int8_t x490 = 1;
	int8_t x491 = INT8_MAX;
	volatile uint32_t x492 = 71944451U;
	uint32_t t91 = 44603262U;

	t91 = ((x489-x490)&(x491+x492));

	if (t91 != 71944578U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x494 = 314101259945LL;
	volatile int16_t x495 = INT16_MIN;

	t92 = ((x493-x494)&(x495+x496));

	if (t92 != -314101260032LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x497 = 149;
	int8_t x499 = 1;
	static int16_t x500 = INT16_MAX;

	t93 = ((x497-x498)&(x499+x500));

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x501 = UINT16_MAX;
	uint64_t x502 = 0LLU;
	int32_t x503 = INT32_MIN;
	int32_t x504 = 3442;
	uint64_t t94 = 169155535856004LLU;

	t94 = ((x501-x502)&(x503+x504));

	if (t94 != 3442LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x505 = 56;
	volatile int8_t x506 = 0;
	volatile int64_t x507 = INT64_MIN;
	static uint8_t x508 = 1U;

	t95 = ((x505-x506)&(x507+x508));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x509 = -1LL;
	int16_t x510 = 0;
	uint64_t x511 = UINT64_MAX;
	int8_t x512 = INT8_MIN;
	volatile uint64_t t96 = 1674467113482LLU;

	t96 = ((x509-x510)&(x511+x512));

	if (t96 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x517 = INT8_MAX;
	volatile uint8_t x518 = 127U;
	volatile int8_t x519 = INT8_MIN;
	uint32_t x520 = UINT32_MAX;
	static volatile uint32_t t97 = 1798979306U;

	t97 = ((x517-x518)&(x519+x520));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x521 = INT16_MIN;
	static int16_t x522 = INT16_MIN;
	uint64_t x523 = 529927710594283496LLU;
	int16_t x524 = INT16_MIN;
	uint64_t t98 = 5490424419820LLU;

	t98 = ((x521-x522)&(x523+x524));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x525 = 1722959777629829LLU;
	int64_t x527 = -1LL;
	int32_t x528 = -1;
	static volatile uint64_t t99 = 9322228044034506LLU;

	t99 = ((x525-x526)&(x527+x528));

	if (t99 != 1722959777629828LLU) { NG(); } else { ; }
	
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

