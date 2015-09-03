#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 202556U;
static uint16_t x5 = 13101U;
uint8_t x7 = UINT8_MAX;
volatile uint64_t x16 = 111499365LLU;
volatile int16_t x25 = INT16_MIN;
static volatile uint16_t x42 = 275U;
uint32_t t9 = 21U;
int64_t x46 = -1LL;
int8_t x50 = INT8_MIN;
int32_t x51 = INT32_MIN;
int64_t x52 = -970758LL;
uint16_t x56 = UINT16_MAX;
volatile int8_t x66 = INT8_MAX;
int64_t x72 = INT64_MIN;
uint64_t x83 = 760168848725405LLU;
static int16_t x87 = -1;
uint64_t x97 = 493189665786394417LLU;
volatile uint64_t x100 = UINT64_MAX;
uint64_t t22 = 0LLU;
static uint64_t x112 = UINT64_MAX;
uint16_t x114 = UINT16_MAX;
int64_t x115 = -1LL;
static volatile int32_t x116 = INT32_MIN;
uint8_t x120 = 13U;
volatile uint64_t x126 = 288098547574676LLU;
int64_t x127 = -1LL;
volatile int64_t x128 = 128LL;
volatile uint64_t t28 = 71489609940206255LLU;
static volatile int64_t t29 = -73336612LL;
volatile int64_t t30 = -3329485399387243LL;
volatile int32_t t31 = -427348;
uint32_t x152 = 292U;
int16_t x153 = -4;
int32_t x158 = INT32_MIN;
static int32_t x163 = -1;
volatile uint16_t x178 = UINT16_MAX;
static volatile uint32_t x179 = 123U;
static int64_t x200 = -1LL;
static volatile int64_t t38 = -183386LL;
int32_t x201 = INT32_MIN;
int16_t x202 = -1;
static int32_t x216 = 245102321;
int64_t x222 = -1LL;
uint64_t t44 = 0LLU;
int8_t x235 = -1;
uint16_t x258 = 1336U;
volatile int32_t x259 = -251242199;
int64_t t48 = 17469881983747LL;
static int16_t x261 = INT16_MIN;
int32_t x262 = 224430194;
int32_t x266 = 2290;
static volatile int32_t x267 = INT32_MIN;
static uint32_t x268 = UINT32_MAX;
int8_t x275 = -1;
int16_t x280 = -558;
uint64_t t54 = 203630867870LLU;
volatile int16_t x294 = -10;
static int16_t x295 = INT16_MIN;
volatile uint64_t t56 = 40890392478902LLU;
int64_t x303 = 925134335832072930LL;
volatile uint8_t x308 = UINT8_MAX;
volatile uint32_t x309 = 669458327U;
int16_t x321 = INT16_MIN;
int64_t x325 = -90223LL;
int64_t t62 = -65613334243LL;
volatile uint64_t t63 = 491896302205932LLU;
int32_t x339 = -1;
volatile int64_t t66 = 1643LL;
int64_t x345 = INT64_MIN;
uint64_t t69 = 5239769LLU;
int32_t t71 = 4932;
int64_t x365 = -288631656645LL;
volatile uint32_t x366 = UINT32_MAX;
int32_t x375 = 621129837;
static int16_t x376 = -1;
volatile uint32_t t74 = 11U;
int8_t x381 = INT8_MAX;
uint64_t x389 = UINT64_MAX;
static uint8_t x396 = UINT8_MAX;
volatile int64_t x397 = -1LL;
static volatile int64_t x399 = -5806000LL;
int32_t x400 = -53728858;
int8_t x404 = 1;
static int32_t x406 = INT32_MIN;
uint32_t x407 = 13U;
static volatile int64_t t82 = 9LL;
int32_t x419 = INT32_MAX;
static uint64_t x423 = UINT64_MAX;
int16_t x424 = 12;
int16_t x431 = INT16_MAX;
int32_t x432 = INT32_MIN;
static volatile uint32_t x434 = 900597872U;
int16_t x436 = INT16_MIN;
uint64_t x442 = 15834115823LLU;
int32_t x447 = -1018;
volatile int32_t t89 = -526719499;
int8_t x452 = INT8_MIN;
int16_t x453 = INT16_MIN;
static volatile uint64_t t91 = 53571019318419LLU;
int8_t x457 = -33;
int8_t x460 = INT8_MIN;
uint8_t x461 = UINT8_MAX;
volatile int32_t x462 = 3731;
uint16_t x467 = UINT16_MAX;
int64_t x474 = INT64_MIN;
volatile int64_t t96 = 54LL;
volatile int64_t t98 = 11809446LL;
uint64_t t99 = 113923576941595165LLU;


void f0(void) {
	volatile int64_t x1 = -1LL;
	static int32_t x2 = -13398;
	int64_t x3 = -1LL;
	int64_t t0 = -823196LL;

	t0 = (x1*((x2/x3)|x4));

	if (t0 != -210814LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = INT64_MAX;
	int64_t x8 = -41925744LL;
	int64_t t1 = -18499LL;

	t1 = (x5*((x6/x7)|x8));

	if (t1 != -548839878576LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	int64_t x10 = -1LL;
	volatile int8_t x11 = INT8_MIN;
	int64_t x12 = -6414068LL;
	volatile int64_t t2 = 417055094779LL;

	t2 = (x9*((x10/x11)|x12));

	if (t2 != -1635587340LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint64_t x14 = UINT64_MAX;
	volatile int32_t x15 = 36;
	volatile uint64_t t3 = 0LLU;

	t3 = (x13*((x14/x15)|x16));

	if (t3 != 3586868286363050115LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = UINT16_MAX;
	uint16_t x22 = 7779U;
	volatile int64_t x23 = -1LL;
	int16_t x24 = -404;
	volatile int64_t t4 = 40792816129LL;

	t4 = (x21*((x22/x23)|x24));

	if (t4 != -196605LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = 65890167U;
	int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MAX;
	uint32_t t5 = 8U;

	t5 = (x25*((x26/x27)|x28));

	if (t5 != 32768U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = UINT8_MAX;
	volatile int32_t x30 = INT32_MIN;
	int16_t x31 = INT16_MIN;
	static int8_t x32 = -1;
	static int32_t t6 = 5449094;

	t6 = (x29*((x30/x31)|x32));

	if (t6 != -255) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 1490798660LLU;
	int16_t x34 = INT16_MIN;
	int8_t x35 = -1;
	uint8_t x36 = 34U;
	uint64_t t7 = 11LLU;

	t7 = (x33*((x34/x35)|x36));

	if (t7 != 48901177645320LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 12821223916487LLU;
	int32_t x38 = -1;
	volatile int8_t x39 = -1;
	int64_t x40 = 481973319170627LL;
	uint64_t t8 = 593LLU;

	t8 = (x37*((x38/x39)|x40));

	if (t8 != 7759042375054594837LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x43 = INT8_MAX;
	int32_t x44 = -2145019;

	t9 = (x41*((x42/x43)|x44));

	if (t9 != 2145017U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile int8_t x47 = -1;
	static int8_t x48 = INT8_MIN;
	volatile int64_t t10 = 187173432803780LL;

	t10 = (x45*((x46/x47)|x48));

	if (t10 != 4161536LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = UINT16_MAX;
	volatile int64_t t11 = 70881138647615858LL;

	t11 = (x49*((x50/x51)|x52));

	if (t11 != -63618625530LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 4979732467652593304LLU;
	volatile int64_t x54 = -112929982813413987LL;
	uint32_t x55 = 380909484U;
	volatile uint64_t t12 = 423117053LLU;

	t12 = (x53*((x54/x55)|x56));

	if (t12 != 5908656497034688872LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -57;
	int8_t x62 = -1;
	int64_t x63 = INT64_MAX;
	static int32_t x64 = 39;
	volatile int64_t t13 = 26077528LL;

	t13 = (x61*((x62/x63)|x64));

	if (t13 != -2223LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = 28173258;
	volatile int32_t x67 = -1;
	int64_t x68 = INT64_MAX;
	static int64_t t14 = 63314044694LL;

	t14 = (x65*((x66/x67)|x68));

	if (t14 != -28173258LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int32_t x70 = -1;
	uint64_t x71 = 1108625302LLU;
	uint64_t t15 = 82156621846691LLU;

	t15 = (x69*((x70/x71)|x72));

	if (t15 != 9223372020215480241LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	uint32_t x74 = 1658876532U;
	uint32_t x75 = UINT32_MAX;
	int16_t x76 = INT16_MAX;
	static uint32_t t16 = 914486U;

	t16 = (x73*((x74/x75)|x76));

	if (t16 != 2147450881U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 78U;
	volatile int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MIN;
	int64_t t17 = -2482247510236LL;

	t17 = (x77*((x78/x79)|x80));

	if (t17 != -167503724544LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = UINT16_MAX;
	uint64_t x84 = 234139889359739LLU;
	volatile uint64_t t18 = 20611402LLU;

	t18 = (x81*((x82/x83)|x84));

	if (t18 != 9766216606265901056LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 28405019U;
	int16_t x86 = -1;
	int16_t x88 = INT16_MAX;
	uint32_t t19 = 3481483U;

	t19 = (x85*((x86/x87)|x88));

	if (t19 != 3034321637U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = INT64_MIN;
	uint64_t x90 = 7420LLU;
	int16_t x91 = 456;
	volatile int64_t x92 = 217998164732LL;
	static volatile uint64_t t20 = 369LLU;

	t20 = (x89*((x90/x91)|x92));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x93 = 2150U;
	uint8_t x94 = 16U;
	volatile int64_t x95 = -793738115620540LL;
	uint32_t x96 = 10U;
	volatile int64_t t21 = 26371672LL;

	t21 = (x93*((x94/x95)|x96));

	if (t21 != 21500LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = INT64_MAX;
	int64_t x99 = INT64_MAX;

	t22 = (x97*((x98/x99)|x100));

	if (t22 != 17953554407923157199LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 7U;
	int8_t x106 = -1;
	uint32_t x107 = UINT32_MAX;
	uint64_t x108 = UINT64_MAX;
	static uint64_t t23 = 44LLU;

	t23 = (x105*((x106/x107)|x108));

	if (t23 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -1;
	int32_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	static uint64_t t24 = 2363664619446LLU;

	t24 = (x109*((x110/x111)|x112));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = -3516115LL;
	volatile int64_t t25 = 28647859188974LL;

	t25 = (x113*((x114/x115)|x116));

	if (t25 != 230428596525LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x117 = 1LLU;
	static int32_t x118 = 7;
	volatile int64_t x119 = -99366LL;
	uint64_t t26 = 26479532203465731LLU;

	t26 = (x117*((x118/x119)|x120));

	if (t26 != 13LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x121 = -1;
	int16_t x122 = INT16_MIN;
	volatile uint16_t x123 = 4U;
	int16_t x124 = 810;
	int32_t t27 = 1;

	t27 = (x121*((x122/x123)|x124));

	if (t27 != 7382) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -11;

	t28 = (x125*((x126/x127)|x128));

	if (t28 != 18446744073709550208LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x133 = INT8_MAX;
	int16_t x134 = 2476;
	int32_t x135 = 1036183;
	static int64_t x136 = -131892555480822LL;

	t29 = (x133*((x134/x135)|x136));

	if (t29 != -16750354546064394LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 101571U;
	static uint32_t x138 = UINT32_MAX;
	volatile int64_t x139 = INT64_MIN;
	int32_t x140 = -49549;

	t30 = (x137*((x138/x139)|x140));

	if (t30 != -5032741479LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x145 = 0;
	int16_t x146 = -1;
	static int32_t x147 = INT32_MAX;
	volatile int8_t x148 = INT8_MAX;

	t31 = (x145*((x146/x147)|x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;
	int32_t x151 = 518166632;
	uint32_t t32 = 4704510U;

	t32 = (x149*((x150/x151)|x152));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x154 = INT8_MIN;
	static int32_t x155 = 1056928811;
	int16_t x156 = 6025;
	volatile int32_t t33 = -18;

	t33 = (x153*((x154/x155)|x156));

	if (t33 != -24100) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 122U;
	volatile int16_t x159 = 2;
	uint32_t x160 = 982427U;
	volatile uint32_t t34 = 1763018U;

	t34 = (x157*((x158/x159)|x160));

	if (t34 != 2267339742U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = UINT64_MAX;
	static int32_t x162 = -1;
	int16_t x164 = -1;
	uint64_t t35 = 17718LLU;

	t35 = (x161*((x162/x163)|x164));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x177 = UINT32_MAX;
	uint64_t x180 = 37067LLU;
	static uint64_t t36 = 56485LLU;

	t36 = (x177*((x178/x179)|x180));

	if (t36 != 161486475324705LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	int64_t x187 = -90232146LL;
	int32_t x188 = INT32_MIN;
	static volatile int64_t t37 = -126276296LL;

	t37 = (x185*((x186/x187)|x188));

	if (t37 != 2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x197 = 5785U;
	uint8_t x198 = 110U;
	volatile int8_t x199 = INT8_MIN;

	t38 = (x197*((x198/x199)|x200));

	if (t38 != -5785LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x203 = -50082LL;
	int8_t x204 = INT8_MAX;
	static int64_t t39 = 7779877284607067LL;

	t39 = (x201*((x202/x203)|x204));

	if (t39 != -272730423296LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x209 = UINT32_MAX;
	static int8_t x210 = -2;
	static int8_t x211 = -1;
	uint16_t x212 = UINT16_MAX;
	static volatile uint32_t t40 = 57035623U;

	t40 = (x209*((x210/x211)|x212));

	if (t40 != 4294901761U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = -269;
	int16_t x214 = -1;
	int64_t x215 = INT64_MIN;
	int64_t t41 = 324437LL;

	t41 = (x213*((x214/x215)|x216));

	if (t41 != -65932524349LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x217 = 1U;
	volatile int64_t x218 = -1LL;
	static volatile int8_t x219 = INT8_MIN;
	uint16_t x220 = 2U;
	volatile int64_t t42 = 22LL;

	t42 = (x217*((x218/x219)|x220));

	if (t42 != 2LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x221 = INT32_MIN;
	volatile uint64_t x223 = 57651318927LLU;
	int8_t x224 = INT8_MIN;
	uint64_t t43 = 23280LLU;

	t43 = (x221*((x222/x223)|x224));

	if (t43 != 107374182400LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = INT32_MIN;
	static uint32_t x226 = 1U;
	uint64_t x227 = UINT64_MAX;
	static volatile int8_t x228 = INT8_MAX;

	t44 = (x225*((x226/x227)|x228));

	if (t44 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x233 = 5092654U;
	static int16_t x234 = 2895;
	volatile int8_t x236 = -1;
	volatile uint32_t t45 = 20026944U;

	t45 = (x233*((x234/x235)|x236));

	if (t45 != 4289874642U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x237 = INT32_MIN;
	uint64_t x238 = UINT64_MAX;
	static uint64_t x239 = 295LLU;
	uint64_t x240 = 1061360509232571LLU;
	uint64_t t46 = 1488768822796LLU;

	t46 = (x237*((x238/x239)|x240));

	if (t46 != 5318474093731774464LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x241 = -1LL;
	static volatile int8_t x242 = -1;
	int8_t x243 = INT8_MAX;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t47 = 526959545916516782LLU;

	t47 = (x241*((x242/x243)|x244));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x257 = 1824U;
	volatile int64_t x260 = 27LL;

	t48 = (x257*((x258/x259)|x260));

	if (t48 != 49248LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x263 = -1LL;
	uint32_t x264 = 50U;
	int64_t t49 = -12745586013LL;

	t49 = (x261*((x262/x263)|x264));

	if (t49 != 7354127024128LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x265 = 65U;
	uint32_t t50 = 1893948U;

	t50 = (x265*((x266/x267)|x268));

	if (t50 != 4294967231U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x273 = 0U;
	volatile int8_t x274 = 43;
	uint64_t x276 = 308627LLU;
	volatile uint64_t t51 = 330583930263066712LLU;

	t51 = (x273*((x274/x275)|x276));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x277 = UINT32_MAX;
	uint32_t x278 = 14U;
	int8_t x279 = 44;
	uint32_t t52 = 199596U;

	t52 = (x277*((x278/x279)|x280));

	if (t52 != 558U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = -10;
	int8_t x282 = -1;
	uint64_t x283 = 344489521339671LLU;
	int8_t x284 = INT8_MIN;
	static uint64_t t53 = 3LLU;

	t53 = (x281*((x282/x283)|x284));

	if (t53 != 840LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x285 = 1085745117773574LLU;
	volatile uint16_t x286 = 46U;
	volatile int64_t x287 = INT64_MIN;
	int8_t x288 = 10;

	t54 = (x285*((x286/x287)|x288));

	if (t54 != 10857451177735740LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x293 = INT64_MAX;
	uint64_t x296 = 134989049892LLU;
	uint64_t t55 = 8962635455292611LLU;

	t55 = (x293*((x294/x295)|x296));

	if (t55 != 18446743938720501724LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x297 = INT32_MAX;
	uint16_t x298 = 63U;
	volatile uint64_t x299 = 21LLU;
	int64_t x300 = -1LL;

	t56 = (x297*((x298/x299)|x300));

	if (t56 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x301 = 1925LLU;
	static volatile uint64_t x302 = UINT64_MAX;
	int32_t x304 = INT32_MIN;
	volatile uint64_t t57 = 231LLU;

	t57 = (x301*((x302/x303)|x304));

	if (t57 != 18446739939803565791LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MIN;
	static int64_t x307 = INT64_MIN;
	volatile int64_t t58 = -877967575LL;

	t58 = (x305*((x306/x307)|x308));

	if (t58 != 16711425LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x310 = 13;
	uint8_t x311 = UINT8_MAX;
	int64_t x312 = 4500864828LL;
	volatile int64_t t59 = -481663973119560LL;

	t59 = (x309*((x310/x311)|x312));

	if (t59 != 3013141437806022756LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x313 = -1;
	static int16_t x314 = -1;
	static int64_t x315 = INT64_MAX;
	uint64_t x316 = 4331245639938054727LLU;
	uint64_t t60 = 55696830144803LLU;

	t60 = (x313*((x314/x315)|x316));

	if (t60 != 14115498433771496889LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x322 = -1LL;
	static uint64_t x323 = 11903LLU;
	int32_t x324 = -1;
	uint64_t t61 = 144194123746220LLU;

	t61 = (x321*((x322/x323)|x324));

	if (t61 != 32768LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x326 = 415U;
	static uint32_t x327 = UINT32_MAX;
	uint16_t x328 = 1915U;

	t62 = (x325*((x326/x327)|x328));

	if (t62 != -172777045LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int8_t x330 = INT8_MAX;
	uint64_t x331 = UINT64_MAX;
	volatile int32_t x332 = INT32_MIN;

	t63 = (x329*((x330/x331)|x332));

	if (t63 != 18446743526101221376LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x333 = 55;
	uint8_t x334 = 1U;
	static int64_t x335 = 781665001410LL;
	int16_t x336 = INT16_MIN;
	volatile int64_t t64 = -14103219LL;

	t64 = (x333*((x334/x335)|x336));

	if (t64 != -1802240LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x337 = 152912758867LLU;
	uint16_t x338 = UINT16_MAX;
	static uint32_t x340 = 908814334U;
	uint64_t t65 = 485108303200LLU;

	t65 = (x337*((x338/x339)|x340));

	if (t65 != 11113305600878915501LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = -1LL;
	int64_t x342 = 70565753791178016LL;
	int16_t x343 = INT16_MIN;
	volatile uint8_t x344 = 53U;

	t66 = (x341*((x342/x343)|x344));

	if (t66 != 2153495904267LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x346 = -1;
	int8_t x347 = INT8_MIN;
	static uint64_t x348 = 506527960505761LLU;
	uint64_t t67 = 2777LLU;

	t67 = (x345*((x346/x347)|x348));

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x349 = INT64_MIN;
	volatile uint8_t x350 = 44U;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = UINT64_MAX;
	static uint64_t t68 = 3538953301LLU;

	t68 = (x349*((x350/x351)|x352));

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	volatile uint64_t x355 = 1223597379997LLU;
	uint64_t x356 = 42634858223780665LLU;

	t69 = (x353*((x354/x355)|x356));

	if (t69 != 12989482221057081984LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = 2129429594980058130LL;
	volatile int64_t x358 = 3LL;
	int32_t x359 = INT32_MAX;
	uint8_t x360 = 2U;
	int64_t t70 = 127690987LL;

	t70 = (x357*((x358/x359)|x360));

	if (t70 != 4258859189960116260LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x361 = INT8_MIN;
	static int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MIN;
	static int8_t x364 = INT8_MAX;

	t71 = (x361*((x362/x363)|x364));

	if (t71 != -16256) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 3976075U;
	volatile int64_t t72 = 2136624540LL;

	t72 = (x365*((x366/x367)|x368));

	if (t72 != -1147621114194768375LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x369 = 1019LLU;
	static int64_t x370 = -10839439LL;
	static volatile int16_t x371 = -1;
	volatile uint64_t x372 = 35LLU;
	uint64_t t73 = 953675267LLU;

	t73 = (x369*((x370/x371)|x372));

	if (t73 != 11045420949LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x373 = 97776957;
	uint32_t x374 = 1U;

	t74 = (x373*((x374/x375)|x376));

	if (t74 != 4197190339U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x382 = -1;
	static volatile int64_t x383 = INT64_MIN;
	uint16_t x384 = 43U;
	volatile int64_t t75 = -167038LL;

	t75 = (x381*((x382/x383)|x384));

	if (t75 != 5461LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x385 = 5;
	static volatile uint32_t x386 = UINT32_MAX;
	static int8_t x387 = 15;
	uint32_t x388 = UINT32_MAX;
	uint32_t t76 = 38899570U;

	t76 = (x385*((x386/x387)|x388));

	if (t76 != 4294967291U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x390 = UINT32_MAX;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = INT16_MIN;
	uint64_t t77 = 34873380LLU;

	t77 = (x389*((x390/x391)|x392));

	if (t77 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x393 = INT32_MIN;
	uint32_t x394 = 58U;
	int32_t x395 = -1;
	volatile uint32_t t78 = 25U;

	t78 = (x393*((x394/x395)|x396));

	if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x398 = INT64_MIN;
	volatile int64_t t79 = 1451LL;

	t79 = (x397*((x398/x399)|x400));

	if (t79 != 3375681LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x401 = 92791840;
	int8_t x402 = 31;
	uint16_t x403 = 2140U;
	volatile int32_t t80 = 120274462;

	t80 = (x401*((x402/x403)|x404));

	if (t80 != 92791840) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x405 = -1LL;
	uint8_t x408 = UINT8_MAX;
	static volatile int64_t t81 = -6552808250LL;

	t81 = (x405*((x406/x407)|x408));

	if (t81 != -165191167LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x409 = INT16_MIN;
	int64_t x410 = -1LL;
	static int32_t x411 = INT32_MIN;
	int8_t x412 = -1;

	t82 = (x409*((x410/x411)|x412));

	if (t82 != 32768LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x417 = INT32_MIN;
	static volatile uint64_t x418 = 5907854179626947002LLU;
	int16_t x420 = INT16_MAX;
	uint64_t t83 = 153238727LLU;

	t83 = (x417*((x418/x419)|x420));

	if (t83 != 12538865789677076480LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x421 = UINT64_MAX;
	uint64_t x422 = 69511LLU;
	volatile uint64_t t84 = 8674426557LLU;

	t84 = (x421*((x422/x423)|x424));

	if (t84 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x429 = 1U;
	int8_t x430 = INT8_MIN;
	uint32_t t85 = 22U;

	t85 = (x429*((x430/x431)|x432));

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x433 = INT32_MIN;
	int64_t x435 = 239802606LL;
	int64_t t86 = 110172151189LL;

	t86 = (x433*((x434/x435)|x436));

	if (t86 != 70362301726720LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = -1;
	int8_t x439 = 33;
	int32_t x440 = -921123;
	volatile int32_t t87 = 570;

	t87 = (x437*((x438/x439)|x440));

	if (t87 != 117903744) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x441 = INT16_MAX;
	int64_t x443 = 1033279200LL;
	uint16_t x444 = 3U;
	static uint64_t t88 = 22128472311767275LLU;

	t88 = (x441*((x442/x443)|x444));

	if (t88 != 491505LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x445 = 9U;
	uint16_t x446 = 3U;
	static uint8_t x448 = UINT8_MAX;

	t89 = (x445*((x446/x447)|x448));

	if (t89 != 2295) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x449 = INT16_MAX;
	int32_t x450 = -1;
	uint64_t x451 = 3527339794LLU;
	volatile uint64_t t90 = 148LLU;

	t90 = (x449*((x450/x451)|x452));

	if (t90 != 18446744073708863509LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x454 = 487U;
	static int64_t x455 = INT64_MAX;
	uint64_t x456 = 17376707077965398LLU;

	t91 = (x453*((x454/x455)|x456));

	if (t91 != 2449128754225938432LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x458 = -24065LL;
	static int8_t x459 = INT8_MIN;
	volatile int64_t t92 = -14715170420897810LL;

	t92 = (x457*((x458/x459)|x460));

	if (t92 != 2244LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x463 = 51U;
	volatile int16_t x464 = INT16_MIN;
	int32_t t93 = -28612;

	t93 = (x461*((x462/x463)|x464));

	if (t93 != -8337225) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x465 = 281348797113952LL;
	int64_t x466 = -15268357LL;
	uint64_t x468 = 1644287097LLU;
	uint64_t t94 = 324LLU;

	t94 = (x465*((x466/x467)|x468));

	if (t94 != 18408761986099168096LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x469 = 96U;
	volatile int8_t x470 = INT8_MAX;
	uint16_t x471 = UINT16_MAX;
	int16_t x472 = 19;
	int32_t t95 = 1028178;

	t95 = (x469*((x470/x471)|x472));

	if (t95 != 1824) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x473 = 1;
	uint32_t x475 = UINT32_MAX;
	int64_t x476 = INT64_MAX;

	t96 = (x473*((x474/x475)|x476));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x477 = 9;
	static int32_t x478 = -1;
	uint8_t x479 = 8U;
	uint16_t x480 = UINT16_MAX;
	int32_t t97 = -208670;

	t97 = (x477*((x478/x479)|x480));

	if (t97 != 589815) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x481 = 3;
	int16_t x482 = 214;
	int16_t x483 = INT16_MIN;
	int64_t x484 = -1LL;

	t98 = (x481*((x482/x483)|x484));

	if (t98 != -3LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x485 = 7638584541890452648LLU;
	volatile int16_t x486 = INT16_MAX;
	static int8_t x487 = -1;
	uint32_t x488 = 1550U;

	t99 = (x485*((x486/x487)|x488));

	if (t99 != 16458529167259344344LLU) { NG(); } else { ; }
	
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

