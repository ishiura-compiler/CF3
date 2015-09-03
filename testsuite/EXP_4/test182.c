#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
int8_t x10 = -1;
static int16_t x16 = INT16_MIN;
volatile int64_t t5 = -14LL;
volatile uint64_t x26 = 2LLU;
int8_t x40 = INT8_MAX;
int64_t x61 = -1LL;
static volatile int16_t x64 = INT16_MIN;
int32_t x68 = 549898903;
static int32_t t12 = -23;
volatile int32_t x74 = -1;
static uint64_t t14 = 5493129LLU;
int16_t x84 = INT16_MAX;
int32_t t15 = 18752;
int64_t x88 = INT64_MIN;
static int64_t t16 = -287LL;
static uint32_t x118 = UINT32_MAX;
uint16_t x121 = 545U;
int64_t x128 = INT64_MAX;
int8_t x130 = INT8_MAX;
volatile int32_t x136 = -155363622;
int32_t t25 = -1379474;
int16_t x157 = INT16_MIN;
int8_t x160 = INT8_MIN;
uint8_t x165 = 8U;
uint32_t x169 = UINT32_MAX;
static volatile int64_t x173 = 3997981004594386LL;
int16_t x177 = INT16_MIN;
volatile uint16_t x178 = 79U;
uint64_t x181 = 488069481736465573LLU;
int8_t x182 = INT8_MIN;
static volatile int16_t x188 = 6075;
static uint8_t x190 = UINT8_MAX;
int32_t x197 = INT32_MAX;
uint64_t x210 = UINT64_MAX;
uint8_t x211 = UINT8_MAX;
static int32_t x214 = -1;
int8_t x217 = INT8_MIN;
static volatile int32_t x224 = INT32_MIN;
static int64_t x228 = INT64_MAX;
int8_t x230 = -1;
uint16_t x234 = 17U;
static int16_t x238 = 7;
uint8_t x239 = UINT8_MAX;
volatile uint64_t t47 = 197148623942LLU;
int64_t x247 = -1LL;
int16_t x250 = INT16_MIN;
int64_t x254 = INT64_MIN;
uint8_t x259 = UINT8_MAX;
uint8_t x261 = 11U;
int8_t x265 = INT8_MIN;
int16_t x266 = -1;
int64_t x271 = -1LL;
volatile int64_t t54 = -44LL;
volatile int16_t x273 = INT16_MAX;
volatile uint8_t x279 = 0U;
uint64_t x283 = 493707298LLU;
int16_t x287 = INT16_MAX;
uint64_t x288 = UINT64_MAX;
int16_t x290 = -2770;
static int64_t x295 = -5464LL;
int16_t x301 = INT16_MIN;
uint64_t x306 = 6LLU;
int8_t x312 = 1;
int16_t x313 = 26;
static int32_t x322 = -1912;
volatile uint64_t t67 = 15LLU;
static volatile int8_t x327 = 31;
uint16_t x329 = 669U;
int8_t x330 = INT8_MIN;
volatile int64_t x334 = INT64_MIN;
volatile uint64_t t71 = 45249064034LLU;
volatile int16_t x341 = 970;
uint8_t x343 = 30U;
volatile int32_t x348 = 54572;
uint64_t x350 = 208664322216LLU;
volatile int8_t x353 = -1;
uint16_t x358 = 82U;
uint8_t x372 = 7U;
volatile int32_t t79 = 61812;
uint64_t x374 = UINT64_MAX;
static int8_t x375 = INT8_MIN;
volatile int16_t x376 = INT16_MAX;
static volatile uint64_t t80 = 14719LLU;
uint16_t x382 = 2U;
volatile uint64_t t82 = 3LLU;
static int8_t x385 = INT8_MIN;
volatile int32_t t83 = 0;
uint16_t x389 = 29U;
uint64_t x393 = UINT64_MAX;
static uint64_t t85 = 1813LLU;
int8_t x400 = INT8_MIN;
volatile uint32_t x408 = UINT32_MAX;
int32_t x420 = INT32_MIN;
int64_t x423 = INT64_MIN;
volatile uint64_t x427 = UINT64_MAX;
static int32_t x434 = -726;
int16_t x443 = -1;
int8_t x455 = -1;
volatile uint8_t x456 = UINT8_MAX;
static volatile int32_t x465 = INT32_MIN;
int64_t x468 = -6305261941014743LL;
volatile uint64_t x484 = 11736LLU;
volatile uint64_t t99 = 103LLU;


void f0(void) {
	uint16_t x1 = 19U;
	static int64_t x2 = -32157305911668533LL;
	int16_t x3 = INT16_MIN;
	static uint64_t t0 = 13366144725LLU;

	t0 = (x1^(x2+(x3-x4)));

	if (t0 != 18414586767797850335LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 3U;
	int16_t x6 = -1;
	uint64_t x7 = 6962LLU;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 33190LLU;

	t1 = (x5^(x6+(x7-x8)));

	if (t1 != 6961LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 21U;
	uint16_t x11 = UINT16_MAX;
	static volatile int8_t x12 = INT8_MIN;
	int32_t t2 = 1047;

	t2 = (x9^(x10+(x11-x12)));

	if (t2 != 65643) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x14 = 1U;
	static uint8_t x15 = UINT8_MAX;
	static volatile int64_t t3 = 257524001836926LL;

	t3 = (x13^(x14+(x15-x16)));

	if (t3 != -9223372036854742784LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MAX;
	int64_t x20 = 19200264375380LL;
	int64_t t4 = -269719100102604LL;

	t4 = (x17^(x18+(x19-x20)));

	if (t4 != -9223352836590465963LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	uint32_t x22 = 3U;
	volatile int16_t x23 = INT16_MIN;
	volatile int16_t x24 = INT16_MAX;

	t5 = (x21^(x22+(x23-x24)));

	if (t5 != 9223372032559874043LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 30U;
	uint8_t x27 = 1U;
	uint16_t x28 = UINT16_MAX;
	uint64_t t6 = 342421007724LLU;

	t6 = (x25^(x26+(x27-x28)));

	if (t6 != 18446744073709486106LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = -1;
	static int8_t x38 = INT8_MIN;
	static int32_t x39 = INT32_MAX;
	volatile int32_t t7 = -3692878;

	t7 = (x37^(x38+(x39-x40)));

	if (t7 != -2147483393) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	uint64_t x42 = UINT64_MAX;
	volatile int32_t x43 = INT32_MAX;
	volatile uint64_t x44 = 21129LLU;
	volatile uint64_t t8 = 190LLU;

	t8 = (x41^(x42+(x43-x44)));

	if (t8 != 18446744071562089098LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x53 = -40614830874LL;
	int64_t x54 = 189160LL;
	int64_t x55 = -1LL;
	uint32_t x56 = 3884U;
	int64_t t9 = 20LL;

	t9 = (x53^(x54+(x55-x56)));

	if (t9 != -40615014563LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x62 = 767365202U;
	volatile int32_t x63 = 711452;
	int64_t t10 = 701448258LL;

	t10 = (x61^(x62+(x63-x64)));

	if (t10 != -768109423LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 28LLU;
	int32_t x66 = INT32_MIN;
	static volatile uint64_t x67 = UINT64_MAX;
	volatile uint64_t t11 = 276709337737871LLU;

	t11 = (x65^(x66+(x67-x68)));

	if (t11 != 18446744071012169076LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = -1;
	int16_t x70 = -1;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = 25U;

	t12 = (x69^(x70+(x71-x72)));

	if (t12 != 32793) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = 26;
	volatile uint8_t x75 = 10U;
	int16_t x76 = INT16_MIN;
	volatile int32_t t13 = -555413;

	t13 = (x73^(x74+(x75-x76)));

	if (t13 != 32787) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x77 = 5042182191510039323LLU;
	volatile int32_t x78 = -1;
	volatile uint8_t x79 = UINT8_MAX;
	static int16_t x80 = 1;

	t14 = (x77^(x78+(x79-x80)));

	if (t14 != 5042182191510039526LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = UINT8_MAX;
	int16_t x82 = INT16_MAX;
	int16_t x83 = -1027;

	t15 = (x81^(x82+(x83-x84)));

	if (t15 != -1278) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = UINT32_MAX;
	uint16_t x86 = 1U;
	static int64_t x87 = INT64_MIN;

	t16 = (x85^(x86+(x87-x88)));

	if (t16 != 4294967294LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x97 = 8534U;
	uint64_t x98 = 67090058486LLU;
	volatile int8_t x99 = 50;
	int8_t x100 = INT8_MIN;
	static volatile uint64_t t17 = 183925985LLU;

	t17 = (x97^(x98+(x99-x100)));

	if (t17 != 67090066686LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = 4594083803199LL;
	int16_t x106 = INT16_MIN;
	int32_t x107 = -3;
	static int64_t x108 = -1LL;
	static int64_t t18 = 2709LL;

	t18 = (x105^(x106+(x107-x108)));

	if (t18 != -4594083770431LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x113 = -16829336057505LL;
	volatile uint8_t x114 = 13U;
	int16_t x115 = INT16_MIN;
	int64_t x116 = 128278100485305LL;
	int64_t t19 = -4099316347509733LL;

	t19 = (x113^(x114+(x115-x116)));

	if (t19 != 136225357156875LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x117 = 6151LLU;
	static int8_t x119 = -17;
	static int8_t x120 = -1;
	uint64_t t20 = 724164201429LLU;

	t20 = (x117^(x118+(x119-x120)));

	if (t20 != 4294961128LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x122 = 9722U;
	static int8_t x123 = 0;
	static uint64_t x124 = 98688941455764LLU;
	volatile uint64_t t21 = 3993423LLU;

	t21 = (x121^(x122+(x123-x124)));

	if (t21 != 18446645384768106055LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = INT8_MIN;
	static int16_t x126 = INT16_MIN;
	int64_t x127 = 54587330840807149LL;
	int64_t t22 = 754146872942LL;

	t22 = (x125^(x126+(x127-x128)));

	if (t22 != 9168784706014001518LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = INT64_MAX;
	int64_t x131 = -230382058457LL;
	int64_t x132 = -5138571538LL;
	volatile int64_t t23 = -7871LL;

	t23 = (x129^(x130+(x131-x132)));

	if (t23 != -9223371811611289017LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x133 = UINT8_MAX;
	uint8_t x134 = 0U;
	int64_t x135 = INT64_MIN;
	static volatile int64_t t24 = -171791122LL;

	t24 = (x133^(x134+(x135-x136)));

	if (t24 != -9223372036699412007LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = -1;
	static int16_t x138 = 25;
	volatile int8_t x139 = INT8_MAX;
	uint8_t x140 = 5U;

	t25 = (x137^(x138+(x139-x140)));

	if (t25 != -148) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x158 = 1364059390810107639LL;
	uint32_t x159 = 125067552U;
	static volatile int64_t t26 = 49460LL;

	t26 = (x157^(x158+(x159-x160)));

	if (t26 != -1364059390935199593LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x161 = 64751;
	uint64_t x162 = UINT64_MAX;
	uint16_t x163 = UINT16_MAX;
	uint16_t x164 = 41U;
	uint64_t t27 = 51418111263820LLU;

	t27 = (x161^(x162+(x163-x164)));

	if (t27 != 826LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x166 = 812393863;
	static volatile uint8_t x167 = 1U;
	static uint32_t x168 = 2549232U;
	uint32_t t28 = 233115U;

	t28 = (x165^(x166+(x167-x168)));

	if (t28 != 809844624U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x170 = -2966;
	int16_t x171 = INT16_MIN;
	static uint8_t x172 = 56U;
	uint32_t t29 = 18139U;

	t29 = (x169^(x170+(x171-x172)));

	if (t29 != 35789U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MAX;
	uint32_t x176 = UINT32_MAX;
	int64_t t30 = 353040237LL;

	t30 = (x173^(x174+(x175-x176)));

	if (t30 != -9219374053702697774LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x179 = 20LLU;
	int16_t x180 = 4;
	uint64_t t31 = 42813381147LLU;

	t31 = (x177^(x178+(x179-x180)));

	if (t31 != 18446744073709518943LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x183 = 31817LLU;
	int32_t x184 = INT32_MIN;
	volatile uint64_t t32 = 49916307LLU;

	t32 = (x181^(x182+(x183-x184)));

	if (t32 != 488069479588960108LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MAX;
	int16_t x187 = -1;
	int32_t t33 = -19940;

	t33 = (x185^(x186+(x187-x188)));

	if (t33 != -2147477700) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x189 = INT64_MAX;
	int16_t x191 = INT16_MIN;
	int32_t x192 = 855466;
	int64_t t34 = 75675LL;

	t34 = (x189^(x190+(x191-x192)));

	if (t34 != -9223372036853887830LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x193 = 43U;
	volatile int16_t x194 = INT16_MIN;
	volatile uint32_t x195 = 13149U;
	static int16_t x196 = INT16_MIN;
	uint32_t t35 = 2U;

	t35 = (x193^(x194+(x195-x196)));

	if (t35 != 13174U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x198 = INT64_MIN;
	static volatile uint8_t x199 = 26U;
	static int8_t x200 = -1;
	volatile int64_t t36 = 1LL;

	t36 = (x197^(x198+(x199-x200)));

	if (t36 != -9223372034707292188LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x201 = 22187U;
	static volatile uint32_t x202 = UINT32_MAX;
	static volatile int16_t x203 = -435;
	uint32_t x204 = 12417U;
	volatile uint32_t t37 = 3220755U;

	t37 = (x201^(x202+(x203-x204)));

	if (t37 != 4294941536U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x205 = INT64_MIN;
	volatile int64_t x206 = INT64_MAX;
	static int32_t x207 = -491;
	uint16_t x208 = 202U;
	int64_t t38 = -14LL;

	t38 = (x205^(x206+(x207-x208)));

	if (t38 != -694LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x209 = INT32_MIN;
	int32_t x212 = 117459;
	volatile uint64_t t39 = 25827605LLU;

	t39 = (x209^(x210+(x211-x212)));

	if (t39 != 2147366443LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = INT32_MAX;
	int16_t x215 = -1;
	volatile int32_t x216 = 26;
	static int32_t t40 = 177983459;

	t40 = (x213^(x214+(x215-x216)));

	if (t40 != -2147483621) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x218 = UINT16_MAX;
	int8_t x219 = INT8_MAX;
	uint64_t x220 = 147536892347939007LLU;
	volatile uint64_t t41 = 6405357992719936166LLU;

	t41 = (x217^(x218+(x219-x220)));

	if (t41 != 147536892347873343LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x221 = INT64_MAX;
	int8_t x222 = INT8_MAX;
	uint32_t x223 = UINT32_MAX;
	int64_t t42 = 105802324535400LL;

	t42 = (x221^(x222+(x223-x224)));

	if (t42 != 9223372034707292033LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x225 = -78;
	uint8_t x226 = 0U;
	static int8_t x227 = -1;
	int64_t t43 = 21745582824LL;

	t43 = (x225^(x226+(x227-x228)));

	if (t43 != 9223372036854775730LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x229 = INT8_MAX;
	int8_t x231 = -1;
	static uint16_t x232 = UINT16_MAX;
	int32_t t44 = -2532433;

	t44 = (x229^(x230+(x231-x232)));

	if (t44 != -65664) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x233 = 9;
	uint8_t x235 = 4U;
	static uint16_t x236 = UINT16_MAX;
	volatile int32_t t45 = 28853;

	t45 = (x233^(x234+(x235-x236)));

	if (t45 != -65505) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x237 = INT8_MIN;
	uint8_t x240 = 7U;
	int32_t t46 = -14775992;

	t46 = (x237^(x238+(x239-x240)));

	if (t46 != -129) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x241 = 10U;
	volatile uint32_t x242 = 234U;
	uint64_t x243 = UINT64_MAX;
	uint32_t x244 = UINT32_MAX;

	t47 = (x241^(x242+(x243-x244)));

	if (t47 != 18446744069414584544LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = -1LL;
	uint32_t x248 = 107100U;
	volatile int64_t t48 = 16757820LL;

	t48 = (x245^(x246+(x247-x248)));

	if (t48 != 2147376546LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x249 = 86U;
	uint16_t x251 = 11U;
	int32_t x252 = 153850549;
	int32_t t49 = 260204;

	t49 = (x249^(x250+(x251-x252)));

	if (t49 != -153883392) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x253 = 165628688972262LLU;
	uint64_t x255 = UINT64_MAX;
	static int32_t x256 = INT32_MIN;
	uint64_t t50 = 662743401700LLU;

	t50 = (x253^(x254+(x255-x256)));

	if (t50 != 9223537663960958489LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x257 = 1U;
	int64_t x258 = -30680LL;
	uint32_t x260 = UINT32_MAX;
	int64_t t51 = 129434LL;

	t51 = (x257^(x258+(x259-x260)));

	if (t51 != -30423LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x262 = -17502801009243670LL;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = 2305471LLU;
	static volatile uint64_t t52 = 128197472923LLU;

	t52 = (x261^(x262+(x263-x264)));

	if (t52 != 18429241272698002336LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x267 = INT8_MAX;
	int64_t x268 = 2111141203178LL;
	int64_t t53 = 1907LL;

	t53 = (x265^(x266+(x267-x268)));

	if (t53 != 2111141202964LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x269 = 11;
	uint16_t x270 = 1U;
	static uint8_t x272 = 19U;

	t54 = (x269^(x270+(x271-x272)));

	if (t54 != -26LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	int16_t x276 = -1;
	static uint32_t t55 = 137478U;

	t55 = (x273^(x274+(x275-x276)));

	if (t55 != 2147516415U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x277 = INT64_MAX;
	static uint64_t x278 = UINT64_MAX;
	static int16_t x280 = INT16_MIN;
	uint64_t t56 = 161066LLU;

	t56 = (x277^(x278+(x279-x280)));

	if (t56 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x281 = 0U;
	uint64_t x282 = 5547482590233565LLU;
	static uint64_t x284 = 21404356223LLU;
	volatile uint64_t t57 = 1596810321081940303LLU;

	t57 = (x281^(x282+(x283-x284)));

	if (t57 != 5547461679584640LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int32_t x286 = -3204967;
	uint64_t t58 = 2486016737123793250LLU;

	t58 = (x285^(x286+(x287-x288)));

	if (t58 != 18446744073706366822LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x289 = 0;
	volatile int16_t x291 = -1;
	uint64_t x292 = 259169417926346LLU;
	static uint64_t t59 = 8411643LLU;

	t59 = (x289^(x290+(x291-x292)));

	if (t59 != 18446484904291622499LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x293 = 349402714LLU;
	static int8_t x294 = INT8_MAX;
	uint32_t x296 = 4900767U;
	volatile uint64_t t60 = 66515876317344052LLU;

	t60 = (x293^(x294+(x295-x296)));

	if (t60 != 18446744073363936722LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x297 = INT64_MAX;
	volatile int64_t x298 = -1LL;
	int32_t x299 = -1;
	uint8_t x300 = 13U;
	volatile int64_t t61 = 129168359862LL;

	t61 = (x297^(x298+(x299-x300)));

	if (t61 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x302 = INT16_MIN;
	uint16_t x303 = 3311U;
	uint32_t x304 = UINT32_MAX;
	uint32_t t62 = 2U;

	t62 = (x301^(x302+(x303-x304)));

	if (t62 != 3312U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x305 = 9U;
	volatile int32_t x307 = -1;
	int16_t x308 = 611;
	static volatile uint64_t t63 = 14074LLU;

	t63 = (x305^(x306+(x307-x308)));

	if (t63 != 18446744073709551019LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x309 = UINT8_MAX;
	static volatile uint64_t x310 = 4361125804LLU;
	int8_t x311 = 0;
	uint64_t t64 = 36246037785038873LLU;

	t64 = (x309^(x310+(x311-x312)));

	if (t64 != 4361125716LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x314 = INT16_MAX;
	int8_t x315 = INT8_MAX;
	volatile int8_t x316 = 9;
	volatile int32_t t65 = -114375810;

	t65 = (x313^(x314+(x315-x316)));

	if (t65 != 32879) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x317 = 3419U;
	uint16_t x318 = 22536U;
	int16_t x319 = INT16_MIN;
	int16_t x320 = -47;
	uint32_t t66 = 3186963U;

	t66 = (x317^(x318+(x319-x320)));

	if (t66 != 4294956396U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = INT64_MIN;
	int64_t x323 = INT64_MIN;
	volatile uint64_t x324 = UINT64_MAX;

	t67 = (x321^(x322+(x323-x324)));

	if (t67 != 18446744073709549705LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x325 = UINT16_MAX;
	int8_t x326 = 1;
	volatile int16_t x328 = -1;
	volatile int32_t t68 = -243;

	t68 = (x325^(x326+(x327-x328)));

	if (t68 != 65502) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x331 = 18971173LLU;
	int16_t x332 = -1103;
	uint64_t t69 = 9975251719194007LLU;

	t69 = (x329^(x330+(x331-x332)));

	if (t69 != 18972521LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x333 = 2U;
	int16_t x335 = INT16_MAX;
	uint8_t x336 = 15U;
	volatile int64_t t70 = 15178229LL;

	t70 = (x333^(x334+(x335-x336)));

	if (t70 != -9223372036854743054LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x337 = 1494U;
	int8_t x338 = INT8_MIN;
	uint64_t x339 = UINT64_MAX;
	static int32_t x340 = -474;

	t71 = (x337^(x338+(x339-x340)));

	if (t71 != 1167LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x342 = -6446050975143209LL;
	uint16_t x344 = 28419U;
	int64_t t72 = -117826453831777LL;

	t72 = (x341^(x342+(x343-x344)));

	if (t72 != -6446050975172552LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x345 = 10U;
	static int8_t x346 = -1;
	int32_t x347 = INT32_MAX;
	static volatile uint32_t t73 = 1858669U;

	t73 = (x345^(x346+(x347-x348)));

	if (t73 != 2147429080U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x349 = INT16_MIN;
	static int8_t x351 = INT8_MIN;
	uint8_t x352 = UINT8_MAX;
	uint64_t t74 = 150506007704LLU;

	t74 = (x349^(x350+(x351-x352)));

	if (t74 != 18446743865045245737LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x354 = -1;
	int16_t x355 = 5;
	int8_t x356 = INT8_MAX;
	volatile int32_t t75 = -13891;

	t75 = (x353^(x354+(x355-x356)));

	if (t75 != 122) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = INT64_MIN;
	static uint64_t x359 = 14476LLU;
	int64_t x360 = -1LL;
	uint64_t t76 = 152LLU;

	t76 = (x357^(x358+(x359-x360)));

	if (t76 != 9223372036854790367LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x361 = 25U;
	uint8_t x362 = 6U;
	volatile uint16_t x363 = 18U;
	static int8_t x364 = INT8_MAX;
	volatile int32_t t77 = 4230;

	t77 = (x361^(x362+(x363-x364)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x365 = UINT32_MAX;
	static int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	static int64_t t78 = -7556995566341LL;

	t78 = (x365^(x366+(x367-x368)));

	if (t78 != 9223372032559874047LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x369 = -45;
	int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MAX;

	t79 = (x369^(x370+(x371-x372)));

	if (t79 != 43) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x373 = UINT8_MAX;

	t80 = (x373^(x374+(x375-x376)));

	if (t80 != 18446744073709518719LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x377 = INT8_MIN;
	volatile int64_t x378 = -1476986LL;
	int64_t x379 = 5664830231LL;
	uint32_t x380 = 172597U;
	int64_t t81 = -135LL;

	t81 = (x377^(x378+(x379-x380)));

	if (t81 != -5663180568LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = 33773438000040946LL;
	static uint64_t x383 = 163028LLU;
	volatile int16_t x384 = INT16_MIN;

	t82 = (x381^(x382+(x383-x384)));

	if (t82 != 33773437999970084LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x386 = -1;
	static uint8_t x387 = 9U;
	static int32_t x388 = -692644;

	t83 = (x385^(x386+(x387-x388)));

	if (t83 != -692692) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x390 = 14;
	static uint8_t x391 = UINT8_MAX;
	uint8_t x392 = 2U;
	volatile int32_t t84 = 5070742;

	t84 = (x389^(x390+(x391-x392)));

	if (t84 != 278) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x394 = 948U;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = INT8_MIN;

	t85 = (x393^(x394+(x395-x396)));

	if (t85 != 18446744073709485004LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x397 = 22U;
	volatile int8_t x398 = 12;
	int16_t x399 = INT16_MIN;
	static volatile uint32_t t86 = 2U;

	t86 = (x397^(x398+(x399-x400)));

	if (t86 != 4294934682U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x405 = 36U;
	uint16_t x406 = 14U;
	int32_t x407 = -3842;
	volatile uint32_t t87 = 3273U;

	t87 = (x405^(x406+(x407-x408)));

	if (t87 != 4294963497U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = 7U;
	static volatile int8_t x410 = INT8_MIN;
	static int8_t x411 = -1;
	static int16_t x412 = 15;
	volatile uint32_t t88 = 606577462U;

	t88 = (x409^(x410+(x411-x412)));

	if (t88 != 4294967159U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x417 = 20U;
	static int16_t x418 = INT16_MIN;
	int64_t x419 = INT64_MIN;
	int64_t t89 = -27998773601LL;

	t89 = (x417^(x418+(x419-x420)));

	if (t89 != -9223372034707324908LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x421 = -1;
	int32_t x422 = INT32_MAX;
	int32_t x424 = -148;
	int64_t t90 = 1478531310LL;

	t90 = (x421^(x422+(x423-x424)));

	if (t90 != 9223372034707292012LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = INT64_MAX;
	int32_t x426 = INT32_MIN;
	uint32_t x428 = UINT32_MAX;
	volatile uint64_t t91 = 18383679808LLU;

	t91 = (x425^(x426+(x427-x428)));

	if (t91 != 9223372043297226751LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x433 = -1;
	volatile int16_t x435 = 21;
	uint64_t x436 = 1135513560169875187LLU;
	volatile uint64_t t92 = 328416034191LLU;

	t92 = (x433^(x434+(x435-x436)));

	if (t92 != 1135513560169875891LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = -7;
	uint64_t x438 = UINT64_MAX;
	uint16_t x439 = 2688U;
	int64_t x440 = INT64_MAX;
	uint64_t t93 = 83448797037718LLU;

	t93 = (x437^(x438+(x439-x440)));

	if (t93 != 9223372036854773113LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = INT32_MIN;
	uint8_t x442 = 20U;
	int8_t x444 = -1;
	static int32_t t94 = 809;

	t94 = (x441^(x442+(x443-x444)));

	if (t94 != -2147483628) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x449 = INT32_MIN;
	static int16_t x450 = INT16_MIN;
	int8_t x451 = INT8_MAX;
	int8_t x452 = -1;
	int32_t t95 = -26255;

	t95 = (x449^(x450+(x451-x452)));

	if (t95 != 2147451008) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x453 = -1;
	int16_t x454 = 3307;
	int32_t t96 = -1;

	t96 = (x453^(x454+(x455-x456)));

	if (t96 != -3052) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x461 = -1LL;
	volatile uint32_t x462 = 1049593U;
	volatile int8_t x463 = INT8_MIN;
	volatile uint32_t x464 = 1U;
	int64_t t97 = -4LL;

	t97 = (x461^(x462+(x463-x464)));

	if (t97 != -1049465LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x466 = -1LL;
	static int64_t x467 = 25037004512LL;
	volatile int64_t t98 = -75465913349938LL;

	t98 = (x465^(x466+(x467-x468)));

	if (t98 != -6305288906334282LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x481 = INT8_MIN;
	volatile int64_t x482 = -24657162513LL;
	int16_t x483 = -1;

	t99 = (x481^(x482+(x483-x484)));

	if (t99 != 24657174166LLU) { NG(); } else { ; }
	
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

