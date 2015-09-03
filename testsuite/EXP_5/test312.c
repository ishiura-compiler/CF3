#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x3 = 102U;
volatile uint16_t x9 = UINT16_MAX;
volatile int8_t x11 = -10;
uint16_t x12 = UINT16_MAX;
int16_t x20 = INT16_MIN;
uint64_t t3 = 0LLU;
int64_t x24 = -1LL;
int32_t x31 = 0;
volatile int8_t x40 = 0;
uint16_t x41 = 207U;
static volatile int8_t x42 = 1;
uint16_t x44 = UINT16_MAX;
volatile int32_t x48 = -63717631;
static volatile uint32_t t9 = 3887U;
static int8_t x51 = INT8_MIN;
uint64_t x53 = 14237645231LLU;
int64_t x60 = -29121533970LL;
volatile int64_t t12 = -16018713LL;
static volatile int8_t x74 = INT8_MIN;
uint8_t x75 = 3U;
int32_t t16 = 233430;
int32_t t18 = -10886553;
int32_t x97 = 5259;
static int16_t x113 = -54;
volatile uint32_t t23 = 14U;
uint8_t x117 = 16U;
uint64_t t25 = 21357394LLU;
int8_t x128 = INT8_MIN;
uint64_t x132 = 285382170042756758LLU;
volatile uint64_t t27 = 7522611783LLU;
uint64_t x139 = 57978222024181198LLU;
int64_t t29 = 285508160995432427LL;
int8_t x146 = 1;
int32_t x147 = -1;
int32_t t30 = 3116;
uint8_t x167 = UINT8_MAX;
int64_t x176 = INT64_MAX;
volatile uint8_t x181 = UINT8_MAX;
int16_t x184 = -1;
volatile int64_t t37 = 62389979636873999LL;
uint64_t x185 = UINT64_MAX;
uint64_t x189 = 62409157035815677LLU;
int8_t x193 = INT8_MIN;
int16_t x194 = -194;
volatile uint8_t x196 = 20U;
int32_t t41 = 1;
int8_t x202 = 0;
int16_t x204 = INT16_MAX;
volatile uint32_t t42 = 3219U;
uint32_t t43 = 856119U;
static uint16_t x211 = 8369U;
uint16_t x217 = 1U;
uint16_t x223 = 41U;
static volatile int32_t x224 = -456483854;
int8_t x242 = INT8_MIN;
int8_t x243 = 12;
static int64_t x254 = -15792308LL;
uint64_t x259 = UINT64_MAX;
uint32_t x265 = 3U;
uint8_t x267 = 5U;
uint32_t x271 = UINT32_MAX;
uint16_t x274 = 24U;
int16_t x276 = INT16_MAX;
static int32_t t59 = -59;
int32_t x288 = 0;
uint64_t x290 = 86163514860LLU;
int32_t x291 = INT32_MIN;
int64_t x296 = INT64_MAX;
volatile uint64_t t62 = 491LLU;
int64_t x298 = -391383476051342LL;
volatile uint64_t t63 = 32077LLU;
int16_t x303 = 434;
static uint8_t x316 = UINT8_MAX;
static int32_t x317 = INT32_MAX;
int32_t t68 = 605595389;
uint16_t x323 = UINT16_MAX;
volatile int8_t x330 = INT8_MAX;
volatile int32_t x332 = 61715031;
static volatile int16_t x338 = INT16_MIN;
int16_t x344 = -1;
volatile int32_t x345 = INT32_MIN;
uint32_t t76 = 720050306U;
int64_t x353 = INT64_MAX;
int8_t x363 = INT8_MIN;
uint32_t x364 = UINT32_MAX;
volatile uint32_t t79 = 3205U;
static uint64_t x367 = UINT64_MAX;
uint64_t t80 = 85088LLU;
int8_t x371 = 1;
static int8_t x382 = -1;
int64_t t84 = 32182017062034LL;
uint64_t x386 = 125642549795344LLU;
int64_t t87 = 373781582885617LL;
int16_t x403 = -1;
volatile uint64_t t89 = 5438109LLU;
uint32_t x406 = UINT32_MAX;
volatile int32_t x409 = 13;
int8_t x410 = INT8_MIN;
volatile int16_t x415 = -1;
uint8_t x422 = 0U;
int8_t x423 = 2;
uint8_t x428 = UINT8_MAX;
int32_t x430 = -5805;
uint16_t x432 = 1538U;
int64_t t97 = 8231LL;
volatile uint64_t t98 = 8129058173047LLU;
int8_t x447 = -3;


void f0(void) {
	int16_t x1 = -1;
	int16_t x2 = INT16_MAX;
	volatile uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = 589127271332683146LLU;

	t0 = (x1^((x2-x3)&x4));

	if (t0 != 18446744073709518950LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -80319744;
	uint32_t x6 = UINT32_MAX;
	static uint16_t x7 = UINT16_MAX;
	volatile int16_t x8 = -1;
	volatile uint32_t t1 = 124962U;

	t1 = (x5^((x6-x7)&x8));

	if (t1 != 80308992U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = -281456076362164368LL;
	volatile int64_t t2 = -170LL;

	t2 = (x9^((x10-x11)&x12));

	if (t2 != 10373LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x17 = 3946350687389LLU;
	int32_t x18 = 44;
	int8_t x19 = INT8_MIN;

	t3 = (x17^((x18-x19)&x20));

	if (t3 != 3946350687389LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = UINT64_MAX;
	int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	volatile uint64_t t4 = 5765212852715LLU;

	t4 = (x21^((x22-x23)&x24));

	if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 37U;
	volatile uint16_t x26 = UINT16_MAX;
	uint16_t x27 = 939U;
	static int32_t x28 = 1418;
	static volatile int32_t t5 = -9;

	t5 = (x25^((x26-x27)&x28));

	if (t5 != 1061) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = INT8_MIN;
	uint64_t x32 = UINT64_MAX;
	uint64_t t6 = 1LLU;

	t6 = (x29^((x30-x31)&x32));

	if (t6 != 2147483520LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 270U;
	uint8_t x38 = 13U;
	volatile int32_t x39 = -1;
	volatile int32_t t7 = 5;

	t7 = (x37^((x38-x39)&x40));

	if (t7 != 270) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x43 = -1;
	static int32_t t8 = 3;

	t8 = (x41^((x42-x43)&x44));

	if (t8 != 205) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = INT16_MIN;
	uint32_t x46 = UINT32_MAX;
	static int8_t x47 = INT8_MAX;

	t9 = (x45^((x46-x47)&x48));

	if (t9 != 63717120U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = 15;
	static int16_t x50 = INT16_MIN;
	int8_t x52 = INT8_MIN;
	volatile int32_t t10 = 1;

	t10 = (x49^((x50-x51)&x52));

	if (t10 != -32625) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x54 = 3;
	static int16_t x55 = 1278;
	uint8_t x56 = 1U;
	uint64_t t11 = 2822397673LLU;

	t11 = (x53^((x54-x55)&x56));

	if (t11 != 14237645230LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = INT16_MIN;
	uint16_t x58 = 501U;
	int8_t x59 = -6;

	t12 = (x57^((x58-x59)&x60));

	if (t12 != -32278LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	static int8_t x62 = -1;
	volatile int32_t x63 = 0;
	int16_t x64 = INT16_MIN;
	int32_t t13 = 129;

	t13 = (x61^((x62-x63)&x64));

	if (t13 != 32640) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	uint8_t x70 = 11U;
	uint8_t x71 = UINT8_MAX;
	int16_t x72 = INT16_MAX;
	static int32_t t14 = -1;

	t14 = (x69^((x70-x71)&x72));

	if (t14 != -32628) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x73 = 32U;
	uint8_t x76 = 2U;
	static int32_t t15 = 34098;

	t15 = (x73^((x74-x75)&x76));

	if (t15 != 32) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	static int8_t x78 = -1;
	static volatile int16_t x79 = 7894;
	uint8_t x80 = 29U;

	t16 = (x77^((x78-x79)&x80));

	if (t16 != -119) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = UINT16_MAX;
	static int8_t x82 = INT8_MIN;
	int8_t x83 = -3;
	uint16_t x84 = 6064U;
	volatile int32_t t17 = -436;

	t17 = (x81^((x82-x83)&x84));

	if (t17 != 59519) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = 2U;
	int16_t x90 = 2234;
	volatile uint16_t x91 = UINT16_MAX;
	uint16_t x92 = UINT16_MAX;

	t18 = (x89^((x90-x91)&x92));

	if (t18 != 2233) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x98 = 41U;
	volatile int64_t x99 = INT64_MAX;
	static int16_t x100 = INT16_MAX;
	volatile int64_t t19 = -3552LL;

	t19 = (x97^((x98-x99)&x100));

	if (t19 != 5281LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	uint16_t x102 = 683U;
	static volatile uint32_t x103 = 521U;
	static volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t20 = 8101873LLU;

	t20 = (x101^((x102-x103)&x104));

	if (t20 != 18446744073709551394LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x105 = -719266710;
	uint64_t x106 = 494545778080702523LLU;
	volatile uint64_t x107 = UINT64_MAX;
	int8_t x108 = INT8_MAX;
	uint64_t t21 = 3421LLU;

	t21 = (x105^((x106-x107)&x108));

	if (t21 != 18446744072990284886LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = 34;
	uint16_t x110 = 0U;
	uint64_t x111 = 44LLU;
	int8_t x112 = INT8_MAX;
	volatile uint64_t t22 = 82678693867LLU;

	t22 = (x109^((x110-x111)&x112));

	if (t22 != 118LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x114 = INT8_MIN;
	uint32_t x115 = 1552079U;
	int8_t x116 = 1;

	t23 = (x113^((x114-x115)&x116));

	if (t23 != 4294967243U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x118 = 3846;
	volatile int64_t x119 = INT64_MAX;
	int32_t x120 = INT32_MIN;
	volatile int64_t t24 = -13114703LL;

	t24 = (x117^((x118-x119)&x120));

	if (t24 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x121 = UINT32_MAX;
	uint64_t x122 = 460200LLU;
	volatile uint16_t x123 = UINT16_MAX;
	static uint32_t x124 = 5244993U;

	t25 = (x121^((x122-x123)&x124));

	if (t25 != 4294967294LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x125 = 4504U;
	volatile int64_t x126 = 19067923405LL;
	int32_t x127 = 74146918;
	int64_t t26 = 13LL;

	t26 = (x125^((x126-x127)&x128));

	if (t26 != 18993780376LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = -183;
	uint8_t x130 = 97U;
	uint32_t x131 = UINT32_MAX;

	t27 = (x129^((x130-x131)&x132));

	if (t27 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t28 = 62296645330LLU;

	t28 = (x137^((x138-x139)&x140));

	if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = 1;
	static int8_t x142 = INT8_MIN;
	int64_t x143 = -271901702199590LL;
	static int16_t x144 = 0;

	t29 = (x141^((x142-x143)&x144));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = -1;
	uint16_t x148 = 34U;

	t30 = (x145^((x146-x147)&x148));

	if (t30 != -3) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = 687;
	volatile int32_t x150 = INT32_MIN;
	int16_t x151 = -1;
	volatile uint8_t x152 = 0U;
	static volatile int32_t t31 = -806005;

	t31 = (x149^((x150-x151)&x152));

	if (t31 != 687) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x157 = 61747U;
	int64_t x158 = -1LL;
	int16_t x159 = -1;
	volatile int16_t x160 = 48;
	int64_t t32 = -1980373906739138195LL;

	t32 = (x157^((x158-x159)&x160));

	if (t32 != 61747LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = -21;
	uint16_t x162 = 4U;
	static int32_t x163 = -293860764;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t33 = -160;

	t33 = (x161^((x162-x163)&x164));

	if (t33 != -21) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x166 = 11U;
	static uint64_t x168 = 365394976555535647LLU;
	uint64_t t34 = 24150232920115935LLU;

	t34 = (x165^((x166-x167)&x168));

	if (t34 != 18081349095687851276LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MAX;
	volatile uint64_t x171 = 218920296006LLU;
	volatile int8_t x172 = INT8_MAX;
	uint64_t t35 = 3049047LLU;

	t35 = (x169^((x170-x171)&x172));

	if (t35 != 32710LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = 46;
	uint64_t x174 = 15670722526LLU;
	static int64_t x175 = 14840772534054121LL;
	volatile uint64_t t36 = 469652LLU;

	t36 = (x173^((x174-x175)&x176));

	if (t36 != 9208531279991444187LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x182 = -1LL;
	int8_t x183 = -1;

	t37 = (x181^((x182-x183)&x184));

	if (t37 != 255LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x186 = INT8_MIN;
	uint8_t x187 = 17U;
	int64_t x188 = INT64_MAX;
	volatile uint64_t t38 = 6772833387LLU;

	t38 = (x185^((x186-x187)&x188));

	if (t38 != 9223372036854775952LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x190 = -220967569798070LL;
	volatile int16_t x191 = -1;
	static int64_t x192 = INT64_MIN;
	uint64_t t39 = 5045358776410LLU;

	t39 = (x189^((x190-x191)&x192));

	if (t39 != 9285781193890591485LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x195 = 3U;
	volatile int32_t t40 = -37;

	t40 = (x193^((x194-x195)&x196));

	if (t40 != -112) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MAX;
	uint8_t x199 = UINT8_MAX;
	int32_t x200 = 416193;

	t41 = (x197^((x198-x199)&x200));

	if (t41 != -416256) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x201 = -22;
	uint32_t x203 = 24796U;

	t42 = (x201^((x202-x203)&x204));

	if (t42 != 4294959310U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x205 = INT32_MIN;
	volatile int32_t x206 = 290600417;
	int8_t x207 = 45;
	uint32_t x208 = 20U;

	t43 = (x205^((x206-x207)&x208));

	if (t43 != 2147483668U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = -1;
	static int32_t x210 = INT32_MAX;
	static int64_t x212 = 16419705971214952LL;
	volatile int64_t t44 = -967757LL;

	t44 = (x209^((x210-x211)&x212));

	if (t44 != -901450313LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MIN;
	volatile int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t45 = 1LL;

	t45 = (x213^((x214-x215)&x216));

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x218 = 1430U;
	volatile int8_t x219 = 1;
	static uint16_t x220 = 1U;
	int32_t t46 = -2647206;

	t46 = (x217^((x218-x219)&x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = -1;
	int64_t x222 = -1LL;
	int64_t t47 = -1043559LL;

	t47 = (x221^((x222-x223)&x224));

	if (t47 != 456483885LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x229 = -1;
	volatile uint16_t x230 = UINT16_MAX;
	int64_t x231 = 2497225416676553950LL;
	int8_t x232 = -1;
	int64_t t48 = 205007582152LL;

	t48 = (x229^((x230-x231)&x232));

	if (t48 != 2497225416676488414LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x233 = INT32_MAX;
	volatile uint64_t x234 = 609385127563084483LLU;
	volatile uint64_t x235 = UINT64_MAX;
	int16_t x236 = -56;
	uint64_t t49 = 4498926LLU;

	t49 = (x233^((x234-x235)&x236));

	if (t49 != 609385125556403519LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = -1;
	uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 28910989546578LLU;
	int64_t x240 = 0LL;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x237^((x238-x239)&x240));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = INT32_MIN;
	int16_t x244 = -1;
	static int32_t t51 = -1096537;

	t51 = (x241^((x242-x243)&x244));

	if (t51 != 2147483508) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x245 = UINT8_MAX;
	volatile int16_t x246 = -1;
	int32_t x247 = INT32_MIN;
	int16_t x248 = -19;
	int32_t t52 = -1;

	t52 = (x245^((x246-x247)&x248));

	if (t52 != 2147483410) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = INT64_MAX;
	int8_t x250 = -10;
	int64_t x251 = INT64_MIN;
	volatile int64_t x252 = INT64_MAX;
	volatile int64_t t53 = 2057050483380LL;

	t53 = (x249^((x250-x251)&x252));

	if (t53 != 9LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = INT32_MIN;
	int32_t x255 = 0;
	static int32_t x256 = 18;
	int64_t t54 = 133981189423LL;

	t54 = (x253^((x254-x255)&x256));

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MAX;
	int16_t x260 = INT16_MIN;
	static uint64_t t55 = 19094LLU;

	t55 = (x257^((x258-x259)&x260));

	if (t55 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x266 = 16445LLU;
	int16_t x268 = -1;
	volatile uint64_t t56 = 1030414694LLU;

	t56 = (x265^((x266-x267)&x268));

	if (t56 != 16443LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = 1;
	int16_t x270 = INT16_MAX;
	int32_t x272 = INT32_MIN;
	volatile uint32_t t57 = 122U;

	t57 = (x269^((x270-x271)&x272));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = 106975LL;
	int32_t x275 = INT32_MAX;
	volatile int64_t t58 = 44561921299900382LL;

	t58 = (x273^((x274-x275)&x276));

	if (t58 != 106950LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = -6715;
	int32_t x282 = -1;
	static int16_t x283 = INT16_MIN;
	static int32_t x284 = INT32_MIN;

	t59 = (x281^((x282-x283)&x284));

	if (t59 != -6715) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x285 = INT64_MIN;
	volatile int32_t x286 = INT32_MIN;
	static volatile int8_t x287 = -1;
	static volatile int64_t t60 = INT64_MIN;

	t60 = (x285^((x286-x287)&x288));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = -4287191864184900640LL;
	volatile int8_t x292 = INT8_MIN;
	volatile uint64_t t61 = 3LLU;

	t61 = (x289^((x290-x291)&x292));

	if (t61 != 14159552121370744416LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x293 = INT32_MAX;
	int32_t x294 = -1;
	uint64_t x295 = UINT64_MAX;

	t62 = (x293^((x294-x295)&x296));

	if (t62 != 2147483647LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x297 = 68327LLU;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MAX;

	t63 = (x297^((x298-x299)&x300));

	if (t63 != 9222980653378791572LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = 4710LL;
	int32_t x302 = -1;
	uint8_t x304 = 7U;
	static volatile int64_t t64 = -102LL;

	t64 = (x301^((x302-x303)&x304));

	if (t64 != 4707LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = 141U;
	int16_t x307 = -1;
	uint8_t x308 = 0U;
	int32_t t65 = -5;

	t65 = (x305^((x306-x307)&x308));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x309 = -39;
	int64_t x310 = 1880850507138328980LL;
	int64_t x311 = INT64_MAX;
	static uint16_t x312 = UINT16_MAX;
	int64_t t66 = 10LL;

	t66 = (x309^((x310-x311)&x312));

	if (t66 != -59828LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x313 = 7U;
	int16_t x314 = -1;
	int64_t x315 = -22207148865LL;
	int64_t t67 = -96822380LL;

	t67 = (x313^((x314-x315)&x316));

	if (t67 != 71LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x318 = -1;
	uint16_t x319 = 3630U;
	static volatile uint8_t x320 = 17U;

	t68 = (x317^((x318-x319)&x320));

	if (t68 != 2147483630) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	int64_t t69 = 15350850171725631LL;

	t69 = (x321^((x322-x323)&x324));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x325 = INT16_MIN;
	uint8_t x326 = UINT8_MAX;
	volatile uint16_t x327 = 484U;
	int32_t x328 = INT32_MAX;
	volatile int32_t t70 = 2600;

	t70 = (x325^((x326-x327)&x328));

	if (t70 != -2147451109) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x329 = INT16_MIN;
	int8_t x331 = 1;
	static volatile int32_t t71 = 874789837;

	t71 = (x329^((x330-x331)&x332));

	if (t71 != -32682) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	uint64_t x335 = 136863LLU;
	int64_t x336 = INT64_MAX;
	uint64_t t72 = 36LLU;

	t72 = (x333^((x334-x335)&x336));

	if (t72 != 9223372036854912671LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x337 = -1;
	int8_t x339 = INT8_MIN;
	volatile int32_t x340 = INT32_MAX;
	volatile int32_t t73 = 5652;

	t73 = (x337^((x338-x339)&x340));

	if (t73 != -2147451009) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x341 = UINT16_MAX;
	static int32_t x342 = 3;
	static int64_t x343 = INT64_MAX;
	volatile int64_t t74 = -1887580159948LL;

	t74 = (x341^((x342-x343)&x344));

	if (t74 != -9223372036854710277LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x346 = INT8_MIN;
	int8_t x347 = -1;
	volatile int8_t x348 = INT8_MIN;
	int32_t t75 = -182156;

	t75 = (x345^((x346-x347)&x348));

	if (t75 != 2147483520) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x349 = UINT8_MAX;
	static uint16_t x350 = 3U;
	int16_t x351 = 5;
	uint32_t x352 = UINT32_MAX;

	t76 = (x349^((x350-x351)&x352));

	if (t76 != 4294967041U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x354 = 306914417617246055LL;
	uint16_t x355 = 0U;
	uint32_t x356 = 17U;
	volatile int64_t t77 = 8262LL;

	t77 = (x353^((x354-x355)&x356));

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = -1;
	static int32_t x358 = INT32_MIN;
	int64_t x359 = -1966893480371532955LL;
	int8_t x360 = -1;
	int64_t t78 = 156LL;

	t78 = (x357^((x358-x359)&x360));

	if (t78 != -1966893478224049308LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = -1;
	int16_t x362 = 1;

	t79 = (x361^((x362-x363)&x364));

	if (t79 != 4294967166U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MIN;
	int8_t x368 = INT8_MAX;

	t80 = (x365^((x366-x367)&x368));

	if (t80 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x369 = -1;
	int32_t x370 = -1;
	volatile int64_t x372 = -1LL;
	volatile int64_t t81 = 1728197327172371753LL;

	t81 = (x369^((x370-x371)&x372));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x373 = 35U;
	static uint8_t x374 = 1U;
	int32_t x375 = INT32_MAX;
	int16_t x376 = -42;
	static int32_t t82 = -6168056;

	t82 = (x373^((x374-x375)&x376));

	if (t82 != -2147483615) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = -1LL;
	int64_t x378 = 338662519486665453LL;
	int8_t x379 = -1;
	int64_t x380 = 476LL;
	int64_t t83 = 5LL;

	t83 = (x377^((x378-x379)&x380));

	if (t83 != -205LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x381 = INT64_MIN;
	volatile int8_t x383 = 1;
	uint8_t x384 = 13U;

	t84 = (x381^((x382-x383)&x384));

	if (t84 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = -1;
	int8_t x387 = -1;
	int16_t x388 = INT16_MAX;
	volatile uint64_t t85 = 1490791444LLU;

	t85 = (x385^((x386-x387)&x388));

	if (t85 != 18446744073709544942LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = -1;
	int16_t x390 = INT16_MIN;
	int16_t x391 = -1;
	volatile uint32_t x392 = 113357032U;
	uint32_t t86 = 2576U;

	t86 = (x389^((x390-x391)&x392));

	if (t86 != 4181622783U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x393 = -1;
	static uint8_t x394 = 5U;
	int64_t x395 = -1LL;
	volatile uint8_t x396 = 19U;

	t87 = (x393^((x394-x395)&x396));

	if (t87 != -3LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x397 = INT32_MAX;
	int8_t x398 = 19;
	int8_t x399 = INT8_MIN;
	uint16_t x400 = 245U;
	int32_t t88 = 84758;

	t88 = (x397^((x398-x399)&x400));

	if (t88 != 2147483502) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x401 = UINT16_MAX;
	int16_t x402 = INT16_MIN;
	uint64_t x404 = UINT64_MAX;

	t89 = (x401^((x402-x403)&x404));

	if (t89 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x405 = 6LLU;
	int8_t x407 = -1;
	static int64_t x408 = INT64_MIN;
	volatile uint64_t t90 = 144229943775345LLU;

	t90 = (x405^((x406-x407)&x408));

	if (t90 != 6LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x411 = 3U;
	static int64_t x412 = INT64_MIN;
	int64_t t91 = 58597LL;

	t91 = (x409^((x410-x411)&x412));

	if (t91 != 13LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = -1;
	uint16_t x414 = 2U;
	volatile uint16_t x416 = UINT16_MAX;
	volatile int32_t t92 = 1;

	t92 = (x413^((x414-x415)&x416));

	if (t92 != -4) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = 1;
	int8_t x418 = INT8_MIN;
	static uint64_t x419 = 63384LLU;
	volatile int8_t x420 = INT8_MIN;
	volatile uint64_t t93 = 235611201834LLU;

	t93 = (x417^((x418-x419)&x420));

	if (t93 != 18446744073709488001LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x421 = INT8_MAX;
	uint16_t x424 = 0U;
	int32_t t94 = 153614342;

	t94 = (x421^((x422-x423)&x424));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = INT8_MIN;
	uint8_t x426 = 14U;
	static int16_t x427 = INT16_MAX;
	int32_t t95 = -110538;

	t95 = (x425^((x426-x427)&x428));

	if (t95 != -113) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x429 = INT8_MIN;
	static uint64_t x431 = UINT64_MAX;
	volatile uint64_t t96 = 1659560374055LLU;

	t96 = (x429^((x430-x431)&x432));

	if (t96 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x433 = INT32_MIN;
	static int64_t x434 = -1LL;
	int8_t x435 = -1;
	int8_t x436 = INT8_MIN;

	t97 = (x433^((x434-x435)&x436));

	if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x437 = 84897390285LLU;
	volatile int16_t x438 = 1;
	int32_t x439 = 17038;
	int16_t x440 = 231;

	t98 = (x437^((x438-x439)&x440));

	if (t98 != 84897390254LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x445 = INT8_MAX;
	volatile int32_t x446 = -784668;
	uint32_t x448 = 1U;
	static volatile uint32_t t99 = 113527900U;

	t99 = (x445^((x446-x447)&x448));

	if (t99 != 126U) { NG(); } else { ; }
	
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

