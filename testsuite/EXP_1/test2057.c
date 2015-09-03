#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x13 = -323;
volatile uint64_t t2 = 390181478310528LLU;
volatile uint16_t x21 = 5U;
int8_t x22 = 5;
volatile int16_t x25 = INT16_MIN;
int16_t x26 = 104;
uint32_t x38 = 1876U;
uint32_t x50 = UINT32_MAX;
volatile int16_t x52 = INT16_MAX;
int64_t x64 = 15873LL;
uint64_t t13 = 518773478231079900LLU;
uint32_t x95 = UINT32_MAX;
uint64_t x108 = UINT64_MAX;
static volatile uint64_t t17 = 456201192854564LLU;
volatile int32_t t18 = 454790;
uint8_t x129 = UINT8_MAX;
volatile int8_t x144 = -1;
static int8_t x155 = -6;
int8_t x157 = INT8_MIN;
int64_t x159 = -1LL;
uint8_t x161 = 13U;
static volatile int16_t x163 = -801;
static int32_t t26 = 1521895;
uint64_t t27 = 65754553231593246LLU;
volatile uint64_t x186 = UINT64_MAX;
volatile uint64_t t28 = 2650178318LLU;
uint32_t x202 = 22767U;
static int64_t x204 = -1LL;
volatile int64_t t33 = 1160068LL;
uint32_t x213 = 4754666U;
uint16_t x221 = 1U;
uint64_t x224 = 974835790LLU;
uint64_t x232 = UINT64_MAX;
uint8_t x255 = 2U;
int64_t t42 = 0LL;
int16_t x263 = INT16_MIN;
int8_t x271 = -1;
uint8_t x272 = 10U;
int32_t t45 = -24476364;
uint16_t x280 = 133U;
uint64_t x285 = UINT64_MAX;
static volatile int8_t x288 = -1;
static volatile uint16_t x289 = UINT16_MAX;
volatile int32_t x292 = INT32_MIN;
volatile uint8_t x300 = 2U;
int64_t x320 = -296053991106410162LL;
uint64_t t55 = 303690LLU;
int32_t x338 = 26218023;
static volatile int16_t x345 = INT16_MAX;
volatile int32_t t58 = -20046;
int64_t x361 = -1LL;
volatile uint64_t x363 = UINT64_MAX;
uint16_t x366 = 32536U;
static volatile int32_t x370 = 0;
int32_t x376 = 5332895;
static volatile uint32_t t63 = 165U;
int64_t x394 = -1LL;
volatile int64_t x402 = INT64_MIN;
volatile uint64_t x410 = 1502704876082375LLU;
int8_t x425 = -1;
static uint8_t x427 = 26U;
volatile int32_t t71 = -26835;
int8_t x449 = 12;
int32_t x450 = -1;
volatile uint64_t t76 = 242930LLU;
volatile uint8_t x486 = UINT8_MAX;
volatile int8_t x490 = INT8_MIN;
volatile int32_t t79 = -58031717;
uint64_t x515 = 6632LLU;
int32_t x519 = -119230739;
uint64_t x522 = UINT64_MAX;
int32_t x543 = INT32_MAX;
uint32_t x544 = 836825U;
uint32_t x557 = 127295371U;
volatile uint64_t t92 = 4533749LLU;
volatile int16_t x571 = INT16_MAX;
int64_t x576 = 292301LL;
int16_t x595 = INT16_MIN;
volatile uint64_t t97 = 4858718163380874769LLU;
int32_t x597 = INT32_MIN;
static uint64_t x607 = 1LLU;


void f0(void) {
	int16_t x5 = -2;
	uint16_t x6 = 625U;
	int64_t x7 = -1LL;
	int32_t x8 = 3831;
	int64_t t0 = 0LL;

	t0 = (((x5^x6)*x7)*x8);

	if (t0 != 2394375LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x14 = 32378259272046LLU;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;
	static uint64_t t1 = 2549122338741272LLU;

	t1 = (((x13^x14)*x15)*x16);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = -1;
	int8_t x18 = -24;
	static uint64_t x19 = 1214526336895LLU;
	int16_t x20 = INT16_MIN;

	t2 = (((x17^x18)*x19)*x20);

	if (t2 != 17531399296539918336LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x23 = 1;
	static uint32_t x24 = 34032595U;
	static uint32_t t3 = 793584930U;

	t3 = (((x21^x22)*x23)*x24);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x27 = -1;
	int32_t x28 = 20025;
	volatile int32_t t4 = 39;

	t4 = (((x25^x26)*x27)*x28);

	if (t4 != 654096600) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -127523;
	int16_t x30 = INT16_MIN;
	int32_t x31 = -1;
	static uint64_t x32 = 926946471316LLU;
	uint64_t t5 = 1003231464734645022LLU;

	t5 = (((x29^x30)*x31)*x32);

	if (t5 != 18352331794766603068LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -1;
	uint32_t x39 = UINT32_MAX;
	static volatile uint8_t x40 = 37U;
	uint32_t t6 = 586803101U;

	t6 = (((x37^x38)*x39)*x40);

	if (t6 != 69449U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MAX;
	volatile uint64_t x43 = 65335358LLU;
	uint16_t x44 = 106U;
	uint64_t t7 = 193692591451317LLU;

	t7 = (((x41^x42)*x43)*x44);

	if (t7 != 879544589396LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x49 = INT16_MAX;
	int16_t x51 = 24;
	volatile uint32_t t8 = 3662U;

	t8 = (((x49^x50)*x51)*x52);

	if (t8 != 786432U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x57 = 6U;
	uint64_t x58 = 73LLU;
	int64_t x59 = INT64_MIN;
	int16_t x60 = -1;
	volatile uint64_t t9 = 93546506701369LLU;

	t9 = (((x57^x58)*x59)*x60);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = INT16_MIN;
	uint64_t x62 = 29808518377LLU;
	int64_t x63 = -1LL;
	volatile uint64_t t10 = 761483803LLU;

	t10 = (((x61^x62)*x63)*x64);

	if (t10 != 473150312230167LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x69 = 26708U;
	static int64_t x70 = -31LL;
	volatile uint16_t x71 = UINT16_MAX;
	static volatile int32_t x72 = 46;
	static int64_t t11 = 4059256799009LL;

	t11 = (((x69^x70)*x71)*x72);

	if (t11 != -80487072390LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x77 = 6677U;
	int16_t x78 = INT16_MIN;
	static volatile int16_t x79 = INT16_MAX;
	static uint32_t x80 = UINT32_MAX;
	uint32_t t12 = 391814756U;

	t12 = (((x77^x78)*x79)*x80);

	if (t12 != 854923797U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	static volatile uint64_t x91 = UINT64_MAX;
	static int64_t x92 = INT64_MAX;

	t13 = (((x89^x90)*x91)*x92);

	if (t13 != 2147483520LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = INT8_MIN;
	int8_t x94 = INT8_MIN;
	static int16_t x96 = 20;
	volatile uint32_t t14 = 0U;

	t14 = (((x93^x94)*x95)*x96);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x97 = 5690U;
	int32_t x98 = INT32_MIN;
	int16_t x99 = -1;
	uint64_t x100 = 3LLU;
	uint64_t t15 = 46181LLU;

	t15 = (((x97^x98)*x99)*x100);

	if (t15 != 6442433874LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 75LLU;
	int64_t x104 = -1LL;
	volatile uint64_t t16 = 733562LLU;

	t16 = (((x101^x102)*x103)*x104);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x106 = 31569275858LL;
	uint32_t x107 = 189611323U;

	t17 = (((x105^x106)*x107)*x108);

	if (t17 != 12460851943408079777LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x117 = 92U;
	int32_t x118 = 2;
	volatile uint8_t x119 = 0U;
	uint8_t x120 = UINT8_MAX;

	t18 = (((x117^x118)*x119)*x120);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x121 = UINT16_MAX;
	static uint32_t x122 = UINT32_MAX;
	static int16_t x123 = 49;
	uint8_t x124 = 0U;
	uint32_t t19 = 3830U;

	t19 = (((x121^x122)*x123)*x124);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x125 = 77614303923246LL;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MIN;
	int8_t x128 = -1;
	volatile int64_t t20 = 7772901375LL;

	t20 = (((x125^x126)*x127)*x128);

	if (t20 != 2543128055692951552LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x130 = INT16_MAX;
	volatile int8_t x131 = 30;
	uint32_t x132 = 2U;
	volatile uint32_t t21 = 146160951U;

	t21 = (((x129^x130)*x131)*x132);

	if (t21 != 1950720U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x133 = 0LL;
	uint8_t x134 = 2U;
	static uint16_t x135 = UINT16_MAX;
	uint8_t x136 = UINT8_MAX;
	volatile int64_t t22 = 3371907887474343LL;

	t22 = (((x133^x134)*x135)*x136);

	if (t22 != 33422850LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x141 = 3686258367LLU;
	int16_t x142 = -6427;
	uint8_t x143 = 3U;
	volatile uint64_t t23 = 484661691496LLU;

	t23 = (((x141^x142)*x143)*x144);

	if (t23 != 11058769650LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x153 = 1837308894LLU;
	int16_t x154 = INT16_MAX;
	int8_t x156 = INT8_MAX;
	uint64_t t24 = 3LLU;

	t24 = (((x153^x154)*x155)*x156);

	if (t24 != 18446742673666078150LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x158 = 114U;
	int64_t x160 = 12LL;
	volatile int64_t t25 = -306685415LL;

	t25 = (((x157^x158)*x159)*x160);

	if (t25 != 168LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x162 = -1;
	int16_t x164 = INT16_MAX;

	t26 = (((x161^x162)*x163)*x164);

	if (t26 != 367449138) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x181 = UINT16_MAX;
	volatile uint64_t x182 = 26419LLU;
	int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MIN;

	t27 = (((x181^x182)*x183)*x184);

	if (t27 != 10752124208021504LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x185 = INT32_MAX;
	static uint8_t x187 = 55U;
	static volatile uint8_t x188 = UINT8_MAX;

	t28 = (((x185^x186)*x187)*x188);

	if (t28 != 18446713955251388416LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x189 = 7U;
	volatile uint8_t x190 = 23U;
	volatile int16_t x191 = -14;
	int64_t x192 = 13039960LL;
	static volatile int64_t t29 = 57272102577129048LL;

	t29 = (((x189^x190)*x191)*x192);

	if (t29 != -2920951040LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x193 = INT64_MAX;
	uint32_t x194 = 30438889U;
	int32_t x195 = -1;
	int8_t x196 = -1;
	volatile int64_t t30 = 7579444338072LL;

	t30 = (((x193^x194)*x195)*x196);

	if (t30 != 9223372036824336918LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x197 = UINT8_MAX;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = 15097;
	int32_t x200 = INT32_MIN;
	int32_t t31 = 2835790;

	t31 = (((x197^x198)*x199)*x200);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x201 = INT8_MIN;
	volatile uint64_t x203 = UINT64_MAX;
	uint64_t t32 = 54LLU;

	t32 = (((x201^x202)*x203)*x204);

	if (t32 != 4294944623LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x205 = -339245700267693274LL;
	int8_t x206 = -1;
	int8_t x207 = -1;
	uint8_t x208 = 1U;

	t33 = (((x205^x206)*x207)*x208);

	if (t33 != -339245700267693273LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x209 = 0U;
	int64_t x210 = -1LL;
	uint64_t x211 = 30452672LLU;
	int32_t x212 = -1;
	uint64_t t34 = 13187070894LLU;

	t34 = (((x209^x210)*x211)*x212);

	if (t34 != 30452672LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x214 = -949;
	volatile int16_t x215 = -1;
	int8_t x216 = INT8_MIN;
	uint32_t t35 = 1954U;

	t35 = (((x213^x214)*x215)*x216);

	if (t35 != 3686289536U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x222 = 10812030676259994LLU;
	volatile uint64_t x223 = 1775575LLU;
	uint64_t t36 = 32746298753LLU;

	t36 = (((x221^x222)*x223)*x224);

	if (t36 != 2565322893090428854LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x229 = 30U;
	int32_t x230 = 24471889;
	int64_t x231 = 0LL;
	uint64_t t37 = 23968225578220LLU;

	t37 = (((x229^x230)*x231)*x232);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x237 = 557510601269956912LLU;
	int64_t x238 = INT64_MIN;
	volatile uint32_t x239 = 104501U;
	uint8_t x240 = 1U;
	volatile uint64_t t38 = 7752LLU;

	t38 = (((x237^x238)*x239)*x240);

	if (t38 != 14820930573858033392LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x245 = INT32_MIN;
	static uint64_t x246 = 571997549715986695LLU;
	int16_t x247 = -1;
	int8_t x248 = 61;
	volatile uint64_t t39 = 59259LLU;

	t39 = (((x245^x246)*x247)*x248);

	if (t39 != 16445106501508335957LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x249 = 1034859854474043LL;
	int32_t x250 = INT32_MIN;
	static uint16_t x251 = 24U;
	static int8_t x252 = INT8_MIN;
	static volatile int64_t t40 = 5980066711669961LL;

	t40 = (((x249^x250)*x251)*x252);

	if (t40 != 3179093800391359488LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x253 = 3584222LLU;
	static uint64_t x254 = 2896053922621688LLU;
	int32_t x256 = INT32_MIN;
	volatile uint64_t t41 = 28LLU;

	t41 = (((x253^x254)*x255)*x256);

	if (t41 != 16611430305324072960LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x257 = -9;
	int16_t x258 = -1131;
	int64_t x259 = -1LL;
	int32_t x260 = INT32_MIN;

	t42 = (((x257^x258)*x259)*x260);

	if (t42 != 2409476653056LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x261 = 13U;
	int8_t x262 = -1;
	volatile int8_t x264 = INT8_MAX;
	volatile int32_t t43 = -1480;

	t43 = (((x261^x262)*x263)*x264);

	if (t43 != 58261504) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x265 = 36U;
	int16_t x266 = 1191;
	uint8_t x267 = 3U;
	int64_t x268 = -1LL;
	static int64_t t44 = -475104815547918328LL;

	t44 = (((x265^x266)*x267)*x268);

	if (t44 != -3465LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x269 = -1;
	int32_t x270 = -178;

	t45 = (((x269^x270)*x271)*x272);

	if (t45 != -1770) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x277 = INT32_MIN;
	uint64_t x278 = 32616661284LLU;
	int16_t x279 = INT16_MAX;
	uint64_t t46 = 589LLU;

	t46 = (((x277^x278)*x279)*x280);

	if (t46 != 18298766364199069772LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x281 = -1LL;
	int8_t x282 = INT8_MAX;
	uint64_t x283 = 289223LLU;
	volatile uint16_t x284 = UINT16_MAX;
	static uint64_t t47 = 25112157383LLU;

	t47 = (((x281^x282)*x283)*x284);

	if (t47 != 18446741647568200576LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x286 = INT32_MIN;
	static int8_t x287 = INT8_MAX;
	volatile uint64_t t48 = 9LLU;

	t48 = (((x285^x286)*x287)*x288);

	if (t48 != 18446743800979128447LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x290 = UINT32_MAX;
	volatile uint32_t x291 = 15425892U;
	uint32_t t49 = 5496U;

	t49 = (((x289^x290)*x291)*x292);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MAX;
	static uint16_t x299 = 1U;
	static int32_t t50 = -8456;

	t50 = (((x297^x298)*x299)*x300);

	if (t50 != 65280) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x305 = UINT64_MAX;
	volatile int16_t x306 = -1;
	static uint8_t x307 = UINT8_MAX;
	volatile uint32_t x308 = 748U;
	volatile uint64_t t51 = 185344932084505401LLU;

	t51 = (((x305^x306)*x307)*x308);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x313 = 0U;
	static int8_t x314 = -1;
	uint8_t x315 = 33U;
	int16_t x316 = INT16_MAX;
	int32_t t52 = -5299015;

	t52 = (((x313^x314)*x315)*x316);

	if (t52 != -1081311) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x317 = -1;
	volatile int32_t x318 = -1;
	static int8_t x319 = -9;
	volatile int64_t t53 = -230747356LL;

	t53 = (((x317^x318)*x319)*x320);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x325 = 59858263510LLU;
	static int8_t x326 = INT8_MAX;
	static int32_t x327 = INT32_MAX;
	static int32_t x328 = -1;
	volatile uint64_t t54 = 557086862215901992LLU;

	t54 = (((x325^x326)*x327)*x328);

	if (t54 != 582566587061804457LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x329 = -3LL;
	static int64_t x330 = -1LL;
	int32_t x331 = INT32_MIN;
	uint64_t x332 = 3420853350LLU;

	t55 = (((x329^x330)*x331)*x332);

	if (t55 != 3754290811047510016LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x337 = -1;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = INT16_MIN;
	uint64_t t56 = 2LLU;

	t56 = (((x337^x338)*x339)*x340);

	if (t56 != 18446743214597341184LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x346 = 20907963U;
	static int32_t x347 = -6530129;
	uint64_t x348 = 5287378LLU;
	volatile uint64_t t57 = 6272087843828LLU;

	t57 = (((x345^x346)*x347)*x348);

	if (t57 != 9897601393792440LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x349 = INT8_MIN;
	static uint16_t x350 = 0U;
	int16_t x351 = 76;
	int16_t x352 = 27;

	t58 = (((x349^x350)*x351)*x352);

	if (t58 != -262656) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x362 = INT32_MIN;
	volatile int64_t x364 = 1348509248097LL;
	uint64_t t59 = 57342654916594LLU;

	t59 = (((x361^x362)*x363)*x364);

	if (t59 != 237261455826233953LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x365 = 4129458338146LLU;
	int64_t x367 = 1LL;
	int32_t x368 = INT32_MIN;
	static volatile uint64_t t60 = 730465LLU;

	t60 = (((x365^x366)*x367)*x368);

	if (t60 != 4939635990139502592LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x369 = INT32_MAX;
	int32_t x371 = -1;
	uint32_t x372 = 38666655U;
	uint32_t t61 = 4481468U;

	t61 = (((x369^x370)*x371)*x372);

	if (t61 != 2186150303U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x373 = UINT16_MAX;
	uint64_t x374 = 3606512833254LLU;
	int8_t x375 = 2;
	uint64_t t62 = 3613136201490842LLU;

	t62 = (((x373^x374)*x375)*x376);

	if (t62 != 1572820261160227598LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x377 = INT32_MAX;
	int8_t x378 = 15;
	static uint32_t x379 = 117786U;
	volatile int16_t x380 = INT16_MAX;

	t63 = (((x377^x378)*x379)*x380);

	if (t63 != 2672607648U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x385 = -1LL;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 7U;
	uint16_t x388 = 174U;
	volatile int64_t t64 = 2171340150LL;

	t64 = (((x385^x386)*x387)*x388);

	if (t64 != 154686LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x393 = 3062353U;
	uint16_t x395 = 50U;
	static volatile int32_t x396 = -1;
	static volatile int64_t t65 = -32LL;

	t65 = (((x393^x394)*x395)*x396);

	if (t65 != 153117700LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x397 = INT64_MIN;
	uint64_t x398 = 1533LLU;
	int64_t x399 = INT64_MIN;
	volatile int64_t x400 = INT64_MIN;
	volatile uint64_t t66 = 7129812694817LLU;

	t66 = (((x397^x398)*x399)*x400);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x401 = INT64_MIN;
	volatile uint64_t x403 = 1656671LLU;
	int8_t x404 = 0;
	static volatile uint64_t t67 = 56282612LLU;

	t67 = (((x401^x402)*x403)*x404);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x409 = 57293486459216LL;
	int64_t x411 = -6151129841474LL;
	int8_t x412 = -26;
	static uint64_t t68 = 1174203LLU;

	t68 = (((x409^x410)*x411)*x412);

	if (t68 != 10008820670513316396LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x417 = INT16_MIN;
	uint16_t x418 = 1U;
	uint32_t x419 = 1075308U;
	int64_t x420 = -1LL;
	int64_t t69 = -203211140811648061LL;

	t69 = (((x417^x418)*x419)*x420);

	if (t69 != -3420088428LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x426 = INT16_MAX;
	volatile int8_t x428 = INT8_MAX;
	volatile int32_t t70 = -838284;

	t70 = (((x425^x426)*x427)*x428);

	if (t70 != -108199936) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x445 = -3786;
	static volatile uint16_t x446 = 1U;
	int8_t x447 = INT8_MAX;
	static int16_t x448 = 1;

	t71 = (((x445^x446)*x447)*x448);

	if (t71 != -480695) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x451 = UINT64_MAX;
	uint8_t x452 = 2U;
	uint64_t t72 = 5143900705456527294LLU;

	t72 = (((x449^x450)*x451)*x452);

	if (t72 != 26LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x453 = UINT32_MAX;
	volatile int16_t x454 = INT16_MAX;
	static uint64_t x455 = 1LLU;
	uint8_t x456 = UINT8_MAX;
	volatile uint64_t t73 = 5183523515207LLU;

	t73 = (((x453^x454)*x455)*x456);

	if (t73 != 1095208304640LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x461 = -7402616690640365LL;
	volatile int64_t x462 = INT64_MIN;
	volatile int8_t x463 = 1;
	uint64_t x464 = 1232LLU;
	volatile uint64_t t74 = 84LLU;

	t74 = (((x461^x462)*x463)*x464);

	if (t74 != 9326720310840621936LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x469 = INT64_MIN;
	uint16_t x470 = 0U;
	uint64_t x471 = 135007237310735920LLU;
	int16_t x472 = INT16_MIN;
	static volatile uint64_t t75 = 6908470LLU;

	t75 = (((x469^x470)*x471)*x472);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x473 = INT8_MAX;
	uint32_t x474 = 514501U;
	uint64_t x475 = UINT64_MAX;
	volatile int32_t x476 = -582239;

	t76 = (((x473^x474)*x475)*x476);

	if (t76 != 299556143110LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x485 = 4909696LL;
	uint16_t x487 = 1445U;
	static uint16_t x488 = 58U;
	int64_t t77 = -1198261LL;

	t77 = (((x485^x486)*x487)*x488);

	if (t77 != 411481537950LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x489 = 31442970742941197LLU;
	int32_t x491 = 6902764;
	int64_t x492 = -1LL;
	uint64_t t78 = 12186022806LLU;

	t78 = (((x489^x490)*x491)*x492);

	if (t78 != 17462470235578088196LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x493 = -1;
	int8_t x494 = INT8_MIN;
	static int8_t x495 = 0;
	int8_t x496 = 1;

	t79 = (((x493^x494)*x495)*x496);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x497 = 14501LLU;
	volatile uint8_t x498 = 27U;
	volatile int32_t x499 = -1;
	int64_t x500 = INT64_MAX;
	static volatile uint64_t t80 = 3LLU;

	t80 = (((x497^x498)*x499)*x500);

	if (t80 != 14526LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x501 = UINT32_MAX;
	uint64_t x502 = UINT64_MAX;
	uint8_t x503 = 21U;
	int64_t x504 = INT64_MAX;
	uint64_t t81 = 378334857692LLU;

	t81 = (((x501^x502)*x503)*x504);

	if (t81 != 90194313216LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x509 = INT16_MIN;
	int32_t x510 = INT32_MIN;
	volatile int64_t x511 = -1LL;
	static int16_t x512 = INT16_MIN;
	int64_t t82 = 78329117LL;

	t82 = (((x509^x510)*x511)*x512);

	if (t82 != 70367670435840LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x513 = INT8_MIN;
	int8_t x514 = 14;
	volatile int16_t x516 = 144;
	volatile uint64_t t83 = 2565824049454168LLU;

	t83 = (((x513^x514)*x515)*x516);

	if (t83 != 18446744073600680704LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x517 = 0;
	volatile uint64_t x518 = 181819322073950761LLU;
	volatile int16_t x520 = -118;
	volatile uint64_t t84 = 1033288216649LLU;

	t84 = (((x517^x518)*x519)*x520);

	if (t84 != 16925430440969634066LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x521 = 47U;
	static int16_t x523 = INT16_MAX;
	int32_t x524 = INT32_MAX;
	volatile uint64_t t85 = 2979960266873720LLU;

	t85 = (((x521^x522)*x523)*x524);

	if (t85 != 18443366477069811664LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x529 = 58521LLU;
	uint8_t x530 = 0U;
	volatile uint8_t x531 = UINT8_MAX;
	volatile int64_t x532 = -1LL;
	static uint64_t t86 = 67270033387410LLU;

	t86 = (((x529^x530)*x531)*x532);

	if (t86 != 18446744073694628761LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x533 = -1;
	static uint8_t x534 = UINT8_MAX;
	static int64_t x535 = -906105LL;
	static volatile int8_t x536 = -1;
	int64_t t87 = -641394660018015LL;

	t87 = (((x533^x534)*x535)*x536);

	if (t87 != -231962880LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x537 = 869542U;
	volatile int16_t x538 = INT16_MIN;
	uint32_t x539 = 101U;
	static int8_t x540 = INT8_MIN;
	static volatile uint32_t t88 = 433695785U;

	t88 = (((x537^x538)*x539)*x540);

	if (t88 != 2620735744U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x541 = 263710792378LLU;
	uint16_t x542 = UINT16_MAX;
	uint64_t t89 = 31842784LLU;

	t89 = (((x541^x542)*x543)*x544);

	if (t89 != 16649230177938969731LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x545 = UINT64_MAX;
	int32_t x546 = INT32_MAX;
	volatile int8_t x547 = INT8_MIN;
	int8_t x548 = -1;
	static uint64_t t90 = 7126242459LLU;

	t90 = (((x545^x546)*x547)*x548);

	if (t90 != 18446743798831644672LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x558 = 0U;
	int16_t x559 = INT16_MAX;
	int8_t x560 = INT8_MIN;
	uint32_t t91 = 391643048U;

	t91 = (((x557^x558)*x559)*x560);

	if (t91 != 3899639168U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x561 = 13496948552791093LLU;
	volatile int64_t x562 = 29LL;
	static uint32_t x563 = 38748U;
	static int64_t x564 = -1LL;

	t92 = (((x561^x562)*x563)*x564);

	if (t92 != 11975815614028229024LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x565 = 1U;
	uint64_t x566 = 395169596935810448LLU;
	int64_t x567 = -446335645614LL;
	uint8_t x568 = 2U;
	uint64_t t93 = 100537559942LLU;

	t93 = (((x565^x566)*x567)*x568);

	if (t93 != 13308121816528404708LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x569 = UINT16_MAX;
	uint64_t x570 = 23844631LLU;
	uint32_t x572 = 2U;
	uint64_t t94 = 35150273030843308LLU;

	t94 = (((x569^x570)*x571)*x572);

	if (t94 != 1559711821360LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x573 = -1LL;
	static uint16_t x574 = 31U;
	int8_t x575 = -1;
	static int64_t t95 = 35366896201LL;

	t95 = (((x573^x574)*x575)*x576);

	if (t95 != 9353632LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x581 = -226371LL;
	int64_t x582 = INT64_MAX;
	uint64_t x583 = 55148661989LLU;
	int64_t x584 = INT64_MIN;
	volatile uint64_t t96 = 3572924921372481LLU;

	t96 = (((x581^x582)*x583)*x584);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x593 = 2U;
	uint64_t x594 = 893999460LLU;
	int16_t x596 = INT16_MIN;

	t97 = (((x593^x594)*x595)*x596);

	if (t97 != 959924612982898688LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x598 = -1LL;
	static uint32_t x599 = 1574U;
	uint16_t x600 = UINT16_MAX;
	volatile int64_t t98 = 157905593016814LL;

	t98 = (((x597^x598)*x599)*x600);

	if (t98 != 221517426428872230LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x605 = 13;
	uint32_t x606 = UINT32_MAX;
	static int8_t x608 = 32;
	static volatile uint64_t t99 = 17328775107LLU;

	t99 = (((x605^x606)*x607)*x608);

	if (t99 != 137438953024LLU) { NG(); } else { ; }
	
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

