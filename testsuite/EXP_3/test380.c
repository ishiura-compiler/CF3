#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x7 = UINT16_MAX;
volatile int64_t x30 = -28941LL;
static uint32_t x31 = 9647950U;
volatile uint64_t t3 = 23876362793127LLU;
volatile uint64_t t5 = 97LLU;
int16_t x57 = 38;
int16_t x59 = -1;
static volatile int8_t x60 = -25;
volatile int64_t t8 = 9863LL;
int16_t x73 = INT16_MIN;
static int32_t x80 = -23754221;
volatile uint64_t t10 = 31185LLU;
volatile uint32_t x86 = 10U;
static volatile int16_t x99 = -1;
int16_t x105 = INT16_MIN;
int64_t x114 = INT64_MAX;
uint32_t x117 = UINT32_MAX;
volatile uint8_t x128 = 14U;
uint64_t t22 = 4137LLU;
static int16_t x153 = INT16_MIN;
int64_t x154 = 92LL;
int8_t x156 = 17;
int64_t x159 = -1LL;
volatile int32_t t25 = 713903;
int32_t x197 = INT32_MAX;
uint8_t x200 = 3U;
int64_t t30 = -1LL;
int16_t x202 = -17;
uint64_t x214 = 1LLU;
int16_t x215 = INT16_MIN;
uint8_t x216 = UINT8_MAX;
uint64_t t32 = 23232748919353542LLU;
volatile uint8_t x228 = 12U;
static int16_t x230 = INT16_MAX;
volatile uint8_t x241 = 95U;
uint64_t x256 = 885815231LLU;
uint64_t t38 = 21610268170LLU;
uint32_t x262 = 82U;
int8_t x271 = -1;
static uint16_t x283 = 4U;
volatile uint64_t x285 = 4LLU;
volatile uint8_t x291 = 44U;
static int32_t x303 = -1;
static int32_t x317 = -59951266;
static uint16_t x325 = 11753U;
static int16_t x326 = -1;
int16_t x329 = INT16_MAX;
uint64_t t54 = 49229445LLU;
static uint16_t x340 = 107U;
uint64_t t55 = 8LLU;
int16_t x348 = 18;
volatile uint64_t x358 = UINT64_MAX;
int64_t x362 = INT64_MIN;
volatile uint8_t x363 = 96U;
int16_t x364 = INT16_MIN;
uint32_t x367 = 891022U;
static int64_t x393 = -160730230803322LL;
volatile int64_t t66 = 115734694454732LL;
volatile int8_t x406 = INT8_MAX;
int32_t t68 = 73;
static volatile int32_t x412 = INT32_MIN;
int16_t x419 = 22;
int64_t t74 = 332LL;
uint8_t x433 = 17U;
uint8_t x446 = UINT8_MAX;
volatile uint32_t t76 = 1334031340U;
uint32_t t78 = 11218U;
int32_t x458 = INT32_MAX;
volatile int32_t t80 = 535464559;
int32_t x476 = 76;
int32_t t82 = 199458;
volatile int8_t x485 = INT8_MIN;
int32_t x486 = INT32_MIN;
int64_t x501 = 262676071767785535LL;
uint64_t x519 = UINT64_MAX;
static uint16_t x524 = 23706U;
volatile uint32_t x545 = UINT32_MAX;
int16_t x546 = -1;
int64_t t96 = -25LL;
static int16_t x564 = INT16_MAX;
uint8_t x568 = 63U;


void f0(void) {
	static int16_t x5 = 11;
	int16_t x6 = INT16_MAX;
	uint64_t x8 = 882566736LLU;
	volatile uint64_t t0 = 3LLU;

	t0 = ((x5/x6)*(x7*x8));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x21 = UINT64_MAX;
	int16_t x22 = INT16_MIN;
	uint8_t x23 = 2U;
	uint32_t x24 = 351991U;
	uint64_t t1 = 159112906931689LLU;

	t1 = ((x21/x22)*(x23*x24));

	if (t1 != 703982LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x25 = 136075834LLU;
	volatile int64_t x26 = INT64_MIN;
	volatile uint16_t x27 = 2U;
	int32_t x28 = 0;
	uint64_t t2 = 199647562901LLU;

	t2 = ((x25/x26)*(x27*x28));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x29 = 0U;
	static uint64_t x32 = 34516959551LLU;

	t3 = ((x29/x30)*(x31*x32));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x41 = -1;
	int8_t x42 = 2;
	uint32_t x43 = 1490U;
	volatile uint32_t x44 = 217567633U;
	uint32_t t4 = 0U;

	t4 = ((x41/x42)*(x43*x44));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x45 = INT32_MAX;
	uint8_t x46 = UINT8_MAX;
	uint64_t x47 = 1926006331935LLU;
	int64_t x48 = -1LL;

	t5 = ((x45/x46)*(x47*x48));

	if (t5 != 2226874045293621376LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = INT32_MIN;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = -1LL;
	uint16_t x52 = 4U;
	uint64_t t6 = 211LLU;

	t6 = ((x49/x50)*(x51*x52));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = INT16_MAX;
	volatile uint32_t x54 = UINT32_MAX;
	volatile int16_t x55 = -1;
	int32_t x56 = INT32_MAX;
	volatile uint32_t t7 = 74148U;

	t7 = ((x53/x54)*(x55*x56));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x58 = INT64_MIN;

	t8 = ((x57/x58)*(x59*x60));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x74 = INT32_MAX;
	int64_t x75 = -1LL;
	int8_t x76 = INT8_MIN;
	int64_t t9 = -3LL;

	t9 = ((x73/x74)*(x75*x76));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x77 = INT8_MIN;
	uint64_t x78 = UINT64_MAX;
	uint32_t x79 = 392815U;

	t10 = ((x77/x78)*(x79*x80));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x85 = 51936537438LLU;
	int64_t x87 = -4221780488270LL;
	int32_t x88 = -18251;
	uint64_t t11 = 30LLU;

	t11 = ((x85/x86)*(x87*x88));

	if (t11 != 10359285297111201158LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x89 = 125451U;
	int64_t x90 = -1LL;
	uint64_t x91 = 7393333LLU;
	int64_t x92 = 95LL;
	static uint64_t t12 = 4273381LLU;

	t12 = ((x89/x90)*(x91*x92));

	if (t12 != 18446655961112824231LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x93 = -168;
	int8_t x94 = -1;
	volatile int32_t x95 = 114;
	uint8_t x96 = 14U;
	int32_t t13 = 174898764;

	t13 = ((x93/x94)*(x95*x96));

	if (t13 != 268128) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x97 = INT8_MIN;
	static int64_t x98 = INT64_MIN;
	int8_t x100 = INT8_MAX;
	int64_t t14 = -4416LL;

	t14 = ((x97/x98)*(x99*x100));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x106 = -3;
	static uint16_t x107 = UINT16_MAX;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t15 = 14935U;

	t15 = ((x105/x106)*(x107*x108));

	if (t15 != 3579194026U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x109 = UINT16_MAX;
	uint16_t x110 = 2867U;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = 108U;
	volatile uint32_t t16 = 15979U;

	t16 = ((x109/x110)*(x111*x112));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x113 = INT16_MAX;
	uint32_t x115 = 178404784U;
	uint16_t x116 = 15230U;
	static volatile int64_t t17 = -1144LL;

	t17 = ((x113/x114)*(x115*x116));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x118 = -5235;
	int8_t x119 = -47;
	int8_t x120 = INT8_MAX;
	volatile uint32_t t18 = 360092U;

	t18 = ((x117/x118)*(x119*x120));

	if (t18 != 4294961327U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x125 = 28;
	volatile int32_t x126 = INT32_MIN;
	static volatile uint64_t x127 = 714LLU;
	uint64_t t19 = 0LLU;

	t19 = ((x125/x126)*(x127*x128));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x129 = -1;
	static volatile int64_t x130 = -1LL;
	int64_t x131 = 1LL;
	uint16_t x132 = UINT16_MAX;
	static volatile int64_t t20 = 11964LL;

	t20 = ((x129/x130)*(x131*x132));

	if (t20 != 65535LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x133 = -1;
	int8_t x134 = -1;
	volatile uint64_t x135 = 8314324741661LLU;
	static uint64_t x136 = 203358LLU;
	volatile uint64_t t21 = 368359563844LLU;

	t21 = ((x133/x134)*(x135*x136));

	if (t21 != 1690784450814697638LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x137 = 4;
	int32_t x138 = INT32_MIN;
	uint16_t x139 = 1927U;
	uint64_t x140 = UINT64_MAX;

	t22 = ((x137/x138)*(x139*x140));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x155 = -1;
	static int64_t t23 = 7854LL;

	t23 = ((x153/x154)*(x155*x156));

	if (t23 != 6052LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x157 = 45U;
	volatile int16_t x158 = INT16_MIN;
	int64_t x160 = -1559034239989941LL;
	int64_t t24 = -467756802LL;

	t24 = ((x157/x158)*(x159*x160));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x165 = -1;
	int32_t x166 = INT32_MAX;
	static uint16_t x167 = 9382U;
	int8_t x168 = INT8_MIN;

	t25 = ((x165/x166)*(x167*x168));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MAX;
	static int64_t x171 = -1LL;
	volatile uint32_t x172 = 1202U;
	int64_t t26 = -532733661876563LL;

	t26 = ((x169/x170)*(x171*x172));

	if (t26 != 1202LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x185 = INT8_MAX;
	static volatile uint64_t x186 = 11LLU;
	static int32_t x187 = 488;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t27 = 200507053040997596LLU;

	t27 = ((x185/x186)*(x187*x188));

	if (t27 != 18446744073708864512LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x189 = INT32_MAX;
	int16_t x190 = -20;
	int64_t x191 = INT64_MIN;
	uint8_t x192 = 0U;
	static volatile int64_t t28 = -488273754237120LL;

	t28 = ((x189/x190)*(x191*x192));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x193 = 2U;
	static uint32_t x194 = 24U;
	static int16_t x195 = 1412;
	uint64_t x196 = 3LLU;
	uint64_t t29 = 975LLU;

	t29 = ((x193/x194)*(x195*x196));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x198 = 17021LL;
	int64_t x199 = -121615163LL;

	t30 = ((x197/x198)*(x199*x200));

	if (t30 != -46031095965174LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x201 = 179190810806514LLU;
	static uint32_t x203 = 247135948U;
	int32_t x204 = INT32_MIN;
	static volatile uint64_t t31 = 243LLU;

	t31 = ((x201/x202)*(x203*x204));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x213 = UINT8_MAX;

	t32 = ((x213/x214)*(x215*x216));

	if (t32 != 18446744071578812416LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x225 = 163499150678LL;
	static int8_t x226 = -1;
	int16_t x227 = INT16_MAX;
	int64_t t33 = 587LL;

	t33 = ((x225/x226)*(x227*x228));

	if (t33 != -64288520043192312LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x229 = -1;
	uint8_t x231 = UINT8_MAX;
	uint32_t x232 = 1725480U;
	static uint32_t t34 = 16129U;

	t34 = ((x229/x230)*(x231*x232));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x242 = -8160;
	uint64_t x243 = 8622033813052LLU;
	uint64_t x244 = UINT64_MAX;
	uint64_t t35 = 2081825295450242806LLU;

	t35 = ((x241/x242)*(x243*x244));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x245 = 1459LL;
	static int32_t x246 = INT32_MAX;
	volatile int32_t x247 = 2517;
	int64_t x248 = 348976436835LL;
	int64_t t36 = -631196LL;

	t36 = ((x245/x246)*(x247*x248));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x249 = INT8_MIN;
	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = -1LL;
	uint64_t t37 = 339625LLU;

	t37 = ((x249/x250)*(x251*x252));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x253 = 26U;
	int32_t x254 = INT32_MIN;
	uint64_t x255 = 11258729259LLU;

	t38 = ((x253/x254)*(x255*x256));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x261 = 1U;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = 0;
	volatile uint32_t t39 = 413U;

	t39 = ((x261/x262)*(x263*x264));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x265 = 45849839U;
	int64_t x266 = INT64_MIN;
	uint32_t x267 = UINT32_MAX;
	uint64_t x268 = UINT64_MAX;
	uint64_t t40 = 44LLU;

	t40 = ((x265/x266)*(x267*x268));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x269 = 28U;
	int32_t x270 = INT32_MIN;
	volatile uint16_t x272 = 6130U;
	volatile int32_t t41 = 0;

	t41 = ((x269/x270)*(x271*x272));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x273 = -13;
	static volatile int16_t x274 = -1;
	static int32_t x275 = INT32_MAX;
	uint64_t x276 = 161052135735624925LLU;
	volatile uint64_t t42 = 500429769772LLU;

	t42 = ((x273/x274)*(x275*x276));

	if (t42 != 11990661139619168455LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x277 = 164879000400486LL;
	int64_t x278 = 231034255394LL;
	volatile uint64_t x279 = 96855LLU;
	static int16_t x280 = INT16_MIN;
	uint64_t t43 = 966LLU;

	t43 = ((x277/x278)*(x279*x280));

	if (t43 != 18446741810829623296LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x281 = 73U;
	int32_t x282 = INT32_MAX;
	static uint32_t x284 = 2243318U;
	static uint32_t t44 = 3U;

	t44 = ((x281/x282)*(x283*x284));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x286 = 3;
	uint32_t x287 = 1099915502U;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t45 = 467585516891286LLU;

	t45 = ((x285/x286)*(x287*x288));

	if (t45 != 1334378496LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x289 = INT8_MAX;
	volatile int16_t x290 = INT16_MIN;
	uint16_t x292 = 1U;
	volatile int32_t t46 = -236046423;

	t46 = ((x289/x290)*(x291*x292));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x293 = INT8_MAX;
	int32_t x294 = -1;
	uint64_t x295 = UINT64_MAX;
	volatile int8_t x296 = -49;
	volatile uint64_t t47 = 29LLU;

	t47 = ((x293/x294)*(x295*x296));

	if (t47 != 18446744073709545393LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x301 = UINT64_MAX;
	static volatile int64_t x302 = INT64_MIN;
	static volatile int8_t x304 = 4;
	uint64_t t48 = 1253078086646LLU;

	t48 = ((x301/x302)*(x303*x304));

	if (t48 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x305 = 7091364;
	int64_t x306 = -79LL;
	int32_t x307 = -1;
	static uint16_t x308 = 5U;
	int64_t t49 = -2892862LL;

	t49 = ((x305/x306)*(x307*x308));

	if (t49 != 448820LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x309 = 1814U;
	static int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MIN;
	uint64_t x312 = UINT64_MAX;
	uint64_t t50 = 12382741LLU;

	t50 = ((x309/x310)*(x311*x312));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x313 = INT16_MIN;
	uint64_t x314 = 91376912398379LLU;
	uint16_t x315 = 4999U;
	int16_t x316 = 128;
	static volatile uint64_t t51 = 1024LLU;

	t51 = ((x313/x314)*(x315*x316));

	if (t51 != 129174160000LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x318 = UINT64_MAX;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = UINT8_MAX;
	static volatile uint64_t t52 = 173434652794440LLU;

	t52 = ((x317/x318)*(x319*x320));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x327 = UINT64_MAX;
	static int32_t x328 = -23825;
	static volatile uint64_t t53 = 1276333LLU;

	t53 = ((x325/x326)*(x327*x328));

	if (t53 != 18446744073429536391LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x330 = INT16_MIN;
	int32_t x331 = 20704;
	uint64_t x332 = 18153007477135828LLU;

	t54 = ((x329/x330)*(x331*x332));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x337 = 1564036570U;
	volatile uint64_t x338 = 125003250LLU;
	int8_t x339 = 3;

	t55 = ((x337/x338)*(x339*x340));

	if (t55 != 3852LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = -5542575LL;
	static int16_t x343 = INT16_MAX;
	static uint32_t x344 = 0U;
	int64_t t56 = -18158754273813623LL;

	t56 = ((x341/x342)*(x343*x344));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x345 = INT8_MAX;
	uint8_t x346 = 3U;
	int64_t x347 = -1LL;
	volatile int64_t t57 = -5555867339LL;

	t57 = ((x345/x346)*(x347*x348));

	if (t57 != -756LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x353 = INT64_MIN;
	uint32_t x354 = 376379U;
	int16_t x355 = -1;
	static volatile int16_t x356 = 7;
	int64_t t58 = -2283004067755699LL;

	t58 = ((x353/x354)*(x355*x356));

	if (t58 != 171538805985407LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x357 = INT8_MAX;
	int8_t x359 = 1;
	uint8_t x360 = 0U;
	static volatile uint64_t t59 = 38122288LLU;

	t59 = ((x357/x358)*(x359*x360));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x361 = INT64_MAX;
	volatile int64_t t60 = -176256477LL;

	t60 = ((x361/x362)*(x363*x364));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x365 = INT32_MAX;
	static int32_t x366 = -1160485;
	static uint16_t x368 = UINT16_MAX;
	volatile uint32_t t61 = 2402951U;

	t61 = ((x365/x366)*(x367*x368));

	if (t61 != 4027871788U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x373 = -1;
	static uint32_t x374 = 2035726847U;
	int8_t x375 = INT8_MIN;
	static int16_t x376 = INT16_MAX;
	uint32_t t62 = 4964U;

	t62 = ((x373/x374)*(x375*x376));

	if (t62 != 4286578944U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x377 = 19350441LLU;
	volatile int16_t x378 = 20;
	int64_t x379 = -1LL;
	int16_t x380 = INT16_MIN;
	uint64_t t63 = 6440172LLU;

	t63 = ((x377/x378)*(x379*x380));

	if (t63 != 31703760896LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x381 = 780361;
	static int16_t x382 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = -2;
	uint64_t t64 = 3620115823600662LLU;

	t64 = ((x381/x382)*(x383*x384));

	if (t64 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x389 = INT16_MIN;
	uint32_t x390 = 659U;
	uint32_t x391 = 3U;
	volatile int16_t x392 = -1;
	volatile uint32_t t65 = 1907497947U;

	t65 = ((x389/x390)*(x391*x392));

	if (t65 != 4275415243U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x394 = 132725338U;
	int8_t x395 = 0;
	int64_t x396 = 1284683LL;

	t66 = ((x393/x394)*(x395*x396));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x401 = 1347527U;
	uint16_t x402 = 85U;
	volatile int8_t x403 = 55;
	uint8_t x404 = 10U;
	static volatile uint32_t t67 = 541868303U;

	t67 = ((x401/x402)*(x403*x404));

	if (t67 != 8719150U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x405 = 1U;
	volatile uint8_t x407 = UINT8_MAX;
	uint8_t x408 = 112U;

	t68 = ((x405/x406)*(x407*x408));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x409 = 0;
	uint32_t x410 = 207U;
	int8_t x411 = 0;
	volatile uint32_t t69 = 99419U;

	t69 = ((x409/x410)*(x411*x412));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x413 = 126;
	int64_t x414 = INT64_MAX;
	static int64_t x415 = INT64_MAX;
	volatile int64_t x416 = -1LL;
	volatile int64_t t70 = -718906069LL;

	t70 = ((x413/x414)*(x415*x416));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x417 = INT8_MIN;
	uint16_t x418 = 1003U;
	uint64_t x420 = 712LLU;
	volatile uint64_t t71 = 2917550402778439993LLU;

	t71 = ((x417/x418)*(x419*x420));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x421 = -1;
	uint32_t x422 = 9U;
	uint32_t x423 = 1365959613U;
	volatile int32_t x424 = -408;
	uint32_t t72 = 2U;

	t72 = ((x421/x422)*(x423*x424));

	if (t72 != 2880873952U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x425 = UINT32_MAX;
	uint8_t x426 = UINT8_MAX;
	static int32_t x427 = -70868;
	static uint8_t x428 = 1U;
	volatile uint32_t t73 = 14U;

	t73 = ((x425/x426)*(x427*x428));

	if (t73 != 370546476U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x429 = INT8_MAX;
	int64_t x430 = -22590329LL;
	int16_t x431 = INT16_MIN;
	int64_t x432 = -1LL;

	t74 = ((x429/x430)*(x431*x432));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x434 = INT8_MIN;
	uint64_t x435 = 983LLU;
	uint16_t x436 = UINT16_MAX;
	volatile uint64_t t75 = 17802LLU;

	t75 = ((x433/x434)*(x435*x436));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x445 = -1;
	uint32_t x447 = 0U;
	uint16_t x448 = 3U;

	t76 = ((x445/x446)*(x447*x448));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x449 = UINT16_MAX;
	int16_t x450 = 7057;
	uint32_t x451 = UINT32_MAX;
	int32_t x452 = 0;
	uint32_t t77 = 4300854U;

	t77 = ((x449/x450)*(x451*x452));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x453 = INT32_MIN;
	volatile uint32_t x454 = 4737U;
	static int32_t x455 = -1;
	int32_t x456 = 1345;

	t78 = ((x453/x454)*(x455*x456));

	if (t78 != 3685222306U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x457 = UINT64_MAX;
	int8_t x459 = 1;
	static uint64_t x460 = 577960675272LLU;
	volatile uint64_t t79 = 61LLU;

	t79 = ((x457/x458)*(x459*x460));

	if (t79 != 2470243818605125408LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x465 = 106U;
	int32_t x466 = -11173;
	int8_t x467 = INT8_MAX;
	int8_t x468 = -1;

	t80 = ((x465/x466)*(x467*x468));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x469 = INT8_MIN;
	volatile int8_t x470 = INT8_MIN;
	static int32_t x471 = -1;
	static int64_t x472 = 1860702LL;
	int64_t t81 = 486035LL;

	t81 = ((x469/x470)*(x471*x472));

	if (t81 != -1860702LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x473 = 1U;
	int32_t x474 = 470346;
	static int16_t x475 = -1;

	t82 = ((x473/x474)*(x475*x476));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x477 = INT64_MAX;
	int16_t x478 = 493;
	uint64_t x479 = 125913970812164LLU;
	volatile int16_t x480 = INT16_MIN;
	uint64_t t83 = 13592459799450LLU;

	t83 = ((x477/x478)*(x479*x480));

	if (t83 != 9115966424504860672LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x487 = 0;
	volatile int8_t x488 = 10;
	volatile int32_t t84 = -31551940;

	t84 = ((x485/x486)*(x487*x488));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x493 = -3780;
	int16_t x494 = INT16_MIN;
	int32_t x495 = -1;
	volatile uint64_t x496 = UINT64_MAX;
	uint64_t t85 = 227LLU;

	t85 = ((x493/x494)*(x495*x496));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x497 = -3;
	static uint64_t x498 = UINT64_MAX;
	int8_t x499 = INT8_MIN;
	int64_t x500 = 3282LL;
	uint64_t t86 = 1010115526LLU;

	t86 = ((x497/x498)*(x499*x500));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x502 = 107U;
	uint64_t x503 = 17107938920LLU;
	static int64_t x504 = -1LL;
	static volatile uint64_t t87 = 11LLU;

	t87 = ((x501/x502)*(x503*x504));

	if (t87 != 6691746657550741872LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x505 = 61685740287LLU;
	int16_t x506 = -1;
	static int8_t x507 = INT8_MIN;
	static int32_t x508 = -1;
	volatile uint64_t t88 = 799850257345923LLU;

	t88 = ((x505/x506)*(x507*x508));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x509 = UINT8_MAX;
	static int32_t x510 = 12097645;
	int16_t x511 = 1504;
	volatile int32_t x512 = -3567;
	volatile int32_t t89 = -4989;

	t89 = ((x509/x510)*(x511*x512));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x517 = -3;
	static volatile uint16_t x518 = 1U;
	static volatile uint8_t x520 = UINT8_MAX;
	volatile uint64_t t90 = 65004662LLU;

	t90 = ((x517/x518)*(x519*x520));

	if (t90 != 765LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x521 = -1LL;
	static int8_t x522 = INT8_MAX;
	uint8_t x523 = 22U;
	static int64_t t91 = -5LL;

	t91 = ((x521/x522)*(x523*x524));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x529 = 26647881466LLU;
	int32_t x530 = INT32_MAX;
	static uint16_t x531 = UINT16_MAX;
	int64_t x532 = -1LL;
	static volatile uint64_t t92 = 151667808181LLU;

	t92 = ((x529/x530)*(x531*x532));

	if (t92 != 18446744073708765196LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x533 = INT8_MIN;
	int16_t x534 = -1;
	int32_t x535 = -931054;
	uint32_t x536 = 2993206U;
	uint32_t t93 = 163539U;

	t93 = ((x533/x534)*(x535*x536));

	if (t93 != 3447121408U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x537 = INT16_MAX;
	volatile uint8_t x538 = UINT8_MAX;
	static uint64_t x539 = 4979812404548197922LLU;
	uint8_t x540 = 2U;
	volatile uint64_t t94 = 1443411895858LLU;

	t94 = ((x537/x538)*(x539*x540));

	if (t94 != 2006634478379606528LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x547 = -576;
	int16_t x548 = INT16_MAX;
	static uint32_t t95 = 892U;

	t95 = ((x545/x546)*(x547*x548));

	if (t95 != 4276093504U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x553 = 0;
	int64_t x554 = INT64_MIN;
	int32_t x555 = -1;
	int64_t x556 = 6430434537LL;

	t96 = ((x553/x554)*(x555*x556));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x557 = INT8_MIN;
	static int16_t x558 = 1;
	int8_t x559 = -1;
	uint16_t x560 = 29U;
	int32_t t97 = 1;

	t97 = ((x557/x558)*(x559*x560));

	if (t97 != 3712) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x561 = 864730371LL;
	int32_t x562 = 1072;
	volatile int32_t x563 = 0;
	int64_t t98 = 0LL;

	t98 = ((x561/x562)*(x563*x564));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x565 = -10640136LL;
	static int16_t x566 = INT16_MIN;
	static int8_t x567 = INT8_MIN;
	static int64_t t99 = 226LL;

	t99 = ((x565/x566)*(x567*x568));

	if (t99 != -2612736LL) { NG(); } else { ; }
	
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

