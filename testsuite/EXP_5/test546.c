#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = -659;
uint16_t x8 = 1174U;
int64_t x18 = INT64_MIN;
int64_t x23 = 139665065353250862LL;
int32_t x24 = -28966119;
int16_t x38 = INT16_MAX;
static uint64_t x41 = UINT64_MAX;
volatile uint64_t t8 = 102001005LLU;
int8_t x65 = INT8_MIN;
volatile int32_t t14 = -802337514;
volatile uint16_t x75 = 92U;
int8_t x86 = INT8_MAX;
int64_t x93 = 234028LL;
static uint8_t x94 = UINT8_MAX;
int64_t x95 = INT64_MIN;
int32_t x96 = -1;
int64_t x111 = -140825617LL;
volatile int64_t t23 = -131041881165624176LL;
static volatile int32_t t24 = -1;
static volatile int8_t x117 = INT8_MIN;
int64_t x125 = INT64_MAX;
volatile int64_t t26 = INT64_MAX;
static uint64_t t27 = 7389918067LLU;
int16_t x137 = INT16_MIN;
int32_t t29 = -14;
volatile uint32_t x141 = 13630217U;
int8_t x142 = INT8_MIN;
int16_t x150 = -1;
static uint32_t x152 = 17403U;
volatile uint16_t x153 = UINT16_MAX;
volatile int64_t x159 = INT64_MAX;
static int16_t x169 = INT16_MIN;
int8_t x170 = INT8_MIN;
static uint32_t x171 = UINT32_MAX;
int8_t x174 = -1;
static uint32_t x176 = UINT32_MAX;
int64_t t38 = -39292316068482LL;
int64_t x177 = 2531401LL;
uint16_t x179 = 919U;
volatile int64_t x181 = INT64_MAX;
int8_t x182 = INT8_MIN;
static int32_t x183 = -1;
uint64_t x194 = 3115LLU;
uint32_t x195 = 2U;
static volatile int64_t t44 = INT64_MAX;
static int16_t x201 = -71;
volatile uint32_t x205 = 765U;
volatile uint8_t x212 = 0U;
static int32_t x220 = -82989118;
uint64_t x233 = 1354800LLU;
static volatile int8_t x238 = INT8_MAX;
static uint64_t x239 = 806039192LLU;
int8_t x240 = -1;
static int32_t x245 = INT32_MAX;
uint16_t x246 = 915U;
volatile int64_t t54 = 18393465LL;
volatile uint32_t x249 = 108U;
int64_t x250 = -391311634218LL;
volatile int64_t t55 = 1984LL;
static int16_t x253 = 16262;
int8_t x255 = -1;
volatile int32_t t56 = -268370604;
int8_t x257 = INT8_MAX;
static int32_t x259 = INT32_MIN;
static uint64_t x265 = 15331278589125514LLU;
int16_t x270 = INT16_MIN;
uint16_t x295 = UINT16_MAX;
volatile uint16_t x296 = 1U;
volatile uint32_t t66 = UINT32_MAX;
volatile uint32_t x309 = UINT32_MAX;
static int8_t x311 = INT8_MIN;
int32_t x313 = INT32_MIN;
int64_t x315 = INT64_MIN;
volatile int64_t t68 = -187213834608956164LL;
volatile uint64_t t70 = 60366887062LLU;
int8_t x330 = -4;
int64_t x342 = INT64_MIN;
static int8_t x348 = -1;
static uint32_t x363 = 907234119U;
uint64_t x368 = UINT64_MAX;
static uint64_t t78 = 5663552LLU;
static uint16_t x370 = 668U;
int8_t x387 = INT8_MIN;
uint32_t t84 = 1U;
int32_t x393 = 4060;
static int64_t x395 = -295491LL;
int8_t x396 = INT8_MIN;
uint32_t x397 = 7508U;
int32_t x402 = -13;
int16_t x405 = INT16_MAX;
static int32_t t88 = -235662;
int32_t x411 = INT32_MIN;
int16_t x412 = -1;
int32_t x413 = -4;
int32_t x419 = INT32_MIN;
int16_t x421 = 8601;
static uint8_t x423 = 8U;
static int32_t t92 = 1409986;
int8_t x426 = INT8_MIN;
volatile int32_t x427 = INT32_MAX;
int8_t x428 = -1;
static int32_t t93 = 1149663;
volatile uint32_t x434 = 1938160U;
uint64_t t95 = UINT64_MAX;
int8_t x437 = INT8_MIN;
int32_t t96 = 74297;
static int16_t x444 = -37;
volatile uint64_t x449 = 81LLU;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int32_t x2 = -211;
	int32_t x3 = INT32_MIN;
	static int32_t t0 = INT32_MIN;

	t0 = (x1^((x2/x3)*x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint32_t x6 = 1976706U;
	int8_t x7 = -2;
	static uint32_t t1 = 86U;

	t1 = (x5^((x6/x7)*x8));

	if (t1 != 32767U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int32_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	int64_t x16 = -24396524LL;
	static int64_t t2 = -15014141036899LL;

	t2 = (x13^((x14/x15)*x16));

	if (t2 != 24396523LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static int32_t x19 = INT32_MIN;
	int16_t x20 = -1;
	int64_t t3 = 132409043619030770LL;

	t3 = (x17^((x18/x19)*x20));

	if (t3 != 4294967168LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -71450696708730362LL;
	static int32_t x22 = -124446542;
	volatile int64_t t4 = 5012549100219LL;

	t4 = (x21^((x22/x23)*x24));

	if (t4 != -71450696708730362LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -8064976LL;
	uint32_t x26 = UINT32_MAX;
	static int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	int64_t t5 = -3338160213LL;

	t5 = (x25^((x26/x27)*x28));

	if (t5 != -4286877648LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -1;
	uint64_t x30 = 3LLU;
	volatile int8_t x31 = INT8_MAX;
	int8_t x32 = 0;
	uint64_t t6 = UINT64_MAX;

	t6 = (x29^((x30/x31)*x32));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = INT32_MIN;
	int8_t x39 = -1;
	static uint16_t x40 = UINT16_MAX;
	static volatile int32_t t7 = -1;

	t7 = (x37^((x38/x39)*x40));

	if (t7 != 98303) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	int8_t x44 = 1;

	t8 = (x41^((x42/x43)*x44));

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x45 = 3;
	int64_t x46 = -451482163610175LL;
	uint64_t x47 = UINT64_MAX;
	int64_t x48 = INT64_MAX;
	volatile uint64_t t9 = 1063794555042994638LLU;

	t9 = (x45^((x46/x47)*x48));

	if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -40934794LL;
	volatile int8_t x54 = INT8_MAX;
	int32_t x55 = -955694;
	uint64_t x56 = 23357296407514737LLU;
	static volatile uint64_t t10 = 514853953586LLU;

	t10 = (x53^((x54/x55)*x56));

	if (t10 != 18446744073668616822LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 7U;
	int32_t x58 = INT32_MIN;
	volatile uint64_t x59 = UINT64_MAX;
	int16_t x60 = 268;
	uint64_t t11 = 138483259586582444LLU;

	t11 = (x57^((x58/x59)*x60));

	if (t11 != 7LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x61 = 19LLU;
	static int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = UINT8_MAX;
	volatile uint64_t t12 = 138662756LLU;

	t12 = (x61^((x62/x63)*x64));

	if (t12 != 236LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x66 = INT8_MIN;
	static int64_t x67 = INT64_MAX;
	uint64_t x68 = 3769597902LLU;
	uint64_t t13 = 18391LLU;

	t13 = (x65^((x66/x67)*x68));

	if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = -1;
	int16_t x70 = -380;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = -1;

	t14 = (x69^((x70/x71)*x72));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t15 = 6810932U;

	t15 = (x73^((x74/x75)*x76));

	if (t15 != 4294967012U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = INT32_MIN;
	static volatile uint64_t x82 = 580LLU;
	static uint32_t x83 = 3638U;
	int64_t x84 = INT64_MIN;
	static volatile uint64_t t16 = 235497105LLU;

	t16 = (x81^((x82/x83)*x84));

	if (t16 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = UINT64_MAX;
	int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x85^((x86/x87)*x88));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MAX;
	static volatile uint64_t x90 = 27430583771LLU;
	uint32_t x91 = 326285350U;
	int64_t x92 = 1LL;
	uint64_t t18 = 8114LLU;

	t18 = (x89^((x90/x91)*x92));

	if (t18 != 9223372036854775723LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t t19 = 6937523410626LL;

	t19 = (x93^((x94/x95)*x96));

	if (t19 != 234028LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -1;
	int8_t x98 = 1;
	static volatile uint32_t x99 = 924U;
	uint32_t x100 = UINT32_MAX;
	uint32_t t20 = UINT32_MAX;

	t20 = (x97^((x98/x99)*x100));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x101 = INT32_MIN;
	int8_t x102 = 0;
	volatile int64_t x103 = INT64_MIN;
	uint32_t x104 = 112197051U;
	volatile int64_t t21 = 25LL;

	t21 = (x101^((x102/x103)*x104));

	if (t21 != -2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x105 = UINT8_MAX;
	int32_t x106 = -964660;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t22 = -589529622;

	t22 = (x105^((x106/x107)*x108));

	if (t22 != -964353) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x109 = UINT8_MAX;
	int8_t x110 = 6;
	int32_t x112 = INT32_MIN;

	t23 = (x109^((x110/x111)*x112));

	if (t23 != 255LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -476770;
	static int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	volatile int16_t x116 = -123;

	t24 = (x113^((x114/x115)*x116));

	if (t24 != 476699) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x118 = INT32_MAX;
	int8_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t25 = 0U;

	t25 = (x117^((x118/x119)*x120));

	if (t25 != 2147483775U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x126 = 39944024U;
	volatile int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MAX;

	t26 = (x125^((x126/x127)*x128));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = UINT8_MAX;
	uint64_t x131 = 49275502LLU;
	static volatile uint8_t x132 = 12U;

	t27 = (x129^((x130/x131)*x132));

	if (t27 != 4294967295LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -1LL;
	volatile int64_t x134 = -20LL;
	volatile uint32_t x135 = 12252827U;
	int32_t x136 = 46;
	int64_t t28 = -12144906814839LL;

	t28 = (x133^((x134/x135)*x136));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x138 = 120U;
	volatile int32_t x139 = INT32_MAX;
	static int32_t x140 = INT32_MIN;

	t29 = (x137^((x138/x139)*x140));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x143 = 485577LLU;
	int64_t x144 = -109LL;
	volatile uint64_t t30 = 10539830410223410LLU;

	t30 = (x141^((x142/x143)*x144));

	if (t30 != 18442603236927193641LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x145 = UINT8_MAX;
	static uint8_t x146 = 15U;
	volatile uint64_t x147 = 34543631259497937LLU;
	uint64_t x148 = UINT64_MAX;
	static volatile uint64_t t31 = 6LLU;

	t31 = (x145^((x146/x147)*x148));

	if (t31 != 255LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x149 = 0LLU;
	int16_t x151 = -6;
	uint64_t t32 = 73933647527LLU;

	t32 = (x149^((x150/x151)*x152));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x154 = -1;
	int32_t x155 = -60957791;
	static int64_t x156 = 3162996117517463070LL;
	int64_t t33 = -110LL;

	t33 = (x153^((x154/x155)*x156));

	if (t33 != 65535LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x157 = -1LL;
	volatile int64_t x158 = INT64_MIN;
	int8_t x160 = INT8_MIN;
	int64_t t34 = -279LL;

	t34 = (x157^((x158/x159)*x160));

	if (t34 != -129LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x161 = -11;
	int16_t x162 = INT16_MAX;
	int16_t x163 = INT16_MIN;
	static int8_t x164 = INT8_MAX;
	int32_t t35 = 2;

	t35 = (x161^((x162/x163)*x164));

	if (t35 != -11) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MIN;
	uint8_t x166 = 8U;
	int64_t x167 = INT64_MIN;
	uint8_t x168 = UINT8_MAX;
	int64_t t36 = INT64_MIN;

	t36 = (x165^((x166/x167)*x168));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x172 = -1;
	static volatile uint32_t t37 = 380183140U;

	t37 = (x169^((x170/x171)*x172));

	if (t37 != 4294934528U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = 2777837;
	int64_t x175 = INT64_MIN;

	t38 = (x173^((x174/x175)*x176));

	if (t38 != 2777837LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x178 = INT64_MIN;
	int8_t x180 = INT8_MIN;
	int64_t t39 = 1079042510693049159LL;

	t39 = (x177^((x178/x179)*x180));

	if (t39 != 1284648118298006473LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x184 = 2018U;
	volatile int64_t t40 = 3714009422554133LL;

	t40 = (x181^((x182/x183)*x184));

	if (t40 != 9223372036854517503LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x185 = 31U;
	uint16_t x186 = 2U;
	volatile uint8_t x187 = 45U;
	int8_t x188 = -1;
	volatile int32_t t41 = -48103;

	t41 = (x185^((x186/x187)*x188));

	if (t41 != 31) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x189 = 1U;
	int8_t x190 = -1;
	volatile int64_t x191 = -1LL;
	int32_t x192 = INT32_MIN;
	volatile int64_t t42 = -63913927LL;

	t42 = (x189^((x190/x191)*x192));

	if (t42 != -2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = UINT32_MAX;
	static uint8_t x196 = 29U;
	uint64_t t43 = 11024155053LLU;

	t43 = (x193^((x194/x195)*x196));

	if (t43 != 4294922142LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MAX;
	volatile int8_t x198 = 0;
	uint8_t x199 = 3U;
	uint8_t x200 = 1U;

	t44 = (x197^((x198/x199)*x200));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MAX;
	uint16_t x204 = 16194U;
	volatile int64_t t45 = -4747LL;

	t45 = (x201^((x202/x203)*x204));

	if (t45 != 16135LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x206 = 3863LLU;
	int8_t x207 = INT8_MIN;
	uint32_t x208 = 62573U;
	volatile uint64_t t46 = 8025LLU;

	t46 = (x205^((x206/x207)*x208));

	if (t46 != 765LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = 1;
	int32_t x211 = INT32_MAX;
	volatile int32_t t47 = -47088;

	t47 = (x209^((x210/x211)*x212));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x213 = 2U;
	int64_t x214 = INT64_MAX;
	static int32_t x215 = INT32_MIN;
	uint64_t x216 = UINT64_MAX;
	uint64_t t48 = 0LLU;

	t48 = (x213^((x214/x215)*x216));

	if (t48 != 4294967293LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x217 = UINT32_MAX;
	volatile int16_t x218 = -1;
	volatile int16_t x219 = INT16_MIN;
	static uint32_t t49 = UINT32_MAX;

	t49 = (x217^((x218/x219)*x220));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x225 = UINT16_MAX;
	uint16_t x226 = 0U;
	int16_t x227 = -13535;
	int8_t x228 = 0;
	int32_t t50 = 0;

	t50 = (x225^((x226/x227)*x228));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x229 = 320;
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = 18359;
	int8_t x232 = INT8_MAX;
	volatile int32_t t51 = 10394;

	t51 = (x229^((x230/x231)*x232));

	if (t51 != 61) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x234 = 31U;
	uint32_t x235 = 48127U;
	volatile int16_t x236 = -1;
	volatile uint64_t t52 = 5LLU;

	t52 = (x233^((x234/x235)*x236));

	if (t52 != 1354800LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x237 = UINT64_MAX;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x237^((x238/x239)*x240));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x247 = INT64_MIN;
	uint32_t x248 = UINT32_MAX;

	t54 = (x245^((x246/x247)*x248));

	if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x251 = INT32_MIN;
	uint32_t x252 = UINT32_MAX;

	t55 = (x249^((x250/x251)*x252));

	if (t55 != 781684047654LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x254 = 25U;
	static int8_t x256 = -1;

	t56 = (x253^((x254/x255)*x256));

	if (t56 != 16287) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x258 = 413U;
	static uint16_t x260 = 48U;
	static int32_t t57 = 58827410;

	t57 = (x257^((x258/x259)*x260));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x266 = 74441243LLU;
	uint64_t x267 = 741LLU;
	static volatile int8_t x268 = 11;
	uint64_t t58 = 32747487649LLU;

	t58 = (x265^((x266/x267)*x268));

	if (t58 != 15331278590132014LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x269 = 4U;
	volatile uint16_t x271 = 7421U;
	static int8_t x272 = INT8_MIN;
	uint32_t t59 = 0U;

	t59 = (x269^((x270/x271)*x272));

	if (t59 != 516U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x277 = 31U;
	static uint8_t x278 = 0U;
	uint32_t x279 = UINT32_MAX;
	int8_t x280 = INT8_MIN;
	volatile uint32_t t60 = 860153999U;

	t60 = (x277^((x278/x279)*x280));

	if (t60 != 31U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MAX;
	static volatile int32_t x283 = INT32_MIN;
	int32_t x284 = INT32_MIN;
	volatile int32_t t61 = 0;

	t61 = (x281^((x282/x283)*x284));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x285 = UINT8_MAX;
	int16_t x286 = -1;
	static volatile int64_t x287 = INT64_MIN;
	static volatile int8_t x288 = -1;
	int64_t t62 = -16096LL;

	t62 = (x285^((x286/x287)*x288));

	if (t62 != 255LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x289 = 0U;
	volatile int16_t x290 = 1;
	uint64_t x291 = UINT64_MAX;
	uint16_t x292 = 142U;
	uint64_t t63 = 35LLU;

	t63 = (x289^((x290/x291)*x292));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = -1;
	uint64_t t64 = UINT64_MAX;

	t64 = (x293^((x294/x295)*x296));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x297 = 31720U;
	int16_t x298 = -1;
	int8_t x299 = -22;
	static int8_t x300 = -1;
	static volatile int32_t t65 = 1904162;

	t65 = (x297^((x298/x299)*x300));

	if (t65 != 31720) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x305 = UINT32_MAX;
	volatile uint8_t x306 = 84U;
	volatile int32_t x307 = INT32_MIN;
	int8_t x308 = 0;

	t66 = (x305^((x306/x307)*x308));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x310 = UINT32_MAX;
	static uint32_t x312 = UINT32_MAX;
	static volatile uint32_t t67 = 1U;

	t67 = (x309^((x310/x311)*x312));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x314 = INT64_MIN;
	int8_t x316 = INT8_MIN;

	t68 = (x313^((x314/x315)*x316));

	if (t68 != 2147483520LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x317 = INT64_MAX;
	static int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	int16_t x320 = 308;
	volatile int64_t t69 = -1590343872859LL;

	t69 = (x317^((x318/x319)*x320));

	if (t69 != 9223372036844683263LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x321 = 4440017165LLU;
	int32_t x322 = INT32_MIN;
	static int16_t x323 = -16219;
	int64_t x324 = -1LL;

	t70 = (x321^((x322/x323)*x324));

	if (t70 != 18446744069269402566LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x329 = 819U;
	int32_t x331 = 113241385;
	int8_t x332 = INT8_MIN;
	uint32_t t71 = 1243841U;

	t71 = (x329^((x330/x331)*x332));

	if (t71 != 819U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = INT64_MIN;
	static int32_t x343 = 849558;
	static int16_t x344 = -1;
	int64_t t72 = 2826056LL;

	t72 = (x341^((x342/x343)*x344));

	if (t72 != -9223361180183380972LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x345 = 2119482589U;
	uint32_t x346 = 655975U;
	int16_t x347 = -1;
	volatile uint32_t t73 = 61122002U;

	t73 = (x345^((x346/x347)*x348));

	if (t73 != 2119482589U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = -1LL;
	static volatile int16_t x350 = INT16_MAX;
	int16_t x351 = -5352;
	uint8_t x352 = 34U;
	int64_t t74 = 246043765672399LL;

	t74 = (x349^((x350/x351)*x352));

	if (t74 != 203LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x353 = -15;
	volatile int8_t x354 = INT8_MIN;
	int64_t x355 = 23LL;
	volatile uint64_t x356 = 92680411599875LLU;
	volatile uint64_t t75 = 6490024559515082LLU;

	t75 = (x353^((x354/x355)*x356));

	if (t75 != 463402057999360LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x357 = -1;
	int32_t x358 = INT32_MAX;
	int32_t x359 = INT32_MAX;
	uint32_t x360 = 501U;
	volatile uint32_t t76 = 651028U;

	t76 = (x357^((x358/x359)*x360));

	if (t76 != 4294966794U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = -1LL;
	uint64_t x362 = UINT64_MAX;
	int64_t x364 = 25115726725640LL;
	uint64_t t77 = 28LLU;

	t77 = (x361^((x362/x363)*x364));

	if (t77 != 2900003730966232623LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = 13;
	int64_t x367 = INT64_MIN;

	t78 = (x365^((x366/x367)*x368));

	if (t78 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = 398140148389972014LLU;
	int64_t x371 = 1725LL;
	static uint8_t x372 = 6U;
	volatile uint64_t t79 = 2LLU;

	t79 = (x369^((x370/x371)*x372));

	if (t79 != 398140148389972014LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x373 = INT16_MAX;
	uint16_t x374 = 31U;
	static int8_t x375 = INT8_MAX;
	volatile uint16_t x376 = 6U;
	volatile int32_t t80 = -9981;

	t80 = (x373^((x374/x375)*x376));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x377 = -1;
	volatile int64_t x378 = INT64_MIN;
	uint64_t x379 = 1299856634LLU;
	int16_t x380 = INT16_MAX;
	volatile uint64_t t81 = 14505683612794LLU;

	t81 = (x377^((x378/x379)*x380));

	if (t81 != 18446511569429007352LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x381 = 813U;
	int8_t x382 = INT8_MIN;
	static int64_t x383 = -2830LL;
	uint64_t x384 = 23388LLU;
	uint64_t t82 = 3187426770297213697LLU;

	t82 = (x381^((x382/x383)*x384));

	if (t82 != 813LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x385 = INT64_MIN;
	static int32_t x386 = 63551576;
	int32_t x388 = 0;
	int64_t t83 = INT64_MIN;

	t83 = (x385^((x386/x387)*x388));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x389 = -29;
	int32_t x390 = INT32_MIN;
	int8_t x391 = 28;
	uint32_t x392 = 2U;

	t84 = (x389^((x390/x391)*x392));

	if (t84 != 153391707U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x394 = 1U;
	int64_t t85 = 4LL;

	t85 = (x393^((x394/x395)*x396));

	if (t85 != 4060LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x398 = 31U;
	int16_t x399 = INT16_MIN;
	static uint32_t x400 = 679485U;
	volatile uint32_t t86 = 52120U;

	t86 = (x397^((x398/x399)*x400));

	if (t86 != 7508U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x401 = 215721LL;
	volatile int8_t x403 = INT8_MIN;
	uint64_t x404 = UINT64_MAX;
	static uint64_t t87 = 630403848333945LLU;

	t87 = (x401^((x402/x403)*x404));

	if (t87 != 215721LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x406 = INT8_MIN;
	volatile int16_t x407 = 7765;
	int8_t x408 = INT8_MAX;

	t88 = (x405^((x406/x407)*x408));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x409 = INT32_MIN;
	uint64_t x410 = 233982482160LLU;
	volatile uint64_t t89 = 2539LLU;

	t89 = (x409^((x410/x411)*x412));

	if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x414 = UINT64_MAX;
	uint8_t x415 = 3U;
	int8_t x416 = INT8_MIN;
	volatile uint64_t t90 = 39945557923409LLU;

	t90 = (x413^((x414/x415)*x416));

	if (t90 != 12297829382473034364LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x417 = 256U;
	static int64_t x418 = -1LL;
	volatile int8_t x420 = INT8_MIN;
	int64_t t91 = -1LL;

	t91 = (x417^((x418/x419)*x420));

	if (t91 != 256LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x422 = INT8_MIN;
	int16_t x424 = INT16_MAX;

	t92 = (x421^((x422/x423)*x424));

	if (t92 != -515703) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = INT8_MIN;

	t93 = (x425^((x426/x427)*x428));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = -1;
	volatile int32_t x430 = -1;
	int8_t x431 = 3;
	volatile int64_t x432 = -1LL;
	int64_t t94 = 99905263538374LL;

	t94 = (x429^((x430/x431)*x432));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x433 = -1;
	uint64_t x435 = UINT64_MAX;
	volatile int64_t x436 = INT64_MIN;

	t95 = (x433^((x434/x435)*x436));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x438 = INT16_MAX;
	int32_t x439 = INT32_MAX;
	volatile int8_t x440 = INT8_MAX;

	t96 = (x437^((x438/x439)*x440));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x441 = -133229464073330461LL;
	volatile int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MIN;
	int64_t t97 = 4989709175LL;

	t97 = (x441^((x442/x443)*x444));

	if (t97 != 133229464073330488LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x445 = 60U;
	int8_t x446 = INT8_MIN;
	static volatile int8_t x447 = -41;
	int32_t x448 = 20;
	uint32_t t98 = 214808U;

	t98 = (x445^((x446/x447)*x448));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x450 = UINT64_MAX;
	volatile int8_t x451 = -1;
	static int64_t x452 = INT64_MAX;
	uint64_t t99 = 30492LLU;

	t99 = (x449^((x450/x451)*x452));

	if (t99 != 9223372036854775726LLU) { NG(); } else { ; }
	
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

