#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -1LL;
volatile uint64_t t2 = 53002059LLU;
uint16_t x16 = 0U;
int32_t x26 = -1;
uint8_t x28 = 2U;
int8_t x29 = -1;
volatile uint8_t x36 = 4U;
int32_t x46 = INT32_MIN;
uint64_t x47 = 148117868LLU;
uint64_t t11 = UINT64_MAX;
uint8_t x52 = 0U;
static int32_t x55 = INT32_MAX;
int16_t x61 = INT16_MIN;
static int64_t t16 = -434671307290048LL;
int64_t x71 = INT64_MIN;
int16_t x80 = -8213;
int8_t x84 = -1;
int64_t t22 = 403300078361460LL;
volatile int64_t x95 = -284460LL;
volatile uint16_t x97 = 194U;
volatile int32_t x102 = -1;
static volatile int64_t x107 = 23121405LL;
int64_t t27 = 2202127476374816717LL;
uint64_t x113 = 420055569449072LLU;
int8_t x116 = INT8_MIN;
volatile int8_t x141 = -1;
volatile int32_t t34 = 3;
static int64_t x146 = -1LL;
volatile uint64_t t35 = 8781609455360LLU;
uint64_t x149 = 35930LLU;
static int64_t x154 = INT64_MIN;
static int16_t x165 = -1;
volatile int32_t t40 = -6103510;
int32_t x173 = INT32_MAX;
uint8_t x178 = 24U;
uint32_t x179 = UINT32_MAX;
static volatile int32_t t43 = 291042;
static uint32_t x193 = 800U;
uint32_t x194 = UINT32_MAX;
uint32_t x198 = 4760824U;
int8_t x199 = INT8_MIN;
int8_t x208 = 9;
int8_t x216 = INT8_MAX;
int32_t t49 = -15;
static int32_t x218 = -34015;
uint16_t x222 = UINT16_MAX;
int32_t x223 = INT32_MAX;
int32_t x237 = INT32_MIN;
volatile int64_t x239 = INT64_MAX;
uint8_t x240 = 2U;
int32_t x242 = INT32_MIN;
volatile int32_t x243 = 1680363;
volatile int32_t t56 = 3743;
int16_t x246 = 629;
int64_t x248 = INT64_MIN;
int64_t t58 = -8LL;
volatile int16_t x255 = INT16_MAX;
int64_t t60 = -29415793174120LL;
volatile int16_t x268 = -1;
volatile uint64_t t62 = UINT64_MAX;
uint16_t x273 = 3653U;
volatile int16_t x275 = INT16_MAX;
volatile int32_t x277 = INT32_MIN;
static uint64_t x278 = 2637774860LLU;
static uint64_t t64 = 1962LLU;
uint8_t x281 = 106U;
static volatile int64_t x292 = -4360153807579363LL;
uint64_t x301 = 111320461857LLU;
volatile int64_t x303 = -160337342590607LL;
int32_t x305 = -1;
static int32_t x319 = 348;
volatile uint32_t t74 = 47332U;
static int64_t x327 = INT64_MIN;
volatile uint8_t x328 = 6U;
int64_t t76 = -3557230890LL;
uint16_t x336 = 1U;
volatile uint64_t t77 = 14902735LLU;
int8_t x340 = 7;
volatile uint64_t t78 = 7LLU;
uint64_t x345 = 12140LLU;
int64_t x347 = -1LL;
static int32_t x351 = INT32_MAX;
volatile int64_t t81 = -242325359LL;
volatile int16_t x353 = INT16_MIN;
static int64_t x365 = 1LL;
int16_t x372 = -30;
int64_t x377 = INT64_MIN;
int16_t x384 = INT16_MAX;
int8_t x388 = 10;
int16_t x389 = INT16_MAX;
int32_t x396 = INT32_MAX;
int8_t x399 = -1;
int8_t x400 = 3;
static int32_t x402 = INT32_MIN;
static int64_t t93 = -1600851LL;
static int32_t x420 = INT32_MAX;
volatile uint8_t x421 = 45U;
int64_t t96 = -45958LL;
uint64_t t97 = 44485137106785LLU;
uint64_t x431 = 24791142055023LLU;
int16_t x436 = -1;


void f0(void) {
	int8_t x1 = -24;
	int64_t x2 = 175LL;
	static uint32_t x3 = 1556006U;
	int8_t x4 = INT8_MAX;

	t0 = (x1|((x2/x3)+x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 46U;
	volatile int8_t x6 = 5;
	uint16_t x7 = 3U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -1000;

	t1 = (x5|((x6/x7)+x8));

	if (t1 != -32721) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static volatile int16_t x10 = INT16_MIN;
	volatile uint64_t x11 = UINT64_MAX;
	static uint64_t x12 = 737661627698LLU;

	t2 = (x9|((x10/x11)+x12));

	if (t2 != 18446744072636804402LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static int64_t x14 = INT64_MIN;
	uint16_t x15 = UINT16_MAX;
	int64_t t3 = -59600893003647LL;

	t3 = (x13|((x14/x15)+x16));

	if (t3 != -140739635871744LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	uint32_t x18 = UINT32_MAX;
	int64_t x19 = 32618LL;
	int32_t x20 = INT32_MAX;
	static int64_t t4 = 342444027624LL;

	t4 = (x17|((x18/x19)+x20));

	if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	volatile int16_t x22 = -1;
	volatile int8_t x23 = INT8_MIN;
	static int8_t x24 = -1;
	volatile int32_t t5 = -52;

	t5 = (x21|((x22/x23)+x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	int64_t x27 = -1LL;
	static int64_t t6 = 3374583301668873739LL;

	t6 = (x25|((x26/x27)+x28));

	if (t6 != -125LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1LL;
	static uint8_t x31 = 103U;
	int16_t x32 = INT16_MIN;
	static int64_t t7 = -12LL;

	t7 = (x29|((x30/x31)+x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	volatile int8_t x35 = -23;
	static int32_t t8 = 969878429;

	t8 = (x33|((x34/x35)+x36));

	if (t8 != -31340) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = UINT8_MAX;
	static uint8_t x38 = UINT8_MAX;
	int64_t x39 = -1LL;
	int16_t x40 = 26;
	int64_t t9 = -4859649229352040LL;

	t9 = (x37|((x38/x39)+x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 68U;
	uint32_t x42 = 110U;
	volatile int16_t x43 = INT16_MAX;
	int64_t x44 = 113631976087LL;
	static int64_t t10 = -54376992972242185LL;

	t10 = (x41|((x42/x43)+x44));

	if (t10 != 113631976151LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -47;
	static volatile uint64_t x48 = 53789647143218942LLU;

	t11 = (x45|((x46/x47)+x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 595808LLU;
	uint8_t x50 = 5U;
	int8_t x51 = -3;
	static volatile uint64_t t12 = UINT64_MAX;

	t12 = (x49|((x50/x51)+x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -33342330LL;
	static uint16_t x54 = UINT16_MAX;
	int16_t x56 = -11131;
	int64_t t13 = 399973895743395LL;

	t13 = (x53|((x54/x55)+x56));

	if (t13 != -889LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static volatile int64_t x58 = -3170673624572LL;
	static int64_t x59 = INT64_MAX;
	int32_t x60 = 4;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x57|((x58/x59)+x60));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	volatile uint64_t x63 = 7928171741077155LLU;
	volatile uint8_t x64 = UINT8_MAX;
	volatile uint64_t t15 = 13150911022148LLU;

	t15 = (x61|((x62/x63)+x64));

	if (t15 != 18446744073709521429LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1;
	static int8_t x66 = INT8_MAX;
	int64_t x67 = 2057226135LL;
	int64_t x68 = INT64_MAX;

	t16 = (x65|((x66/x67)+x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1177129153251LLU;
	static uint16_t x70 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t17 = 523231606178489448LLU;

	t17 = (x69|((x70/x71)+x72));

	if (t17 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = -751;
	volatile int32_t x75 = -1;
	int16_t x76 = INT16_MIN;
	static volatile int64_t t18 = 7390301LL;

	t18 = (x73|((x74/x75)+x76));

	if (t18 != -32017LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 123;
	static int8_t x78 = INT8_MIN;
	int32_t x79 = INT32_MAX;
	int32_t t19 = 52029085;

	t19 = (x77|((x78/x79)+x80));

	if (t19 != -8197) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	volatile int32_t x82 = -274256;
	volatile uint64_t x83 = 249181096887923LLU;
	volatile uint64_t t20 = 22462319817387LLU;

	t20 = (x81|((x82/x83)+x84));

	if (t20 != 98303LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 603U;
	uint64_t x86 = 233748608462LLU;
	int32_t x87 = INT32_MIN;
	uint64_t x88 = 38462LLU;
	volatile uint64_t t21 = 343412LLU;

	t21 = (x85|((x86/x87)+x88));

	if (t21 != 38527LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1941;
	int64_t x90 = 2045046995LL;
	int64_t x91 = -441792227LL;
	volatile int16_t x92 = INT16_MIN;

	t22 = (x89|((x90/x91)+x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int64_t x94 = -1LL;
	static int8_t x96 = -1;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x93|((x94/x95)+x96));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = 340;
	volatile int64_t x99 = INT64_MIN;
	int8_t x100 = -1;
	int64_t t24 = -2020913611728616564LL;

	t24 = (x97|((x98/x99)+x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = UINT16_MAX;
	static volatile int32_t x103 = INT32_MAX;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -158;

	t25 = (x101|((x102/x103)+x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	static int32_t x106 = -5429;
	static volatile int64_t x108 = 216LL;
	static volatile int64_t t26 = 27LL;

	t26 = (x105|((x106/x107)+x108));

	if (t26 != -9223372036854775592LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	static int64_t x110 = -476868LL;
	int8_t x111 = INT8_MIN;
	int16_t x112 = -73;

	t27 = (x109|((x110/x111)+x112));

	if (t27 != 32767LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = UINT64_MAX;
	static int64_t x115 = -47159173022LL;
	volatile uint64_t t28 = 79892645029888LLU;

	t28 = (x113|((x114/x115)+x116));

	if (t28 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = -1;
	volatile int8_t x118 = INT8_MAX;
	int64_t x119 = 5005LL;
	static int32_t x120 = -18;
	static int64_t t29 = -3499815261643665236LL;

	t29 = (x117|((x118/x119)+x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -3496970930482972202LL;
	int8_t x122 = 0;
	int16_t x123 = INT16_MAX;
	uint32_t x124 = UINT32_MAX;
	volatile int64_t t30 = -12062LL;

	t30 = (x121|((x122/x123)+x124));

	if (t30 != -3496970927978053633LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile uint16_t x126 = 134U;
	volatile int64_t x127 = -1LL;
	int32_t x128 = -1;
	volatile int64_t t31 = 1661LL;

	t31 = (x125|((x126/x127)+x128));

	if (t31 != -135LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = -52051594LL;
	int8_t x131 = -1;
	volatile int16_t x132 = INT16_MIN;
	int64_t t32 = 111427641608LL;

	t32 = (x129|((x130/x131)+x132));

	if (t32 != -2095464822LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x133 = -1;
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = -14161332LL;
	volatile int64_t x136 = -7022372052LL;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x133|((x134/x135)+x136));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x142 = -3;
	int16_t x143 = INT16_MAX;
	volatile int16_t x144 = 11851;

	t34 = (x141|((x142/x143)+x144));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = INT32_MIN;
	uint64_t x147 = 1281693942018148LLU;
	static uint64_t x148 = 13LLU;

	t35 = (x145|((x146/x147)+x148));

	if (t35 != 18446744071562082373LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	int8_t x152 = -1;
	static uint64_t t36 = UINT64_MAX;

	t36 = (x149|((x150/x151)+x152));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = INT16_MIN;
	int8_t x155 = INT8_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile int64_t t37 = 510118452004419829LL;

	t37 = (x153|((x154/x155)+x156));

	if (t37 != -16514LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MAX;
	uint64_t x158 = 76670737929812926LLU;
	uint8_t x159 = 27U;
	volatile uint16_t x160 = UINT16_MAX;
	uint64_t t38 = 8LLU;

	t38 = (x157|((x158/x159)+x160));

	if (t38 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x166 = -1;
	uint8_t x167 = 67U;
	int8_t x168 = INT8_MIN;
	volatile int32_t t39 = -14;

	t39 = (x165|((x166/x167)+x168));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	int32_t x170 = -1;
	int8_t x171 = 19;
	static volatile int8_t x172 = 2;

	t40 = (x169|((x170/x171)+x172));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x174 = 11096U;
	static int64_t x175 = -1LL;
	static int8_t x176 = 0;
	int64_t t41 = 274340221438LL;

	t41 = (x173|((x174/x175)+x176));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 44;
	static volatile int16_t x180 = INT16_MAX;
	volatile uint32_t t42 = 22110205U;

	t42 = (x177|((x178/x179)+x180));

	if (t42 != 32767U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MAX;
	volatile int32_t x182 = INT32_MIN;
	uint8_t x183 = 126U;
	uint16_t x184 = UINT16_MAX;

	t43 = (x181|((x182/x183)+x184));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = INT32_MAX;
	volatile int8_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	volatile int8_t x192 = -12;
	static uint64_t t44 = UINT64_MAX;

	t44 = (x189|((x190/x191)+x192));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x195 = 438847733LLU;
	int16_t x196 = -1;
	uint64_t t45 = 651906902108413LLU;

	t45 = (x193|((x194/x195)+x196));

	if (t45 != 808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = 0;
	uint16_t x200 = 927U;
	uint32_t t46 = 68U;

	t46 = (x197|((x198/x199)+x200));

	if (t46 != 927U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = 787U;
	static volatile uint16_t x206 = 32U;
	int8_t x207 = -12;
	volatile int32_t t47 = 4080240;

	t47 = (x205|((x206/x207)+x208));

	if (t47 != 791) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x209 = INT64_MIN;
	int8_t x210 = -1;
	int8_t x211 = INT8_MIN;
	int64_t x212 = 148224416LL;
	int64_t t48 = 7803581926147LL;

	t48 = (x209|((x210/x211)+x212));

	if (t48 != -9223372036706551392LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = -3225;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = UINT16_MAX;

	t49 = (x213|((x214/x215)+x216));

	if (t49 != -3201) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = 15782020238227LL;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MIN;
	int64_t t50 = 146396395LL;

	t50 = (x217|((x218/x219)+x220));

	if (t50 != -13421LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = 453;
	volatile int64_t x224 = 231879LL;
	int64_t t51 = -141161810369022LL;

	t51 = (x221|((x222/x223)+x224));

	if (t51 != 231879LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = UINT16_MAX;
	int64_t x226 = -1LL;
	uint16_t x227 = 24U;
	int8_t x228 = -47;
	int64_t t52 = 44138126358569LL;

	t52 = (x225|((x226/x227)+x228));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x229 = UINT16_MAX;
	uint32_t x230 = UINT32_MAX;
	static uint16_t x231 = 4U;
	uint32_t x232 = 56U;
	static volatile uint32_t t53 = 2U;

	t53 = (x229|((x230/x231)+x232));

	if (t53 != 1073807359U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x233 = 5809U;
	int8_t x234 = 0;
	uint32_t x235 = 3U;
	uint16_t x236 = UINT16_MAX;
	volatile uint32_t t54 = 6382737U;

	t54 = (x233|((x234/x235)+x236));

	if (t54 != 65535U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x238 = 24U;
	int64_t t55 = -27LL;

	t55 = (x237|((x238/x239)+x240));

	if (t55 != -2147483646LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x241 = 701U;
	static uint8_t x244 = UINT8_MAX;

	t56 = (x241|((x242/x243)+x244));

	if (t56 != -321) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = UINT16_MAX;
	static int16_t x247 = INT16_MIN;
	static int64_t t57 = -3014937317645589778LL;

	t57 = (x245|((x246/x247)+x248));

	if (t57 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	static int64_t x250 = INT64_MIN;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = -8;

	t58 = (x249|((x250/x251)+x252));

	if (t58 != -8LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x253 = INT64_MIN;
	int16_t x254 = 4984;
	int8_t x256 = INT8_MAX;
	static int64_t t59 = 5171782LL;

	t59 = (x253|((x254/x255)+x256));

	if (t59 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x261 = INT64_MIN;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MIN;

	t60 = (x261|((x262/x263)+x264));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MAX;
	static volatile uint8_t x266 = 110U;
	volatile uint16_t x267 = 20U;
	static int32_t t61 = INT32_MAX;

	t61 = (x265|((x266/x267)+x268));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = UINT64_MAX;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = -38503874798LL;
	int32_t x272 = INT32_MAX;

	t62 = (x269|((x270/x271)+x272));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x274 = UINT16_MAX;
	uint32_t x276 = 6823U;
	uint32_t t63 = 66U;

	t63 = (x273|((x274/x275)+x276));

	if (t63 != 7917U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x279 = UINT8_MAX;
	int64_t x280 = INT64_MAX;

	t64 = (x277|((x278/x279)+x280));

	if (t64 != 18446744071572412182LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x282 = 435708U;
	static uint32_t x283 = 6711U;
	static uint32_t x284 = 484122U;
	static uint32_t t65 = 30588U;

	t65 = (x281|((x282/x283)+x284));

	if (t65 != 484218U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = -1LL;
	uint64_t x286 = 19771917914LLU;
	uint16_t x287 = 1948U;
	static uint64_t x288 = 30639453LLU;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x285|((x286/x287)+x288));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x290 = 5908U;
	int64_t x291 = INT64_MAX;
	volatile int64_t t67 = 362892225597596LL;

	t67 = (x289|((x290/x291)+x292));

	if (t67 != -99LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = 1;
	static volatile uint64_t x295 = UINT64_MAX;
	volatile int32_t x296 = INT32_MIN;
	uint64_t t68 = 200244701137LLU;

	t68 = (x293|((x294/x295)+x296));

	if (t68 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x297 = UINT64_MAX;
	int16_t x298 = 0;
	int64_t x299 = INT64_MIN;
	volatile int32_t x300 = 0;
	uint64_t t69 = UINT64_MAX;

	t69 = (x297|((x298/x299)+x300));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x302 = -3364;
	uint64_t x304 = 25491899584964LLU;
	uint64_t t70 = 8594233LLU;

	t70 = (x301|((x302/x303)+x304));

	if (t70 != 25563305604069LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MIN;
	int16_t x308 = 813;
	uint64_t t71 = UINT64_MAX;

	t71 = (x305|((x306/x307)+x308));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = 989076U;
	static int16_t x310 = INT16_MIN;
	static int16_t x311 = 119;
	uint8_t x312 = UINT8_MAX;
	static uint32_t t72 = 705597558U;

	t72 = (x309|((x310/x311)+x312));

	if (t72 != 4294967292U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x313 = INT64_MIN;
	uint16_t x314 = UINT16_MAX;
	volatile uint64_t x315 = 169LLU;
	static int16_t x316 = -93;
	volatile uint64_t t73 = 25258175LLU;

	t73 = (x313|((x314/x315)+x316));

	if (t73 != 9223372036854776102LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x317 = 6726U;
	int8_t x318 = INT8_MIN;
	static int32_t x320 = INT32_MIN;

	t74 = (x317|((x318/x319)+x320));

	if (t74 != 2147490374U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x321 = INT8_MIN;
	int32_t x322 = INT32_MIN;
	volatile int64_t x323 = 1349273298LL;
	int8_t x324 = INT8_MIN;
	int64_t t75 = 75667569678721442LL;

	t75 = (x321|((x322/x323)+x324));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = 115LL;
	volatile uint16_t x326 = 421U;

	t76 = (x325|((x326/x327)+x328));

	if (t76 != 119LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = INT64_MAX;
	uint64_t x334 = UINT64_MAX;
	volatile int8_t x335 = 1;

	t77 = (x333|((x334/x335)+x336));

	if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x337 = INT16_MAX;
	volatile int8_t x338 = INT8_MIN;
	uint64_t x339 = 537645672112332326LLU;

	t78 = (x337|((x338/x339)+x340));

	if (t78 != 32767LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x341 = 328U;
	int64_t x342 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;
	volatile int8_t x344 = INT8_MAX;
	volatile int64_t t79 = -607759616081109960LL;

	t79 = (x341|((x342/x343)+x344));

	if (t79 != -36170086419038209LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x346 = 3342480532LLU;
	int16_t x348 = -429;
	static uint64_t t80 = 3851878716123LLU;

	t80 = (x345|((x346/x347)+x348));

	if (t80 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x349 = -1;
	int64_t x350 = INT64_MIN;
	static int64_t x352 = -672505195LL;

	t81 = (x349|((x350/x351)+x352));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x354 = INT8_MIN;
	volatile int64_t x355 = INT64_MIN;
	uint32_t x356 = 85U;
	int64_t t82 = 49408LL;

	t82 = (x353|((x354/x355)+x356));

	if (t82 != -32683LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = -9;
	int8_t x358 = -6;
	int16_t x359 = INT16_MAX;
	int32_t x360 = INT32_MIN;
	int32_t t83 = 23779;

	t83 = (x357|((x358/x359)+x360));

	if (t83 != -9) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x366 = INT32_MIN;
	uint64_t x367 = 544056230213497257LLU;
	uint64_t x368 = 2099075658994993LLU;
	volatile uint64_t t84 = 1341LLU;

	t84 = (x365|((x366/x367)+x368));

	if (t84 != 2099075658995027LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x369 = INT64_MIN;
	uint8_t x370 = 1U;
	uint16_t x371 = 660U;
	static volatile int64_t t85 = 3LL;

	t85 = (x369|((x370/x371)+x372));

	if (t85 != -30LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x378 = INT8_MAX;
	int64_t x379 = 2295555271841814729LL;
	static int8_t x380 = -1;
	int64_t t86 = -385823534920LL;

	t86 = (x377|((x378/x379)+x380));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = INT64_MIN;
	static int32_t x382 = -1;
	static volatile int32_t x383 = -1;
	static int64_t t87 = -246939992377LL;

	t87 = (x381|((x382/x383)+x384));

	if (t87 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = UINT8_MAX;
	static uint32_t x386 = UINT32_MAX;
	uint8_t x387 = UINT8_MAX;
	volatile uint32_t t88 = 110U;

	t88 = (x385|((x386/x387)+x388));

	if (t88 != 16843263U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x390 = 2U;
	volatile int16_t x391 = INT16_MIN;
	uint8_t x392 = 62U;
	int32_t t89 = -14;

	t89 = (x389|((x390/x391)+x392));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = UINT8_MAX;
	volatile uint8_t x394 = 20U;
	volatile uint32_t x395 = 994107U;
	uint32_t t90 = 91434U;

	t90 = (x393|((x394/x395)+x396));

	if (t90 != 2147483647U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 1067794008536852LLU;
	uint32_t x398 = 43U;
	uint64_t t91 = 66886643198308048LLU;

	t91 = (x397|((x398/x399)+x400));

	if (t91 != 1067794008536855LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x401 = 2U;
	volatile int32_t x403 = -837204;
	uint32_t x404 = 532U;
	volatile uint32_t t92 = 2277U;

	t92 = (x401|((x402/x403)+x404));

	if (t92 != 3099U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MAX;
	uint8_t x410 = UINT8_MAX;
	int64_t x411 = 6419133LL;
	volatile int32_t x412 = 4339;

	t93 = (x409|((x410/x411)+x412));

	if (t93 != 2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x413 = 46U;
	volatile uint8_t x414 = UINT8_MAX;
	static uint16_t x415 = 3849U;
	int16_t x416 = -181;
	uint32_t t94 = 1217788U;

	t94 = (x413|((x414/x415)+x416));

	if (t94 != 4294967151U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = 4958273;
	volatile int16_t x418 = -1;
	static int16_t x419 = INT16_MIN;
	int32_t t95 = INT32_MAX;

	t95 = (x417|((x418/x419)+x420));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x422 = -9;
	volatile int8_t x423 = 5;
	int64_t x424 = 111147878392678596LL;

	t96 = (x421|((x422/x423)+x424));

	if (t96 != 111147878392678639LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x425 = 4LLU;
	int32_t x426 = -869488089;
	uint16_t x427 = 4791U;
	int16_t x428 = -32;

	t97 = (x425|((x426/x427)+x428));

	if (t97 != 18446744073709370101LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x429 = -491;
	volatile int8_t x430 = INT8_MAX;
	static int16_t x432 = -166;
	uint64_t t98 = 31776207LLU;

	t98 = (x429|((x430/x431)+x432));

	if (t98 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = INT64_MAX;
	int32_t x434 = 8513407;
	int64_t x435 = INT64_MIN;
	volatile int64_t t99 = 4521574488505LL;

	t99 = (x433|((x434/x435)+x436));

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

