#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 31881778866184LLU;
int16_t x10 = INT16_MIN;
int64_t x26 = INT64_MIN;
int16_t x29 = -1;
volatile uint16_t x31 = 211U;
volatile int16_t x40 = INT16_MAX;
int16_t x50 = -1;
volatile int32_t x53 = -1;
int32_t t10 = 341;
uint16_t x58 = 1U;
int16_t x66 = INT16_MIN;
int32_t t12 = 13;
uint8_t x74 = 0U;
uint64_t x75 = UINT64_MAX;
static int16_t x79 = INT16_MAX;
uint64_t t14 = 56942LLU;
volatile uint32_t x85 = UINT32_MAX;
uint8_t x87 = 0U;
static uint64_t x88 = UINT64_MAX;
static volatile uint64_t t16 = 6LLU;
int32_t x92 = -1;
volatile uint32_t t17 = 11U;
uint64_t t18 = 467LLU;
static int16_t x113 = INT16_MIN;
int64_t x116 = -117797422968LL;
int32_t x118 = -1;
int64_t t24 = 294516LL;
int16_t x144 = -955;
uint64_t t27 = 33LLU;
uint32_t x145 = 7U;
int16_t x152 = -1;
int32_t x153 = 14;
int64_t x155 = INT64_MIN;
int64_t t30 = -1LL;
int64_t x158 = -128889LL;
static uint8_t x162 = 7U;
int64_t t32 = 1960438107222975126LL;
int8_t x181 = INT8_MIN;
uint16_t x188 = 24U;
int32_t x197 = INT32_MIN;
static volatile int16_t x202 = -313;
static volatile int16_t x204 = INT16_MIN;
static volatile uint64_t t42 = 254937431724LLU;
int8_t x211 = INT8_MIN;
int8_t x212 = INT8_MAX;
int8_t x220 = -51;
volatile uint64_t x229 = UINT64_MAX;
volatile int8_t x231 = INT8_MAX;
int32_t x239 = -2358;
uint32_t x246 = 156619280U;
uint64_t x247 = 3846860954495LLU;
volatile int32_t x261 = INT32_MIN;
uint32_t x264 = 135U;
uint32_t t52 = 201490U;
volatile int32_t x270 = INT32_MIN;
int64_t x292 = -1LL;
uint32_t x300 = 604U;
int64_t t59 = -22794217373658LL;
int8_t x305 = 14;
int32_t x311 = -1;
int8_t x312 = -1;
uint64_t x314 = 1158281LLU;
int64_t x319 = 14455LL;
int64_t t64 = 425987351795572862LL;
uint8_t x325 = 1U;
int16_t x326 = INT16_MIN;
int32_t t66 = 29;
volatile int16_t x339 = 265;
int32_t x345 = INT32_MIN;
int16_t x347 = INT16_MIN;
int32_t x354 = -7;
int64_t x356 = 2185401LL;
uint32_t x361 = UINT32_MAX;
uint32_t x365 = UINT32_MAX;
int16_t x372 = INT16_MIN;
int16_t x376 = INT16_MIN;
int8_t x377 = 53;
int16_t x380 = -7;
int16_t x391 = -1;
uint16_t x393 = 31U;
volatile int16_t x396 = -27;
uint64_t x405 = 5LLU;
static int16_t x409 = -1;
int32_t x418 = -154;
static volatile uint16_t x420 = 12U;
int8_t x421 = -14;
uint32_t x423 = 1025U;
static int64_t x424 = -7304606LL;
uint16_t x427 = 2892U;
int16_t x431 = INT16_MIN;
int32_t x434 = -1;
volatile uint64_t t99 = 5157293932464171372LLU;


void f0(void) {
	int64_t x5 = -1LL;
	volatile int32_t x7 = INT32_MAX;
	uint8_t x8 = 21U;
	uint64_t t0 = 188321822LLU;

	t0 = ((x5^x6)*(x7%x8));

	if (t0 != 18446712191930685431LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -112;
	static int16_t x11 = INT16_MIN;
	volatile int64_t x12 = INT64_MAX;
	int64_t t1 = 3300274138189082897LL;

	t1 = ((x9^x10)*(x11%x12));

	if (t1 != -1070071808LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 87162890209LLU;
	int32_t x14 = INT32_MAX;
	uint8_t x15 = 23U;
	int32_t x16 = 52711;
	volatile uint64_t t2 = 907836105001996LLU;

	t2 = ((x13^x14)*(x15%x16));

	if (t2 != 1996015561394LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -3;
	static uint8_t x18 = 3U;
	static int16_t x19 = INT16_MIN;
	uint8_t x20 = 2U;
	static volatile int32_t t3 = -492907;

	t3 = ((x17^x18)*(x19%x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	volatile int16_t x22 = INT16_MIN;
	static int32_t x23 = INT32_MIN;
	volatile int64_t x24 = 542369101612LL;
	int64_t t4 = -9941673037927LL;

	t4 = ((x21^x22)*(x23%x24));

	if (t4 != 4611615651830693888LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = 1508;
	int64_t x27 = INT64_MAX;
	volatile int8_t x28 = 1;
	static volatile int64_t t5 = -456078290LL;

	t5 = ((x25^x26)*(x27%x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = -1;
	int32_t x32 = -1;
	static volatile int32_t t6 = 620906741;

	t6 = ((x29^x30)*(x31%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 3;
	int32_t x38 = -67;
	static int64_t x39 = INT64_MAX;
	static int64_t t7 = -3488183126140903LL;

	t7 = ((x37^x38)*(x39%x40));

	if (t7 != -462LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = 1137340587686298216LL;
	int32_t x46 = -7;
	volatile int64_t x47 = 2941LL;
	volatile int32_t x48 = -1;
	static int64_t t8 = -180LL;

	t8 = ((x45^x46)*(x47%x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x49 = 546372168416LL;
	int16_t x51 = INT16_MIN;
	uint8_t x52 = UINT8_MAX;
	volatile int64_t t9 = -32064LL;

	t9 = ((x49^x50)*(x51%x52));

	if (t9 != 69935637557376LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x54 = INT8_MIN;
	static int16_t x55 = -4493;
	volatile int32_t x56 = -7249194;

	t10 = ((x53^x54)*(x55%x56));

	if (t10 != -570611) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = 3;
	int64_t x59 = INT64_MAX;
	volatile uint32_t x60 = 84U;
	static int64_t t11 = 7842624062375LL;

	t11 = ((x57^x58)*(x59%x60));

	if (t11 != 14LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x65 = INT8_MIN;
	volatile int8_t x67 = INT8_MAX;
	volatile int32_t x68 = INT32_MAX;

	t12 = ((x65^x66)*(x67%x68));

	if (t12 != 4145280) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x73 = INT32_MIN;
	int64_t x76 = 11LL;
	uint64_t t13 = 1809469751457290702LLU;

	t13 = ((x73^x74)*(x75%x76));

	if (t13 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = -10LL;
	int8_t x78 = -1;
	uint64_t x80 = 141035LLU;

	t14 = ((x77^x78)*(x79%x80));

	if (t14 != 294903LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = -11;
	int8_t x82 = 13;
	int64_t x83 = -123791604455LL;
	uint16_t x84 = UINT16_MAX;
	static volatile int64_t t15 = 2852612979209358228LL;

	t15 = ((x81^x82)*(x83%x84));

	if (t15 != 421000LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x86 = UINT32_MAX;

	t16 = ((x85^x86)*(x87%x88));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x89 = 2U;
	uint16_t x90 = 2316U;
	volatile uint32_t x91 = UINT32_MAX;

	t17 = ((x89^x90)*(x91%x92));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = UINT64_MAX;
	volatile int32_t x102 = INT32_MAX;
	int8_t x103 = INT8_MAX;
	volatile uint8_t x104 = 3U;

	t18 = ((x101^x102)*(x103%x104));

	if (t18 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int16_t x106 = INT16_MAX;
	static uint8_t x107 = 1U;
	uint32_t x108 = 151U;
	uint32_t t19 = 6978U;

	t19 = ((x105^x106)*(x107%x108));

	if (t19 != 32512U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x109 = 81074915229770LL;
	uint16_t x110 = UINT16_MAX;
	int32_t x111 = INT32_MIN;
	int64_t x112 = 45LL;
	volatile int64_t t20 = 941LL;

	t20 = ((x109^x110)*(x111%x112));

	if (t20 != -3080846777480414LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x114 = UINT32_MAX;
	static int32_t x115 = INT32_MIN;
	volatile int64_t t21 = 419449551907546LL;

	t21 = ((x113^x114)*(x115%x116));

	if (t21 != -70366596694016LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x117 = -1;
	int8_t x119 = INT8_MIN;
	static volatile int64_t x120 = -182082416304086LL;
	int64_t t22 = 16784838860121000LL;

	t22 = ((x117^x118)*(x119%x120));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x121 = INT16_MIN;
	int64_t x122 = 845543701384LL;
	volatile int32_t x123 = 4310;
	int32_t x124 = -1;
	int64_t t23 = -4375102368LL;

	t23 = ((x121^x122)*(x123%x124));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MAX;
	int64_t x128 = -964727454978034036LL;

	t24 = ((x125^x126)*(x127%x128));

	if (t24 != 4611685741401997440LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MIN;
	static volatile int64_t x132 = -1LL;
	static volatile int64_t t25 = 6824354LL;

	t25 = ((x129^x130)*(x131%x132));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x133 = UINT32_MAX;
	volatile int8_t x134 = -1;
	int8_t x135 = 1;
	uint16_t x136 = 117U;
	volatile uint32_t t26 = 958U;

	t26 = ((x133^x134)*(x135%x136));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x141 = 27254113700LLU;
	int32_t x142 = -1;
	uint8_t x143 = 41U;

	t27 = ((x141^x142)*(x143%x144));

	if (t27 != 18446742956290889875LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x146 = 234619839;
	uint32_t x147 = 62149357U;
	int32_t x148 = -1;
	volatile uint32_t t28 = 3744903U;

	t28 = ((x145^x146)*(x147%x148));

	if (t28 != 1893753176U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = 0U;
	int8_t x150 = INT8_MIN;
	static int16_t x151 = -1;
	volatile int32_t t29 = 1423;

	t29 = ((x149^x150)*(x151%x152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x154 = -778194215641640800LL;
	static uint8_t x156 = 9U;

	t30 = ((x153^x154)*(x155%x156));

	if (t30 != 6225553725133126288LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x157 = -1LL;
	uint8_t x159 = UINT8_MAX;
	volatile int32_t x160 = -8190186;
	volatile int64_t t31 = -5830LL;

	t31 = ((x157^x158)*(x159%x160));

	if (t31 != 32866440LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = INT64_MAX;
	int32_t x163 = -1;
	int32_t x164 = 17;

	t32 = ((x161^x162)*(x163%x164));

	if (t32 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = 4303LLU;
	int64_t x166 = INT64_MIN;
	uint32_t x167 = 10U;
	static int32_t x168 = 1730;
	static volatile uint64_t t33 = 1020626768LLU;

	t33 = ((x165^x166)*(x167%x168));

	if (t33 != 43030LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = -1;
	int16_t x170 = -1;
	static uint8_t x171 = UINT8_MAX;
	int32_t x172 = 47160649;
	static int32_t t34 = 2253;

	t34 = ((x169^x170)*(x171%x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = UINT64_MAX;
	uint8_t x174 = 6U;
	uint64_t x175 = 3805LLU;
	uint64_t x176 = 646047207LLU;
	volatile uint64_t t35 = 2LLU;

	t35 = ((x173^x174)*(x175%x176));

	if (t35 != 18446744073709524981LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = -1;
	uint8_t x178 = 1U;
	volatile uint64_t x179 = UINT64_MAX;
	static int32_t x180 = 186;
	volatile uint64_t t36 = 118355257791LLU;

	t36 = ((x177^x178)*(x179%x180));

	if (t36 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x182 = UINT64_MAX;
	uint32_t x183 = 15664U;
	int32_t x184 = -34068;
	uint64_t t37 = 1226900427110LLU;

	t37 = ((x181^x182)*(x183%x184));

	if (t37 != 1989328LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x186 = INT32_MAX;
	uint32_t x187 = 106055623U;
	uint32_t t38 = 1U;

	t38 = ((x185^x186)*(x187%x188));

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = INT64_MIN;
	volatile int8_t x190 = -2;
	uint16_t x191 = UINT16_MAX;
	static volatile uint64_t x192 = 7LLU;
	static uint64_t t39 = 9LLU;

	t39 = ((x189^x190)*(x191%x192));

	if (t39 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x193 = 3;
	uint32_t x194 = 1888026U;
	int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	uint32_t t40 = 1756U;

	t40 = ((x193^x194)*(x195%x196));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x198 = INT8_MIN;
	uint64_t x199 = 9706LLU;
	static uint16_t x200 = 9788U;
	uint64_t t41 = 381252981841173588LLU;

	t41 = ((x197^x198)*(x199%x200));

	if (t41 != 20843475045120LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = 22;
	uint64_t x203 = 25349590869LLU;

	t42 = ((x201^x202)*(x203%x204));

	if (t42 != 18446736392783518309LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	int32_t x207 = -1;
	int8_t x208 = INT8_MAX;
	volatile int32_t t43 = -101506773;

	t43 = ((x205^x206)*(x207%x208));

	if (t43 != -2147483520) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int8_t x210 = INT8_MIN;
	static int32_t t44 = 119;

	t44 = ((x209^x210)*(x211%x212));

	if (t44 != 65409) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x217 = 489475333371876833LLU;
	int16_t x218 = INT16_MIN;
	int64_t x219 = -1LL;
	static uint64_t t45 = 15936196LLU;

	t45 = ((x217^x218)*(x219%x220));

	if (t45 != 489475333371865631LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x225 = 84U;
	volatile uint16_t x226 = UINT16_MAX;
	int8_t x227 = 26;
	int64_t x228 = INT64_MIN;
	int64_t t46 = 0LL;

	t46 = ((x225^x226)*(x227%x228));

	if (t46 != 1701726LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x230 = INT16_MIN;
	static int16_t x232 = INT16_MIN;
	uint64_t t47 = 476515440LLU;

	t47 = ((x229^x230)*(x231%x232));

	if (t47 != 4161409LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x237 = UINT8_MAX;
	volatile int16_t x238 = -1;
	int32_t x240 = INT32_MAX;
	volatile int32_t t48 = 31627;

	t48 = ((x237^x238)*(x239%x240));

	if (t48 != 603648) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MAX;
	volatile int32_t x243 = -1;
	uint32_t x244 = 18743U;
	static volatile uint32_t t49 = 3306U;

	t49 = ((x241^x242)*(x243%x244));

	if (t49 != 2437307763U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x245 = INT16_MIN;
	static int8_t x248 = -2;
	uint64_t t50 = 0LLU;

	t50 = ((x245^x246)*(x247%x248));

	if (t50 != 144839021013657072LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x249 = 1;
	volatile uint8_t x250 = 62U;
	static int64_t x251 = INT64_MIN;
	static int8_t x252 = 7;
	volatile int64_t t51 = -57343561783604175LL;

	t51 = ((x249^x250)*(x251%x252));

	if (t51 != -63LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x262 = INT8_MAX;
	static int16_t x263 = INT16_MIN;

	t52 = ((x261^x262)*(x263%x264));

	if (t52 != 2147497999U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = INT8_MAX;
	int16_t x271 = 1;
	static int64_t x272 = INT64_MIN;
	static int64_t t53 = -108LL;

	t53 = ((x269^x270)*(x271%x272));

	if (t53 != -2147483521LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x273 = INT16_MIN;
	static int8_t x274 = INT8_MIN;
	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 6U;
	volatile int32_t t54 = 28;

	t54 = ((x273^x274)*(x275%x276));

	if (t54 != 97920) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x277 = UINT8_MAX;
	uint16_t x278 = UINT16_MAX;
	static uint64_t x279 = 9604747057LLU;
	int16_t x280 = INT16_MAX;
	volatile uint64_t t55 = 174037LLU;

	t55 = ((x277^x278)*(x279%x280));

	if (t55 != 1206570240LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x285 = 163332563;
	volatile int16_t x286 = INT16_MIN;
	uint16_t x287 = UINT16_MAX;
	static volatile int64_t x288 = -1LL;
	static volatile int64_t t56 = 0LL;

	t56 = ((x285^x286)*(x287%x288));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = -6;
	int32_t x291 = -1;
	int64_t t57 = -3897211288421884978LL;

	t57 = ((x289^x290)*(x291%x292));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x293 = 315284;
	uint8_t x294 = 90U;
	volatile int64_t x295 = -777LL;
	uint16_t x296 = 475U;
	int64_t t58 = -164125778349LL;

	t58 = ((x293^x294)*(x295%x296));

	if (t58 != -95233284LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x297 = -1LL;
	uint8_t x298 = 1U;
	static uint32_t x299 = 21U;

	t59 = ((x297^x298)*(x299%x300));

	if (t59 != -42LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x301 = UINT8_MAX;
	uint8_t x302 = 0U;
	int32_t x303 = INT32_MAX;
	volatile uint16_t x304 = 1U;
	volatile int32_t t60 = -13;

	t60 = ((x301^x302)*(x303%x304));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x306 = -1;
	int32_t x307 = -70;
	uint8_t x308 = 28U;
	int32_t t61 = -40;

	t61 = ((x305^x306)*(x307%x308));

	if (t61 != 210) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x309 = UINT64_MAX;
	volatile int64_t x310 = INT64_MIN;
	volatile uint64_t t62 = 3698932543074646LLU;

	t62 = ((x309^x310)*(x311%x312));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x313 = 7082U;
	int32_t x315 = -3316323;
	int8_t x316 = -11;
	uint64_t t63 = 1116762590819LLU;

	t63 = ((x313^x314)*(x315%x316));

	if (t63 != 18446744073697941666LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x317 = 12;
	int8_t x318 = INT8_MIN;
	int8_t x320 = -1;

	t64 = ((x317^x318)*(x319%x320));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x321 = INT8_MIN;
	static uint64_t x322 = 19970135LLU;
	int16_t x323 = -440;
	uint16_t x324 = 237U;
	uint64_t t65 = 7431672LLU;

	t65 = ((x321^x322)*(x323%x324));

	if (t65 != 4053928067LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x327 = UINT16_MAX;
	uint8_t x328 = 4U;

	t66 = ((x325^x326)*(x327%x328));

	if (t66 != -98301) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x333 = 27368U;
	volatile uint16_t x334 = 0U;
	int16_t x335 = INT16_MAX;
	uint8_t x336 = 116U;
	uint32_t t67 = 51015U;

	t67 = ((x333^x334)*(x335%x336));

	if (t67 != 1505240U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x337 = -23;
	int32_t x338 = 10;
	uint32_t x340 = 3188U;
	uint32_t t68 = 67776487U;

	t68 = ((x337^x338)*(x339%x340));

	if (t68 != 4294959611U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x341 = INT8_MAX;
	static uint32_t x342 = 370U;
	uint8_t x343 = 0U;
	int8_t x344 = 1;
	volatile uint32_t t69 = 22U;

	t69 = ((x341^x342)*(x343%x344));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x346 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t70 = -78575;

	t70 = ((x345^x346)*(x347%x348));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x349 = -74199493;
	volatile int64_t x350 = INT64_MIN;
	static volatile int32_t x351 = -1;
	volatile int8_t x352 = INT8_MIN;
	int64_t t71 = -521842540LL;

	t71 = ((x349^x350)*(x351%x352));

	if (t71 != -9223372036780576315LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x353 = 3U;
	int32_t x355 = 3;
	static int64_t t72 = -3631479814378LL;

	t72 = ((x353^x354)*(x355%x356));

	if (t72 != -18LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x357 = -5207;
	uint16_t x358 = 267U;
	int32_t x359 = -1;
	static volatile uint8_t x360 = UINT8_MAX;
	int32_t t73 = -2350808;

	t73 = ((x357^x358)*(x359%x360));

	if (t73 != 5470) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x362 = UINT16_MAX;
	volatile int8_t x363 = 1;
	int16_t x364 = INT16_MIN;
	volatile uint32_t t74 = 252U;

	t74 = ((x361^x362)*(x363%x364));

	if (t74 != 4294901760U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x366 = 6U;
	volatile int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MIN;
	volatile uint32_t t75 = 374424799U;

	t75 = ((x365^x366)*(x367%x368));

	if (t75 != 896U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MAX;
	static uint64_t x371 = UINT64_MAX;
	volatile uint64_t t76 = 6827105872849964281LLU;

	t76 = ((x369^x370)*(x371%x372));

	if (t76 != 140733189193856LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x373 = -1LL;
	volatile int8_t x374 = INT8_MAX;
	static volatile uint8_t x375 = UINT8_MAX;
	static volatile int64_t t77 = 53180235190096063LL;

	t77 = ((x373^x374)*(x375%x376));

	if (t77 != -32640LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x378 = 29U;
	uint8_t x379 = 47U;
	int32_t t78 = -9681409;

	t78 = ((x377^x378)*(x379%x380));

	if (t78 != 200) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x381 = -1;
	volatile int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	volatile int16_t x384 = INT16_MAX;
	volatile int32_t t79 = 853078;

	t79 = ((x381^x382)*(x383%x384));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x385 = INT32_MIN;
	uint64_t x386 = 10817080442LLU;
	int32_t x387 = -1;
	static int64_t x388 = INT64_MAX;
	volatile uint64_t t80 = 3803387294001LLU;

	t80 = ((x385^x386)*(x387%x388));

	if (t80 != 12805239686LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x389 = 314U;
	int8_t x390 = -1;
	uint32_t x392 = 20U;
	uint32_t t81 = 36U;

	t81 = ((x389^x390)*(x391%x392));

	if (t81 != 4294962571U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x394 = INT32_MAX;
	volatile int64_t x395 = 982435098LL;
	volatile int64_t t82 = -1775308LL;

	t82 = ((x393^x394)*(x395%x396));

	if (t82 != 6442450848LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = -495616552287967LL;
	static uint16_t x398 = 718U;
	volatile uint64_t x399 = UINT64_MAX;
	uint64_t x400 = 10239718LLU;
	uint64_t t83 = 105912LLU;

	t83 = ((x397^x398)*(x399%x400));

	if (t83 != 6651939384592632059LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x401 = 8054;
	int8_t x402 = INT8_MIN;
	volatile uint64_t x403 = 14646431LLU;
	int64_t x404 = 1LL;
	volatile uint64_t t84 = 38256760273249LLU;

	t84 = ((x401^x402)*(x403%x404));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x406 = 9272U;
	int16_t x407 = INT16_MIN;
	uint64_t x408 = 7LLU;
	uint64_t t85 = 2261LLU;

	t85 = ((x405^x406)*(x407%x408));

	if (t85 != 9277LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x410 = INT16_MAX;
	uint8_t x411 = 1U;
	uint32_t x412 = 1764633439U;
	static uint32_t t86 = 755135U;

	t86 = ((x409^x410)*(x411%x412));

	if (t86 != 4294934528U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x413 = UINT16_MAX;
	volatile uint16_t x414 = UINT16_MAX;
	volatile int16_t x415 = -15197;
	int64_t x416 = -1LL;
	volatile int64_t t87 = -133818318377090485LL;

	t87 = ((x413^x414)*(x415%x416));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = -20;
	static int32_t x419 = INT32_MAX;
	static int32_t t88 = -2003;

	t88 = ((x417^x418)*(x419%x420));

	if (t88 != 966) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x422 = 26808314089777LL;
	volatile int64_t t89 = -116LL;

	t89 = ((x421^x422)*(x423%x424));

	if (t89 != -27478521942033725LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x425 = UINT64_MAX;
	int64_t x426 = -1LL;
	volatile int16_t x428 = -1;
	volatile uint64_t t90 = 25490LLU;

	t90 = ((x425^x426)*(x427%x428));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x429 = 303541;
	uint16_t x430 = 3U;
	static volatile uint64_t x432 = 16LLU;
	volatile uint64_t t91 = 3LLU;

	t91 = ((x429^x430)*(x431%x432));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x433 = 47U;
	int32_t x435 = 118205141;
	int64_t x436 = 79171972400449LL;
	volatile int64_t t92 = 0LL;

	t92 = ((x433^x434)*(x435%x436));

	if (t92 != -5673846768LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x437 = -125266946;
	volatile int64_t x438 = -1LL;
	int64_t x439 = INT64_MIN;
	int32_t x440 = -1;
	int64_t t93 = 1382030LL;

	t93 = ((x437^x438)*(x439%x440));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = INT32_MIN;
	uint64_t x442 = UINT64_MAX;
	int16_t x443 = INT16_MIN;
	int16_t x444 = 88;
	volatile uint64_t t94 = 32181427383912649LLU;

	t94 = ((x441^x442)*(x443%x444));

	if (t94 != 18446744004990074912LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x445 = -1;
	volatile uint64_t x446 = 113350848180758149LLU;
	int16_t x447 = 1;
	int8_t x448 = -3;
	volatile uint64_t t95 = 2587816848057607LLU;

	t95 = ((x445^x446)*(x447%x448));

	if (t95 != 18333393225528793466LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x449 = INT64_MIN;
	uint8_t x450 = 6U;
	volatile int32_t x451 = 3571;
	static int16_t x452 = 3;
	int64_t t96 = -44356904062799LL;

	t96 = ((x449^x450)*(x451%x452));

	if (t96 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x453 = INT16_MIN;
	volatile uint16_t x454 = 0U;
	uint8_t x455 = 27U;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t97 = -334394704;

	t97 = ((x453^x454)*(x455%x456));

	if (t97 != -884736) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x457 = 427LL;
	static volatile int32_t x458 = INT32_MIN;
	int16_t x459 = -1;
	uint8_t x460 = 28U;
	volatile int64_t t98 = -6147496229754LL;

	t98 = ((x457^x458)*(x459%x460));

	if (t98 != 2147483221LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x461 = INT16_MAX;
	uint64_t x462 = 2LLU;
	uint32_t x463 = UINT32_MAX;
	uint32_t x464 = 129340749U;

	t99 = ((x461^x462)*(x463%x464));

	if (t99 != 875565268170LLU) { NG(); } else { ; }
	
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

