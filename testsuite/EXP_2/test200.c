#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 114U;
volatile uint64_t t1 = 127369LLU;
volatile int32_t x30 = 1;
uint64_t x31 = UINT64_MAX;
volatile int8_t x46 = 1;
int64_t x47 = -1LL;
int64_t t5 = -1909906407509703227LL;
int64_t x50 = INT64_MIN;
int64_t x51 = INT64_MIN;
uint64_t x53 = UINT64_MAX;
int32_t x56 = INT32_MIN;
int64_t x58 = 11904LL;
int32_t x60 = INT32_MIN;
uint16_t x78 = UINT16_MAX;
int16_t x87 = INT16_MIN;
static int32_t x88 = INT32_MIN;
static uint32_t t14 = 1U;
volatile uint64_t x95 = 498095179LLU;
int32_t x109 = -432;
volatile int32_t t16 = -84;
int8_t x115 = -1;
volatile uint16_t x126 = 32700U;
uint32_t x139 = 397762U;
int64_t x155 = -120408491326LL;
int16_t x161 = INT16_MIN;
static int16_t x166 = 1689;
volatile int64_t x167 = -1LL;
static int64_t x168 = -717593297LL;
int16_t x170 = INT16_MIN;
int8_t x172 = INT8_MIN;
int8_t x180 = INT8_MIN;
uint16_t x195 = 90U;
static uint64_t x203 = 26LLU;
int8_t x205 = INT8_MAX;
int8_t x214 = INT8_MAX;
static uint16_t x218 = 3979U;
static int8_t x223 = -54;
static int8_t x232 = INT8_MAX;
static volatile int64_t t36 = -866294287516801LL;
int8_t x242 = 0;
uint32_t x244 = 7U;
int16_t x249 = -5;
volatile int64_t x251 = -1LL;
int16_t x252 = INT16_MAX;
uint16_t x255 = 24U;
static volatile uint64_t t40 = 353307781168996LLU;
static int64_t x257 = -1LL;
int16_t x258 = 66;
static volatile int64_t t41 = -31682432011695LL;
int32_t x263 = 340;
volatile uint64_t t42 = 6401817542359313089LLU;
uint16_t x267 = 5483U;
uint16_t x269 = 2U;
uint32_t x271 = 6996192U;
int16_t x272 = -2642;
static int64_t x287 = -55932216LL;
uint64_t x301 = 5167337427680510385LLU;
int8_t x303 = 27;
volatile uint64_t t49 = 202LLU;
volatile uint32_t x326 = UINT32_MAX;
volatile uint64_t x342 = UINT64_MAX;
int32_t x348 = INT32_MIN;
volatile uint64_t t55 = 535461LLU;
int64_t x353 = 83LL;
static int32_t x363 = -1;
static int64_t x369 = 1615720LL;
volatile uint64_t x370 = 1LLU;
int16_t x372 = INT16_MIN;
int64_t x380 = -1LL;
static volatile int8_t x385 = 26;
int8_t x391 = 7;
int64_t x400 = 2026LL;
int64_t t64 = -28642560813LL;
static volatile uint64_t x411 = 653355679148LLU;
static volatile uint64_t x412 = 6437490744LLU;
int8_t x413 = 0;
volatile int64_t x417 = -1LL;
volatile uint64_t t70 = 8102063537432786LLU;
int16_t x447 = -11776;
uint16_t x449 = 44U;
static int64_t t73 = 19463819LL;
static uint8_t x463 = UINT8_MAX;
uint64_t x473 = UINT64_MAX;
uint16_t x474 = 15120U;
int64_t x486 = INT64_MIN;
static volatile int64_t t79 = 108LL;
static int16_t x499 = INT16_MIN;
volatile uint8_t x501 = 1U;
uint64_t x503 = 209797269LLU;
static volatile uint64_t t82 = 3549LLU;
uint64_t t83 = 51738793676822968LLU;
uint8_t x510 = 12U;
static int8_t x527 = 56;
static int8_t x533 = INT8_MAX;
int16_t x534 = -1;
int64_t x535 = 16176328775LL;
int16_t x543 = -1;
int16_t x544 = INT16_MIN;
uint64_t t93 = 7980491506193LLU;
static uint32_t x561 = 60389898U;
int8_t x566 = -1;
uint32_t x568 = 51847U;
volatile int16_t x570 = 1;
volatile uint64_t x573 = 11LLU;
static int64_t x576 = INT64_MAX;
uint64_t x577 = 17063349422544672LLU;


void f0(void) {
	static int8_t x2 = 1;
	uint8_t x3 = 12U;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -25160859;

	t0 = ((x1*(x2-x3))%x4);

	if (t0 != -1254) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = UINT64_MAX;
	int64_t x18 = INT64_MAX;
	static volatile uint16_t x19 = 301U;
	int8_t x20 = INT8_MAX;

	t1 = ((x17*(x18-x19))%x20);

	if (t1 != 49LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x25 = 1U;
	int16_t x26 = -134;
	int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MAX;
	int32_t t2 = 1033070811;

	t2 = ((x25*(x26-x27))%x28);

	if (t2 != -6) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x29 = INT64_MIN;
	int64_t x32 = -132LL;
	volatile uint64_t t3 = 6730LLU;

	t3 = ((x29*(x30-x31))%x32);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 20U;
	uint32_t x34 = 246352701U;
	volatile int8_t x35 = -49;
	static volatile int32_t x36 = INT32_MAX;
	static volatile uint32_t t4 = 6994611U;

	t4 = ((x33*(x34-x35))%x36);

	if (t4 != 632087704U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x45 = UINT16_MAX;
	static int16_t x48 = INT16_MAX;

	t5 = ((x45*(x46-x47))%x48);

	if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x49 = 1298U;
	static volatile uint64_t x52 = UINT64_MAX;
	static uint64_t t6 = 840142LLU;

	t6 = ((x49*(x50-x51))%x52);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x54 = 7102615121LLU;
	int32_t x55 = -1;
	volatile uint64_t t7 = 7326228169897666480LLU;

	t7 = ((x53*(x54-x55))%x56);

	if (t7 != 18446744066606936494LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int16_t x59 = 3948;
	volatile int64_t t8 = 184215404285743LL;

	t8 = ((x57*(x58-x59))%x60);

	if (t8 != 2147475692LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x62 = -1;
	int64_t x63 = -1LL;
	int8_t x64 = INT8_MIN;
	int64_t t9 = -109LL;

	t9 = ((x61*(x62-x63))%x64);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = 73U;
	volatile uint32_t x66 = 148516210U;
	static volatile int64_t x67 = 13050644132337LL;
	uint32_t x68 = 217U;
	static int64_t t10 = -3057106LL;

	t10 = ((x65*(x66-x67))%x68);

	if (t10 != -103LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x77 = 6U;
	uint32_t x79 = 934900112U;
	uint16_t x80 = UINT16_MAX;
	volatile uint32_t t11 = 3U;

	t11 = ((x77*(x78-x79))%x80);

	if (t11 != 2120U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x81 = INT16_MAX;
	volatile uint16_t x82 = 1U;
	int16_t x83 = -1;
	int32_t x84 = 68723923;
	volatile int32_t t12 = -1145117;

	t12 = ((x81*(x82-x83))%x84);

	if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x85 = 2174274LL;
	volatile int8_t x86 = INT8_MIN;
	volatile int64_t t13 = 488046929147660479LL;

	t13 = ((x85*(x86-x87))%x88);

	if (t13 != 101342976LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x89 = -373;
	int16_t x90 = INT16_MAX;
	static int16_t x91 = INT16_MIN;
	uint32_t x92 = UINT32_MAX;

	t14 = ((x89*(x90-x91))%x92);

	if (t14 != 4270522741U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x93 = 40LLU;
	uint8_t x94 = UINT8_MAX;
	uint8_t x96 = 7U;
	volatile uint64_t t15 = 1381LLU;

	t15 = ((x93*(x94-x95))%x96);

	if (t15 != 5LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x110 = -1;
	volatile int8_t x111 = 1;
	int32_t x112 = INT32_MIN;

	t16 = ((x109*(x110-x111))%x112);

	if (t16 != 864) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x113 = -1;
	uint32_t x114 = UINT32_MAX;
	int64_t x116 = INT64_MIN;
	int64_t t17 = 844710341LL;

	t17 = ((x113*(x114-x115))%x116);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x125 = 18951U;
	uint16_t x127 = 26094U;
	static int32_t x128 = -155;
	static volatile uint32_t t18 = 420037540U;

	t18 = ((x125*(x126-x127))%x128);

	if (t18 != 125190306U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x129 = -1;
	int8_t x130 = INT8_MIN;
	volatile int8_t x131 = INT8_MIN;
	int64_t x132 = -24191340884LL;
	static int64_t t19 = 1707915926515LL;

	t19 = ((x129*(x130-x131))%x132);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x137 = INT16_MAX;
	uint64_t x138 = UINT64_MAX;
	int8_t x140 = 6;
	volatile uint64_t t20 = 30LLU;

	t20 = ((x137*(x138-x139))%x140);

	if (t20 != 5LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x153 = 36U;
	static volatile int64_t x154 = 7765267LL;
	uint8_t x156 = UINT8_MAX;
	int64_t t21 = -15726594854031391LL;

	t21 = ((x153*(x154-x155))%x156);

	if (t21 != 63LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x157 = -1LL;
	int16_t x158 = INT16_MAX;
	static volatile uint16_t x159 = 6U;
	int8_t x160 = INT8_MAX;
	int64_t t22 = -19LL;

	t22 = ((x157*(x158-x159))%x160);

	if (t22 != -122LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x162 = 460;
	volatile uint32_t x163 = 410029836U;
	int16_t x164 = INT16_MAX;
	volatile uint32_t t23 = 49250142U;

	t23 = ((x161*(x162-x163))%x164);

	if (t23 != 3393U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x165 = 1505;
	volatile int64_t t24 = 154648160590830LL;

	t24 = ((x165*(x166-x167))%x168);

	if (t24 != 2543450LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x169 = -1LL;
	static int8_t x171 = 0;
	int64_t t25 = -622527420LL;

	t25 = ((x169*(x170-x171))%x172);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = 125LLU;
	static uint64_t x179 = UINT64_MAX;
	uint64_t t26 = 37LLU;

	t26 = ((x177*(x178-x179))%x180);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x185 = INT16_MIN;
	int8_t x186 = 1;
	volatile uint8_t x187 = 101U;
	int16_t x188 = INT16_MIN;
	volatile int32_t t27 = -141;

	t27 = ((x185*(x186-x187))%x188);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x189 = INT32_MAX;
	uint64_t x190 = 461622565LLU;
	uint32_t x191 = 1U;
	int8_t x192 = INT8_MIN;
	volatile uint64_t t28 = 4254301237290LLU;

	t28 = ((x189*(x190-x191))%x192);

	if (t28 != 991326907276210908LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x193 = -1LL;
	volatile int64_t x194 = -334411570988LL;
	int32_t x196 = INT32_MIN;
	volatile int64_t t29 = -2734LL;

	t29 = ((x193*(x194-x195))%x196);

	if (t29 != 1551605638LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x201 = INT64_MAX;
	uint16_t x202 = 914U;
	static uint16_t x204 = 70U;
	uint64_t t30 = 37600097037211LLU;

	t30 = ((x201*(x202-x203))%x204);

	if (t30 != 38LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	int64_t x208 = 17099671475223LL;
	int64_t t31 = -58LL;

	t31 = ((x205*(x206-x207))%x208);

	if (t31 != -32385LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x209 = 863003524U;
	uint64_t x210 = 224546616236435LLU;
	volatile uint32_t x211 = 201602U;
	int8_t x212 = INT8_MAX;
	volatile uint64_t t32 = 195188434839825190LLU;

	t32 = ((x209*(x210-x211))%x212);

	if (t32 != 26LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x213 = 8326372082760843LLU;
	int16_t x215 = -374;
	int32_t x216 = INT32_MIN;
	volatile uint64_t t33 = 299939402323LLU;

	t33 = ((x213*(x214-x215))%x216);

	if (t33 != 4171512413463182343LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int8_t x219 = -2;
	int64_t x220 = -1LL;
	volatile int64_t t34 = 1442LL;

	t34 = ((x217*(x218-x219))%x220);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x221 = 13U;
	int16_t x222 = INT16_MIN;
	int32_t x224 = INT32_MAX;
	static int32_t t35 = -33807;

	t35 = ((x221*(x222-x223))%x224);

	if (t35 != -425282) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x229 = 1130411443632LL;
	int32_t x230 = 0;
	uint8_t x231 = UINT8_MAX;

	t36 = ((x229*(x230-x231))%x232);

	if (t36 != -116LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x241 = INT16_MAX;
	static int16_t x243 = INT16_MIN;
	volatile uint32_t t37 = 95U;

	t37 = ((x241*(x242-x243))%x244);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x245 = -1;
	int64_t x246 = 2374444491074897LL;
	uint32_t x247 = 232505U;
	int8_t x248 = INT8_MIN;
	volatile int64_t t38 = 1545760498LL;

	t38 = ((x245*(x246-x247))%x248);

	if (t38 != -24LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x250 = -75168735783275985LL;
	int64_t t39 = 217528LL;

	t39 = ((x249*(x250-x251))%x252);

	if (t39 != 6119LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x253 = 4314226642793518584LLU;
	volatile uint64_t x254 = 1797LLU;
	volatile uint32_t x256 = 207U;

	t40 = ((x253*(x254-x255))%x256);

	if (t40 != 153LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x259 = UINT8_MAX;
	int8_t x260 = 6;

	t41 = ((x257*(x258-x259))%x260);

	if (t41 != 3LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x261 = 47954LLU;
	int16_t x262 = -1;
	volatile int16_t x264 = INT16_MIN;

	t42 = ((x261*(x262-x263))%x264);

	if (t42 != 18446744073693199302LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x265 = -1LL;
	int16_t x266 = 3451;
	int8_t x268 = INT8_MIN;
	int64_t t43 = 5644LL;

	t43 = ((x265*(x266-x267))%x268);

	if (t43 != 112LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x270 = 4U;
	volatile uint32_t t44 = 17U;

	t44 = ((x269*(x270-x271))%x272);

	if (t44 != 4280974920U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x281 = 4485953453325LLU;
	int16_t x282 = INT16_MAX;
	int16_t x283 = INT16_MIN;
	volatile int32_t x284 = INT32_MAX;
	static volatile uint64_t t45 = 163668276452569826LLU;

	t45 = ((x281*(x282-x283))%x284);

	if (t45 != 227306013LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x285 = INT8_MAX;
	static int64_t x286 = 35521670509507LL;
	volatile int64_t x288 = INT64_MAX;
	static volatile int64_t t46 = 457067048131419904LL;

	t46 = ((x285*(x286-x287))%x288);

	if (t46 != 4511259258098821LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x293 = -25;
	uint8_t x294 = 61U;
	static volatile int16_t x295 = 1;
	int16_t x296 = INT16_MIN;
	volatile int32_t t47 = 974230413;

	t47 = ((x293*(x294-x295))%x296);

	if (t47 != -1500) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x302 = 124U;
	uint8_t x304 = 35U;
	uint64_t t48 = 104885765532LLU;

	t48 = ((x301*(x302-x303))%x304);

	if (t48 != 28LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x305 = -547694859631944760LL;
	uint64_t x306 = 7298074918LLU;
	int8_t x307 = 1;
	static volatile int8_t x308 = INT8_MAX;

	t49 = ((x305*(x306-x307))%x308);

	if (t49 != 46LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x321 = 0;
	int64_t x322 = 13335291629097315LL;
	uint64_t x323 = 58056985882785255LLU;
	int8_t x324 = INT8_MIN;
	volatile uint64_t t50 = 8LLU;

	t50 = ((x321*(x322-x323))%x324);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x325 = INT8_MIN;
	int8_t x327 = INT8_MAX;
	volatile int64_t x328 = INT64_MIN;
	static volatile int64_t t51 = 1LL;

	t51 = ((x325*(x326-x327))%x328);

	if (t51 != 16384LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x329 = INT32_MIN;
	uint64_t x330 = 10158433036264384LLU;
	int8_t x331 = INT8_MIN;
	int64_t x332 = -1LL;
	volatile uint64_t t52 = 1743725395739109LLU;

	t52 = ((x329*(x330-x331))%x332);

	if (t52 != 13813399737799278592LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x337 = -6;
	int16_t x338 = 358;
	uint64_t x339 = UINT64_MAX;
	static int8_t x340 = INT8_MAX;
	volatile uint64_t t53 = 122786559558LLU;

	t53 = ((x337*(x338-x339))%x340);

	if (t53 != 7LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x341 = INT16_MIN;
	volatile int8_t x343 = -1;
	volatile uint16_t x344 = 7U;
	uint64_t t54 = 2238690154LLU;

	t54 = ((x341*(x342-x343))%x344);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x345 = 4U;
	volatile int8_t x346 = -1;
	uint64_t x347 = 51762LLU;

	t55 = ((x345*(x346-x347))%x348);

	if (t55 != 2147276596LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x354 = 321045;
	int8_t x355 = INT8_MIN;
	uint8_t x356 = UINT8_MAX;
	volatile int64_t t56 = 7935386775457129LL;

	t56 = ((x353*(x354-x355))%x356);

	if (t56 != 169LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x361 = INT16_MIN;
	uint16_t x362 = UINT16_MAX;
	static int16_t x364 = INT16_MAX;
	int32_t t57 = 4502;

	t57 = ((x361*(x362-x363))%x364);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x371 = INT64_MIN;
	volatile uint64_t t58 = 28331397870525LLU;

	t58 = ((x369*(x370-x371))%x372);

	if (t58 != 1615720LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x377 = -1;
	volatile int32_t x378 = -1;
	volatile int16_t x379 = INT16_MAX;
	volatile int64_t t59 = 39700618675782897LL;

	t59 = ((x377*(x378-x379))%x380);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x381 = INT32_MAX;
	int8_t x382 = -4;
	uint64_t x383 = 35301419964005LLU;
	volatile uint8_t x384 = 29U;
	static volatile uint64_t t60 = 0LLU;

	t60 = ((x381*(x382-x383))%x384);

	if (t60 != 22LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x386 = UINT64_MAX;
	volatile uint32_t x387 = 1146284640U;
	static volatile int8_t x388 = 3;
	uint64_t t61 = 102781843644LLU;

	t61 = ((x385*(x386-x387))%x388);

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x389 = 23;
	volatile int8_t x390 = INT8_MIN;
	static uint64_t x392 = 688585469LLU;
	volatile uint64_t t62 = 11LLU;

	t62 = ((x389*(x390-x391))%x392);

	if (t62 != 154989034LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x393 = 2662706U;
	int32_t x394 = -1;
	int32_t x395 = 0;
	static uint32_t x396 = UINT32_MAX;
	static volatile uint32_t t63 = 200796U;

	t63 = ((x393*(x394-x395))%x396);

	if (t63 != 4292304590U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x397 = 597U;
	int64_t x398 = 15LL;
	static volatile int64_t x399 = -1LL;

	t64 = ((x397*(x398-x399))%x400);

	if (t64 != 1448LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x405 = 260U;
	static uint32_t x406 = 242686707U;
	int16_t x407 = -1;
	int16_t x408 = INT16_MIN;
	volatile uint32_t t65 = 199U;

	t65 = ((x405*(x406-x407))%x408);

	if (t65 != 2969001936U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x409 = -3405057594LL;
	static uint32_t x410 = UINT32_MAX;
	static uint64_t t66 = 22909LLU;

	t66 = ((x409*(x410-x411))%x412);

	if (t66 != 2171497738LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x414 = INT16_MIN;
	uint16_t x415 = UINT16_MAX;
	int16_t x416 = -1;
	int32_t t67 = 82;

	t67 = ((x413*(x414-x415))%x416);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x418 = 2;
	volatile int32_t x419 = 191484;
	int64_t x420 = -1LL;
	volatile int64_t t68 = 1881LL;

	t68 = ((x417*(x418-x419))%x420);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x433 = 7U;
	int32_t x434 = -15;
	int16_t x435 = INT16_MIN;
	int64_t x436 = INT64_MIN;
	int64_t t69 = 7747133309236173LL;

	t69 = ((x433*(x434-x435))%x436);

	if (t69 != 229271LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x437 = UINT8_MAX;
	uint16_t x438 = UINT16_MAX;
	static volatile uint32_t x439 = 63125717U;
	volatile uint64_t x440 = 35457319522LLU;

	t70 = ((x437*(x438-x439))%x440);

	if (t70 != 1099522774LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x445 = -60;
	volatile int32_t x446 = -1;
	static uint64_t x448 = UINT64_MAX;
	static uint64_t t71 = 59769LLU;

	t71 = ((x445*(x446-x447))%x448);

	if (t71 != 18446744073708845116LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x450 = 3;
	int16_t x451 = INT16_MIN;
	int16_t x452 = INT16_MIN;
	volatile int32_t t72 = 9;

	t72 = ((x449*(x450-x451))%x452);

	if (t72 != 132) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x453 = INT8_MIN;
	uint16_t x454 = 7501U;
	static volatile int64_t x455 = -129390526518708LL;
	int32_t x456 = 4742;

	t73 = ((x453*(x454-x455))%x456);

	if (t73 != -2368LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x461 = INT16_MIN;
	volatile int32_t x462 = 7;
	int16_t x464 = -304;
	int32_t t74 = 3;

	t74 = ((x461*(x462-x463))%x464);

	if (t74 != 240) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x469 = 161939639489570LLU;
	volatile int64_t x470 = 258973LL;
	int32_t x471 = -4;
	int16_t x472 = INT16_MIN;
	uint64_t t75 = 4952614739128158LLU;

	t75 = ((x469*(x470-x471))%x472);

	if (t75 != 5045153868671266658LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x475 = INT8_MAX;
	static uint64_t x476 = 40555194236LLU;
	volatile uint64_t t76 = 167571717020790558LLU;

	t76 = ((x473*(x474-x475))%x476);

	if (t76 != 6260147487LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x481 = INT16_MIN;
	static int64_t x482 = -724832473LL;
	int64_t x483 = 56409114066LL;
	static volatile uint16_t x484 = 188U;
	volatile int64_t t77 = 35537532410LL;

	t77 = ((x481*(x482-x483))%x484);

	if (t77 != 60LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x485 = -7;
	int64_t x487 = INT64_MIN;
	int64_t x488 = -1LL;
	static int64_t t78 = -32952117221548138LL;

	t78 = ((x485*(x486-x487))%x488);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x489 = 1005U;
	int8_t x490 = INT8_MIN;
	volatile int16_t x491 = INT16_MAX;
	int64_t x492 = -1LL;

	t79 = ((x489*(x490-x491))%x492);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x493 = 2857;
	int8_t x494 = -2;
	uint64_t x495 = 1137LLU;
	uint32_t x496 = 39864U;
	uint64_t t80 = 178705308184331075LLU;

	t80 = ((x493*(x494-x495))%x496);

	if (t80 != 14741LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x497 = 46;
	uint16_t x498 = UINT16_MAX;
	int8_t x500 = -1;
	volatile int32_t t81 = -1524185;

	t81 = ((x497*(x498-x499))%x500);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x502 = 99U;
	volatile int8_t x504 = -1;

	t82 = ((x501*(x502-x503))%x504);

	if (t82 != 18446744073499754446LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x505 = 598087984919LLU;
	uint64_t x506 = 922547735LLU;
	int32_t x507 = -1;
	int32_t x508 = INT32_MAX;

	t83 = ((x505*(x506-x507))%x508);

	if (t83 != 1777983636LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x509 = 26U;
	int16_t x511 = -1;
	uint64_t x512 = 553277851LLU;
	static uint64_t t84 = 1942LLU;

	t84 = ((x509*(x510-x511))%x512);

	if (t84 != 338LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x513 = INT8_MIN;
	int64_t x514 = -1LL;
	uint64_t x515 = UINT64_MAX;
	uint32_t x516 = 1162185U;
	static volatile uint64_t t85 = 4776958LLU;

	t85 = ((x513*(x514-x515))%x516);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x517 = -1;
	uint64_t x518 = 629738094274197LLU;
	uint32_t x519 = 3U;
	static volatile int64_t x520 = INT64_MAX;
	volatile uint64_t t86 = 940866LLU;

	t86 = ((x517*(x518-x519))%x520);

	if (t86 != 9222742298760501615LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x521 = INT32_MIN;
	int64_t x522 = 1301LL;
	int32_t x523 = INT32_MIN;
	volatile uint8_t x524 = UINT8_MAX;
	int64_t t87 = -3692693867368009705LL;

	t87 = ((x521*(x522-x523))%x524);

	if (t87 != -77LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x525 = 1U;
	uint16_t x526 = UINT16_MAX;
	int32_t x528 = INT32_MAX;
	volatile int32_t t88 = -12;

	t88 = ((x525*(x526-x527))%x528);

	if (t88 != 65479) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x529 = 1461LLU;
	int8_t x530 = INT8_MIN;
	int32_t x531 = INT32_MIN;
	uint64_t x532 = 3LLU;
	volatile uint64_t t89 = 17343150257759LLU;

	t89 = ((x529*(x530-x531))%x532);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x536 = INT64_MAX;
	int64_t t90 = 1LL;

	t90 = ((x533*(x534-x535))%x536);

	if (t90 != -2054393754552LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x537 = UINT64_MAX;
	uint64_t x538 = UINT64_MAX;
	int16_t x539 = INT16_MIN;
	int64_t x540 = INT64_MAX;
	uint64_t t91 = 11LLU;

	t91 = ((x537*(x538-x539))%x540);

	if (t91 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x541 = INT16_MIN;
	int64_t x542 = 6792312444LL;
	volatile int64_t t92 = -425802153LL;

	t92 = ((x541*(x542-x543))%x544);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x549 = INT32_MAX;
	static int16_t x550 = 117;
	uint32_t x551 = 5U;
	volatile uint64_t x552 = UINT64_MAX;

	t93 = ((x549*(x550-x551))%x552);

	if (t93 != 4294967184LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x553 = UINT64_MAX;
	int64_t x554 = INT64_MAX;
	volatile uint32_t x555 = 712U;
	int8_t x556 = -1;
	volatile uint64_t t94 = 5486344923LLU;

	t94 = ((x553*(x554-x555))%x556);

	if (t94 != 9223372036854776521LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x562 = 187U;
	volatile int32_t x563 = -1;
	static volatile int64_t x564 = INT64_MAX;
	int64_t t95 = 777LL;

	t95 = ((x561*(x562-x563))%x564);

	if (t95 != 2763366232LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x565 = 9U;
	volatile int64_t x567 = -1LL;
	volatile int64_t t96 = -114377LL;

	t96 = ((x565*(x566-x567))%x568);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x569 = UINT8_MAX;
	int8_t x571 = -1;
	static int32_t x572 = INT32_MIN;
	static volatile int32_t t97 = 17080;

	t97 = ((x569*(x570-x571))%x572);

	if (t97 != 510) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x574 = 0U;
	static uint16_t x575 = 3472U;
	static uint64_t t98 = 3759881757915862LLU;

	t98 = ((x573*(x574-x575))%x576);

	if (t98 != 9223372036854737617LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x578 = UINT16_MAX;
	int32_t x579 = -235245;
	static uint64_t x580 = UINT64_MAX;
	volatile uint64_t t99 = 1636114931281518197LLU;

	t99 = ((x577*(x578-x579))%x580);

	if (t99 != 4119386821731094912LLU) { NG(); } else { ; }
	
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

