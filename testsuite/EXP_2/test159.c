#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -1LL;
uint32_t x4 = UINT32_MAX;
uint16_t x5 = 3U;
static int16_t x12 = INT16_MIN;
static int16_t x18 = 21;
volatile int8_t x20 = INT8_MIN;
int16_t x38 = -12011;
static int32_t x40 = INT32_MIN;
volatile uint64_t x46 = 236LLU;
volatile uint64_t t7 = 33825219704354662LLU;
static volatile uint32_t x57 = 72195628U;
int64_t t8 = 2959437950288418LL;
volatile int64_t t9 = 53573803015524LL;
volatile int16_t x77 = INT16_MIN;
uint64_t t11 = 984LLU;
uint32_t t14 = 175880U;
static uint64_t x115 = UINT64_MAX;
uint64_t t16 = 16901900459697233LLU;
static uint64_t x130 = 230690LLU;
static int32_t x132 = INT32_MAX;
static volatile uint64_t t18 = 131152520LLU;
volatile uint64_t x133 = 1196511331063LLU;
int8_t x145 = -14;
int8_t x146 = INT8_MAX;
int8_t x147 = 1;
uint32_t t20 = 437U;
int32_t x156 = INT32_MIN;
volatile uint64_t t21 = 6675538653406LLU;
int64_t x160 = -17LL;
static volatile int64_t t22 = 4909LL;
static uint16_t x171 = 48U;
uint64_t t23 = 808711933LLU;
int32_t x221 = INT32_MIN;
uint32_t x231 = UINT32_MAX;
uint16_t x232 = 10U;
static int64_t x244 = INT64_MIN;
volatile uint32_t x249 = UINT32_MAX;
int16_t x259 = INT16_MAX;
uint64_t x260 = 6318396252029038LLU;
uint64_t x263 = 138211431LLU;
uint64_t t37 = 848052LLU;
uint32_t x266 = UINT32_MAX;
int16_t x275 = 2773;
volatile uint32_t x277 = 4U;
int32_t x282 = -1;
volatile uint64_t t41 = 17023584644438999LLU;
int64_t x299 = -1LL;
static int64_t t43 = 2767632350800759LL;
volatile int64_t x302 = INT64_MIN;
uint8_t x321 = 16U;
uint16_t x322 = 203U;
static volatile int8_t x324 = INT8_MAX;
int64_t x326 = -1LL;
int8_t x327 = 1;
static int16_t x334 = -1;
volatile uint32_t t51 = 108U;
uint16_t x350 = 857U;
uint16_t x352 = 2U;
static volatile uint64_t x355 = 2831LLU;
static volatile uint64_t x357 = UINT64_MAX;
static volatile uint64_t t54 = 1089LLU;
int16_t x366 = INT16_MAX;
static int8_t x373 = -9;
int8_t x375 = -1;
int8_t x376 = -2;
uint64_t x377 = 32799489913443901LLU;
volatile int16_t x380 = INT16_MIN;
int64_t x386 = -1LL;
volatile uint64_t x397 = 1154083932858492986LLU;
int32_t x399 = INT32_MIN;
int64_t x405 = -268206973102004059LL;
volatile uint8_t x408 = 73U;
int32_t x435 = -1;
int16_t x447 = -1;
uint64_t x470 = UINT64_MAX;
static int8_t x475 = INT8_MIN;
int32_t x476 = 44;
uint64_t x477 = 55436LLU;
int32_t x478 = INT32_MIN;
int32_t x496 = 2;
volatile int32_t x503 = INT32_MAX;
uint32_t t74 = 1226898U;
int8_t x510 = INT8_MIN;
uint64_t t75 = 12LLU;
int8_t x515 = 1;
static uint64_t x522 = 37LLU;
static uint32_t x527 = 332224U;
int8_t x528 = -1;
int8_t x536 = INT8_MIN;
volatile uint16_t x541 = 6303U;
uint8_t x542 = 2U;
static int8_t x543 = INT8_MIN;
static int32_t x549 = -1;
volatile uint64_t x554 = UINT64_MAX;
static uint32_t x561 = 3U;
static int8_t x563 = -1;
uint32_t x564 = 33457609U;
int8_t x565 = INT8_MIN;
int16_t x573 = INT16_MAX;
int64_t x583 = INT64_MIN;
volatile int64_t x584 = -1LL;
int64_t x585 = 85490075LL;
uint8_t x592 = UINT8_MAX;
uint64_t x593 = 11LLU;
uint64_t x595 = 27871782216LLU;
volatile uint64_t t92 = 16763250LLU;
volatile int64_t x603 = 1LL;
static uint64_t x618 = UINT64_MAX;
int8_t x622 = -1;
volatile int8_t x625 = -3;
volatile int8_t x627 = INT8_MIN;


void f0(void) {
	volatile uint64_t x1 = 1800625426530LLU;
	int8_t x3 = -8;
	volatile uint64_t t0 = 11941241338362LLU;

	t0 = ((x1^(x2+x3))*x4);

	if (t0 != 14005193427581636715LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	volatile int16_t x7 = -140;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 8;

	t1 = ((x5^(x6+x7))*x8);

	if (t1 != -4178935) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static volatile int32_t x10 = 1;
	uint16_t x11 = 357U;
	int32_t t2 = 1;

	t2 = ((x9^(x10+x11))*x12);

	if (t2 != -13402112) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = -1;
	static volatile uint8_t x19 = UINT8_MAX;
	static volatile int32_t t3 = 1117;

	t3 = ((x17^(x18+x19))*x20);

	if (t3 != 35456) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = 30037;
	int64_t x34 = 674LL;
	int16_t x35 = INT16_MIN;
	int32_t x36 = -1;
	volatile int64_t t4 = -197927469726LL;

	t4 = ((x33^(x34+x35))*x36);

	if (t4 != 2057LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x37 = UINT32_MAX;
	int8_t x39 = 1;
	uint32_t t5 = 48843U;

	t5 = ((x37^(x38+x39))*x40);

	if (t5 != 2147483648U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x45 = 6U;
	static int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MAX;
	uint64_t t6 = 1892382LLU;

	t6 = ((x45^(x46+x47))*x48);

	if (t6 != 18446674207476580118LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MIN;
	volatile int16_t x51 = 128;
	uint64_t x52 = UINT64_MAX;

	t7 = ((x49^(x50+x51))*x52);

	if (t7 != 9223372036854808448LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x58 = -1LL;
	int32_t x59 = INT32_MIN;
	volatile int32_t x60 = 2630040;

	t8 = ((x57^(x58+x59))*x60);

	if (t8 != -5837845285681080LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x61 = 13456U;
	uint16_t x62 = 7826U;
	int64_t x63 = -1LL;
	int32_t x64 = INT32_MAX;

	t9 = ((x61^(x62+x63))*x64);

	if (t9 != 23091891656191LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x78 = INT8_MIN;
	volatile uint64_t x79 = 3975LLU;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t10 = 1698224954137906LLU;

	t10 = ((x77^(x78+x79))*x80);

	if (t10 != 3701888LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = 197500912445LLU;
	uint8_t x86 = 3U;
	int8_t x87 = INT8_MAX;
	uint64_t x88 = 496LLU;

	t11 = ((x85^(x86+x87))*x88);

	if (t11 != 97960452637200LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int32_t x90 = -10;
	int64_t x91 = 131466087170LL;
	volatile int8_t x92 = -1;
	static volatile uint64_t t12 = 8323946646LLU;

	t12 = ((x89^(x90+x91))*x92);

	if (t12 != 131466087161LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x97 = -1;
	int16_t x98 = INT16_MAX;
	int8_t x99 = 6;
	int16_t x100 = -29;
	int32_t t13 = 245;

	t13 = ((x97^(x98+x99))*x100);

	if (t13 != 950446) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x101 = 3190U;
	int16_t x102 = -3728;
	static volatile int16_t x103 = INT16_MIN;
	uint32_t x104 = 712045403U;

	t14 = ((x101^(x102+x103))*x104);

	if (t14 != 840835874U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x113 = 6660283576LLU;
	int16_t x114 = 2727;
	int32_t x116 = -82;
	volatile uint64_t t15 = 31LLU;

	t15 = ((x113^(x114+x115))*x116);

	if (t15 != 18446743527566436964LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x121 = 2872U;
	int64_t x122 = INT64_MIN;
	uint64_t x123 = 46LLU;
	int8_t x124 = INT8_MIN;

	t16 = ((x121^(x122+x123))*x124);

	if (t16 != 18446744073709188352LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = -1;
	volatile uint64_t x127 = UINT64_MAX;
	static int16_t x128 = INT16_MAX;
	uint64_t t17 = 4063276350778607588LLU;

	t17 = ((x125^(x126+x127))*x128);

	if (t17 != 70366596628482LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x129 = -1LL;
	int32_t x131 = INT32_MAX;

	t18 = ((x129^(x130+x131))*x132);

	if (t18 != 13834562654427120930LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x134 = 7U;
	int32_t x135 = -394841017;
	volatile uint64_t x136 = 61692829LLU;
	uint64_t t19 = 5380022271063980569LLU;

	t19 = ((x133^(x134+x135))*x136);

	if (t19 != 18437699109281026677LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x148 = 1U;

	t20 = ((x145^(x146+x147))*x148);

	if (t20 != 4294967154U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	uint64_t x155 = UINT64_MAX;

	t21 = ((x153^(x154+x155))*x156);

	if (t21 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x157 = 32539U;
	int16_t x158 = INT16_MAX;
	uint32_t x159 = 4139131U;

	t22 = ((x157^(x158+x159))*x160);

	if (t22 != -71126385LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x169 = 96438LLU;
	static int32_t x170 = -1;
	int64_t x172 = INT64_MAX;

	t23 = ((x169^(x170+x171))*x172);

	if (t23 != 9223372036854679399LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x173 = 7992LLU;
	uint64_t x174 = UINT64_MAX;
	static int16_t x175 = -1;
	static int32_t x176 = -20198076;
	volatile uint64_t t24 = 116486329323LLU;

	t24 = ((x173^(x174+x175))*x176);

	if (t24 != 161463419544LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x181 = UINT32_MAX;
	uint64_t x182 = 3038LLU;
	static int16_t x183 = INT16_MAX;
	int64_t x184 = -1LL;
	volatile uint64_t t25 = 1219LLU;

	t25 = ((x181^(x182+x183))*x184);

	if (t25 != 18446744069414620126LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MIN;
	volatile int32_t x187 = INT32_MAX;
	int8_t x188 = INT8_MAX;
	int32_t t26 = 80;

	t26 = ((x185^(x186+x187))*x188);

	if (t26 != 16256) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x197 = -13;
	int32_t x198 = -3;
	int8_t x199 = INT8_MAX;
	static int16_t x200 = INT16_MIN;
	int32_t t27 = -115388087;

	t27 = ((x197^(x198+x199))*x200);

	if (t27 != 3702784) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x205 = 3713;
	uint64_t x206 = 130349558584012LLU;
	int32_t x207 = INT32_MAX;
	int8_t x208 = -4;
	uint64_t t28 = 21LLU;

	t28 = ((x205^(x206+x207))*x208);

	if (t28 != 18446222666885271256LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x222 = INT32_MAX;
	int8_t x223 = -1;
	uint32_t x224 = 17656187U;
	volatile uint32_t t29 = 368U;

	t29 = ((x221^(x222+x223))*x224);

	if (t29 != 4259654922U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x229 = 32134U;
	volatile int16_t x230 = INT16_MIN;
	static uint32_t t30 = 1829U;

	t30 = ((x229^(x230+x231))*x232);

	if (t30 != 4294318266U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x233 = UINT16_MAX;
	uint8_t x234 = 123U;
	volatile uint16_t x235 = 0U;
	static volatile int64_t x236 = 2794LL;
	static int64_t t31 = 42LL;

	t31 = ((x233^(x234+x235))*x236);

	if (t31 != 182761128LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x237 = 1806LLU;
	static int16_t x238 = 92;
	uint16_t x239 = 3U;
	uint64_t x240 = 25641139907488356LLU;
	uint64_t t32 = 4686265429103LLU;

	t32 = ((x237^(x238+x239))*x240);

	if (t32 != 11132366899306587556LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x241 = 1330U;
	static volatile uint64_t x242 = UINT64_MAX;
	uint16_t x243 = 3101U;
	static uint64_t t33 = 116389124417LLU;

	t33 = ((x241^(x242+x243))*x244);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x245 = INT8_MIN;
	volatile int64_t x246 = 14073LL;
	static uint32_t x247 = 37912U;
	int8_t x248 = INT8_MIN;
	volatile int64_t t34 = -5795LL;

	t34 = ((x245^(x246+x247))*x248);

	if (t34 != 6666112LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x250 = INT16_MIN;
	int16_t x251 = -1;
	uint32_t x252 = UINT32_MAX;
	uint32_t t35 = 3995U;

	t35 = ((x249^(x250+x251))*x252);

	if (t35 != 4294934528U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x257 = -3425LL;
	int32_t x258 = INT32_MIN;
	static volatile uint64_t t36 = 6854334404129003899LLU;

	t36 = ((x257^(x258+x259))*x260);

	if (t36 != 1515868313114033984LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x261 = INT64_MAX;
	uint16_t x262 = 0U;
	int32_t x264 = INT32_MIN;

	t37 = ((x261^(x262+x263))*x264);

	if (t37 != 296806790186663936LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x265 = UINT16_MAX;
	int16_t x267 = INT16_MIN;
	static int8_t x268 = -1;
	volatile uint32_t t38 = 0U;

	t38 = ((x265^(x266+x267))*x268);

	if (t38 != 32768U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x273 = INT32_MAX;
	int8_t x274 = INT8_MIN;
	volatile uint64_t x276 = 35129873LLU;
	uint64_t t39 = 121357656223806594LLU;

	t39 = ((x273^(x274+x275))*x276);

	if (t39 != 75440734870172746LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x278 = 352260562517995495LLU;
	int32_t x279 = INT32_MIN;
	uint16_t x280 = 131U;
	volatile uint64_t t40 = 382211573630171468LLU;

	t40 = ((x277^(x278+x279))*x280);

	if (t40 != 9252645261117948201LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x281 = INT32_MAX;
	int32_t x283 = -1;
	uint64_t x284 = 109346324201777626LLU;

	t41 = ((x281^(x282+x283))*x284);

	if (t41 != 8916886443570932186LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x289 = -1;
	int16_t x290 = INT16_MAX;
	uint32_t x291 = 303631707U;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t42 = 227U;

	t42 = ((x289^(x290+x291))*x292);

	if (t42 != 303664475U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x297 = 66U;
	int32_t x298 = -1;
	uint8_t x300 = UINT8_MAX;

	t43 = ((x297^(x298+x299))*x300);

	if (t43 != -17340LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x301 = 2025379710638722LLU;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = -1;
	uint64_t t44 = 410253551594675463LLU;

	t44 = ((x301^(x302+x303))*x304);

	if (t44 != 9225397416565414531LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MIN;
	volatile int32_t x307 = 1;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t45 = 8185282;

	t45 = ((x305^(x306+x307))*x308);

	if (t45 != 2143354880) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x323 = -1;
	int32_t t46 = -651973087;

	t46 = ((x321^(x322+x323))*x324);

	if (t46 != 27686) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x325 = UINT64_MAX;
	uint8_t x328 = 43U;
	volatile uint64_t t47 = 65791LLU;

	t47 = ((x325^(x326+x327))*x328);

	if (t47 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x329 = 7591334U;
	int8_t x330 = INT8_MIN;
	int16_t x331 = 450;
	int8_t x332 = 11;
	uint32_t t48 = 126U;

	t48 = ((x329^(x330+x331))*x332);

	if (t48 != 83502540U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x333 = INT16_MAX;
	int64_t x335 = -223LL;
	volatile int8_t x336 = INT8_MIN;
	volatile int64_t t49 = 3015567LL;

	t49 = ((x333^(x334+x335))*x336);

	if (t49 != 4165760LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x337 = -1;
	int8_t x338 = -14;
	uint64_t x339 = 225866LLU;
	static uint8_t x340 = 6U;
	volatile uint64_t t50 = 34LLU;

	t50 = ((x337^(x338+x339))*x340);

	if (t50 != 18446744073708196498LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x345 = 49U;
	volatile int8_t x346 = 25;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MAX;

	t51 = ((x345^(x346+x347))*x348);

	if (t51 != 37719U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x349 = 31;
	int16_t x351 = -5;
	int32_t t52 = 0;

	t52 = ((x349^(x350+x351))*x352);

	if (t52 != 1686) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x353 = 28396284964LLU;
	static int64_t x354 = -13LL;
	int64_t x356 = INT64_MAX;
	static volatile uint64_t t53 = 2775054674989922243LLU;

	t53 = ((x353^(x354+x355))*x356);

	if (t53 != 18446744045313267930LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MAX;
	int32_t x360 = -1;

	t54 = ((x357^(x358+x359))*x360);

	if (t54 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x361 = UINT16_MAX;
	int32_t x362 = 0;
	int16_t x363 = INT16_MAX;
	volatile int8_t x364 = INT8_MAX;
	volatile int32_t t55 = -149;

	t55 = ((x361^(x362+x363))*x364);

	if (t55 != 4161536) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x365 = 1067U;
	int64_t x367 = INT64_MIN;
	volatile uint32_t x368 = 1U;
	volatile int64_t t56 = -290LL;

	t56 = ((x365^(x366+x367))*x368);

	if (t56 != -9223372036854744108LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x369 = 0U;
	uint32_t x370 = 998U;
	static int16_t x371 = INT16_MAX;
	int16_t x372 = INT16_MIN;
	volatile uint32_t t57 = 27592391U;

	t57 = ((x369^(x370+x371))*x372);

	if (t57 != 3188555776U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x374 = 15;
	int32_t t58 = -29;

	t58 = ((x373^(x374+x375))*x376);

	if (t58 != 14) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x378 = -1;
	static volatile uint32_t x379 = 1884834416U;
	volatile uint64_t t59 = 1135114LLU;

	t59 = ((x377^(x378+x379))*x380);

	if (t59 != 13584241167999369216LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x385 = INT64_MIN;
	int8_t x387 = -1;
	volatile int8_t x388 = 1;
	volatile int64_t t60 = -19539440LL;

	t60 = ((x385^(x386+x387))*x388);

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = -1211376137507775056LL;
	static volatile int32_t x391 = -14;
	volatile int32_t x392 = 0;
	static int64_t t61 = -83029LL;

	t61 = ((x389^(x390+x391))*x392);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x398 = 12;
	volatile int8_t x400 = INT8_MIN;
	volatile uint64_t t62 = 1LLU;

	t62 = ((x397^(x398+x399))*x400);

	if (t62 != 148790631457350912LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x406 = 475140347564825LLU;
	static uint16_t x407 = 93U;
	volatile uint64_t t63 = 121580079434LLU;

	t63 = ((x405^(x406+x407))*x408);

	if (t63 != 17302811355091128107LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x433 = INT64_MIN;
	int8_t x434 = INT8_MAX;
	uint64_t x436 = 1326068219360333352LLU;
	static uint64_t t64 = 193758589539802218LLU;

	t64 = ((x433^(x434+x435))*x436);

	if (t64 != 1063898976016037808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x437 = -1LL;
	static uint64_t x438 = 97511350148208714LLU;
	int8_t x439 = 0;
	uint8_t x440 = UINT8_MAX;
	static uint64_t t65 = 35664LLU;

	t65 = ((x437^(x438+x439))*x440);

	if (t65 != 12028093859625880907LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x445 = -1;
	int8_t x446 = INT8_MAX;
	int16_t x448 = 64;
	int32_t t66 = 26;

	t66 = ((x445^(x446+x447))*x448);

	if (t66 != -8128) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x453 = 1U;
	uint16_t x454 = 672U;
	static int16_t x455 = -4493;
	uint16_t x456 = UINT16_MAX;
	volatile int32_t t67 = -41883327;

	t67 = ((x453^(x454+x455))*x456);

	if (t67 != -250474770) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x469 = -1456;
	int32_t x471 = INT32_MIN;
	int32_t x472 = INT32_MAX;
	volatile uint64_t t68 = 28613814397LLU;

	t68 = ((x469^(x470+x471))*x472);

	if (t68 != 4611689140868610641LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x473 = 0U;
	int16_t x474 = INT16_MIN;
	int32_t t69 = 5514515;

	t69 = ((x473^(x474+x475))*x476);

	if (t69 != -1447424) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x479 = UINT32_MAX;
	uint64_t x480 = 1066LLU;
	volatile uint64_t t70 = 884081254LLU;

	t70 = ((x477^(x478+x479))*x480);

	if (t70 != 2289158472926LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x485 = INT16_MIN;
	int64_t x486 = -779660562538537594LL;
	int8_t x487 = INT8_MIN;
	static volatile int8_t x488 = -1;
	int64_t t71 = -973300LL;

	t71 = ((x485^(x486+x487))*x488);

	if (t71 != -779660562538552582LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	uint16_t x495 = UINT16_MAX;
	volatile int32_t t72 = -28122;

	t72 = ((x493^(x494+x495))*x496);

	if (t72 != -65282) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x501 = 59U;
	uint32_t x502 = UINT32_MAX;
	volatile int32_t x504 = -1;
	volatile uint32_t t73 = 3U;

	t73 = ((x501^(x502+x503))*x504);

	if (t73 != 2147483707U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x505 = 1U;
	uint8_t x506 = UINT8_MAX;
	int32_t x507 = 114995;
	int8_t x508 = -1;

	t74 = ((x505^(x506+x507))*x508);

	if (t74 != 4294852045U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x509 = UINT16_MAX;
	int16_t x511 = INT16_MAX;
	uint64_t x512 = UINT64_MAX;

	t75 = ((x509^(x510+x511))*x512);

	if (t75 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x513 = 1;
	static uint16_t x514 = 4U;
	uint16_t x516 = 0U;
	int32_t t76 = 0;

	t76 = ((x513^(x514+x515))*x516);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x521 = 55535534U;
	static uint32_t x523 = UINT32_MAX;
	uint64_t x524 = 8587994756683124LLU;
	static volatile uint64_t t77 = 67543586613LLU;

	t77 = ((x521^(x522+x523))*x524);

	if (t77 != 4396683734162947208LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x525 = 9U;
	static volatile int64_t x526 = INT64_MIN;
	int64_t t78 = 341014LL;

	t78 = ((x525^(x526+x527))*x528);

	if (t78 != 9223372036854443575LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x533 = -359;
	int32_t x534 = -23292310;
	int64_t x535 = -88271LL;
	int64_t t79 = 7446700188LL;

	t79 = ((x533^(x534+x535))*x536);

	if (t79 != -2992734464LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x544 = -1;
	static int32_t t80 = 1822506;

	t80 = ((x541^(x542+x543))*x544);

	if (t80 != 6371) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x550 = INT16_MAX;
	static uint64_t x551 = 53LLU;
	uint8_t x552 = 24U;
	volatile uint64_t t81 = 31383267730LLU;

	t81 = ((x549^(x550+x551))*x552);

	if (t81 != 18446744073708763912LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x553 = 3805U;
	uint16_t x555 = UINT16_MAX;
	int32_t x556 = -1;
	volatile uint64_t t82 = 3647882690941LLU;

	t82 = ((x553^(x554+x555))*x556);

	if (t82 != 18446744073709489885LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x557 = 1;
	int8_t x558 = -13;
	static uint64_t x559 = 27944835123227550LLU;
	int64_t x560 = INT64_MIN;
	uint64_t t83 = 98767362581328LLU;

	t83 = ((x557^(x558+x559))*x560);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x562 = INT32_MAX;
	volatile uint32_t t84 = 3820U;

	t84 = ((x561^(x562+x563))*x564);

	if (t84 != 2047110821U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x566 = UINT32_MAX;
	volatile int32_t x567 = INT32_MIN;
	static int64_t x568 = -1LL;
	volatile int64_t t85 = -19750LL;

	t85 = ((x565^(x566+x567))*x568);

	if (t85 != -2147483775LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x569 = INT64_MIN;
	uint32_t x570 = UINT32_MAX;
	uint8_t x571 = UINT8_MAX;
	int8_t x572 = -1;
	volatile int64_t t86 = -4397726866LL;

	t86 = ((x569^(x570+x571))*x572);

	if (t86 != 9223372036854775554LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x574 = 3;
	volatile uint32_t x575 = 503839U;
	volatile int32_t x576 = INT32_MIN;
	volatile uint32_t t87 = 886U;

	t87 = ((x573^(x574+x575))*x576);

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x577 = 42754572U;
	volatile uint64_t x578 = 84710LLU;
	int64_t x579 = 797131787158069339LL;
	int16_t x580 = -90;
	uint64_t t88 = 1431141LLU;

	t88 = ((x577^(x578+x579))*x580);

	if (t88 != 2045115448365267694LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x581 = -7929405;
	volatile uint32_t x582 = 93883615U;
	int64_t t89 = -82LL;

	t89 = ((x581^(x582+x583))*x584);

	if (t89 != -9223372036756180252LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x586 = -1LL;
	int16_t x587 = 230;
	volatile int32_t x588 = 0;
	int64_t t90 = -60016098153550LL;

	t90 = ((x585^(x586+x587))*x588);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x589 = INT64_MIN;
	int64_t x590 = INT64_MIN;
	uint32_t x591 = 417U;
	int64_t t91 = 50LL;

	t91 = ((x589^(x590+x591))*x592);

	if (t91 != 106335LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x594 = -1;
	volatile int32_t x596 = INT32_MIN;

	t92 = ((x593^(x594+x595))*x596);

	if (t92 != 13932779736771067904LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x601 = INT32_MAX;
	int16_t x602 = 1505;
	static uint32_t x604 = 44U;
	int64_t t93 = 3865811558LL;

	t93 = ((x601^(x602+x603))*x604);

	if (t93 != 94489214204LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x605 = 40U;
	static uint64_t x606 = 35651106609233757LLU;
	int8_t x607 = INT8_MIN;
	int64_t x608 = INT64_MIN;
	uint64_t t94 = 637315LLU;

	t94 = ((x605^(x606+x607))*x608);

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x617 = 2U;
	uint32_t x619 = 1789281893U;
	int16_t x620 = INT16_MIN;
	uint64_t t95 = 367136283445628431LLU;

	t95 = ((x617^(x618+x619))*x620);

	if (t95 != 18446685442520449024LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x621 = -1819092157LL;
	int32_t x623 = 714;
	int64_t x624 = -13287427LL;
	int64_t t96 = -690LL;

	t96 = ((x621^(x622+x623))*x624);

	if (t96 != 24171060102165346LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x626 = UINT16_MAX;
	volatile int16_t x628 = INT16_MIN;
	volatile int32_t t97 = 0;

	t97 = ((x625^(x626+x627))*x628);

	if (t97 != 2143223808) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x629 = 85865153374LLU;
	static int8_t x630 = INT8_MAX;
	uint16_t x631 = 176U;
	static volatile uint32_t x632 = UINT32_MAX;
	volatile uint64_t t98 = 210623392723660585LLU;

	t98 = ((x629^(x630+x631))*x632);

	if (t98 != 18299887103100173711LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x633 = 326;
	int16_t x634 = -1;
	uint32_t x635 = 12U;
	int8_t x636 = -1;
	static uint32_t t99 = 2008186U;

	t99 = ((x633^(x634+x635))*x636);

	if (t99 != 4294966963U) { NG(); } else { ; }
	
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

