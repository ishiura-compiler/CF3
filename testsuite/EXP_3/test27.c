#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = 42797059316LL;
volatile int64_t t0 = -498401996385LL;
static volatile int16_t x9 = 8;
static int64_t x22 = -1126LL;
int64_t x26 = 1347135220164929LL;
int64_t x35 = -1LL;
int64_t t7 = 622722185048098LL;
int32_t x39 = 13;
uint32_t x42 = 124356U;
static uint16_t x43 = 1439U;
volatile int64_t t9 = 2813LL;
int8_t x45 = -1;
volatile int16_t x47 = INT16_MIN;
int32_t x58 = 67;
uint64_t t14 = 6600LLU;
int16_t x65 = -1;
static int16_t x66 = 27;
int32_t x68 = INT32_MIN;
volatile uint8_t x69 = UINT8_MAX;
int64_t x91 = 4351014773278LL;
volatile uint16_t x98 = 52U;
uint64_t x101 = UINT64_MAX;
uint64_t x104 = 4842641373905LLU;
volatile uint64_t t21 = 8LLU;
volatile uint8_t x115 = 81U;
uint32_t x117 = UINT32_MAX;
int64_t x119 = INT64_MIN;
uint64_t t24 = 540211388457LLU;
uint64_t x124 = 143224909988601LLU;
static int32_t t26 = -77797;
uint32_t x140 = UINT32_MAX;
volatile uint32_t t27 = 4689U;
volatile uint64_t t29 = 30788696974382LLU;
volatile int64_t x154 = -236884LL;
uint8_t x164 = UINT8_MAX;
int8_t x176 = 0;
uint64_t t33 = 0LLU;
volatile int64_t x199 = INT64_MAX;
volatile uint16_t x201 = 6U;
volatile int64_t x220 = INT64_MAX;
int16_t x221 = -13;
uint32_t x228 = 2622566U;
volatile uint64_t x236 = 247181LLU;
int64_t x239 = -130LL;
int64_t x241 = -1LL;
volatile int8_t x255 = INT8_MIN;
volatile uint32_t t44 = 193091U;
uint32_t x257 = 1U;
static int32_t x265 = -1;
int64_t x281 = -1LL;
int32_t x291 = INT32_MIN;
static volatile uint32_t t50 = 400562468U;
uint64_t t51 = 97925321817LLU;
int8_t x301 = INT8_MIN;
static int8_t x315 = -8;
uint32_t t53 = 185U;
uint8_t x320 = 78U;
int16_t x328 = INT16_MIN;
volatile uint64_t x408 = 629594690238678716LLU;
volatile int64_t t63 = -361832580760084548LL;
int32_t x433 = INT32_MIN;
static uint8_t x449 = 21U;
static volatile uint64_t t66 = 28059762719380512LLU;
volatile int8_t x459 = INT8_MIN;
int16_t x461 = INT16_MIN;
static volatile uint64_t t68 = 38652098592LLU;
uint16_t x476 = 373U;
int16_t x477 = -1;
int8_t x478 = INT8_MIN;
int8_t x482 = INT8_MAX;
int32_t x483 = 8;
int8_t x484 = -1;
int16_t x487 = INT16_MAX;
int64_t x488 = INT64_MIN;
uint64_t x500 = UINT64_MAX;
uint32_t t76 = 22842983U;
volatile int64_t t80 = -993063249LL;
int16_t x552 = -2982;
volatile int32_t t81 = -858;
static int32_t x571 = -1;
volatile int64_t t87 = 12LL;
volatile uint64_t x627 = 44682139LLU;
volatile int8_t x628 = INT8_MAX;
volatile int32_t x629 = -1;
uint64_t t91 = 7498717919LLU;
uint32_t x643 = 383124355U;
uint16_t x645 = 0U;
volatile uint64_t x665 = UINT64_MAX;
volatile uint64_t t98 = 0LLU;
static uint32_t x674 = UINT32_MAX;
int16_t x675 = 329;


void f0(void) {
	int8_t x2 = -1;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 12U;

	t0 = ((x1*x2)+(x3+x4));

	if (t0 != -44944542952LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x10 = INT8_MIN;
	int8_t x11 = -22;
	uint32_t x12 = 842U;
	static volatile uint32_t t1 = 750820U;

	t1 = ((x9*x10)+(x11+x12));

	if (t1 != 4294967092U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 87579LLU;
	static uint64_t x14 = 379979145528789750LLU;
	static uint16_t x15 = UINT16_MAX;
	uint16_t x16 = 6056U;
	uint64_t t2 = 2036546LLU;

	t2 = ((x13*x14)+(x15+x16));

	if (t2 != 267277293846471577LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 0;
	int32_t x18 = INT32_MAX;
	static int32_t x19 = INT32_MAX;
	static int32_t x20 = -1;
	int32_t t3 = -447456897;

	t3 = ((x17*x18)+(x19+x20));

	if (t3 != 2147483646) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	int64_t x23 = -1LL;
	int8_t x24 = INT8_MAX;
	int64_t t4 = -1558134618LL;

	t4 = ((x21*x22)+(x23+x24));

	if (t4 != -142876LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x27 = INT8_MIN;
	int8_t x28 = 57;
	static volatile uint64_t t5 = 7495067980594LLU;

	t5 = ((x25*x26)+(x27+x28));

	if (t5 != 18445396938489386616LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 0U;
	int32_t x30 = INT32_MIN;
	int32_t x31 = -13858914;
	volatile int64_t x32 = -1789592LL;
	static int64_t t6 = 1LL;

	t6 = ((x29*x30)+(x31+x32));

	if (t6 != -15648506LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -1;
	int32_t x34 = -1;
	volatile int32_t x36 = -1;

	t7 = ((x33*x34)+(x35+x36));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MAX;
	uint32_t x38 = 472754U;
	int64_t x40 = -1LL;
	volatile int64_t t8 = -12417LL;

	t8 = ((x37*x38)+(x39+x40));

	if (t8 != 60039770LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -26;
	int64_t x44 = -1LL;

	t9 = ((x41*x42)+(x43+x44));

	if (t9 != 4291735478LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MIN;
	static int8_t x48 = 20;
	volatile int32_t t10 = -14;

	t10 = ((x45*x46)+(x47+x48));

	if (t10 != -32620) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	static uint8_t x50 = 4U;
	static int8_t x51 = 1;
	int8_t x52 = INT8_MIN;
	static int32_t t11 = 480487;

	t11 = ((x49*x50)+(x51+x52));

	if (t11 != -131199) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MAX;
	volatile uint64_t x54 = 7LLU;
	volatile int16_t x55 = INT16_MAX;
	int16_t x56 = 4;
	volatile uint64_t t12 = 31228473LLU;

	t12 = ((x53*x54)+(x55+x56));

	if (t12 != 15032418300LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 5LLU;
	volatile int16_t x59 = INT16_MAX;
	int16_t x60 = -1;
	volatile uint64_t t13 = 212LLU;

	t13 = ((x57*x58)+(x59+x60));

	if (t13 != 33101LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	static volatile int8_t x62 = INT8_MIN;
	int64_t x63 = -209202438471LL;
	uint32_t x64 = UINT32_MAX;

	t14 = ((x61*x62)+(x63+x64));

	if (t14 != 18446743868802080568LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x67 = 129057534;
	int32_t t15 = 246;

	t15 = ((x65*x66)+(x67+x68));

	if (t15 != -2018426141) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x70 = 1U;
	int16_t x71 = INT16_MIN;
	int64_t x72 = -1LL;
	volatile int64_t t16 = 94414436LL;

	t16 = ((x69*x70)+(x71+x72));

	if (t16 != -32514LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = 1;
	uint16_t x74 = 12797U;
	volatile uint8_t x75 = 15U;
	int64_t x76 = -50LL;
	int64_t t17 = -470009511010LL;

	t17 = ((x73*x74)+(x75+x76));

	if (t17 != 12762LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 82U;
	static uint8_t x82 = 21U;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = INT16_MIN;
	uint32_t t18 = 3949U;

	t18 = ((x81*x82)+(x83+x84));

	if (t18 != 4294936249U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = 932;
	uint32_t x90 = 58U;
	int8_t x92 = INT8_MAX;
	int64_t t19 = -441752261035993902LL;

	t19 = ((x89*x90)+(x91+x92));

	if (t19 != 4351014827461LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x97 = 6185LLU;
	static uint64_t x99 = 283LLU;
	int64_t x100 = INT64_MAX;
	uint64_t t20 = 14868052171351LLU;

	t20 = ((x97*x98)+(x99+x100));

	if (t20 != 9223372036855097710LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x102 = INT64_MIN;
	uint32_t x103 = UINT32_MAX;

	t21 = ((x101*x102)+(x103+x104));

	if (t21 != 9223376883791117008LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x105 = 307U;
	static int32_t x106 = -956;
	int16_t x107 = INT16_MAX;
	volatile int64_t x108 = 13012886368627685LL;
	volatile int64_t t22 = 13993614818LL;

	t22 = ((x105*x106)+(x107+x108));

	if (t22 != 13012890663334256LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -117;
	static uint8_t x114 = 1U;
	uint16_t x116 = 116U;
	volatile int32_t t23 = -192;

	t23 = ((x113*x114)+(x115+x116));

	if (t23 != 80) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x118 = 0U;
	volatile uint64_t x120 = 1191911761807679667LLU;

	t24 = ((x117*x118)+(x119+x120));

	if (t24 != 10415283798662455475LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = 0U;
	static volatile int16_t x123 = -1;
	volatile uint64_t t25 = 80945LLU;

	t25 = ((x121*x122)+(x123+x124));

	if (t25 != 143224909988600LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 43U;
	int8_t x126 = -5;
	int32_t x127 = 243;
	static int8_t x128 = -39;

	t26 = ((x125*x126)+(x127+x128));

	if (t26 != -11) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = UINT32_MAX;
	int8_t x138 = 19;
	int32_t x139 = 30948;

	t27 = ((x137*x138)+(x139+x140));

	if (t27 != 30928U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x145 = 27U;
	volatile uint64_t x146 = 8395LLU;
	int32_t x147 = -9690368;
	volatile uint32_t x148 = UINT32_MAX;
	volatile uint64_t t28 = 612547615459LLU;

	t28 = ((x145*x146)+(x147+x148));

	if (t28 != 4285503592LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x149 = 1U;
	static uint64_t x150 = 1045403087667LLU;
	int16_t x151 = -1;
	int8_t x152 = INT8_MIN;

	t29 = ((x149*x150)+(x151+x152));

	if (t29 != 1045403087538LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x153 = 217035667LLU;
	static volatile int8_t x155 = -17;
	int16_t x156 = -23;
	uint64_t t30 = 70906269789288397LLU;

	t30 = ((x153*x154)+(x155+x156));

	if (t30 != 18446692661432609948LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MIN;
	uint32_t x162 = 0U;
	volatile int8_t x163 = INT8_MAX;
	static uint32_t t31 = 24510U;

	t31 = ((x161*x162)+(x163+x164));

	if (t31 != 382U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = -1;
	int8_t x174 = INT8_MAX;
	static int64_t x175 = INT64_MAX;
	volatile int64_t t32 = 108543149051521829LL;

	t32 = ((x173*x174)+(x175+x176));

	if (t32 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x177 = UINT32_MAX;
	static int8_t x178 = -1;
	int64_t x179 = -1LL;
	uint64_t x180 = 3416160883LLU;

	t33 = ((x177*x178)+(x179+x180));

	if (t33 != 3416160883LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x197 = 3U;
	static int8_t x198 = -1;
	volatile uint64_t x200 = 1164770569081237543LLU;
	volatile uint64_t t34 = 465840LLU;

	t34 = ((x197*x198)+(x199+x200));

	if (t34 != 10388142605936013347LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x202 = 2383;
	int16_t x203 = INT16_MAX;
	int64_t x204 = -696045428LL;
	int64_t t35 = -84869887787622775LL;

	t35 = ((x201*x202)+(x203+x204));

	if (t35 != -695998363LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x213 = 37U;
	volatile uint16_t x214 = 0U;
	int8_t x215 = 0;
	int64_t x216 = INT64_MAX;
	int64_t t36 = INT64_MAX;

	t36 = ((x213*x214)+(x215+x216));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int64_t x218 = -1LL;
	int64_t x219 = INT64_MIN;
	volatile int64_t t37 = -5LL;

	t37 = ((x217*x218)+(x219+x220));

	if (t37 != -65536LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x222 = -1213906011863157LL;
	int16_t x223 = INT16_MAX;
	int16_t x224 = INT16_MIN;
	int64_t t38 = -21255LL;

	t38 = ((x221*x222)+(x223+x224));

	if (t38 != 15780778154221040LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x225 = 6940505594720LL;
	volatile uint16_t x226 = 29485U;
	static int32_t x227 = -1;
	volatile int64_t t39 = 20279444668LL;

	t39 = ((x225*x226)+(x227+x228));

	if (t39 != 204640807462941765LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = -747;
	uint32_t x230 = UINT32_MAX;
	static int8_t x231 = -1;
	int32_t x232 = 337;
	uint32_t t40 = 1885014678U;

	t40 = ((x229*x230)+(x231+x232));

	if (t40 != 1083U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x233 = UINT32_MAX;
	static volatile int8_t x234 = -1;
	static int64_t x235 = INT64_MAX;
	uint64_t t41 = 131644472599LLU;

	t41 = ((x233*x234)+(x235+x236));

	if (t41 != 9223372036855022989LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x237 = INT8_MIN;
	static volatile int8_t x238 = INT8_MAX;
	int8_t x240 = 3;
	int64_t t42 = 14729992045238975LL;

	t42 = ((x237*x238)+(x239+x240));

	if (t42 != -16383LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x242 = 3993LL;
	static int8_t x243 = INT8_MAX;
	volatile int32_t x244 = INT32_MIN;
	static volatile int64_t t43 = 100433058471LL;

	t43 = ((x241*x242)+(x243+x244));

	if (t43 != -2147487514LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x253 = 6U;
	static int16_t x254 = -1;
	static uint16_t x256 = 261U;

	t44 = ((x253*x254)+(x255+x256));

	if (t44 != 127U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x258 = 44961657;
	uint16_t x259 = 876U;
	uint16_t x260 = 169U;
	static uint32_t t45 = 66429071U;

	t45 = ((x257*x258)+(x259+x260));

	if (t45 != 44962702U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x266 = 1770U;
	uint64_t x267 = 8154354887LLU;
	static uint64_t x268 = UINT64_MAX;
	uint64_t t46 = 26227655790075LLU;

	t46 = ((x265*x266)+(x267+x268));

	if (t46 != 8154353116LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x273 = INT16_MAX;
	int16_t x274 = 19;
	int64_t x275 = 41108823538LL;
	int8_t x276 = 1;
	int64_t t47 = -2184729479898193LL;

	t47 = ((x273*x274)+(x275+x276));

	if (t47 != 41109446112LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x277 = 750982;
	volatile int8_t x278 = -1;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = INT64_MAX;
	static volatile uint64_t t48 = 932010617LLU;

	t48 = ((x277*x278)+(x279+x280));

	if (t48 != 9223372036854024824LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x282 = -1;
	uint64_t x283 = 88098535190LLU;
	int16_t x284 = 88;
	uint64_t t49 = 1470491129029LLU;

	t49 = ((x281*x282)+(x283+x284));

	if (t49 != 88098535279LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MIN;
	uint16_t x292 = 1438U;

	t50 = ((x289*x290)+(x291+x292));

	if (t50 != 2147517854U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x293 = INT16_MAX;
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = 236505;
	int32_t x296 = 3655;

	t51 = ((x293*x294)+(x295+x296));

	if (t51 != 207393LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x302 = -11;
	int16_t x303 = INT16_MAX;
	int8_t x304 = 59;
	volatile int32_t t52 = -506960477;

	t52 = ((x301*x302)+(x303+x304));

	if (t52 != 34234) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x313 = 17573781;
	int8_t x314 = 31;
	uint32_t x316 = UINT32_MAX;

	t53 = ((x313*x314)+(x315+x316));

	if (t53 != 544787202U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x317 = 111368848U;
	int32_t x318 = INT32_MIN;
	int32_t x319 = -1;
	uint32_t t54 = 772345147U;

	t54 = ((x317*x318)+(x319+x320));

	if (t54 != 77U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x321 = 3U;
	int32_t x322 = -2967;
	int16_t x323 = INT16_MIN;
	uint64_t x324 = 34473792612004LLU;
	uint64_t t55 = 569199305222636LLU;

	t55 = ((x321*x322)+(x323+x324));

	if (t55 != 34473792570335LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x325 = -1;
	volatile uint64_t x326 = UINT64_MAX;
	int8_t x327 = -1;
	volatile uint64_t t56 = 6066907LLU;

	t56 = ((x325*x326)+(x327+x328));

	if (t56 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x349 = 1177110488953742258LLU;
	int32_t x350 = -1;
	int16_t x351 = 1427;
	int32_t x352 = -1;
	uint64_t t57 = 11555570376LLU;

	t57 = ((x349*x350)+(x351+x352));

	if (t57 != 17269633584755810784LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x385 = 11U;
	int8_t x386 = -4;
	volatile uint32_t x387 = 2012U;
	int8_t x388 = INT8_MIN;
	volatile uint32_t t58 = 3U;

	t58 = ((x385*x386)+(x387+x388));

	if (t58 != 1840U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = -92;
	volatile int64_t x395 = -1LL;
	volatile int8_t x396 = INT8_MAX;
	static volatile int64_t t59 = 1374693133LL;

	t59 = ((x393*x394)+(x395+x396));

	if (t59 != 3014782LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x401 = 16;
	int64_t x402 = -1LL;
	int16_t x403 = INT16_MIN;
	int16_t x404 = -1;
	volatile int64_t t60 = 2158851033546345924LL;

	t60 = ((x401*x402)+(x403+x404));

	if (t60 != -32785LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x405 = 6319574U;
	uint8_t x406 = UINT8_MAX;
	static uint64_t x407 = UINT64_MAX;
	volatile uint64_t t61 = 248613LLU;

	t61 = ((x405*x406)+(x407+x408));

	if (t61 != 629594691850170085LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x417 = 229U;
	int8_t x418 = 31;
	uint32_t x419 = 1302788598U;
	volatile int8_t x420 = INT8_MAX;
	static uint32_t t62 = 29190U;

	t62 = ((x417*x418)+(x419+x420));

	if (t62 != 1302795824U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x421 = -1LL;
	int16_t x422 = INT16_MAX;
	uint32_t x423 = 2164U;
	uint8_t x424 = UINT8_MAX;

	t63 = ((x421*x422)+(x423+x424));

	if (t63 != -30348LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x434 = UINT64_MAX;
	uint8_t x435 = 84U;
	int8_t x436 = INT8_MAX;
	volatile uint64_t t64 = 2128251270916762LLU;

	t64 = ((x433*x434)+(x435+x436));

	if (t64 != 2147483859LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x450 = 24U;
	static int64_t x451 = -292125480561LL;
	int16_t x452 = INT16_MAX;
	static int64_t t65 = 49554062122268LL;

	t65 = ((x449*x450)+(x451+x452));

	if (t65 != -292125447290LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x453 = UINT64_MAX;
	int16_t x454 = INT16_MIN;
	volatile int16_t x455 = -1;
	int8_t x456 = 0;

	t66 = ((x453*x454)+(x455+x456));

	if (t66 != 32767LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x457 = -1;
	uint8_t x458 = 0U;
	static uint16_t x460 = 26201U;
	static volatile int32_t t67 = -188457;

	t67 = ((x457*x458)+(x459+x460));

	if (t67 != 26073) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x462 = UINT64_MAX;
	static uint16_t x463 = 165U;
	int8_t x464 = 15;

	t68 = ((x461*x462)+(x463+x464));

	if (t68 != 32948LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x465 = 1667187900U;
	uint32_t x466 = 58U;
	volatile uint16_t x467 = 24065U;
	static int64_t x468 = INT64_MIN;
	volatile int64_t t69 = -34001306LL;

	t69 = ((x465*x466)+(x467+x468));

	if (t69 != -9223372034647134055LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x473 = 412895595731998066LLU;
	uint64_t x474 = 1565LLU;
	int32_t x475 = -1;
	volatile uint64_t t70 = 14813161180LLU;

	t70 = ((x473*x474)+(x475+x476));

	if (t70 != 545564740742667102LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x479 = INT32_MIN;
	static int8_t x480 = INT8_MAX;
	static volatile int32_t t71 = -42;

	t71 = ((x477*x478)+(x479+x480));

	if (t71 != -2147483393) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x481 = 127U;
	int32_t t72 = -582025;

	t72 = ((x481*x482)+(x483+x484));

	if (t72 != 16136) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x485 = UINT32_MAX;
	volatile int8_t x486 = INT8_MIN;
	int64_t t73 = 0LL;

	t73 = ((x485*x486)+(x487+x488));

	if (t73 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	int32_t x495 = INT32_MIN;
	int32_t x496 = INT32_MAX;
	int32_t t74 = 193;

	t74 = ((x493*x494)+(x495+x496));

	if (t74 != 4194303) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x497 = 36U;
	int32_t x498 = -58004;
	volatile int32_t x499 = INT32_MAX;
	static uint64_t t75 = 343873225444LLU;

	t75 = ((x497*x498)+(x499+x500));

	if (t75 != 2145395502LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x505 = 7U;
	int8_t x506 = INT8_MIN;
	static uint32_t x507 = UINT32_MAX;
	int32_t x508 = 266202078;

	t76 = ((x505*x506)+(x507+x508));

	if (t76 != 266201181U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x513 = UINT32_MAX;
	volatile int16_t x514 = INT16_MIN;
	uint16_t x515 = 1U;
	int16_t x516 = INT16_MIN;
	uint32_t t77 = 123U;

	t77 = ((x513*x514)+(x515+x516));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x525 = 452;
	int32_t x526 = -17458;
	int32_t x527 = -1;
	uint64_t x528 = 1015107LLU;
	volatile uint64_t t78 = 12363265LLU;

	t78 = ((x525*x526)+(x527+x528));

	if (t78 != 18446744073702675706LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x533 = -1;
	int8_t x534 = -1;
	static uint32_t x535 = 123305793U;
	int16_t x536 = -3511;
	volatile uint32_t t79 = 96874070U;

	t79 = ((x533*x534)+(x535+x536));

	if (t79 != 123302283U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x545 = -1LL;
	static uint32_t x546 = 3589468U;
	int8_t x547 = INT8_MIN;
	int64_t x548 = INT64_MAX;

	t80 = ((x545*x546)+(x547+x548));

	if (t80 != 9223372036851186211LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x549 = 47U;
	uint8_t x550 = 4U;
	int16_t x551 = INT16_MIN;

	t81 = ((x549*x550)+(x551+x552));

	if (t81 != -35562) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x557 = INT16_MIN;
	int32_t x558 = -1;
	uint64_t x559 = UINT64_MAX;
	static volatile int16_t x560 = -1;
	static uint64_t t82 = 183118514497759LLU;

	t82 = ((x557*x558)+(x559+x560));

	if (t82 != 32766LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x561 = 3U;
	uint64_t x562 = 2867LLU;
	static volatile uint64_t x563 = 276665546567747860LLU;
	static volatile int32_t x564 = -29;
	static uint64_t t83 = 1010980124LLU;

	t83 = ((x561*x562)+(x563+x564));

	if (t83 != 276665546567756432LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x569 = 7170U;
	uint8_t x570 = 12U;
	volatile uint16_t x572 = UINT16_MAX;
	volatile uint32_t t84 = 159397799U;

	t84 = ((x569*x570)+(x571+x572));

	if (t84 != 151574U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x585 = INT32_MIN;
	uint32_t x586 = 640161524U;
	static int32_t x587 = -1;
	volatile int8_t x588 = INT8_MIN;
	volatile uint32_t t85 = 1951394253U;

	t85 = ((x585*x586)+(x587+x588));

	if (t85 != 4294967167U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x597 = -771550387LL;
	static int8_t x598 = 1;
	static int8_t x599 = -5;
	volatile uint16_t x600 = UINT16_MAX;
	int64_t t86 = -5136LL;

	t86 = ((x597*x598)+(x599+x600));

	if (t86 != -771484857LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x605 = -192;
	int8_t x606 = -1;
	int16_t x607 = -13310;
	int64_t x608 = -69604009900401485LL;

	t87 = ((x605*x606)+(x607+x608));

	if (t87 != -69604009900414603LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x609 = -68522520214LL;
	int8_t x610 = -1;
	int64_t x611 = -1LL;
	static uint64_t x612 = 30059LLU;
	volatile uint64_t t88 = 19984LLU;

	t88 = ((x609*x610)+(x611+x612));

	if (t88 != 68522550272LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x621 = INT16_MIN;
	int16_t x622 = INT16_MIN;
	volatile int8_t x623 = INT8_MIN;
	int16_t x624 = INT16_MIN;
	int32_t t89 = -7877358;

	t89 = ((x621*x622)+(x623+x624));

	if (t89 != 1073708928) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x625 = 71;
	int32_t x626 = 101;
	volatile uint64_t t90 = 18133780213LLU;

	t90 = ((x625*x626)+(x627+x628));

	if (t90 != 44689437LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x630 = -543397320521752LL;
	static volatile uint64_t x631 = 120108768501485LLU;
	static uint64_t x632 = 4577320976716LLU;

	t91 = ((x629*x630)+(x631+x632));

	if (t91 != 668083409999953LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x637 = 0;
	uint16_t x638 = UINT16_MAX;
	int64_t x639 = -475760392438159032LL;
	int16_t x640 = 0;
	volatile int64_t t92 = -262283539639699732LL;

	t92 = ((x637*x638)+(x639+x640));

	if (t92 != -475760392438159032LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x641 = -1;
	int8_t x642 = INT8_MIN;
	uint32_t x644 = 723445U;
	volatile uint32_t t93 = 871905U;

	t93 = ((x641*x642)+(x643+x644));

	if (t93 != 383847928U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x646 = 346;
	static volatile int16_t x647 = 234;
	int8_t x648 = INT8_MIN;
	volatile int32_t t94 = 124;

	t94 = ((x645*x646)+(x647+x648));

	if (t94 != 106) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x653 = 26;
	int8_t x654 = -15;
	int8_t x655 = -9;
	int16_t x656 = INT16_MIN;
	volatile int32_t t95 = -197;

	t95 = ((x653*x654)+(x655+x656));

	if (t95 != -33167) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x657 = 27U;
	uint64_t x658 = 74575638471LLU;
	static uint32_t x659 = 69287U;
	uint8_t x660 = UINT8_MAX;
	uint64_t t96 = 12306789LLU;

	t96 = ((x657*x658)+(x659+x660));

	if (t96 != 2013542308259LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x666 = 1U;
	int64_t x667 = 0LL;
	volatile int8_t x668 = INT8_MAX;
	uint64_t t97 = 3451536721537029873LLU;

	t97 = ((x665*x666)+(x667+x668));

	if (t97 != 126LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x669 = 1;
	uint64_t x670 = 14772805LLU;
	volatile uint8_t x671 = UINT8_MAX;
	volatile uint64_t x672 = 113LLU;

	t98 = ((x669*x670)+(x671+x672));

	if (t98 != 14773173LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x673 = INT8_MIN;
	int8_t x676 = INT8_MAX;
	static volatile uint32_t t99 = 3533U;

	t99 = ((x673*x674)+(x675+x676));

	if (t99 != 584U) { NG(); } else { ; }
	
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

