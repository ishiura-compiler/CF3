#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = UINT16_MAX;
static int32_t x6 = INT32_MIN;
uint64_t t2 = 13619815529LLU;
static uint64_t x18 = 1276LLU;
int32_t x21 = -1;
volatile uint32_t t4 = 5032264U;
static uint16_t x33 = 5U;
uint16_t x58 = 84U;
int8_t x64 = -1;
volatile int64_t t11 = -68LL;
int16_t x76 = INT16_MAX;
static volatile int64_t x77 = INT64_MIN;
volatile int16_t x82 = INT16_MIN;
int32_t x92 = 194;
volatile int32_t t17 = 239611284;
int8_t x99 = INT8_MAX;
int16_t x103 = -27;
volatile int64_t t19 = -13910485585628163LL;
int16_t x114 = INT16_MIN;
volatile int32_t t23 = -562;
uint32_t x127 = 106363218U;
uint16_t x142 = 14563U;
int16_t x143 = 2;
int64_t t27 = INT64_MIN;
int32_t x149 = 433;
static int8_t x156 = INT8_MIN;
uint64_t x166 = 33259229255806LLU;
int16_t x176 = INT16_MIN;
int16_t x180 = INT16_MIN;
int16_t x184 = -1;
int8_t x198 = INT8_MIN;
static int32_t x211 = -1;
uint8_t x212 = UINT8_MAX;
int16_t x217 = INT16_MIN;
static volatile uint16_t x221 = 373U;
int8_t x223 = INT8_MAX;
volatile int8_t x224 = INT8_MAX;
uint64_t x232 = 268097908118923LLU;
volatile uint64_t t44 = 15015915527891LLU;
int8_t x243 = INT8_MAX;
int16_t x245 = -1;
int32_t x255 = -1694696;
volatile int64_t t50 = -306945552986LL;
static int32_t t51 = 60251654;
uint32_t x278 = 14U;
volatile int8_t x295 = 5;
int8_t x312 = INT8_MAX;
int64_t x314 = INT64_MIN;
uint32_t x317 = 4U;
uint16_t x320 = 104U;
uint64_t x321 = UINT64_MAX;
static int16_t x329 = 3;
static int64_t t63 = 161078546572014766LL;
uint8_t x338 = 118U;
static uint32_t x339 = UINT32_MAX;
int32_t x344 = -1;
volatile int16_t x359 = -1;
int64_t x365 = INT64_MAX;
int64_t t71 = -70188LL;
uint16_t x376 = 92U;
static volatile int32_t t72 = INT32_MIN;
volatile int64_t x377 = INT64_MIN;
volatile int64_t x385 = INT64_MIN;
uint8_t x391 = 2U;
volatile int16_t x397 = -4;
uint32_t x402 = 87097439U;
int16_t x403 = INT16_MIN;
int8_t x409 = 0;
int16_t x425 = -4;
int32_t x433 = INT32_MIN;
static int16_t x466 = INT16_MIN;
uint8_t x467 = 5U;
uint64_t t91 = 305955682229LLU;
int8_t x474 = -55;
int8_t x490 = INT8_MAX;
static uint32_t x491 = 0U;
static uint8_t x495 = 2U;
static uint8_t x497 = 37U;
volatile int64_t x501 = -1LL;
static int64_t t98 = -496750381LL;
int16_t x513 = INT16_MIN;


void f0(void) {
	int8_t x2 = INT8_MIN;
	uint16_t x3 = 3250U;
	volatile uint16_t x4 = 196U;
	int32_t t0 = -224;

	t0 = (x1&((x2-x3)+x4));

	if (t0 != 62354) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -3987389;
	static int64_t x7 = INT64_MIN;
	uint64_t x8 = 3080560068LLU;
	uint64_t t1 = 491193444077LLU;

	t1 = (x5&((x6-x7)+x8));

	if (t1 != 9223372037785978944LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = 23;
	static int64_t x14 = -610LL;
	uint32_t x15 = 1U;
	uint64_t x16 = UINT64_MAX;

	t2 = (x13&((x14-x15)+x16));

	if (t2 != 20LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	volatile int8_t x19 = INT8_MIN;
	int64_t x20 = -13255742768005238LL;
	static uint64_t t3 = 0LLU;

	t3 = (x17&((x18-x19)+x20));

	if (t3 != 1628718342LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x22 = 6336;
	volatile uint8_t x23 = UINT8_MAX;
	uint32_t x24 = 1U;

	t4 = (x21&((x22-x23)+x24));

	if (t4 != 6082U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	static int16_t x26 = 27;
	volatile int8_t x27 = 7;
	volatile uint32_t x28 = 3605U;
	uint32_t t5 = 1U;

	t5 = (x25&((x26-x27)+x28));

	if (t5 != 3625U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MIN;
	uint64_t x30 = 63354265LLU;
	uint32_t x31 = 14415732U;
	uint32_t x32 = UINT32_MAX;
	static volatile uint64_t t6 = 44512313LLU;

	t6 = (x29&((x30-x31)+x32));

	if (t6 != 4343889920LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	uint8_t x35 = 1U;
	uint16_t x36 = 937U;
	volatile int32_t t7 = -1658;

	t7 = (x33&((x34-x35)+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x45 = 100;
	static int16_t x46 = -1;
	static volatile int64_t x47 = -1LL;
	uint16_t x48 = UINT16_MAX;
	int64_t t8 = 1864566930LL;

	t8 = (x45&((x46-x47)+x48));

	if (t8 != 100LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 40146101U;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	int32_t x52 = -1;
	volatile uint32_t t9 = 26425U;

	t9 = (x49&((x50-x51)+x52));

	if (t9 != 40113333U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 45U;
	uint32_t x59 = 2111U;
	int64_t x60 = -14396LL;
	volatile int64_t t10 = -393LL;

	t10 = (x57&((x58-x59)+x60));

	if (t10 != 9LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MAX;
	int64_t x62 = -236746LL;
	int64_t x63 = -93426849521398LL;

	t11 = (x61&((x62-x63)+x64));

	if (t11 != 573178411LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = 433095754LLU;
	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = UINT16_MAX;
	uint64_t x72 = 11291218555764066LLU;
	volatile uint64_t t12 = 41386119676722LLU;

	t12 = (x69&((x70-x71)+x72));

	if (t12 != 152077378LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = 9140LL;
	uint64_t x74 = UINT64_MAX;
	volatile int8_t x75 = -1;
	static volatile uint64_t t13 = 1939081828LLU;

	t13 = (x73&((x74-x75)+x76));

	if (t13 != 9140LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x78 = 1;
	static uint32_t x79 = 16307311U;
	static uint16_t x80 = UINT16_MAX;
	volatile int64_t t14 = -84315287416LL;

	t14 = (x77&((x78-x79)+x80));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MIN;
	int16_t x83 = INT16_MAX;
	volatile int8_t x84 = INT8_MAX;
	static volatile int64_t t15 = INT64_MIN;

	t15 = (x81&((x82-x83)+x84));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = 30551U;
	uint64_t x90 = UINT64_MAX;
	volatile uint16_t x91 = 10228U;
	static uint64_t t16 = 405299676LLU;

	t16 = (x89&((x90-x91)+x92));

	if (t16 != 20549LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x93 = INT16_MIN;
	uint16_t x94 = 1417U;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -61;

	t17 = (x93&((x94-x95)+x96));

	if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x97 = 790517434779684480LL;
	static volatile int16_t x98 = -1;
	int32_t x100 = INT32_MAX;
	int64_t t18 = -891131613447895073LL;

	t18 = (x97&((x98-x99)+x100));

	if (t18 != 684445184LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 4993U;
	volatile int32_t x102 = 7697;
	volatile int64_t x104 = INT64_MIN;

	t19 = (x101&((x102-x103)+x104));

	if (t19 != 4608LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 146973336455625LLU;
	int64_t x106 = -757171491906LL;
	uint16_t x107 = 1708U;
	uint32_t x108 = UINT32_MAX;
	static uint64_t t20 = 13583930502LLU;

	t20 = (x105&((x106-x107)+x108));

	if (t20 != 146237814915329LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MIN;
	uint8_t x110 = 118U;
	int8_t x111 = -1;
	int64_t x112 = 1047LL;
	static volatile int64_t t21 = -146185158967597337LL;

	t21 = (x109&((x110-x111)+x112));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = 9;
	volatile int8_t x115 = -2;
	uint64_t x116 = 2925LLU;
	volatile uint64_t t22 = 44576820135613892LLU;

	t22 = (x113&((x114-x115)+x116));

	if (t22 != 9LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x117 = -7213;
	static int16_t x118 = 2;
	int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MIN;

	t23 = (x117&((x118-x119)+x120));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MIN;
	volatile int64_t x126 = -1LL;
	int8_t x128 = 12;
	volatile int64_t t24 = -568778480980LL;

	t24 = (x125&((x126-x127)+x128));

	if (t24 != -106363264LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	static int64_t x130 = -22837334LL;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = 3;
	static volatile int64_t t25 = 216018821942938996LL;

	t25 = (x129&((x130-x131)+x132));

	if (t25 != -22839296LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x133 = 806U;
	int32_t x134 = INT32_MAX;
	static volatile uint64_t x135 = 55LLU;
	int16_t x136 = 112;
	static volatile uint64_t t26 = 3LLU;

	t26 = (x133&((x134-x135)+x136));

	if (t26 != 32LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = INT64_MIN;
	volatile int32_t x144 = INT32_MIN;

	t27 = (x141&((x142-x143)+x144));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x150 = 0;
	int8_t x151 = -1;
	volatile int8_t x152 = -1;
	volatile int32_t t28 = -1;

	t28 = (x149&((x150-x151)+x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x153 = 1539U;
	volatile uint8_t x154 = 26U;
	static int16_t x155 = -1;
	int32_t t29 = -18493793;

	t29 = (x153&((x154-x155)+x156));

	if (t29 != 1539) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MAX;
	volatile uint16_t x159 = 0U;
	int16_t x160 = INT16_MIN;
	static volatile int64_t t30 = 4721869227303LL;

	t30 = (x157&((x158-x159)+x160));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = 498985LL;
	volatile uint32_t x162 = UINT32_MAX;
	int32_t x163 = -189966513;
	static int32_t x164 = INT32_MIN;
	volatile int64_t t31 = -5LL;

	t31 = (x161&((x162-x163)+x164));

	if (t31 != 165920LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x165 = -1;
	static int8_t x167 = 59;
	int32_t x168 = -1387;
	volatile uint64_t t32 = 27516LLU;

	t32 = (x165&((x166-x167)+x168));

	if (t32 != 33259229254360LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x169 = UINT32_MAX;
	int64_t x170 = -34582172143410284LL;
	uint16_t x171 = 18U;
	static volatile uint64_t x172 = UINT64_MAX;
	uint64_t t33 = 12LLU;

	t33 = (x169&((x170-x171)+x172));

	if (t33 != 2580849537LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = INT8_MAX;
	static uint32_t x174 = 75U;
	uint8_t x175 = 1U;
	uint32_t t34 = 121134456U;

	t34 = (x173&((x174-x175)+x176));

	if (t34 != 74U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x177 = -428232118929LL;
	int8_t x178 = 0;
	int16_t x179 = INT16_MIN;
	static volatile int64_t t35 = -3LL;

	t35 = (x177&((x178-x179)+x180));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x183 = 178;
	volatile int64_t t36 = INT64_MIN;

	t36 = (x181&((x182-x183)+x184));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = INT64_MAX;
	static uint16_t x190 = UINT16_MAX;
	volatile uint32_t x191 = 50535U;
	uint8_t x192 = 86U;
	static volatile int64_t t37 = -5661425417097LL;

	t37 = (x189&((x190-x191)+x192));

	if (t37 != 15086LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = UINT16_MAX;
	uint16_t x199 = UINT16_MAX;
	volatile int16_t x200 = -2;
	int32_t t38 = -2752207;

	t38 = (x197&((x198-x199)+x200));

	if (t38 != 65407) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x205 = 51097LLU;
	uint8_t x206 = 57U;
	volatile int8_t x207 = INT8_MIN;
	int16_t x208 = -63;
	static volatile uint64_t t39 = 19LLU;

	t39 = (x205&((x206-x207)+x208));

	if (t39 != 24LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = 497904;
	static int8_t x210 = -1;
	volatile int32_t t40 = -14248263;

	t40 = (x209&((x210-x211)+x212));

	if (t40 != 240) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x218 = INT16_MIN;
	uint8_t x219 = UINT8_MAX;
	static int64_t x220 = 16885402286828706LL;
	int64_t t41 = -13396408754424LL;

	t41 = (x217&((x218-x219)+x220));

	if (t41 != 16885402286784512LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x222 = -1522;
	volatile int32_t t42 = -337092366;

	t42 = (x221&((x222-x223)+x224));

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x229 = 1;
	int8_t x230 = -5;
	int16_t x231 = -1;
	volatile uint64_t t43 = 509263900213757618LLU;

	t43 = (x229&((x230-x231)+x232));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x233 = -1;
	uint8_t x234 = 1U;
	volatile int8_t x235 = -1;
	uint64_t x236 = 3897LLU;

	t44 = (x233&((x234-x235)+x236));

	if (t44 != 3899LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x241 = UINT16_MAX;
	int64_t x242 = 1029349140402512LL;
	static volatile int64_t x244 = -467994LL;
	volatile int64_t t45 = -11480122784153LL;

	t45 = (x241&((x242-x243)+x244));

	if (t45 != 60599LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x246 = INT8_MIN;
	static int32_t x247 = 27;
	int16_t x248 = INT16_MIN;
	volatile int32_t t46 = -114;

	t46 = (x245&((x246-x247)+x248));

	if (t46 != -32923) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x249 = 31U;
	static volatile int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	static int16_t x252 = -1;
	static volatile int32_t t47 = -31;

	t47 = (x249&((x250-x251)+x252));

	if (t47 != 31) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x253 = 1U;
	volatile int8_t x254 = INT8_MAX;
	volatile uint16_t x256 = UINT16_MAX;
	static uint32_t t48 = 1U;

	t48 = (x253&((x254-x255)+x256));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x257 = UINT16_MAX;
	int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	static uint16_t x260 = 75U;
	volatile int64_t t49 = 204867792757033LL;

	t49 = (x257&((x258-x259)+x260));

	if (t49 != 203LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x261 = 10377;
	int8_t x262 = -1;
	static uint32_t x263 = 251U;
	int64_t x264 = INT64_MIN;

	t50 = (x261&((x262-x263)+x264));

	if (t50 != 10240LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = INT8_MAX;
	int16_t x266 = -1;
	static int32_t x267 = -99;
	int8_t x268 = 1;

	t51 = (x265&((x266-x267)+x268));

	if (t51 != 99) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x269 = INT16_MIN;
	uint8_t x270 = 0U;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 96U;
	volatile int32_t t52 = 3241;

	t52 = (x269&((x270-x271)+x272));

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x277 = 824913U;
	uint16_t x279 = 246U;
	static int8_t x280 = INT8_MIN;
	volatile uint32_t t53 = 8114209U;

	t53 = (x277&((x278-x279)+x280));

	if (t53 != 824848U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = -4741;
	static uint8_t x286 = 54U;
	int32_t x287 = 547;
	volatile int32_t x288 = -1;
	int32_t t54 = 707;

	t54 = (x285&((x286-x287)+x288));

	if (t54 != -5102) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x293 = 783667440943232LLU;
	volatile int16_t x294 = 9;
	uint16_t x296 = 51U;
	uint64_t t55 = 866368509LLU;

	t55 = (x293&((x294-x295)+x296));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x297 = 0U;
	uint32_t x298 = 59U;
	int16_t x299 = INT16_MIN;
	static int64_t x300 = -1LL;
	int64_t t56 = -381907LL;

	t56 = (x297&((x298-x299)+x300));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MIN;
	uint8_t x307 = 0U;
	volatile int8_t x308 = INT8_MAX;
	volatile int64_t t57 = INT64_MIN;

	t57 = (x305&((x306-x307)+x308));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x309 = INT64_MAX;
	int8_t x310 = INT8_MIN;
	static uint32_t x311 = 82U;
	int64_t t58 = 27510LL;

	t58 = (x309&((x310-x311)+x312));

	if (t58 != 4294967213LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x313 = 2413U;
	static int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	int64_t t59 = -3719448375789201LL;

	t59 = (x313&((x314-x315)+x316));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x318 = -1;
	static int32_t x319 = INT32_MAX;
	uint32_t t60 = 7869619U;

	t60 = (x317&((x318-x319)+x320));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x322 = 4022LLU;
	uint16_t x323 = 2U;
	int32_t x324 = INT32_MIN;
	uint64_t t61 = 1070448144LLU;

	t61 = (x321&((x322-x323)+x324));

	if (t61 != 18446744071562071988LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x325 = -1;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = 687333683157262LLU;
	static uint64_t t62 = 528450131320LLU;

	t62 = (x325&((x326-x327)+x328));

	if (t62 != 687333683189902LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	int64_t x332 = INT64_MAX;

	t63 = (x329&((x330-x331)+x332));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x333 = -1;
	int64_t x334 = INT64_MIN;
	static volatile int8_t x335 = INT8_MIN;
	int64_t x336 = -1LL;
	static int64_t t64 = -473176762LL;

	t64 = (x333&((x334-x335)+x336));

	if (t64 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x337 = 62866636U;
	static volatile uint32_t x340 = 5U;
	static uint32_t t65 = 61U;

	t65 = (x337&((x338-x339)+x340));

	if (t65 != 76U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x341 = INT16_MAX;
	uint64_t x342 = 1523603645LLU;
	static int32_t x343 = 7;
	volatile uint64_t t66 = 2081597LLU;

	t66 = (x341&((x342-x343)+x344));

	if (t66 != 22709LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = INT8_MIN;
	volatile uint16_t x347 = UINT16_MAX;
	uint8_t x348 = 24U;
	volatile int64_t t67 = 30353136824825LL;

	t67 = (x345&((x346-x347)+x348));

	if (t67 != 9223372036854710169LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x349 = 3U;
	volatile int64_t x350 = -1131LL;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MAX;
	static volatile int64_t t68 = 562790348117307LL;

	t68 = (x349&((x350-x351)+x352));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x357 = -1;
	static volatile uint8_t x358 = UINT8_MAX;
	uint32_t x360 = 1400U;
	uint32_t t69 = 494566U;

	t69 = (x357&((x358-x359)+x360));

	if (t69 != 1656U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x361 = -1LL;
	int8_t x362 = INT8_MIN;
	static int8_t x363 = INT8_MAX;
	uint32_t x364 = UINT32_MAX;
	volatile int64_t t70 = -20798567771615267LL;

	t70 = (x361&((x362-x363)+x364));

	if (t70 != 4294967040LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x366 = INT16_MIN;
	int64_t x367 = 208LL;
	volatile int16_t x368 = INT16_MIN;

	t71 = (x365&((x366-x367)+x368));

	if (t71 != 9223372036854710064LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = INT32_MIN;
	static int8_t x375 = -52;

	t72 = (x373&((x374-x375)+x376));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x378 = INT16_MAX;
	static int16_t x379 = -1;
	volatile int16_t x380 = INT16_MIN;
	volatile int64_t t73 = -7044449275384LL;

	t73 = (x377&((x378-x379)+x380));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x381 = UINT32_MAX;
	uint16_t x382 = 126U;
	uint8_t x383 = 8U;
	int64_t x384 = INT64_MIN;
	volatile int64_t t74 = -12393276458LL;

	t74 = (x381&((x382-x383)+x384));

	if (t74 != 118LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x386 = INT32_MIN;
	int8_t x387 = -46;
	int8_t x388 = INT8_MAX;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x385&((x386-x387)+x388));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MIN;
	int16_t x392 = INT16_MAX;
	int32_t t76 = -32666631;

	t76 = (x389&((x390-x391)+x392));

	if (t76 != 32765) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int32_t x394 = -1;
	uint8_t x395 = 7U;
	int16_t x396 = INT16_MIN;
	volatile uint32_t t77 = 33287U;

	t77 = (x393&((x394-x395)+x396));

	if (t77 != 4294934520U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x398 = 16U;
	uint32_t x399 = 414U;
	static uint32_t x400 = 6253001U;
	static volatile uint32_t t78 = 1U;

	t78 = (x397&((x398-x399)+x400));

	if (t78 != 6252600U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x401 = UINT32_MAX;
	int64_t x404 = -468LL;
	int64_t t79 = -4188812LL;

	t79 = (x401&((x402-x403)+x404));

	if (t79 != 87129739LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x405 = 1U;
	int64_t x406 = -1LL;
	volatile int32_t x407 = INT32_MAX;
	int32_t x408 = INT32_MIN;
	int64_t t80 = 31454589LL;

	t80 = (x405&((x406-x407)+x408));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x410 = -228;
	uint16_t x411 = 9U;
	uint64_t x412 = 71692832147LLU;
	volatile uint64_t t81 = 2132919566732LLU;

	t81 = (x409&((x410-x411)+x412));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x417 = INT32_MIN;
	int8_t x418 = INT8_MIN;
	uint32_t x419 = 1873184482U;
	int64_t x420 = -1LL;
	int64_t t82 = -1601116948335781420LL;

	t82 = (x417&((x418-x419)+x420));

	if (t82 != 2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x426 = -1;
	volatile int16_t x427 = INT16_MAX;
	static uint16_t x428 = 715U;
	volatile int32_t t83 = 81;

	t83 = (x425&((x426-x427)+x428));

	if (t83 != -32056) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x429 = -1;
	int64_t x430 = -1LL;
	static uint8_t x431 = 7U;
	volatile uint8_t x432 = UINT8_MAX;
	static int64_t t84 = -43LL;

	t84 = (x429&((x430-x431)+x432));

	if (t84 != 247LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x434 = 1;
	static int64_t x435 = INT64_MAX;
	uint8_t x436 = 69U;
	int64_t t85 = INT64_MIN;

	t85 = (x433&((x434-x435)+x436));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x437 = 3438;
	static uint8_t x438 = UINT8_MAX;
	volatile uint64_t x439 = 82990LLU;
	static volatile int32_t x440 = -1;
	uint64_t t86 = 3517580LLU;

	t86 = (x437&((x438-x439)+x440));

	if (t86 != 3136LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x441 = -927461519;
	uint32_t x442 = 1331028176U;
	static uint32_t x443 = 38U;
	int8_t x444 = INT8_MIN;
	uint32_t t87 = 53U;

	t87 = (x441&((x442-x443)+x444));

	if (t87 != 1209008160U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x449 = 710729U;
	static volatile uint8_t x450 = 31U;
	int8_t x451 = 0;
	int32_t x452 = 0;
	static volatile uint32_t t88 = 7U;

	t88 = (x449&((x450-x451)+x452));

	if (t88 != 9U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x453 = UINT64_MAX;
	uint8_t x454 = 28U;
	int64_t x455 = -1LL;
	int16_t x456 = 1;
	volatile uint64_t t89 = 1044998930872432LLU;

	t89 = (x453&((x454-x455)+x456));

	if (t89 != 30LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x465 = 61073730739407940LLU;
	volatile int16_t x468 = 0;
	volatile uint64_t t90 = 8475141606774560LLU;

	t90 = (x465&((x466-x467)+x468));

	if (t90 != 61073730739375168LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x469 = UINT64_MAX;
	int8_t x470 = INT8_MIN;
	static int16_t x471 = 7;
	uint16_t x472 = UINT16_MAX;

	t91 = (x469&((x470-x471)+x472));

	if (t91 != 65400LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x473 = INT8_MIN;
	static int64_t x475 = 70LL;
	uint64_t x476 = 1266756456739LLU;
	volatile uint64_t t92 = 80LLU;

	t92 = (x473&((x474-x475)+x476));

	if (t92 != 1266756456576LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x477 = 37U;
	int32_t x478 = INT32_MAX;
	uint32_t x479 = 20639430U;
	volatile int16_t x480 = -1;
	volatile uint32_t t93 = 632518U;

	t93 = (x477&((x478-x479)+x480));

	if (t93 != 32U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x485 = UINT64_MAX;
	volatile int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MAX;
	uint16_t x488 = 1U;
	volatile uint64_t t94 = 304136819604LLU;

	t94 = (x485&((x486-x487)+x488));

	if (t94 != 18446744073709518722LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x489 = INT32_MIN;
	int64_t x492 = -379LL;
	static int64_t t95 = 287LL;

	t95 = (x489&((x490-x491)+x492));

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x493 = 63340069078245915LLU;
	int16_t x494 = INT16_MIN;
	int16_t x496 = INT16_MIN;
	volatile uint64_t t96 = 7LLU;

	t96 = (x493&((x494-x495)+x496));

	if (t96 != 63340069078180378LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x498 = UINT8_MAX;
	static int16_t x499 = -1;
	uint8_t x500 = UINT8_MAX;
	volatile int32_t t97 = 13808;

	t97 = (x497&((x498-x499)+x500));

	if (t97 != 37) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x502 = 318U;
	int8_t x503 = -12;
	int32_t x504 = -1;

	t98 = (x501&((x502-x503)+x504));

	if (t98 != 329LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x514 = -22;
	static int8_t x515 = -1;
	uint32_t x516 = UINT32_MAX;
	volatile uint32_t t99 = 3U;

	t99 = (x513&((x514-x515)+x516));

	if (t99 != 4294934528U) { NG(); } else { ; }
	
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

