#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x17 = INT8_MIN;
int8_t x26 = -17;
int32_t x40 = -8662339;
uint64_t t2 = 669987039107740547LLU;
uint32_t x42 = 1U;
static uint32_t t3 = 747298U;
int16_t x58 = -1;
int8_t x63 = INT8_MIN;
int64_t t6 = 955136LL;
int16_t x66 = -1;
volatile uint32_t x73 = UINT32_MAX;
int32_t x75 = INT32_MIN;
int16_t x92 = INT16_MIN;
int16_t x96 = -1;
uint32_t x109 = 215403315U;
uint32_t x110 = UINT32_MAX;
uint64_t x117 = 232727481444LLU;
int64_t x118 = -10564382963LL;
uint64_t x119 = 1195LLU;
int16_t x124 = INT16_MAX;
static int8_t x148 = -1;
uint32_t t16 = 82803154U;
int32_t x167 = -1;
static uint8_t x169 = 0U;
uint64_t x170 = 172684818156LLU;
uint16_t x187 = 6U;
static volatile int32_t x188 = INT32_MAX;
int16_t x204 = -1883;
static uint64_t x207 = 294333LLU;
int64_t x224 = 49202493937829986LL;
int32_t x231 = INT32_MAX;
static volatile uint64_t t26 = 590693957073193LLU;
uint64_t x233 = UINT64_MAX;
int64_t x242 = -1LL;
int32_t x243 = INT32_MAX;
volatile uint32_t t29 = 297U;
int64_t x251 = INT64_MAX;
int16_t x253 = -1;
volatile int8_t x255 = -1;
volatile int32_t t31 = INT32_MAX;
volatile int32_t x257 = 1162;
int32_t t33 = -899;
uint64_t t34 = 631232092LLU;
static volatile int32_t t35 = INT32_MAX;
int64_t x294 = INT64_MIN;
volatile int64_t t39 = 394217865759350LL;
int8_t x318 = INT8_MIN;
uint16_t x319 = UINT16_MAX;
static uint8_t x320 = UINT8_MAX;
int32_t x324 = -1;
int64_t x327 = 524620510967LL;
int64_t x334 = -929219293587528LL;
uint16_t x335 = 42U;
int32_t x354 = -78;
volatile int32_t t46 = 1;
uint64_t x371 = UINT64_MAX;
uint64_t x393 = 89202114005273LLU;
int8_t x394 = 0;
volatile uint64_t t50 = 4803065393652845LLU;
uint32_t x413 = 36619U;
volatile uint32_t t52 = 21169752U;
static uint32_t x430 = 3750136U;
uint32_t x433 = UINT32_MAX;
int16_t x435 = INT16_MIN;
int8_t x436 = INT8_MIN;
uint64_t x443 = 22424156LLU;
volatile int32_t t57 = -7;
int64_t x448 = INT64_MIN;
int16_t x450 = INT16_MAX;
static uint32_t x451 = UINT32_MAX;
volatile int32_t x452 = -1;
uint16_t x453 = UINT16_MAX;
int64_t x471 = -1LL;
int8_t x475 = INT8_MIN;
volatile int16_t x486 = INT16_MIN;
volatile int32_t t65 = 23;
volatile int8_t x494 = 40;
static int16_t x495 = -44;
static int32_t x497 = 74;
volatile uint64_t t68 = 3560826806581862LLU;
static volatile uint32_t x502 = 5U;
int16_t x522 = 5;
uint8_t x524 = 1U;
int16_t x534 = INT16_MIN;
uint64_t x546 = 178LLU;
static int64_t x556 = -1093151697387246LL;
int32_t x562 = INT32_MAX;
int32_t t77 = -66001086;
uint32_t x570 = 47491U;
uint32_t x571 = 1615017U;
int16_t x573 = -1;
int16_t x575 = -2;
static volatile int64_t x578 = INT64_MIN;
int64_t t80 = -4463634024323420999LL;
volatile int8_t x586 = -44;
int64_t x588 = INT64_MIN;
volatile uint32_t t81 = 131U;
int32_t x589 = -1;
int32_t x594 = 32069;
uint64_t t84 = 84802LLU;
int8_t x631 = INT8_MAX;
uint32_t t86 = 93U;
uint32_t x636 = 108586U;
volatile int32_t t87 = 2436;
uint32_t x642 = UINT32_MAX;
static volatile int8_t x644 = -1;
uint8_t x651 = UINT8_MAX;
volatile uint64_t t90 = 19703LLU;
int16_t x666 = 825;
uint16_t x667 = UINT16_MAX;
volatile uint32_t x668 = UINT32_MAX;
uint8_t x673 = UINT8_MAX;
uint64_t x675 = UINT64_MAX;
int16_t x679 = INT16_MAX;
static uint32_t x681 = 1136U;
static int16_t x684 = -1;
static uint8_t x689 = UINT8_MAX;
int32_t t97 = 103187;
volatile uint32_t x697 = 663695365U;
static int8_t x700 = INT8_MIN;
int8_t x703 = INT8_MAX;


void f0(void) {
	int64_t x18 = -1LL;
	int64_t x19 = -1LL;
	uint64_t x20 = 579693600749LLU;
	int64_t t0 = -25476583350LL;

	t0 = ((x17^x18)<<(x19<x20));

	if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x25 = -1;
	static int16_t x27 = INT16_MIN;
	volatile int64_t x28 = INT64_MIN;
	int32_t t1 = -63;

	t1 = ((x25^x26)<<(x27<x28));

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x37 = -1;
	uint64_t x38 = 11587890651LLU;
	int32_t x39 = 54398;

	t2 = ((x37^x38)<<(x39<x40));

	if (t2 != 18446744062121660964LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x41 = 2U;
	int32_t x43 = INT32_MIN;
	volatile int16_t x44 = -1;

	t3 = ((x41^x42)<<(x43<x44));

	if (t3 != 6U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x53 = -1;
	static int64_t x54 = -18372101488769465LL;
	static uint64_t x55 = UINT64_MAX;
	static volatile uint64_t x56 = 12759343LLU;
	volatile int64_t t4 = -290399LL;

	t4 = ((x53^x54)<<(x55<x56));

	if (t4 != 18372101488769464LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x57 = -1;
	int16_t x59 = -135;
	int8_t x60 = INT8_MIN;
	int32_t t5 = -2637979;

	t5 = ((x57^x58)<<(x59<x60));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x61 = 1LL;
	int16_t x62 = 3897;
	int8_t x64 = INT8_MIN;

	t6 = ((x61^x62)<<(x63<x64));

	if (t6 != 3896LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x65 = -1;
	volatile uint8_t x67 = 1U;
	volatile int64_t x68 = INT64_MIN;
	volatile int32_t t7 = -5840;

	t7 = ((x65^x66)<<(x67<x68));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x74 = 791353;
	static volatile int8_t x76 = -1;
	static uint32_t t8 = 430U;

	t8 = ((x73^x74)<<(x75<x76));

	if (t8 != 4293384588U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x81 = 0U;
	int8_t x82 = 1;
	static uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;
	int32_t t9 = 816917;

	t9 = ((x81^x82)<<(x83<x84));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x89 = 0U;
	int16_t x90 = 0;
	static volatile int32_t x91 = -245029703;
	int32_t t10 = 3;

	t10 = ((x89^x90)<<(x91<x92));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x93 = 1133869586014LLU;
	int32_t x94 = INT32_MAX;
	uint64_t x95 = 1894973688428036856LLU;
	uint64_t t11 = 31827512331165809LLU;

	t11 = ((x93^x94)<<(x95<x96));

	if (t11 != 2263451325250LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x111 = 1823895U;
	int8_t x112 = -13;
	volatile uint32_t t12 = 233118183U;

	t12 = ((x109^x110)<<(x111<x112));

	if (t12 != 3864160664U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x113 = 683U;
	volatile uint8_t x114 = 71U;
	uint64_t x115 = 10LLU;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t13 = -50762;

	t13 = ((x113^x114)<<(x115<x116));

	if (t13 != 1496) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x120 = 218U;
	uint64_t t14 = 46561409396349LLU;

	t14 = ((x117^x118)<<(x119<x120));

	if (t14 != 18446743848860500841LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x121 = 1138LLU;
	int32_t x122 = 0;
	static int16_t x123 = INT16_MIN;
	volatile uint64_t t15 = 70119LLU;

	t15 = ((x121^x122)<<(x123<x124));

	if (t15 != 2276LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x145 = -1;
	uint32_t x146 = 1284508844U;
	volatile int8_t x147 = 1;

	t16 = ((x145^x146)<<(x147<x148));

	if (t16 != 3010458451U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x165 = UINT32_MAX;
	int16_t x166 = -480;
	volatile int32_t x168 = INT32_MIN;
	volatile uint32_t t17 = 529370U;

	t17 = ((x165^x166)<<(x167<x168));

	if (t17 != 479U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x171 = INT32_MIN;
	int64_t x172 = -11891118038020LL;
	volatile uint64_t t18 = 282LLU;

	t18 = ((x169^x170)<<(x171<x172));

	if (t18 != 172684818156LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x173 = 165U;
	uint64_t x174 = 1285695LLU;
	uint64_t x175 = 1LLU;
	int64_t x176 = INT64_MIN;
	uint64_t t19 = 1772704294263LLU;

	t19 = ((x173^x174)<<(x175<x176));

	if (t19 != 2571572LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x181 = 0U;
	uint8_t x182 = 0U;
	uint16_t x183 = UINT16_MAX;
	volatile int8_t x184 = -8;
	volatile uint32_t t20 = 7464U;

	t20 = ((x181^x182)<<(x183<x184));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x185 = 2062825711U;
	static volatile int32_t x186 = INT32_MIN;
	uint32_t t21 = 1820657U;

	t21 = ((x185^x186)<<(x187<x188));

	if (t21 != 4125651422U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x201 = 159542299U;
	int16_t x202 = -250;
	static int8_t x203 = -8;
	uint32_t t22 = 32125482U;

	t22 = ((x201^x202)<<(x203<x204));

	if (t22 != 4135424797U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = -152674447LL;
	int32_t x208 = INT32_MAX;
	static volatile int64_t t23 = 2LL;

	t23 = ((x205^x206)<<(x207<x208));

	if (t23 != 3989618402LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x217 = INT16_MIN;
	static int16_t x218 = -1;
	int64_t x219 = -183571109LL;
	static int16_t x220 = INT16_MIN;
	int32_t t24 = -2;

	t24 = ((x217^x218)<<(x219<x220));

	if (t24 != 65534) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x221 = 39956047U;
	int8_t x222 = INT8_MIN;
	int16_t x223 = -1;
	static volatile uint32_t t25 = 1U;

	t25 = ((x221^x222)<<(x223<x224));

	if (t25 != 4215055262U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x229 = 4862071LLU;
	volatile int16_t x230 = -1;
	uint64_t x232 = 2029389LLU;

	t26 = ((x229^x230)<<(x231<x232));

	if (t26 != 18446744073704689544LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	uint64_t t27 = 249649LLU;

	t27 = ((x233^x234)<<(x235<x236));

	if (t27 != 2147483647LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x241 = -1;
	uint16_t x244 = 44U;
	volatile int64_t t28 = -1021094110036613LL;

	t28 = ((x241^x242)<<(x243<x244));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x245 = 5463869U;
	static int8_t x246 = INT8_MAX;
	volatile int32_t x247 = 71238658;
	volatile uint32_t x248 = 17681999U;

	t29 = ((x245^x246)<<(x247<x248));

	if (t29 != 5463874U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x249 = -1;
	int64_t x250 = -1LL;
	volatile uint8_t x252 = UINT8_MAX;
	volatile int64_t t30 = 1LL;

	t30 = ((x249^x250)<<(x251<x252));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x254 = INT32_MIN;
	int64_t x256 = -560LL;

	t31 = ((x253^x254)<<(x255<x256));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x258 = 267;
	volatile int8_t x259 = 1;
	int64_t x260 = -294LL;
	int32_t t32 = -1741854;

	t32 = ((x257^x258)<<(x259<x260));

	if (t32 != 1409) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x265 = -4;
	int32_t x266 = INT32_MIN;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;

	t33 = ((x265^x266)<<(x267<x268));

	if (t33 != 2147483644) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x269 = 59993382432164LLU;
	int8_t x270 = -12;
	volatile int8_t x271 = -1;
	int64_t x272 = 355284938450101762LL;

	t34 = ((x269^x270)<<(x271<x272));

	if (t34 != 18446624086944687264LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x277 = INT32_MIN;
	static int8_t x278 = -1;
	uint16_t x279 = 22U;
	int32_t x280 = INT32_MIN;

	t35 = ((x277^x278)<<(x279<x280));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x282 = -1;
	int16_t x283 = INT16_MIN;
	volatile int16_t x284 = INT16_MIN;
	volatile uint64_t t36 = 70120442915477014LLU;

	t36 = ((x281^x282)<<(x283<x284));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x285 = -262;
	int64_t x286 = INT64_MIN;
	static uint64_t x287 = 2058607839447390012LLU;
	volatile uint32_t x288 = 912U;
	volatile int64_t t37 = -791473673907577LL;

	t37 = ((x285^x286)<<(x287<x288));

	if (t37 != 9223372036854775546LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x289 = 119U;
	static uint8_t x290 = 30U;
	uint8_t x291 = UINT8_MAX;
	uint8_t x292 = UINT8_MAX;
	int32_t t38 = 787683044;

	t38 = ((x289^x290)<<(x291<x292));

	if (t38 != 105) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x293 = INT8_MIN;
	static volatile uint16_t x295 = 569U;
	int64_t x296 = -22884LL;

	t39 = ((x293^x294)<<(x295<x296));

	if (t39 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x317 = -1;
	volatile int32_t t40 = 3179;

	t40 = ((x317^x318)<<(x319<x320));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x321 = -29579247;
	int8_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int32_t t41 = 24375565;

	t41 = ((x321^x322)<<(x323<x324));

	if (t41 != 59158492) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x325 = -1;
	int32_t x326 = -1932634;
	int16_t x328 = -1;
	volatile int32_t t42 = 44;

	t42 = ((x325^x326)<<(x327<x328));

	if (t42 != 1932633) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x333 = INT8_MIN;
	int16_t x336 = -1;
	volatile int64_t t43 = 1675099324LL;

	t43 = ((x333^x334)<<(x335<x336));

	if (t43 != 929219293587512LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x349 = 2U;
	volatile int16_t x350 = INT16_MAX;
	int8_t x351 = INT8_MIN;
	int64_t x352 = -54LL;
	volatile int32_t t44 = 757294118;

	t44 = ((x349^x350)<<(x351<x352));

	if (t44 != 65530) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x353 = 46796634018LLU;
	int64_t x355 = -1LL;
	int16_t x356 = INT16_MAX;
	volatile uint64_t t45 = 8588383167LLU;

	t45 = ((x353^x354)<<(x355<x356));

	if (t45 != 18446743980116283424LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x357 = -1;
	int8_t x358 = -1;
	int32_t x359 = 2596;
	volatile int32_t x360 = 62;

	t46 = ((x357^x358)<<(x359<x360));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x369 = INT32_MIN;
	int64_t x370 = INT64_MIN;
	int32_t x372 = INT32_MAX;
	volatile int64_t t47 = -24304176430847LL;

	t47 = ((x369^x370)<<(x371<x372));

	if (t47 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x381 = -1;
	int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MAX;
	volatile int64_t x384 = 37263LL;
	int64_t t48 = INT64_MAX;

	t48 = ((x381^x382)<<(x383<x384));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x389 = 10U;
	uint8_t x390 = 17U;
	int32_t x391 = INT32_MIN;
	volatile int16_t x392 = INT16_MAX;
	int32_t t49 = -3739902;

	t49 = ((x389^x390)<<(x391<x392));

	if (t49 != 54) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MIN;

	t50 = ((x393^x394)<<(x395<x396));

	if (t50 != 89202114005273LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x409 = INT64_MIN;
	volatile int32_t x410 = -1;
	int32_t x411 = INT32_MAX;
	int8_t x412 = -1;
	volatile int64_t t51 = INT64_MAX;

	t51 = ((x409^x410)<<(x411<x412));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x414 = UINT8_MAX;
	volatile int32_t x415 = 98;
	uint8_t x416 = 121U;

	t52 = ((x413^x414)<<(x415<x416));

	if (t52 != 73704U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x421 = INT8_MIN;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = 142;
	int64_t x424 = INT64_MIN;
	uint64_t t53 = 1346319LLU;

	t53 = ((x421^x422)<<(x423<x424));

	if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x425 = INT8_MAX;
	volatile int16_t x426 = 0;
	int32_t x427 = INT32_MIN;
	int8_t x428 = 27;
	volatile int32_t t54 = -64311557;

	t54 = ((x425^x426)<<(x427<x428));

	if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x429 = -1;
	uint64_t x431 = 41274757406LLU;
	int32_t x432 = -15482;
	uint32_t t55 = 1U;

	t55 = ((x429^x430)<<(x431<x432));

	if (t55 != 4287467022U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x434 = INT16_MIN;
	uint32_t t56 = 217U;

	t56 = ((x433^x434)<<(x435<x436));

	if (t56 != 65534U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x441 = INT16_MAX;
	volatile uint8_t x442 = 0U;
	int64_t x444 = INT64_MIN;

	t57 = ((x441^x442)<<(x443<x444));

	if (t57 != 65534) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x445 = 15821U;
	static uint16_t x446 = 3U;
	volatile int16_t x447 = -3754;
	volatile int32_t t58 = 152675;

	t58 = ((x445^x446)<<(x447<x448));

	if (t58 != 15822) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x449 = 318U;
	volatile int32_t t59 = 161;

	t59 = ((x449^x450)<<(x451<x452));

	if (t59 != 32449) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x454 = 1129158U;
	int32_t x455 = INT32_MIN;
	uint32_t x456 = UINT32_MAX;
	uint32_t t60 = 58724U;

	t60 = ((x453^x454)<<(x455<x456));

	if (t60 != 2329202U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x457 = INT32_MAX;
	int64_t x458 = INT64_MAX;
	int32_t x459 = INT32_MIN;
	int32_t x460 = INT32_MIN;
	static int64_t t61 = -15037LL;

	t61 = ((x457^x458)<<(x459<x460));

	if (t61 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x465 = -1LL;
	int32_t x466 = INT32_MIN;
	int32_t x467 = 0;
	int32_t x468 = INT32_MAX;
	int64_t t62 = 957124748LL;

	t62 = ((x465^x466)<<(x467<x468));

	if (t62 != 4294967294LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x469 = -263;
	static uint32_t x470 = 6U;
	int32_t x472 = -1071;
	uint32_t t63 = 5391350U;

	t63 = ((x469^x470)<<(x471<x472));

	if (t63 != 4294967039U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x473 = 364077218749LL;
	volatile uint64_t x474 = UINT64_MAX;
	int64_t x476 = INT64_MIN;
	volatile uint64_t t64 = 708935872362247LLU;

	t64 = ((x473^x474)<<(x475<x476));

	if (t64 != 18446743709632332866LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x485 = INT16_MIN;
	static int64_t x487 = INT64_MAX;
	static int32_t x488 = -1;

	t65 = ((x485^x486)<<(x487<x488));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x489 = INT8_MIN;
	volatile int32_t x490 = INT32_MIN;
	uint8_t x491 = UINT8_MAX;
	int8_t x492 = INT8_MIN;
	int32_t t66 = -2791456;

	t66 = ((x489^x490)<<(x491<x492));

	if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x493 = UINT8_MAX;
	volatile int32_t x496 = 83035;
	int32_t t67 = 110060;

	t67 = ((x493^x494)<<(x495<x496));

	if (t67 != 430) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x498 = 2064LLU;
	int16_t x499 = -235;
	uint16_t x500 = UINT16_MAX;

	t68 = ((x497^x498)<<(x499<x500));

	if (t68 != 4276LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x501 = 1;
	volatile uint64_t x503 = 40226670920442LLU;
	int8_t x504 = INT8_MAX;
	volatile uint32_t t69 = 100U;

	t69 = ((x501^x502)<<(x503<x504));

	if (t69 != 4U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x509 = 34;
	static uint32_t x510 = 20088U;
	volatile int16_t x511 = 17;
	uint8_t x512 = 6U;
	uint32_t t70 = 256719U;

	t70 = ((x509^x510)<<(x511<x512));

	if (t70 != 20058U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x513 = UINT64_MAX;
	static int64_t x514 = INT64_MAX;
	int64_t x515 = 2144LL;
	volatile uint16_t x516 = UINT16_MAX;
	volatile uint64_t t71 = 5185796739LLU;

	t71 = ((x513^x514)<<(x515<x516));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x521 = 13557171346LLU;
	static volatile uint64_t x523 = UINT64_MAX;
	uint64_t t72 = 37LLU;

	t72 = ((x521^x522)<<(x523<x524));

	if (t72 != 13557171351LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x525 = 0U;
	int16_t x526 = INT16_MAX;
	uint64_t x527 = 3LLU;
	static int32_t x528 = INT32_MIN;
	volatile int32_t t73 = 1648;

	t73 = ((x525^x526)<<(x527<x528));

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x533 = -1;
	int16_t x535 = 635;
	int8_t x536 = -1;
	int32_t t74 = 15;

	t74 = ((x533^x534)<<(x535<x536));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x545 = UINT16_MAX;
	int16_t x547 = INT16_MIN;
	int16_t x548 = -1;
	uint64_t t75 = 3560712436LLU;

	t75 = ((x545^x546)<<(x547<x548));

	if (t75 != 130714LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x553 = -2015814813691511499LL;
	int8_t x554 = INT8_MIN;
	static int16_t x555 = INT16_MIN;
	int64_t t76 = 874LL;

	t76 = ((x553^x554)<<(x555<x556));

	if (t76 != 2015814813691511477LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x561 = INT32_MAX;
	int32_t x563 = INT32_MIN;
	volatile int16_t x564 = INT16_MAX;

	t77 = ((x561^x562)<<(x563<x564));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x569 = INT32_MIN;
	uint16_t x572 = UINT16_MAX;
	uint32_t t78 = 19U;

	t78 = ((x569^x570)<<(x571<x572));

	if (t78 != 2147531139U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x574 = INT16_MIN;
	uint64_t x576 = 1622690621809748567LLU;
	int32_t t79 = 70;

	t79 = ((x573^x574)<<(x575<x576));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x577 = INT32_MIN;
	uint64_t x579 = UINT64_MAX;
	uint32_t x580 = 96818U;

	t80 = ((x577^x578)<<(x579<x580));

	if (t80 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x585 = 3U;
	int64_t x587 = INT64_MAX;

	t81 = ((x585^x586)<<(x587<x588));

	if (t81 != 4294967255U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MIN;
	static volatile int16_t x592 = 0;
	volatile int32_t t82 = -156949984;

	t82 = ((x589^x590)<<(x591<x592));

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x593 = 161366126107606LLU;
	int64_t x595 = INT64_MAX;
	static int32_t x596 = -254;
	static volatile uint64_t t83 = 66289968749521LLU;

	t83 = ((x593^x594)<<(x595<x596));

	if (t83 != 161366126126739LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x597 = UINT8_MAX;
	uint64_t x598 = 83096LLU;
	int8_t x599 = -1;
	uint8_t x600 = UINT8_MAX;

	t84 = ((x597^x598)<<(x599<x600));

	if (t84 != 166094LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x613 = 5U;
	uint32_t x614 = UINT32_MAX;
	uint8_t x615 = UINT8_MAX;
	int8_t x616 = INT8_MIN;
	uint32_t t85 = 261578808U;

	t85 = ((x613^x614)<<(x615<x616));

	if (t85 != 4294967290U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x629 = INT8_MIN;
	uint32_t x630 = 1746U;
	int16_t x632 = INT16_MAX;

	t86 = ((x629^x630)<<(x631<x632));

	if (t86 != 4294963876U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x633 = 1;
	volatile int8_t x634 = INT8_MAX;
	uint64_t x635 = UINT64_MAX;

	t87 = ((x633^x634)<<(x635<x636));

	if (t87 != 126) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x641 = INT32_MIN;
	uint16_t x643 = 644U;
	static volatile uint32_t t88 = 1U;

	t88 = ((x641^x642)<<(x643<x644));

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x645 = 1950842;
	volatile int16_t x646 = 6;
	static volatile int32_t x647 = INT32_MIN;
	volatile uint16_t x648 = 22U;
	int32_t t89 = -64;

	t89 = ((x645^x646)<<(x647<x648));

	if (t89 != 3901688) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x649 = 89LLU;
	uint16_t x650 = 27147U;
	int32_t x652 = -1;

	t90 = ((x649^x650)<<(x651<x652));

	if (t90 != 27218LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x661 = UINT32_MAX;
	static int8_t x662 = INT8_MIN;
	static uint32_t x663 = 1U;
	uint32_t x664 = 100017U;
	static uint32_t t91 = 109U;

	t91 = ((x661^x662)<<(x663<x664));

	if (t91 != 254U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x665 = 128102774813137994LL;
	static volatile int64_t t92 = -107142518206LL;

	t92 = ((x665^x666)<<(x667<x668));

	if (t92 != 256205549626277606LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x674 = 1027U;
	static int64_t x676 = INT64_MIN;
	uint32_t t93 = 22239U;

	t93 = ((x673^x674)<<(x675<x676));

	if (t93 != 1276U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x677 = -1;
	int8_t x678 = -1;
	static uint32_t x680 = UINT32_MAX;
	static int32_t t94 = -786115284;

	t94 = ((x677^x678)<<(x679<x680));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x682 = INT8_MIN;
	uint16_t x683 = 124U;
	volatile uint32_t t95 = 1U;

	t95 = ((x681^x682)<<(x683<x684));

	if (t95 != 4294966256U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x685 = 23725LLU;
	int16_t x686 = INT16_MIN;
	volatile int8_t x687 = INT8_MIN;
	static uint32_t x688 = 1245U;
	volatile uint64_t t96 = 642601433LLU;

	t96 = ((x685^x686)<<(x687<x688));

	if (t96 != 18446744073709542573LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x690 = INT16_MAX;
	int64_t x691 = -1LL;
	uint8_t x692 = 10U;

	t97 = ((x689^x690)<<(x691<x692));

	if (t97 != 65024) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x698 = 1910569056259LL;
	int64_t x699 = -7275870931934886LL;
	volatile int64_t t98 = 0LL;

	t98 = ((x697^x698)<<(x699<x700));

	if (t98 != 3822026625036LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x701 = 39596365031060LLU;
	volatile uint16_t x702 = UINT16_MAX;
	int8_t x704 = 39;
	volatile uint64_t t99 = 2706LLU;

	t99 = ((x701^x702)<<(x703<x704));

	if (t99 != 39596365011307LLU) { NG(); } else { ; }
	
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

