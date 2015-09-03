#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
int16_t x10 = INT16_MIN;
uint16_t x11 = UINT16_MAX;
uint16_t x13 = 5227U;
int16_t x14 = -1;
volatile int8_t x15 = -1;
int8_t x16 = INT8_MIN;
int64_t t3 = 563338426447LL;
static int8_t x24 = 13;
int32_t x27 = INT32_MAX;
uint16_t x28 = UINT16_MAX;
static volatile int64_t x32 = -1LL;
volatile int64_t t6 = 4330712649LL;
volatile int64_t t7 = 655LL;
int64_t x38 = 782072916985775LL;
uint8_t x45 = 0U;
uint8_t x47 = UINT8_MAX;
volatile int32_t t10 = 235;
uint64_t x63 = 4648971LLU;
uint64_t x65 = 14175028793LLU;
volatile int16_t x67 = INT16_MAX;
volatile uint64_t t17 = 253LLU;
volatile uint8_t x93 = 13U;
uint32_t x94 = UINT32_MAX;
int8_t x98 = INT8_MIN;
volatile int64_t x103 = INT64_MAX;
volatile int64_t t20 = 3581682234089511756LL;
uint32_t x105 = 8056U;
static int8_t x107 = 0;
static int16_t x111 = -1;
int64_t x114 = INT64_MIN;
uint64_t t23 = 91532469407469LLU;
static uint64_t x124 = 92753177156LLU;
int64_t x134 = -1LL;
static uint32_t x149 = UINT32_MAX;
int16_t x151 = 2;
static int64_t x158 = -1LL;
int16_t x160 = -1;
uint64_t x173 = 4576091934016LLU;
volatile uint64_t t34 = 4916492157611LLU;
static int32_t x183 = -1;
uint64_t x184 = UINT64_MAX;
static uint64_t t35 = 177946699229376310LLU;
int64_t x189 = INT64_MAX;
static volatile uint8_t x190 = UINT8_MAX;
uint8_t x196 = 34U;
static volatile int16_t x205 = -21;
int16_t x207 = INT16_MIN;
uint64_t x209 = 24382065LLU;
static volatile uint32_t x213 = 383911288U;
uint16_t x221 = 2U;
volatile int16_t x231 = -1;
int64_t x232 = 1988821048061624LL;
int32_t t45 = 3926584;
static int64_t x244 = -1LL;
static int8_t x246 = 8;
int32_t x262 = INT32_MIN;
volatile int32_t t49 = -28743;
int64_t x269 = -1LL;
uint16_t x272 = 738U;
uint64_t t50 = 3LLU;
uint64_t x275 = 932LLU;
static volatile uint64_t t51 = 203243672752LLU;
volatile int16_t x279 = -1;
uint32_t t53 = 15202U;
volatile int8_t x289 = INT8_MAX;
uint8_t x291 = 122U;
static volatile int16_t x292 = -3;
static int8_t x311 = INT8_MIN;
uint32_t x323 = 134U;
int16_t x330 = INT16_MIN;
int8_t x331 = 32;
volatile int8_t x332 = INT8_MAX;
static uint8_t x344 = 0U;
int32_t x352 = -13501026;
static int64_t x353 = INT64_MIN;
int64_t x354 = INT64_MIN;
uint64_t x357 = 873LLU;
int64_t x361 = 0LL;
volatile uint16_t x362 = 75U;
int64_t x366 = 1555341176571689880LL;
volatile uint32_t x368 = 94580U;
uint16_t x377 = 3963U;
volatile uint32_t x380 = UINT32_MAX;
volatile int64_t t72 = 12450264611LL;
int16_t x392 = INT16_MAX;
uint64_t t75 = 175868856348825237LLU;
static int32_t x397 = -1;
int16_t x400 = INT16_MIN;
int64_t x403 = -1LL;
volatile uint16_t x409 = 6U;
uint64_t x412 = 502017018200800LLU;
volatile uint64_t t80 = 744550529LLU;
int32_t t81 = -9695;
volatile int32_t x418 = INT32_MIN;
static volatile int16_t x419 = -5;
int8_t x424 = -1;
int64_t x429 = -1LL;
int32_t x432 = INT32_MAX;
uint64_t x440 = 13312016137372LLU;
int32_t x441 = INT32_MIN;
uint16_t x442 = UINT16_MAX;
volatile int32_t x444 = -60103274;
uint32_t x448 = 1773558798U;
static int64_t x449 = INT64_MIN;
static uint32_t x454 = UINT32_MAX;
uint64_t x455 = 9754LLU;
int16_t x458 = -1;
volatile int64_t t91 = 297778978026220517LL;
int16_t x467 = 1;
static int8_t x470 = INT8_MAX;
static int16_t x489 = INT16_MIN;
volatile uint32_t t99 = 17604223U;


void f0(void) {
	int8_t x5 = -58;
	int32_t x7 = 124997729;
	int64_t x8 = 106173463LL;
	int64_t t0 = 2529219842LL;

	t0 = (x5-((x6-x7)+x8));

	if (t0 != 18856976LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 2U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 240;

	t1 = (x9-((x10-x11)+x12));

	if (t1 != 131073) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t t2 = 64;

	t2 = (x13-((x14-x15)+x16));

	if (t2 != 5355) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = -6740329806853LL;
	int64_t x18 = -1LL;
	int8_t x19 = -1;
	int64_t x20 = -1LL;

	t3 = (x17-((x18-x19)+x20));

	if (t3 != -6740329806852LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = 0;
	uint8_t x22 = 80U;
	static int32_t x23 = -1;
	volatile int32_t t4 = -23514;

	t4 = (x21-((x22-x23)+x24));

	if (t4 != -94) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int64_t x26 = -1LL;
	volatile int64_t t5 = 457798318548LL;

	t5 = (x25-((x26-x27)+x28));

	if (t5 != 2147418112LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	static int64_t x30 = INT64_MIN;
	int64_t x31 = -1089111630253LL;

	t6 = (x29-((x30-x31)+x32));

	if (t6 != 9223370947743145811LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 0;
	uint8_t x34 = 2U;
	int64_t x35 = 61LL;
	static uint32_t x36 = 607765U;

	t7 = (x33-((x34-x35)+x36));

	if (t7 != -607706LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = -1356394LL;
	static uint32_t x39 = 750U;
	int16_t x40 = INT16_MAX;
	int64_t t8 = 975903442LL;

	t8 = (x37-((x38-x39)+x40));

	if (t8 != -782072918374186LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 47;
	int16_t x42 = 8;
	int16_t x43 = -312;
	uint16_t x44 = 72U;
	int32_t t9 = -7353148;

	t9 = (x41-((x42-x43)+x44));

	if (t9 != -345) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x46 = INT16_MIN;
	volatile uint16_t x48 = 1U;

	t10 = (x45-((x46-x47)+x48));

	if (t10 != 33022) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x53 = -1;
	static uint8_t x54 = 59U;
	volatile uint8_t x55 = 58U;
	volatile int16_t x56 = INT16_MAX;
	volatile int32_t t11 = -720831377;

	t11 = (x53-((x54-x55)+x56));

	if (t11 != -32769) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 3U;
	volatile int16_t x58 = INT16_MIN;
	static int16_t x59 = INT16_MIN;
	int64_t x60 = -109098462LL;
	int64_t t12 = -95582366426899LL;

	t12 = (x57-((x58-x59)+x60));

	if (t12 != 109098465LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x61 = INT8_MIN;
	uint16_t x62 = UINT16_MAX;
	int8_t x64 = INT8_MAX;
	uint64_t t13 = 129187882LLU;

	t13 = (x61-((x62-x63)+x64));

	if (t13 != 4583181LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x66 = 41509614U;
	int64_t x68 = -1LL;
	volatile uint64_t t14 = 7LLU;

	t14 = (x65-((x66-x67)+x68));

	if (t14 != 14133551947LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 11405LLU;
	uint64_t x70 = UINT64_MAX;
	static int8_t x71 = INT8_MIN;
	int64_t x72 = -8564173LL;
	static volatile uint64_t t15 = 430131LLU;

	t15 = (x69-((x70-x71)+x72));

	if (t15 != 8575451LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 52U;
	volatile int16_t x78 = 106;
	int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MIN;
	int32_t t16 = -25499;

	t16 = (x77-((x78-x79)+x80));

	if (t16 != -54) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 6581709U;
	uint64_t x82 = 61962440653573LLU;
	int32_t x83 = -1;
	static int64_t x84 = INT64_MIN;

	t17 = (x81-((x82-x83)+x84));

	if (t17 != 9223310074420703943LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x95 = -37239LL;
	int8_t x96 = 0;
	int64_t t18 = 5LL;

	t18 = (x93-((x94-x95)+x96));

	if (t18 != -4295004521LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MIN;
	int16_t x99 = 0;
	int16_t x100 = 26;
	volatile int32_t t19 = 160;

	t19 = (x97-((x98-x99)+x100));

	if (t19 != -2147483546) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = INT32_MIN;
	static int8_t x102 = INT8_MAX;
	volatile uint16_t x104 = UINT16_MAX;

	t20 = (x101-((x102-x103)+x104));

	if (t20 != 9223372034707226497LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x106 = INT16_MIN;
	int8_t x108 = INT8_MIN;
	volatile uint32_t t21 = 437U;

	t21 = (x105-((x106-x107)+x108));

	if (t21 != 40952U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = INT32_MIN;
	volatile uint64_t x110 = 30LLU;
	int64_t x112 = INT64_MIN;
	uint64_t t22 = 6922203LLU;

	t22 = (x109-((x110-x111)+x112));

	if (t22 != 9223372034707292129LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x113 = UINT64_MAX;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = 29;

	t23 = (x113-((x114-x115)+x116));

	if (t23 != 9223372036854775777LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = 279;
	uint32_t x122 = UINT32_MAX;
	volatile int64_t x123 = 4448972684513LL;
	volatile uint64_t t24 = 51359LLU;

	t24 = (x121-((x122-x123)+x124));

	if (t24 != 4351924540341LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x125 = INT16_MIN;
	int32_t x126 = 624391743;
	volatile int32_t x127 = -236;
	uint32_t x128 = 16480U;
	static uint32_t t25 = 172U;

	t25 = (x125-((x126-x127)+x128));

	if (t25 != 3670526069U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x133 = -239908884834440LL;
	int64_t x135 = INT64_MAX;
	volatile uint32_t x136 = 11U;
	volatile int64_t t26 = 1489428968514192047LL;

	t26 = (x133-((x134-x135)+x136));

	if (t26 != 9223132127969941357LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = -14;
	int16_t x138 = -233;
	uint32_t x139 = 3625U;
	static int8_t x140 = INT8_MIN;
	uint32_t t27 = 31U;

	t27 = (x137-((x138-x139)+x140));

	if (t27 != 3972U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x150 = -210321381595LL;
	int16_t x152 = INT16_MIN;
	int64_t t28 = 345865LL;

	t28 = (x149-((x150-x151)+x152));

	if (t28 != 214616381660LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	int64_t t29 = -55472642695LL;

	t29 = (x157-((x158-x159)+x160));

	if (t29 != -65534LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x161 = -1LL;
	int8_t x162 = -1;
	int64_t x163 = -100LL;
	int64_t x164 = INT64_MIN;
	int64_t t30 = -4151LL;

	t30 = (x161-((x162-x163)+x164));

	if (t30 != 9223372036854775708LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x165 = -13;
	int8_t x166 = INT8_MIN;
	uint8_t x167 = UINT8_MAX;
	volatile int16_t x168 = 1580;
	static volatile int32_t t31 = 178591;

	t31 = (x165-((x166-x167)+x168));

	if (t31 != -1210) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x169 = INT16_MIN;
	int32_t x170 = -494330;
	static int16_t x171 = INT16_MIN;
	int16_t x172 = 250;
	volatile int32_t t32 = -852057;

	t32 = (x169-((x170-x171)+x172));

	if (t32 != 428544) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x174 = INT32_MAX;
	uint64_t x175 = 1788447LLU;
	uint64_t x176 = 0LLU;
	uint64_t t33 = 1412518683291331845LLU;

	t33 = (x173-((x174-x175)+x176));

	if (t33 != 4573946238816LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = UINT64_MAX;
	uint64_t x179 = 997159657965LLU;
	int8_t x180 = -1;

	t34 = (x177-((x178-x179)+x180));

	if (t34 != 995012174319LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = -1;
	static uint32_t x182 = 679U;

	t35 = (x181-((x182-x183)+x184));

	if (t35 != 18446744073709550936LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x191 = -10365352119584590LL;
	volatile int32_t x192 = -1;
	volatile int64_t t36 = -33LL;

	t36 = (x189-((x190-x191)+x192));

	if (t36 != 9213006684735190963LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = -92;
	uint32_t x194 = 1928U;
	static int16_t x195 = INT16_MIN;
	uint32_t t37 = 385365U;

	t37 = (x193-((x194-x195)+x196));

	if (t37 != 4294932474U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x197 = UINT8_MAX;
	static uint64_t x198 = 589236996620380LLU;
	int32_t x199 = INT32_MIN;
	volatile int32_t x200 = INT32_MIN;
	uint64_t t38 = 13301355204090LLU;

	t38 = (x197-((x198-x199)+x200));

	if (t38 != 18446154836712931491LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x206 = 2362888072448LLU;
	int32_t x208 = INT32_MIN;
	uint64_t t39 = 377LLU;

	t39 = (x205-((x206-x207)+x208));

	if (t39 != 18446741712968930027LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x210 = INT8_MIN;
	int64_t x211 = -1LL;
	uint8_t x212 = 1U;
	uint64_t t40 = 4478942584855663LLU;

	t40 = (x209-((x210-x211)+x212));

	if (t40 != 24382191LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x214 = 593022U;
	uint32_t x215 = 1U;
	static int32_t x216 = INT32_MAX;
	volatile uint32_t t41 = 451223037U;

	t41 = (x213-((x214-x215)+x216));

	if (t41 != 2530801916U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MAX;
	int64_t x224 = -4098888LL;
	volatile uint64_t t42 = 809864LLU;

	t42 = (x221-((x222-x223)+x224));

	if (t42 != 4131658LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x225 = 5087U;
	int64_t x226 = -1LL;
	uint8_t x227 = 105U;
	int8_t x228 = 0;
	volatile int64_t t43 = 2019442752LL;

	t43 = (x225-((x226-x227)+x228));

	if (t43 != 5193LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = 0;
	int16_t x230 = 128;
	volatile int64_t t44 = 62865667213LL;

	t44 = (x229-((x230-x231)+x232));

	if (t44 != -1988821048061753LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = INT16_MAX;
	volatile int16_t x238 = INT16_MIN;
	static int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MIN;

	t45 = (x237-((x238-x239)+x240));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x241 = 37844LLU;
	int32_t x242 = -1;
	volatile uint8_t x243 = 18U;
	volatile uint64_t t46 = 6114672301LLU;

	t46 = (x241-((x242-x243)+x244));

	if (t46 != 37864LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x245 = 0U;
	uint32_t x247 = UINT32_MAX;
	uint32_t x248 = 264302951U;
	uint32_t t47 = 483700U;

	t47 = (x245-((x246-x247)+x248));

	if (t47 != 4030664336U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x253 = INT32_MIN;
	volatile uint64_t x254 = 1LLU;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MIN;
	static uint64_t t48 = 32LLU;

	t48 = (x253-((x254-x255)+x256));

	if (t48 != 2147483774LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x261 = INT8_MIN;
	static int8_t x263 = INT8_MIN;
	uint16_t x264 = UINT16_MAX;

	t49 = (x261-((x262-x263)+x264));

	if (t49 != 2147417857) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x270 = 23;
	uint64_t x271 = 133708642LLU;

	t50 = (x269-((x270-x271)+x272));

	if (t50 != 133707880LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MIN;
	volatile uint16_t x276 = 11U;

	t51 = (x273-((x274-x275)+x276));

	if (t51 != 2147451801LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = INT8_MIN;
	static uint16_t x278 = 7790U;
	volatile uint16_t x280 = UINT16_MAX;
	volatile int32_t t52 = -192083381;

	t52 = (x277-((x278-x279)+x280));

	if (t52 != -73454) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x281 = -1;
	volatile int32_t x282 = -510886172;
	uint32_t x283 = UINT32_MAX;
	int16_t x284 = 4983;

	t53 = (x281-((x282-x283)+x284));

	if (t53 != 510881187U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = 0;
	uint16_t x286 = 7U;
	int64_t x287 = -1862157466368LL;
	volatile uint64_t x288 = 79324386LLU;
	volatile uint64_t t54 = 43LLU;

	t54 = (x285-((x286-x287)+x288));

	if (t54 != 18446742211472760855LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x290 = 11U;
	static int32_t t55 = 0;

	t55 = (x289-((x290-x291)+x292));

	if (t55 != 241) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x301 = UINT16_MAX;
	volatile int16_t x302 = -1;
	uint32_t x303 = 1529298U;
	int32_t x304 = -1;
	static volatile uint32_t t56 = 1951U;

	t56 = (x301-((x302-x303)+x304));

	if (t56 != 1594835U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x309 = 1362787U;
	int32_t x310 = -110399;
	int16_t x312 = INT16_MIN;
	uint32_t t57 = 17U;

	t57 = (x309-((x310-x311)+x312));

	if (t57 != 1505826U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x317 = -849;
	int64_t x318 = INT64_MAX;
	volatile uint8_t x319 = 67U;
	volatile uint64_t x320 = UINT64_MAX;
	uint64_t t58 = 7873LLU;

	t58 = (x317-((x318-x319)+x320));

	if (t58 != 9223372036854775028LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x321 = 2U;
	volatile int32_t x322 = INT32_MIN;
	volatile uint8_t x324 = 118U;
	volatile uint32_t t59 = 493U;

	t59 = (x321-((x322-x323)+x324));

	if (t59 != 2147483666U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x325 = 1921472525U;
	volatile int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	uint16_t x328 = UINT16_MAX;
	static uint32_t t60 = 1814U;

	t60 = (x325-((x326-x327)+x328));

	if (t60 != 1921406990U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x329 = INT16_MAX;
	volatile int32_t t61 = 361;

	t61 = (x329-((x330-x331)+x332));

	if (t61 != 65440) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x333 = 34U;
	int8_t x334 = 5;
	static uint8_t x335 = 0U;
	int8_t x336 = -1;
	static volatile int32_t t62 = -105;

	t62 = (x333-((x334-x335)+x336));

	if (t62 != 30) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x337 = INT8_MIN;
	uint16_t x338 = 688U;
	volatile uint16_t x339 = UINT16_MAX;
	volatile int8_t x340 = -10;
	volatile int32_t t63 = -76;

	t63 = (x337-((x338-x339)+x340));

	if (t63 != 64729) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x341 = 6U;
	volatile int16_t x342 = INT16_MIN;
	static volatile int16_t x343 = INT16_MAX;
	volatile int32_t t64 = -38435911;

	t64 = (x341-((x342-x343)+x344));

	if (t64 != 65541) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MAX;
	static int16_t x351 = 0;
	volatile int32_t t65 = 9;

	t65 = (x349-((x350-x351)+x352));

	if (t65 != 13435491) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x355 = INT8_MIN;
	volatile int32_t x356 = -1;
	static int64_t t66 = 41LL;

	t66 = (x353-((x354-x355)+x356));

	if (t66 != -127LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x358 = 1599U;
	int32_t x359 = -1;
	int64_t x360 = 0LL;
	volatile uint64_t t67 = 7703887205LLU;

	t67 = (x357-((x358-x359)+x360));

	if (t67 != 18446744073709550889LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x363 = -1;
	int8_t x364 = 0;
	volatile int64_t t68 = -38473269995178846LL;

	t68 = (x361-((x362-x363)+x364));

	if (t68 != -76LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x365 = INT32_MIN;
	int16_t x367 = 2;
	volatile int64_t t69 = -154136819042144622LL;

	t69 = (x365-((x366-x367)+x368));

	if (t69 != -1555341178719268106LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x369 = -1;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	static int64_t x372 = -420022592720264184LL;
	volatile uint64_t t70 = 29546691344LLU;

	t70 = (x369-((x370-x371)+x372));

	if (t70 != 420022592720264056LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x373 = 1;
	static int32_t x374 = 0;
	uint64_t x375 = 179560LLU;
	uint16_t x376 = 2447U;
	volatile uint64_t t71 = 20851LLU;

	t71 = (x373-((x374-x375)+x376));

	if (t71 != 177114LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x378 = UINT32_MAX;
	int64_t x379 = -1LL;

	t72 = (x377-((x378-x379)+x380));

	if (t72 != -8589930628LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x381 = INT32_MAX;
	static uint64_t x382 = 4820026LLU;
	uint32_t x383 = 116U;
	static uint16_t x384 = 23414U;
	volatile uint64_t t73 = 8285864123336950435LLU;

	t73 = (x381-((x382-x383)+x384));

	if (t73 != 2142640323LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x385 = INT16_MIN;
	volatile int32_t x386 = INT32_MIN;
	int16_t x387 = -1;
	volatile int32_t x388 = INT32_MAX;
	static int32_t t74 = 1;

	t74 = (x385-((x386-x387)+x388));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x389 = UINT32_MAX;
	uint64_t x390 = 5053LLU;
	int32_t x391 = -180250014;

	t75 = (x389-((x390-x391)+x392));

	if (t75 != 4114679461LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x393 = -1LL;
	volatile int64_t x394 = 5769060231LL;
	int8_t x395 = INT8_MIN;
	static uint64_t x396 = 12755235LLU;
	static volatile uint64_t t76 = 470LLU;

	t76 = (x393-((x394-x395)+x396));

	if (t76 != 18446744067927736021LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x398 = -1;
	volatile uint8_t x399 = 12U;
	static int32_t t77 = 1023827450;

	t77 = (x397-((x398-x399)+x400));

	if (t77 != 32780) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x401 = -1;
	volatile int8_t x402 = -1;
	volatile int8_t x404 = INT8_MAX;
	int64_t t78 = 1310LL;

	t78 = (x401-((x402-x403)+x404));

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x405 = -1LL;
	volatile int16_t x406 = -6013;
	uint16_t x407 = 0U;
	static int8_t x408 = INT8_MAX;
	static volatile int64_t t79 = -6864290806346LL;

	t79 = (x405-((x406-x407)+x408));

	if (t79 != 5885LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x410 = -1;
	int8_t x411 = -15;

	t80 = (x409-((x410-x411)+x412));

	if (t80 != 18446242056691350808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x413 = 11512;
	static int16_t x414 = INT16_MIN;
	volatile int8_t x415 = 15;
	uint8_t x416 = 2U;

	t81 = (x413-((x414-x415)+x416));

	if (t81 != 44293) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x417 = 297613856989754523LLU;
	int8_t x420 = INT8_MAX;
	static volatile uint64_t t82 = 8337854LLU;

	t82 = (x417-((x418-x419)+x420));

	if (t82 != 297613859137238039LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x421 = INT8_MAX;
	static uint16_t x422 = UINT16_MAX;
	volatile uint16_t x423 = UINT16_MAX;
	int32_t t83 = 4438;

	t83 = (x421-((x422-x423)+x424));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x425 = INT8_MAX;
	uint8_t x426 = 51U;
	static volatile uint32_t x427 = 821629U;
	volatile int8_t x428 = 0;
	static uint32_t t84 = 1944491645U;

	t84 = (x425-((x426-x427)+x428));

	if (t84 != 821705U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x430 = 12U;
	int16_t x431 = -1;
	volatile int64_t t85 = -1256685864115LL;

	t85 = (x429-((x430-x431)+x432));

	if (t85 != -2147483661LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x437 = UINT16_MAX;
	uint32_t x438 = 14700237U;
	static uint64_t x439 = 27033768749372LLU;
	uint64_t t86 = 6777626161LLU;

	t86 = (x437-((x438-x439)+x440));

	if (t86 != 13721737977298LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x443 = 811127271802LLU;
	volatile uint64_t t87 = 76947551LLU;

	t87 = (x441-((x442-x443)+x444));

	if (t87 != 809039825893LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x445 = -1LL;
	int8_t x446 = INT8_MIN;
	volatile uint32_t x447 = UINT32_MAX;
	static int64_t t88 = -20LL;

	t88 = (x445-((x446-x447)+x448));

	if (t88 != -1773558672LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x450 = -1;
	static int16_t x451 = INT16_MIN;
	uint64_t x452 = 1702833LLU;
	static volatile uint64_t t89 = 16003051282598LLU;

	t89 = (x449-((x450-x451)+x452));

	if (t89 != 9223372036853040208LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x453 = -1;
	static int32_t x456 = INT32_MIN;
	static uint64_t t90 = 18226325487693048LLU;

	t90 = (x453-((x454-x455)+x456));

	if (t90 != 18446744071562077722LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x457 = -1LL;
	static int64_t x459 = 25137770LL;
	volatile int32_t x460 = INT32_MIN;

	t91 = (x457-((x458-x459)+x460));

	if (t91 != 2172621418LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x461 = UINT16_MAX;
	volatile uint8_t x462 = UINT8_MAX;
	uint16_t x463 = 1U;
	uint64_t x464 = 7908068580706992262LLU;
	volatile uint64_t t92 = 68860911042LLU;

	t92 = (x461-((x462-x463)+x464));

	if (t92 != 10538675493002624635LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x465 = 112U;
	uint32_t x466 = 17863477U;
	int8_t x468 = INT8_MIN;
	volatile uint32_t t93 = 71950U;

	t93 = (x465-((x466-x467)+x468));

	if (t93 != 4277104060U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x469 = INT8_MIN;
	static int16_t x471 = INT16_MIN;
	static int16_t x472 = -1;
	int32_t t94 = 921352091;

	t94 = (x469-((x470-x471)+x472));

	if (t94 != -33022) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x485 = 2040286450U;
	int16_t x486 = INT16_MIN;
	uint64_t x487 = 37756396839105751LLU;
	int32_t x488 = -1;
	static uint64_t t95 = 63480268LLU;

	t95 = (x485-((x486-x487)+x488));

	if (t95 != 37756398879424970LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x490 = 9849;
	uint16_t x491 = 2216U;
	uint16_t x492 = 19631U;
	int32_t t96 = 58915;

	t96 = (x489-((x490-x491)+x492));

	if (t96 != -60032) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x493 = INT32_MIN;
	static uint32_t x494 = 1183802930U;
	static volatile uint8_t x495 = 26U;
	uint8_t x496 = 103U;
	uint32_t t97 = 367488583U;

	t97 = (x493-((x494-x495)+x496));

	if (t97 != 963680641U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x501 = 5;
	int8_t x502 = INT8_MIN;
	static uint64_t x503 = 85238LLU;
	static int64_t x504 = 13258875305LL;
	uint64_t t98 = 2483LLU;

	t98 = (x501-((x502-x503)+x504));

	if (t98 != 18446744060450761682LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x509 = 3;
	uint32_t x510 = UINT32_MAX;
	int16_t x511 = INT16_MIN;
	int32_t x512 = INT32_MIN;

	t99 = (x509-((x510-x511)+x512));

	if (t99 != 2147450884U) { NG(); } else { ; }
	
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

