#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -410873;
uint8_t x97 = UINT8_MAX;
static int32_t x99 = INT32_MAX;
static int16_t x100 = -26;
uint64_t x140 = UINT64_MAX;
volatile uint64_t x162 = 291772LLU;
int64_t x185 = -1LL;
uint8_t x188 = 66U;
static uint32_t x225 = UINT32_MAX;
int16_t x226 = 0;
uint32_t x236 = UINT32_MAX;
int32_t t9 = -56996;
volatile uint8_t x238 = UINT8_MAX;
volatile int8_t x245 = INT8_MIN;
uint64_t x246 = UINT64_MAX;
int64_t t14 = 1406489182319750LL;
volatile uint32_t x321 = 1536U;
static uint8_t x322 = UINT8_MAX;
static uint32_t t15 = 5744856U;
uint8_t x356 = 25U;
int64_t t16 = -140153674LL;
uint64_t x382 = UINT64_MAX;
int64_t x414 = 3LL;
int8_t x416 = INT8_MAX;
static volatile int8_t x465 = INT8_MIN;
volatile uint32_t t22 = 113287U;
volatile uint8_t x488 = 71U;
int64_t x510 = INT64_MIN;
int8_t x528 = INT8_MIN;
volatile int64_t t26 = -217373923748953119LL;
int16_t x542 = INT16_MIN;
uint32_t x553 = 496392132U;
uint8_t x580 = 29U;
volatile uint32_t t29 = 31631U;
static int32_t x586 = -1;
static uint8_t x614 = UINT8_MAX;
int32_t x615 = -203110;
static int32_t x616 = -1;
uint64_t x658 = UINT64_MAX;
volatile int64_t x672 = -1LL;
static uint16_t x691 = 23U;
static volatile int16_t x712 = -1;
int64_t x739 = 1LL;
int16_t x742 = -1;
int64_t x743 = -6574724886297696LL;
volatile int64_t x744 = -1LL;
static int32_t x747 = INT32_MIN;
static uint64_t t40 = 7409218942066771378LLU;
static uint16_t x787 = 3U;
int8_t x788 = -2;
static uint32_t t42 = 7U;
int16_t x790 = -122;
int8_t x837 = -1;
static volatile int64_t x927 = -764977292337945LL;
uint32_t t47 = 18588587U;
int32_t x941 = INT32_MIN;
int16_t x962 = INT16_MIN;
int8_t x964 = -1;
int8_t x966 = INT8_MIN;
uint64_t x967 = 13LLU;
uint64_t x976 = UINT64_MAX;
volatile int32_t t55 = 818662746;
volatile int16_t x1022 = INT16_MIN;
static uint64_t x1030 = 0LLU;
volatile int32_t x1031 = INT32_MAX;
static int16_t x1077 = INT16_MAX;
int64_t x1110 = INT64_MIN;
static uint8_t x1111 = 52U;
volatile uint64_t t59 = 4028LLU;
int16_t x1118 = INT16_MIN;
static int32_t t60 = 0;
uint8_t x1156 = UINT8_MAX;
volatile int8_t x1171 = 1;
volatile uint32_t t63 = 3385532U;
static int16_t x1185 = INT16_MIN;
static uint8_t x1187 = 37U;
static int32_t x1203 = 3;
uint32_t t67 = 39U;
uint8_t x1206 = 1U;
static volatile uint32_t x1208 = 1487U;
uint64_t t68 = 27104681490LLU;
uint32_t x1212 = UINT32_MAX;
int64_t x1235 = INT64_MIN;
uint64_t x1249 = UINT64_MAX;
volatile int8_t x1288 = INT8_MIN;
volatile uint32_t t73 = 1326751933U;
volatile int64_t t74 = 64451015LL;
static int32_t x1301 = -12;
int8_t x1384 = -1;
int32_t t80 = -214089;
static int8_t x1397 = -1;
static uint64_t x1398 = UINT64_MAX;
int32_t x1410 = INT32_MIN;
int64_t x1411 = -238413552422LL;
uint32_t t82 = 25U;
volatile int16_t x1415 = INT16_MIN;
static int16_t x1507 = 0;
volatile int16_t x1508 = -1;
volatile int64_t t86 = 1992041LL;
uint32_t x1509 = 526679602U;
volatile uint64_t x1586 = 1669501687LLU;
uint64_t t90 = 9495199482630092LLU;
static uint64_t t91 = 48344314779374LLU;
static int8_t x1664 = -15;
volatile int8_t x1667 = INT8_MIN;
uint64_t x1669 = 308839184203LLU;
uint16_t x1741 = UINT16_MAX;
int8_t x1744 = 47;


void f0(void) {
	int32_t x13 = -1;
	volatile int32_t x14 = -1;
	int64_t x15 = 0LL;
	uint64_t x16 = 4LLU;
	volatile int32_t t0 = -19977820;

	t0 = ((x13^x14)<<(x15%x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x49 = 1319U;
	static int32_t x50 = INT32_MAX;
	int32_t x51 = -1;
	int32_t x52 = -1;

	t1 = ((x49^x50)<<(x51%x52));

	if (t1 != 2147482328) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x81 = UINT16_MAX;
	volatile uint32_t x82 = 17945482U;
	uint16_t x83 = 11U;
	int8_t x84 = 42;
	uint32_t t2 = 3U;

	t2 = ((x81^x82)<<(x83%x84));

	if (t2 != 2305009664U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x98 = UINT64_MAX;
	volatile uint64_t t3 = 33607040367LLU;

	t3 = ((x97^x98)<<(x99%x100));

	if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	int32_t x139 = -1;
	int32_t t4 = 2424717;

	t4 = ((x137^x138)<<(x139%x140));

	if (t4 != 2147450880) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x161 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	int8_t x164 = 2;
	volatile uint64_t t5 = 256LLU;

	t5 = ((x161^x162)<<(x163%x164));

	if (t5 != 18446744073709286332LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x186 = -1LL;
	volatile uint8_t x187 = UINT8_MAX;
	volatile int64_t t6 = -83415LL;

	t6 = ((x185^x186)<<(x187%x188));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x209 = INT16_MIN;
	volatile uint32_t x210 = UINT32_MAX;
	static uint16_t x211 = 43U;
	int8_t x212 = -1;
	uint32_t t7 = 6376U;

	t7 = ((x209^x210)<<(x211%x212));

	if (t7 != 32767U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x227 = INT16_MIN;
	int16_t x228 = -1;
	uint32_t t8 = UINT32_MAX;

	t8 = ((x225^x226)<<(x227%x228));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x233 = UINT8_MAX;
	uint8_t x234 = 2U;
	uint16_t x235 = 5U;

	t9 = ((x233^x234)<<(x235%x236));

	if (t9 != 8096) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x237 = 0;
	uint8_t x239 = UINT8_MAX;
	static int64_t x240 = -1LL;
	volatile int32_t t10 = 1;

	t10 = ((x237^x238)<<(x239%x240));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x247 = UINT8_MAX;
	static uint8_t x248 = 3U;
	uint64_t t11 = 14302788282LLU;

	t11 = ((x245^x246)<<(x247%x248));

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x265 = 1;
	uint8_t x266 = 14U;
	uint32_t x267 = 74U;
	uint16_t x268 = 11U;
	int32_t t12 = -41151;

	t12 = ((x265^x266)<<(x267%x268));

	if (t12 != 3840) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x281 = 28733LLU;
	static int32_t x282 = INT32_MIN;
	uint32_t x283 = 9U;
	int8_t x284 = INT8_MIN;
	uint64_t t13 = 3LLU;

	t13 = ((x281^x282)<<(x283%x284));

	if (t13 != 18446742974212635136LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x301 = INT64_MAX;
	int16_t x302 = 4;
	volatile int64_t x303 = INT64_MIN;
	int16_t x304 = -1;

	t14 = ((x301^x302)<<(x303%x304));

	if (t14 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x323 = INT16_MAX;
	uint8_t x324 = 27U;

	t15 = ((x321^x322)<<(x323%x324));

	if (t15 != 117374976U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x353 = 28;
	int64_t x354 = 1255760077587285730LL;
	int8_t x355 = INT8_MAX;

	t16 = ((x353^x354)<<(x355%x356));

	if (t16 != 5023040310349143032LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x381 = 0U;
	volatile int8_t x383 = INT8_MAX;
	uint16_t x384 = 21U;
	uint64_t t17 = 10245923LLU;

	t17 = ((x381^x382)<<(x383%x384));

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x393 = -213;
	static int16_t x394 = -4;
	volatile uint64_t x395 = 144469LLU;
	uint16_t x396 = 34U;
	static int32_t t18 = 200414;

	t18 = ((x393^x394)<<(x395%x396));

	if (t18 != 1720) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x413 = 2521997039LLU;
	int32_t x415 = 728071983;
	uint64_t t19 = 590901529378LLU;

	t19 = ((x413^x414)<<(x415%x416));

	if (t19 != 3217045506748317696LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x466 = INT32_MIN;
	int8_t x467 = -27;
	static int16_t x468 = -1;
	volatile int32_t t20 = 6;

	t20 = ((x465^x466)<<(x467%x468));

	if (t20 != 2147483520) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x469 = 735U;
	int16_t x470 = 56;
	static int16_t x471 = 15;
	int16_t x472 = INT16_MAX;
	volatile int32_t t21 = 451295;

	t21 = ((x469^x470)<<(x471%x472));

	if (t21 != 24346624) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x477 = -11065;
	uint32_t x478 = 6817750U;
	volatile uint32_t x479 = UINT32_MAX;
	volatile int8_t x480 = 37;

	t22 = ((x477^x478)<<(x479%x480));

	if (t22 != 3858023488U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x485 = INT16_MAX;
	uint64_t x486 = 7516110822551916LLU;
	volatile int32_t x487 = INT32_MAX;
	uint64_t t23 = 25LLU;

	t23 = ((x485^x486)<<(x487%x488));

	if (t23 != 15413369063803453440LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x509 = INT64_MIN;
	static int32_t x511 = INT32_MAX;
	int32_t x512 = INT32_MAX;
	volatile int64_t t24 = 163217516087LL;

	t24 = ((x509^x510)<<(x511%x512));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x513 = UINT32_MAX;
	volatile int16_t x514 = INT16_MAX;
	int32_t x515 = INT32_MAX;
	int16_t x516 = INT16_MAX;
	uint32_t t25 = 0U;

	t25 = ((x513^x514)<<(x515%x516));

	if (t25 != 4294901760U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x525 = -1;
	int64_t x526 = -1LL;
	uint8_t x527 = 0U;

	t26 = ((x525^x526)<<(x527%x528));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x541 = -1;
	static int32_t x543 = INT32_MAX;
	static int8_t x544 = 1;
	static volatile int32_t t27 = 1;

	t27 = ((x541^x542)<<(x543%x544));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x554 = INT16_MAX;
	static volatile uint8_t x555 = UINT8_MAX;
	int8_t x556 = 16;
	uint32_t t28 = 65451760U;

	t28 = ((x553^x554)<<(x555%x556));

	if (t28 != 337477632U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x577 = 11U;
	static int16_t x578 = -25;
	int16_t x579 = INT16_MAX;

	t29 = ((x577^x578)<<(x579%x580));

	if (t29 != 2952790016U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x585 = INT8_MIN;
	uint32_t x587 = 50U;
	uint8_t x588 = 6U;
	volatile int32_t t30 = 1125;

	t30 = ((x585^x586)<<(x587%x588));

	if (t30 != 508) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x613 = 99;
	volatile int32_t t31 = -66;

	t31 = ((x613^x614)<<(x615%x616));

	if (t31 != 156) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x625 = 13413141429589LLU;
	int64_t x626 = INT64_MIN;
	uint8_t x627 = 0U;
	uint8_t x628 = 1U;
	volatile uint64_t t32 = 1089422588740LLU;

	t32 = ((x625^x626)<<(x627%x628));

	if (t32 != 9223385449996205397LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x657 = UINT32_MAX;
	volatile int32_t x659 = -1;
	int16_t x660 = -1;
	uint64_t t33 = 2198795423773023000LLU;

	t33 = ((x657^x658)<<(x659%x660));

	if (t33 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x669 = INT16_MAX;
	static uint16_t x670 = 8880U;
	static int8_t x671 = 7;
	volatile int32_t t34 = 128046;

	t34 = ((x669^x670)<<(x671%x672));

	if (t34 != 23887) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x689 = 1;
	static int16_t x690 = 1;
	int32_t x692 = 8386;
	volatile int32_t t35 = -45577895;

	t35 = ((x689^x690)<<(x691%x692));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x709 = UINT32_MAX;
	static int32_t x710 = INT32_MIN;
	int16_t x711 = 105;
	volatile uint32_t t36 = 105U;

	t36 = ((x709^x710)<<(x711%x712));

	if (t36 != 2147483647U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x729 = INT8_MIN;
	int64_t x730 = -3364790LL;
	int32_t x731 = -1;
	volatile int8_t x732 = 1;
	int64_t t37 = -377LL;

	t37 = ((x729^x730)<<(x731%x732));

	if (t37 != 3364810LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x737 = 117662617U;
	int16_t x738 = -68;
	static uint8_t x740 = 12U;
	uint32_t t38 = 828591U;

	t38 = ((x737^x738)<<(x739%x740));

	if (t38 != 4059641930U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x741 = 118027645U;
	volatile uint32_t t39 = 5803U;

	t39 = ((x741^x742)<<(x743%x744));

	if (t39 != 4176939650U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x745 = 2963LLU;
	int64_t x746 = -305802500LL;
	int16_t x748 = INT16_MIN;

	t40 = ((x745^x746)<<(x747%x748));

	if (t40 != 18446744073403750767LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x765 = INT32_MIN;
	static int16_t x766 = INT16_MIN;
	int64_t x767 = INT64_MAX;
	volatile int64_t x768 = -1LL;
	volatile int32_t t41 = 1;

	t41 = ((x765^x766)<<(x767%x768));

	if (t41 != 2147450880) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x785 = UINT16_MAX;
	static uint32_t x786 = UINT32_MAX;

	t42 = ((x785^x786)<<(x787%x788));

	if (t42 != 4294836224U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x789 = INT64_MIN;
	static volatile int8_t x791 = 12;
	int16_t x792 = -1;
	int64_t t43 = 10496664669572LL;

	t43 = ((x789^x790)<<(x791%x792));

	if (t43 != 9223372036854775686LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x801 = -24;
	int16_t x802 = INT16_MIN;
	int16_t x803 = -906;
	int64_t x804 = -1LL;
	int32_t t44 = -1;

	t44 = ((x801^x802)<<(x803%x804));

	if (t44 != 32744) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x838 = -1LL;
	volatile int32_t x839 = -317;
	int64_t x840 = -1LL;
	volatile int64_t t45 = 3025008LL;

	t45 = ((x837^x838)<<(x839%x840));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x917 = INT32_MAX;
	static uint32_t x918 = 79U;
	int16_t x919 = INT16_MIN;
	volatile int8_t x920 = INT8_MIN;
	static volatile uint32_t t46 = 53366U;

	t46 = ((x917^x918)<<(x919%x920));

	if (t46 != 2147483568U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x925 = INT16_MAX;
	uint32_t x926 = UINT32_MAX;
	int64_t x928 = -1LL;

	t47 = ((x925^x926)<<(x927%x928));

	if (t47 != 4294934528U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x942 = UINT64_MAX;
	int64_t x943 = INT64_MIN;
	int16_t x944 = INT16_MIN;
	volatile uint64_t t48 = 15791LLU;

	t48 = ((x941^x942)<<(x943%x944));

	if (t48 != 2147483647LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x945 = UINT64_MAX;
	int16_t x946 = INT16_MIN;
	int8_t x947 = 20;
	int32_t x948 = 229;
	uint64_t t49 = 3413392LLU;

	t49 = ((x945^x946)<<(x947%x948));

	if (t49 != 34358689792LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x949 = -13903025246056LL;
	int16_t x950 = INT16_MIN;
	int64_t x951 = INT64_MIN;
	static int16_t x952 = INT16_MIN;
	volatile int64_t t50 = 735257967358719LL;

	t50 = ((x949^x950)<<(x951%x952));

	if (t50 != 13903025270936LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x957 = 63;
	volatile uint8_t x958 = 0U;
	int64_t x959 = -1LL;
	int8_t x960 = -1;
	volatile int32_t t51 = 6983;

	t51 = ((x957^x958)<<(x959%x960));

	if (t51 != 63) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x961 = -1;
	static int8_t x963 = -2;
	volatile int32_t t52 = -1428;

	t52 = ((x961^x962)<<(x963%x964));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x965 = UINT64_MAX;
	int8_t x968 = INT8_MAX;
	uint64_t t53 = 8567978819286660LLU;

	t53 = ((x965^x966)<<(x967%x968));

	if (t53 != 1040384LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x973 = UINT8_MAX;
	uint8_t x974 = 22U;
	static volatile int16_t x975 = -1;
	int32_t t54 = -6673349;

	t54 = ((x973^x974)<<(x975%x976));

	if (t54 != 233) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x977 = 3U;
	int32_t x978 = INT32_MAX;
	uint32_t x979 = 92288U;
	uint64_t x980 = 1LLU;

	t55 = ((x977^x978)<<(x979%x980));

	if (t55 != 2147483644) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1021 = -1LL;
	int8_t x1023 = INT8_MIN;
	int64_t x1024 = -1LL;
	volatile int64_t t56 = 12123011289LL;

	t56 = ((x1021^x1022)<<(x1023%x1024));

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x1029 = 3125;
	volatile int64_t x1032 = -1LL;
	volatile uint64_t t57 = 165438037LLU;

	t57 = ((x1029^x1030)<<(x1031%x1032));

	if (t57 != 3125LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1078 = INT16_MAX;
	volatile uint16_t x1079 = 7U;
	int8_t x1080 = -1;
	volatile int32_t t58 = -5;

	t58 = ((x1077^x1078)<<(x1079%x1080));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1109 = 843787088LLU;
	int64_t x1112 = -1LL;

	t59 = ((x1109^x1110)<<(x1111%x1112));

	if (t59 != 9223372037698562896LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1117 = -131;
	int8_t x1119 = 3;
	volatile uint16_t x1120 = 4U;

	t60 = ((x1117^x1118)<<(x1119%x1120));

	if (t60 != 261096) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1129 = -1;
	int8_t x1130 = INT8_MIN;
	int8_t x1131 = INT8_MIN;
	volatile int64_t x1132 = -1LL;
	int32_t t61 = 0;

	t61 = ((x1129^x1130)<<(x1131%x1132));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1153 = -1;
	uint64_t x1154 = 192733568956LLU;
	uint8_t x1155 = UINT8_MAX;
	static volatile uint64_t t62 = 23394LLU;

	t62 = ((x1153^x1154)<<(x1155%x1156));

	if (t62 != 18446743880975982659LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x1169 = 194U;
	uint16_t x1170 = 10587U;
	static uint8_t x1172 = 28U;

	t63 = ((x1169^x1170)<<(x1171%x1172));

	if (t63 != 21298U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1186 = -56LL;
	int32_t x1188 = INT32_MAX;
	int64_t t64 = 1LL;

	t64 = ((x1185^x1186)<<(x1187%x1188));

	if (t64 != 4495903045976064LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x1189 = 4729114815707612715LLU;
	int8_t x1190 = INT8_MIN;
	int64_t x1191 = -248516805912LL;
	uint8_t x1192 = 1U;
	uint64_t t65 = 34061822045300LLU;

	t65 = ((x1189^x1190)<<(x1191%x1192));

	if (t65 != 13717629258001938859LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x1197 = 0U;
	int8_t x1198 = INT8_MAX;
	uint32_t x1199 = UINT32_MAX;
	int8_t x1200 = INT8_MAX;
	static volatile uint32_t t66 = 22820049U;

	t66 = ((x1197^x1198)<<(x1199%x1200));

	if (t66 != 4161536U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1201 = UINT32_MAX;
	int16_t x1202 = INT16_MIN;
	volatile uint16_t x1204 = UINT16_MAX;

	t67 = ((x1201^x1202)<<(x1203%x1204));

	if (t67 != 262136U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1205 = 497670852897LLU;
	volatile int8_t x1207 = 1;

	t68 = ((x1205^x1206)<<(x1207%x1208));

	if (t68 != 995341705792LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1209 = 1U;
	uint32_t x1210 = UINT32_MAX;
	int32_t x1211 = -1;
	uint32_t t69 = 61500117U;

	t69 = ((x1209^x1210)<<(x1211%x1212));

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1217 = UINT8_MAX;
	int8_t x1218 = 15;
	int16_t x1219 = -1;
	volatile int64_t x1220 = -1LL;
	static volatile int32_t t70 = -849630;

	t70 = ((x1217^x1218)<<(x1219%x1220));

	if (t70 != 240) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1233 = INT64_MIN;
	static int64_t x1234 = INT64_MIN;
	volatile int16_t x1236 = INT16_MIN;
	volatile int64_t t71 = -2LL;

	t71 = ((x1233^x1234)<<(x1235%x1236));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1250 = INT8_MAX;
	static int16_t x1251 = -2249;
	volatile int64_t x1252 = -1LL;
	uint64_t t72 = 3697883122384137924LLU;

	t72 = ((x1249^x1250)<<(x1251%x1252));

	if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1285 = -1659;
	uint32_t x1286 = 10021U;
	static volatile int32_t x1287 = INT32_MIN;

	t73 = ((x1285^x1286)<<(x1287%x1288));

	if (t73 != 4294958752U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1289 = -1LL;
	int8_t x1290 = INT8_MIN;
	uint8_t x1291 = 0U;
	static int64_t x1292 = INT64_MIN;

	t74 = ((x1289^x1290)<<(x1291%x1292));

	if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1302 = 15496913U;
	volatile int8_t x1303 = INT8_MIN;
	static uint8_t x1304 = 1U;
	volatile uint32_t t75 = 3765U;

	t75 = ((x1301^x1302)<<(x1303%x1304));

	if (t75 != 4279470373U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1333 = -1;
	volatile uint32_t x1334 = UINT32_MAX;
	uint8_t x1335 = 0U;
	volatile int32_t x1336 = INT32_MIN;
	static uint32_t t76 = 2U;

	t76 = ((x1333^x1334)<<(x1335%x1336));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1341 = 1065LLU;
	static volatile uint16_t x1342 = 16726U;
	uint8_t x1343 = 59U;
	volatile int32_t x1344 = 2463058;
	uint64_t t77 = 2410759LLU;

	t77 = ((x1341^x1342)<<(x1343%x1344));

	if (t77 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1353 = 14U;
	volatile uint32_t x1354 = 4U;
	int16_t x1355 = 1;
	uint16_t x1356 = 63U;
	volatile uint32_t t78 = 211179277U;

	t78 = ((x1353^x1354)<<(x1355%x1356));

	if (t78 != 20U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1381 = -1;
	int16_t x1382 = INT16_MIN;
	int8_t x1383 = INT8_MIN;
	volatile int32_t t79 = -1;

	t79 = ((x1381^x1382)<<(x1383%x1384));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1389 = 1U;
	uint16_t x1390 = UINT16_MAX;
	uint64_t x1391 = UINT64_MAX;
	int32_t x1392 = INT32_MAX;

	t80 = ((x1389^x1390)<<(x1391%x1392));

	if (t80 != 524272) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1399 = 28;
	int16_t x1400 = -1;
	uint64_t t81 = 552347375187151651LLU;

	t81 = ((x1397^x1398)<<(x1399%x1400));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1409 = 56910406U;
	static int8_t x1412 = -1;

	t82 = ((x1409^x1410)<<(x1411%x1412));

	if (t82 != 2204394054U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1413 = INT64_MAX;
	uint16_t x1414 = 0U;
	volatile int8_t x1416 = 1;
	int64_t t83 = INT64_MAX;

	t83 = ((x1413^x1414)<<(x1415%x1416));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1485 = 2987U;
	volatile uint8_t x1486 = 7U;
	int64_t x1487 = -1LL;
	int16_t x1488 = -1;
	int32_t t84 = -63507483;

	t84 = ((x1485^x1486)<<(x1487%x1488));

	if (t84 != 2988) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1501 = -6;
	int16_t x1502 = INT16_MIN;
	uint16_t x1503 = UINT16_MAX;
	int32_t x1504 = -1;
	int32_t t85 = 813;

	t85 = ((x1501^x1502)<<(x1503%x1504));

	if (t85 != 32762) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1505 = 502771045030942046LL;
	uint32_t x1506 = 11U;

	t86 = ((x1505^x1506)<<(x1507%x1508));

	if (t86 != 502771045030942037LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1510 = 58U;
	static int16_t x1511 = 1;
	int64_t x1512 = INT64_MIN;
	volatile uint32_t t87 = 39393U;

	t87 = ((x1509^x1510)<<(x1511%x1512));

	if (t87 != 1053359120U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1545 = -3354;
	int32_t x1546 = -1;
	volatile int64_t x1547 = -1LL;
	int32_t x1548 = -1;
	int32_t t88 = 78678655;

	t88 = ((x1545^x1546)<<(x1547%x1548));

	if (t88 != 3353) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1581 = INT32_MAX;
	uint64_t x1582 = UINT64_MAX;
	volatile uint16_t x1583 = UINT16_MAX;
	int8_t x1584 = 30;
	volatile uint64_t t89 = 937225731094188LLU;

	t89 = ((x1581^x1582)<<(x1583%x1584));

	if (t89 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x1585 = INT64_MIN;
	int8_t x1587 = 4;
	int8_t x1588 = INT8_MIN;

	t90 = ((x1585^x1586)<<(x1587%x1588));

	if (t90 != 26712026992LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1589 = 57;
	uint64_t x1590 = 3LLU;
	uint16_t x1591 = 35U;
	int32_t x1592 = -130580;

	t91 = ((x1589^x1590)<<(x1591%x1592));

	if (t91 != 1992864825344LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1613 = UINT32_MAX;
	volatile int16_t x1614 = 121;
	int64_t x1615 = INT64_MIN;
	int16_t x1616 = INT16_MIN;
	volatile uint32_t t92 = 264U;

	t92 = ((x1613^x1614)<<(x1615%x1616));

	if (t92 != 4294967174U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x1661 = 242323394374545LL;
	volatile uint8_t x1662 = 1U;
	int32_t x1663 = INT32_MAX;
	int64_t t93 = -1337LL;

	t93 = ((x1661^x1662)<<(x1663%x1664));

	if (t93 != 31017394479941632LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1665 = 9U;
	int16_t x1666 = INT16_MAX;
	uint8_t x1668 = 32U;
	int32_t t94 = 1;

	t94 = ((x1665^x1666)<<(x1667%x1668));

	if (t94 != 32758) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x1670 = 44U;
	static uint8_t x1671 = 19U;
	int64_t x1672 = -208433LL;
	static volatile uint64_t t95 = 3712LLU;

	t95 = ((x1669^x1670)<<(x1671%x1672));

	if (t95 != 161920678222102528LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1697 = INT32_MIN;
	static volatile int64_t x1698 = -47LL;
	uint32_t x1699 = 131U;
	uint8_t x1700 = 12U;
	volatile int64_t t96 = -1591727038057LL;

	t96 = ((x1697^x1698)<<(x1699%x1700));

	if (t96 != 4398046414848LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x1729 = INT16_MIN;
	uint64_t x1730 = 82481265474517312LLU;
	volatile int64_t x1731 = INT64_MIN;
	int64_t x1732 = INT64_MIN;
	volatile uint64_t t97 = 154LLU;

	t97 = ((x1729^x1730)<<(x1731%x1732));

	if (t97 != 18364262808235030848LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1733 = UINT64_MAX;
	uint16_t x1734 = UINT16_MAX;
	uint64_t x1735 = UINT64_MAX;
	static int32_t x1736 = 1;
	uint64_t t98 = 521423619296LLU;

	t98 = ((x1733^x1734)<<(x1735%x1736));

	if (t98 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1742 = 2U;
	static int32_t x1743 = 12;
	volatile int32_t t99 = -647521;

	t99 = ((x1741^x1742)<<(x1743%x1744));

	if (t99 != 268423168) { NG(); } else { ; }
	
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

