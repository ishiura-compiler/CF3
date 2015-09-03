#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MAX;
volatile int32_t x4 = -1;
int64_t x10 = -5672LL;
uint32_t x12 = 2591U;
static int16_t x17 = -1;
volatile int16_t x37 = -1;
int64_t x38 = INT64_MIN;
static int32_t x39 = INT32_MIN;
volatile int32_t t8 = 107295;
uint8_t x54 = UINT8_MAX;
int32_t x55 = 44162619;
static uint8_t x62 = 1U;
static volatile int32_t t11 = -5623105;
static int32_t x68 = INT32_MIN;
int32_t t12 = -901499418;
static uint32_t x71 = 84741U;
static int32_t x73 = INT32_MIN;
int64_t x76 = 0LL;
uint64_t t14 = 7873LLU;
uint32_t x77 = 217951U;
int64_t t16 = -15652751179572472LL;
volatile int32_t x86 = -1;
static uint32_t x88 = 44450U;
int16_t x94 = INT16_MAX;
uint16_t x99 = UINT16_MAX;
static uint32_t t23 = 25U;
int16_t x113 = 34;
static int64_t x116 = INT64_MAX;
static int64_t x138 = 191LL;
uint64_t x140 = 123522708400129LLU;
uint32_t x147 = UINT32_MAX;
volatile int64_t x152 = -442914LL;
volatile int64_t x154 = INT64_MAX;
uint64_t x156 = 28131544940272LLU;
int32_t x176 = -3357760;
int8_t x178 = -1;
uint8_t x179 = UINT8_MAX;
volatile int32_t t35 = -1187;
volatile uint64_t x181 = UINT64_MAX;
volatile uint64_t x189 = 1574347219684LLU;
int32_t x191 = INT32_MIN;
volatile int64_t t38 = 4778955360LL;
uint8_t x202 = UINT8_MAX;
volatile int32_t t42 = 1;
int64_t t43 = -182LL;
int8_t x225 = -1;
volatile uint8_t x239 = 19U;
static volatile uint32_t x242 = 7211428U;
int32_t x243 = INT32_MIN;
int32_t x252 = -1;
int64_t x255 = INT64_MAX;
int8_t x257 = -36;
volatile int16_t x262 = INT16_MIN;
volatile int16_t x263 = INT16_MIN;
uint16_t x269 = 26U;
uint64_t x275 = 42LLU;
uint16_t x282 = 9U;
static int64_t t60 = -29059894326LL;
int32_t x290 = INT32_MIN;
volatile int32_t x291 = -1;
volatile int64_t x305 = INT64_MIN;
uint16_t x306 = UINT16_MAX;
uint16_t x308 = UINT16_MAX;
int64_t x312 = -1704LL;
int64_t t64 = -281LL;
static uint32_t x313 = UINT32_MAX;
int64_t x315 = 48878690821067LL;
static volatile uint8_t x316 = 2U;
int64_t t65 = 115026581815LL;
int32_t x320 = 2;
uint16_t x322 = 23U;
static int16_t x327 = -1;
uint64_t x335 = UINT64_MAX;
uint64_t t70 = 22907452197790LLU;
int16_t x338 = 164;
int16_t x361 = INT16_MAX;
uint64_t t76 = 22LLU;
volatile int16_t x368 = -1;
int64_t x371 = 86592951127LL;
int32_t x372 = -320226;
uint32_t x373 = UINT32_MAX;
int8_t x374 = -4;
volatile uint64_t x380 = 2444588LLU;
uint64_t t80 = 170929604124452LLU;
int8_t x388 = -1;
int16_t x399 = INT16_MIN;
static int32_t x402 = INT32_MIN;
static volatile int32_t x404 = INT32_MAX;
volatile int32_t t86 = -11806;
int16_t x416 = -51;
volatile uint32_t t88 = 6492U;
volatile int8_t x417 = INT8_MIN;
volatile int32_t x421 = 102969;
int64_t t91 = 141165503308LL;
static uint64_t x431 = 85190853128653729LLU;
uint64_t x433 = 115161369077825LLU;
int64_t x434 = -1LL;
uint8_t x438 = UINT8_MAX;
volatile int16_t x439 = INT16_MIN;
int8_t x441 = -1;
int32_t x443 = INT32_MIN;
int16_t x448 = -1;
static uint8_t x460 = UINT8_MAX;


void f0(void) {
	static uint32_t x1 = 7501390U;
	int8_t x2 = 16;
	uint32_t t0 = 1054U;

	t0 = (x1&((x2-x3)|x4));

	if (t0 != 7501390U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int32_t x6 = -7;
	uint16_t x7 = 10U;
	int64_t x8 = -1LL;
	int64_t t1 = -537036610041209LL;

	t1 = (x5&((x6-x7)|x8));

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 2153680LLU;
	int64_t x11 = -1LL;
	uint64_t t2 = 88162004486167765LLU;

	t2 = (x9&((x10-x11)|x12));

	if (t2 != 2148560LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	static uint64_t x14 = 30673755665434LLU;
	int8_t x15 = INT8_MIN;
	volatile uint64_t x16 = 397488665853239903LLU;
	volatile uint64_t t3 = 6675556000108LLU;

	t3 = (x13&((x14-x15)|x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x18 = UINT8_MAX;
	uint8_t x19 = 0U;
	volatile int64_t x20 = 12LL;
	static volatile int64_t t4 = 89LL;

	t4 = (x17&((x18-x19)|x20));

	if (t4 != 255LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	int8_t x26 = 10;
	int8_t x27 = INT8_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = -10912340;

	t5 = (x25&((x26-x27)|x28));

	if (t5 != -117) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 214;
	int8_t x34 = 0;
	int8_t x35 = -1;
	static int8_t x36 = INT8_MIN;
	int32_t t6 = 12384;

	t6 = (x33&((x34-x35)|x36));

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x40 = UINT64_MAX;
	uint64_t t7 = UINT64_MAX;

	t7 = (x37&((x38-x39)|x40));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -1;
	int32_t x46 = 51759;
	static int32_t x47 = 936;
	static uint16_t x48 = UINT16_MAX;

	t8 = (x45&((x46-x47)|x48));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -4958393559LL;
	volatile int16_t x50 = -1;
	int8_t x51 = INT8_MIN;
	int16_t x52 = -1;
	static volatile int64_t t9 = 243LL;

	t9 = (x49&((x50-x51)|x52));

	if (t9 != -4958393559LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	volatile int64_t x56 = -1LL;
	static volatile int64_t t10 = -3471063216416809LL;

	t10 = (x53&((x54-x55)|x56));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = 366;
	int16_t x63 = 1;
	int8_t x64 = -2;

	t11 = (x61&((x62-x63)|x64));

	if (t11 != 366) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 10696U;
	int16_t x66 = -8872;
	int32_t x67 = INT32_MIN;

	t12 = (x65&((x66-x67)|x68));

	if (t12 != 2376) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x69 = 7179410685LL;
	static uint16_t x70 = 134U;
	volatile int8_t x72 = INT8_MIN;
	volatile int64_t t13 = 4966335967765LL;

	t13 = (x69&((x70-x71)|x72));

	if (t13 != 2884443265LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = 172918;

	t14 = (x73&((x74-x75)|x76));

	if (t14 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MIN;
	static volatile uint16_t x80 = 233U;
	static int64_t t15 = 12751870171284071LL;

	t15 = (x77&((x78-x79)|x80));

	if (t15 != 73LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x81 = -13122;
	uint16_t x82 = 0U;
	int64_t x83 = -49395644LL;
	uint8_t x84 = 0U;

	t16 = (x81&((x82-x83)|x84));

	if (t16 != 49382588LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -7;
	static int16_t x87 = -111;
	uint32_t t17 = 81164754U;

	t17 = (x85&((x86-x87)|x88));

	if (t17 != 44520U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MIN;
	uint32_t x91 = 865918U;
	int32_t x92 = INT32_MIN;
	static volatile uint64_t t18 = 206086093LLU;

	t18 = (x89&((x90-x91)|x92));

	if (t18 != 4294068610LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	volatile uint16_t x95 = 14262U;
	volatile int16_t x96 = INT16_MIN;
	int32_t t19 = 54808461;

	t19 = (x93&((x94-x95)|x96));

	if (t19 != -14336) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x97 = -1101917;
	uint16_t x98 = 5757U;
	uint64_t x100 = UINT64_MAX;
	static volatile uint64_t t20 = 3992919LLU;

	t20 = (x97&((x98-x99)|x100));

	if (t20 != 18446744073708449699LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x101 = 380U;
	uint64_t x102 = 121LLU;
	int32_t x103 = INT32_MAX;
	uint32_t x104 = 399U;
	volatile uint64_t t21 = 4607LLU;

	t21 = (x101&((x102-x103)|x104));

	if (t21 != 380LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x105 = 409U;
	int64_t x106 = -1LL;
	static int16_t x107 = -5530;
	static volatile int8_t x108 = -1;
	int64_t t22 = -439419LL;

	t22 = (x105&((x106-x107)|x108));

	if (t22 != 409LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x109 = -10;
	volatile uint16_t x110 = 54U;
	volatile int8_t x111 = INT8_MAX;
	uint32_t x112 = UINT32_MAX;

	t23 = (x109&((x110-x111)|x112));

	if (t23 != 4294967286U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x114 = INT64_MIN;
	int32_t x115 = -1;
	volatile int64_t t24 = -11842311259LL;

	t24 = (x113&((x114-x115)|x116));

	if (t24 != 34LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x117 = -1LL;
	int8_t x118 = -54;
	uint16_t x119 = 13U;
	uint32_t x120 = 461585517U;
	static int64_t t25 = 40120206226357718LL;

	t25 = (x117&((x118-x119)|x120));

	if (t25 != 4294967293LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x125 = UINT32_MAX;
	uint16_t x126 = 2020U;
	int8_t x127 = 43;
	static uint64_t x128 = 4539LLU;
	uint64_t t26 = 14968815269LLU;

	t26 = (x125&((x126-x127)|x128));

	if (t26 != 6075LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = -1;
	volatile int8_t x134 = INT8_MIN;
	volatile int32_t x135 = INT32_MIN;
	volatile int8_t x136 = INT8_MIN;
	int32_t t27 = -3530;

	t27 = (x133&((x134-x135)|x136));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x137 = INT16_MIN;
	int8_t x139 = 1;
	uint64_t t28 = 5366862678825LLU;

	t28 = (x137&((x138-x139)|x140));

	if (t28 != 123522708373504LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int16_t x146 = INT16_MIN;
	int64_t x148 = -40464133871938LL;
	int64_t t29 = -20472109458363LL;

	t29 = (x145&((x146-x147)|x148));

	if (t29 != 42687LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = -8789;
	int32_t x150 = -112;
	int8_t x151 = -2;
	int64_t t30 = 941516561290076025LL;

	t30 = (x149&((x150-x151)|x152));

	if (t30 != -8822LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 1354U;
	uint32_t x155 = UINT32_MAX;
	static volatile uint64_t t31 = 241901628LLU;

	t31 = (x153&((x154-x155)|x156));

	if (t31 != 1088LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = -1LL;
	static int16_t x162 = INT16_MAX;
	int8_t x163 = -31;
	static int32_t x164 = -15629;
	volatile int64_t t32 = 122026517LL;

	t32 = (x161&((x162-x163)|x164));

	if (t32 != -15617LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 2U;
	static int32_t x166 = INT32_MAX;
	int16_t x167 = 554;
	int8_t x168 = INT8_MAX;
	int32_t t33 = -4950;

	t33 = (x165&((x166-x167)|x168));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x173 = 1U;
	uint64_t x174 = 10LLU;
	int64_t x175 = 6054936175LL;
	uint64_t t34 = 4997LLU;

	t34 = (x173&((x174-x175)|x176));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x177 = -60;
	volatile int16_t x180 = 1;

	t35 = (x177&((x178-x179)|x180));

	if (t35 != -256) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x182 = INT32_MAX;
	volatile uint64_t x183 = UINT64_MAX;
	int16_t x184 = -1;
	static volatile uint64_t t36 = UINT64_MAX;

	t36 = (x181&((x182-x183)|x184));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x190 = INT32_MIN;
	uint64_t x192 = 280463962LLU;
	uint64_t t37 = 3152666LLU;

	t37 = (x189&((x190-x191)|x192));

	if (t37 != 2097728LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = 9U;
	volatile int64_t x194 = -1LL;
	int8_t x195 = -1;
	volatile int64_t x196 = 991017855394884674LL;

	t38 = (x193&((x194-x195)|x196));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x197 = 9927434623LL;
	uint32_t x198 = UINT32_MAX;
	uint32_t x199 = 347U;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t39 = 43298LL;

	t39 = (x197&((x198-x199)|x200));

	if (t39 != 1337500031LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = -1;
	int64_t x203 = -1LL;
	uint8_t x204 = 63U;
	static volatile int64_t t40 = -18665LL;

	t40 = (x201&((x202-x203)|x204));

	if (t40 != 319LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = 8582963LLU;
	static int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	volatile uint8_t x208 = 3U;
	uint64_t t41 = 3150423968734848958LLU;

	t41 = (x205&((x206-x207)|x208));

	if (t41 != 30467LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MAX;
	volatile uint8_t x210 = UINT8_MAX;
	static uint8_t x211 = UINT8_MAX;
	int32_t x212 = INT32_MIN;

	t42 = (x209&((x210-x211)|x212));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x213 = 47LL;
	uint8_t x214 = 24U;
	uint32_t x215 = 229U;
	uint8_t x216 = 14U;

	t43 = (x213&((x214-x215)|x216));

	if (t43 != 47LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x221 = INT64_MAX;
	volatile uint64_t x222 = 39703816101324LLU;
	int16_t x223 = -1;
	uint32_t x224 = 2787U;
	static volatile uint64_t t44 = 65008623038724LLU;

	t44 = (x221&((x222-x223)|x224));

	if (t44 != 39703816101871LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x226 = 0U;
	int16_t x227 = -1;
	uint16_t x228 = 7U;
	static volatile uint32_t t45 = 3U;

	t45 = (x225&((x226-x227)|x228));

	if (t45 != 7U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x230 = 3;
	uint16_t x231 = UINT16_MAX;
	volatile int64_t x232 = INT64_MIN;
	volatile int64_t t46 = 272484040661956191LL;

	t46 = (x229&((x230-x231)|x232));

	if (t46 != 4LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = -1;
	uint64_t x234 = 477072355602855268LLU;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = 1857U;
	uint64_t t47 = 41449560758916765LLU;

	t47 = (x233&((x234-x235)|x236));

	if (t47 != 477072355602888549LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x237 = 25;
	int64_t x238 = INT64_MAX;
	int8_t x240 = INT8_MAX;
	int64_t t48 = 534223131125629054LL;

	t48 = (x237&((x238-x239)|x240));

	if (t48 != 25LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x241 = INT64_MIN;
	uint16_t x244 = 3U;
	int64_t t49 = 62057559LL;

	t49 = (x241&((x242-x243)|x244));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x245 = 24U;
	uint64_t x246 = 169180509LLU;
	int32_t x247 = INT32_MIN;
	static volatile int16_t x248 = INT16_MIN;
	static uint64_t t50 = 255LLU;

	t50 = (x245&((x246-x247)|x248));

	if (t50 != 24LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = INT16_MAX;
	int32_t x250 = -254751907;
	volatile int64_t x251 = 996529LL;
	static int64_t t51 = 62846669308185LL;

	t51 = (x249&((x250-x251)|x252));

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = 0;
	uint64_t x254 = UINT64_MAX;
	int16_t x256 = INT16_MAX;
	volatile uint64_t t52 = 6307039861077822212LLU;

	t52 = (x253&((x254-x255)|x256));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x258 = 41U;
	int32_t x259 = INT32_MAX;
	int64_t x260 = -1LL;
	int64_t t53 = 14981LL;

	t53 = (x257&((x258-x259)|x260));

	if (t53 != -36LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = INT64_MIN;
	volatile int8_t x264 = INT8_MIN;
	int64_t t54 = INT64_MIN;

	t54 = (x261&((x262-x263)|x264));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x265 = INT64_MAX;
	volatile int32_t x266 = 746801853;
	uint64_t x267 = 1235LLU;
	int8_t x268 = -1;
	volatile uint64_t t55 = 43500450346408LLU;

	t55 = (x265&((x266-x267)|x268));

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x270 = UINT8_MAX;
	volatile int8_t x271 = INT8_MIN;
	uint32_t x272 = 8268355U;
	static uint32_t t56 = 10315327U;

	t56 = (x269&((x270-x271)|x272));

	if (t56 != 26U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x273 = INT8_MIN;
	static int16_t x274 = 5481;
	uint64_t x276 = 10083376LLU;
	volatile uint64_t t57 = 1523034465404949LLU;

	t57 = (x273&((x274-x275)|x276));

	if (t57 != 10083584LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MIN;
	static volatile int64_t x278 = 1587946568LL;
	static uint8_t x279 = 117U;
	static int64_t x280 = -1142682662712571LL;
	int64_t t58 = -257634573612862462LL;

	t58 = (x277&((x278-x279)|x280));

	if (t58 != -1142682492703872LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x281 = -550231055777454LL;
	static uint8_t x283 = 0U;
	static volatile int64_t x284 = -1LL;
	static volatile int64_t t59 = 28LL;

	t59 = (x281&((x282-x283)|x284));

	if (t59 != -550231055777454LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x285 = -1LL;
	int16_t x286 = INT16_MAX;
	uint8_t x287 = UINT8_MAX;
	uint8_t x288 = UINT8_MAX;

	t60 = (x285&((x286-x287)|x288));

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x289 = -1;
	static volatile int16_t x292 = -1;
	static volatile int32_t t61 = -167807355;

	t61 = (x289&((x290-x291)|x292));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x297 = INT32_MIN;
	static int16_t x298 = -626;
	int32_t x299 = 329;
	volatile uint16_t x300 = 25U;
	int32_t t62 = INT32_MIN;

	t62 = (x297&((x298-x299)|x300));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x307 = -1LL;
	int64_t t63 = -2883079863017349LL;

	t63 = (x305&((x306-x307)|x308));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MAX;
	int16_t x311 = 0;

	t64 = (x309&((x310-x311)|x312));

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x314 = INT8_MAX;

	t65 = (x313&((x314-x315)|x316));

	if (t65 != 2331974838LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x317 = INT32_MAX;
	int64_t x318 = 2143195378641206375LL;
	int16_t x319 = INT16_MIN;
	int64_t t66 = -9115356164LL;

	t66 = (x317&((x318-x319)|x320));

	if (t66 != 2083224679LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x321 = 2U;
	int16_t x323 = -1812;
	uint8_t x324 = 5U;
	volatile int32_t t67 = -126;

	t67 = (x321&((x322-x323)|x324));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x325 = INT32_MAX;
	static int16_t x326 = INT16_MIN;
	volatile int32_t x328 = -1;
	int32_t t68 = INT32_MAX;

	t68 = (x325&((x326-x327)|x328));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x329 = INT32_MAX;
	volatile int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MAX;
	static int8_t x332 = -1;
	volatile int64_t t69 = 16747737800LL;

	t69 = (x329&((x330-x331)|x332));

	if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x333 = INT8_MIN;
	uint16_t x334 = UINT16_MAX;
	uint16_t x336 = 0U;

	t70 = (x333&((x334-x335)|x336));

	if (t70 != 65536LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = -1;
	volatile uint8_t x339 = 3U;
	int32_t x340 = INT32_MIN;
	int32_t t71 = 647;

	t71 = (x337&((x338-x339)|x340));

	if (t71 != -2147483487) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x341 = INT8_MIN;
	int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MAX;
	static int8_t x344 = 1;
	volatile int32_t t72 = -193;

	t72 = (x341&((x342-x343)|x344));

	if (t72 != -32896) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = -34293589;
	uint64_t x346 = 1596LLU;
	int8_t x347 = INT8_MAX;
	uint32_t x348 = 25545952U;
	uint64_t t73 = 1293335199731218404LLU;

	t73 = (x345&((x346-x347)|x348));

	if (t73 != 25462953LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = 823276LLU;
	int64_t x350 = 241509433139798LL;
	volatile int32_t x351 = INT32_MIN;
	static volatile uint64_t x352 = 12232515LLU;
	volatile uint64_t t74 = 2522831LLU;

	t74 = (x349&((x350-x351)|x352));

	if (t74 != 558916LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x353 = 342716017397LL;
	static int16_t x354 = INT16_MAX;
	int16_t x355 = INT16_MIN;
	static uint64_t x356 = 235772822LLU;
	uint64_t t75 = 37441LLU;

	t75 = (x353&((x354-x355)|x356));

	if (t75 != 168127221LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x362 = 2128671228LLU;
	int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MIN;

	t76 = (x361&((x362-x363)|x364));

	if (t76 != 29053LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MIN;
	volatile uint32_t x367 = 797330U;
	static volatile uint32_t t77 = 366188037U;

	t77 = (x365&((x366-x367)|x368));

	if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x369 = 0U;
	static uint32_t x370 = UINT32_MAX;
	int64_t t78 = -4535385897631696LL;

	t78 = (x369&((x370-x371)|x372));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x375 = INT32_MIN;
	static int32_t x376 = INT32_MAX;
	uint32_t t79 = 644U;

	t79 = (x373&((x374-x375)|x376));

	if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = 1194563670U;
	uint32_t x378 = 109571U;
	int32_t x379 = INT32_MIN;

	t80 = (x377&((x378-x379)|x380));

	if (t80 != 2197510LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = INT32_MIN;
	static uint32_t x382 = 2704U;
	volatile uint16_t x383 = 444U;
	uint64_t x384 = 100125245206152LLU;
	uint64_t t81 = 2625946LLU;

	t81 = (x381&((x382-x383)|x384));

	if (t81 != 100124277604352LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = INT16_MIN;
	static int16_t x386 = INT16_MAX;
	uint64_t x387 = UINT64_MAX;
	uint64_t t82 = 413219LLU;

	t82 = (x385&((x386-x387)|x388));

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = INT64_MIN;
	uint32_t x390 = 79408357U;
	int8_t x391 = -1;
	uint16_t x392 = UINT16_MAX;
	static int64_t t83 = 352953526892LL;

	t83 = (x389&((x390-x391)|x392));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = 1U;
	volatile int32_t t84 = 962305745;

	t84 = (x393&((x394-x395)|x396));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x397 = INT16_MIN;
	static int16_t x398 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t85 = 710;

	t85 = (x397&((x398-x399)|x400));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x401 = 12;
	int32_t x403 = -1;

	t86 = (x401&((x402-x403)|x404));

	if (t86 != 12) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x409 = UINT16_MAX;
	uint32_t x410 = 100U;
	uint64_t x411 = 173196335LLU;
	volatile int8_t x412 = -6;
	static volatile uint64_t t87 = 246221431226812LLU;

	t87 = (x409&((x410-x411)|x412));

	if (t87 != 65535LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x413 = 10552312U;
	volatile uint16_t x414 = 1182U;
	static uint32_t x415 = 219162U;

	t88 = (x413&((x414-x415)|x416));

	if (t88 != 10552264U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x418 = UINT64_MAX;
	static int8_t x419 = -1;
	int8_t x420 = INT8_MAX;
	uint64_t t89 = 3315583LLU;

	t89 = (x417&((x418-x419)|x420));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x422 = 886U;
	uint8_t x423 = 18U;
	int16_t x424 = INT16_MIN;
	volatile uint32_t t90 = 312480623U;

	t90 = (x421&((x422-x423)|x424));

	if (t90 != 98848U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = 62U;
	uint8_t x426 = 8U;
	uint8_t x427 = 12U;
	int64_t x428 = -1LL;

	t91 = (x425&((x426-x427)|x428));

	if (t91 != 62LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x429 = 10449U;
	uint16_t x430 = UINT16_MAX;
	int32_t x432 = INT32_MIN;
	uint64_t t92 = 64353LLU;

	t92 = (x429&((x430-x431)|x432));

	if (t92 != 8272LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x435 = -1;
	int32_t x436 = INT32_MAX;
	uint64_t t93 = 58090586206080LLU;

	t93 = (x433&((x434-x435)|x436));

	if (t93 != 410970177LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = 101137374555538217LL;
	uint16_t x440 = 1U;
	int64_t t94 = -311LL;

	t94 = (x437&((x438-x439)|x440));

	if (t94 != 41LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x442 = INT16_MIN;
	volatile int16_t x444 = 2;
	int32_t t95 = 124499267;

	t95 = (x441&((x442-x443)|x444));

	if (t95 != 2147450882) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x445 = -61;
	static int8_t x446 = 3;
	int8_t x447 = INT8_MIN;
	int32_t t96 = -1;

	t96 = (x445&((x446-x447)|x448));

	if (t96 != -61) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x449 = 11442;
	uint32_t x450 = UINT32_MAX;
	int64_t x451 = 92661562784366LL;
	uint32_t x452 = UINT32_MAX;
	int64_t t97 = -1751378619527569LL;

	t97 = (x449&((x450-x451)|x452));

	if (t97 != 11442LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x453 = INT64_MAX;
	volatile int8_t x454 = -1;
	static int16_t x455 = INT16_MAX;
	uint8_t x456 = 17U;
	int64_t t98 = 8926581LL;

	t98 = (x453&((x454-x455)|x456));

	if (t98 != 9223372036854743057LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x457 = 42U;
	int8_t x458 = -1;
	uint16_t x459 = 13502U;
	static int32_t t99 = -2;

	t99 = (x457&((x458-x459)|x460));

	if (t99 != 42) { NG(); } else { ; }
	
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

