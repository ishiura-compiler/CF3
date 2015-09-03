#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -15;
static volatile uint64_t x17 = 1024124748LLU;
static uint8_t x19 = 13U;
int16_t x30 = INT16_MIN;
static int32_t x32 = -1;
volatile int16_t x34 = INT16_MIN;
int8_t x39 = INT8_MIN;
uint8_t x41 = UINT8_MAX;
uint16_t x47 = UINT16_MAX;
static volatile uint16_t x52 = UINT16_MAX;
int32_t t8 = 91905;
static int64_t x56 = -1LL;
volatile int32_t x69 = 110;
int64_t x72 = -1LL;
uint64_t t15 = 228588LLU;
volatile int32_t x117 = -1;
volatile int64_t x118 = -1LL;
int8_t x119 = -1;
int32_t x121 = -180955;
volatile uint64_t x124 = 3050638143798851479LLU;
static int32_t t19 = 460;
static uint64_t x130 = 7692811372493117331LLU;
int8_t x162 = 5;
uint64_t t26 = 2927053362067613LLU;
int64_t x169 = INT64_MIN;
static uint16_t x170 = UINT16_MAX;
volatile int64_t t30 = 359455646948839699LL;
volatile uint64_t t31 = 941897660LLU;
int64_t x210 = INT64_MIN;
uint8_t x212 = 73U;
int64_t x214 = INT64_MIN;
volatile int16_t x216 = -1;
int64_t x225 = INT64_MAX;
uint16_t x226 = 5875U;
int8_t x230 = INT8_MIN;
int8_t x232 = -1;
static int64_t x234 = INT64_MIN;
int16_t x236 = INT16_MIN;
volatile int64_t t37 = 77628LL;
volatile int64_t x239 = -2518391LL;
int16_t x240 = 426;
uint32_t x243 = UINT32_MAX;
uint32_t x250 = 5229U;
volatile int64_t x252 = 622947431LL;
volatile int64_t t40 = 501944937LL;
volatile int64_t x253 = INT64_MIN;
uint8_t x258 = 56U;
int8_t x260 = INT8_MIN;
volatile int64_t t42 = 1540082956LL;
static volatile uint32_t t43 = 216771039U;
volatile uint64_t x267 = UINT64_MAX;
int8_t x271 = INT8_MAX;
int16_t x272 = 44;
int32_t t45 = -480035;
static uint16_t x279 = UINT16_MAX;
volatile int16_t x280 = -127;
uint64_t t48 = 11156LLU;
uint64_t t49 = 31532LLU;
int16_t x307 = INT16_MAX;
uint64_t x311 = UINT64_MAX;
volatile int8_t x315 = INT8_MIN;
int32_t x328 = -1;
int64_t x330 = 376729455307288920LL;
uint64_t x341 = 2142049441306454752LLU;
volatile uint64_t t57 = 15696900810LLU;
static int8_t x376 = 4;
int64_t t59 = 294229LL;
int64_t t60 = -415LL;
uint64_t x388 = 476LLU;
volatile uint64_t t62 = 900496430139LLU;
int64_t x391 = -1LL;
static uint16_t x395 = 874U;
int64_t x397 = -1LL;
uint16_t x398 = UINT16_MAX;
uint32_t x422 = UINT32_MAX;
int16_t x424 = INT16_MAX;
int64_t x431 = -1LL;
volatile int8_t x432 = 47;
int64_t x443 = -1LL;
int64_t x447 = 34612903LL;
int8_t x453 = INT8_MIN;
volatile int16_t x455 = -1;
volatile int64_t x458 = -8180026178900321LL;
volatile uint16_t x460 = 3U;
uint32_t x464 = UINT32_MAX;
uint64_t t77 = 33567151893413941LLU;
volatile int64_t x486 = -1LL;
uint16_t x490 = 29479U;
uint8_t x491 = 35U;
int64_t x501 = 288767LL;
int8_t x506 = INT8_MIN;
volatile uint32_t x507 = 235394733U;
int64_t x513 = INT64_MAX;
int8_t x514 = INT8_MIN;
int32_t x522 = INT32_MIN;
volatile int16_t x532 = 1;
static uint64_t x547 = 750850202972LLU;
volatile uint8_t x552 = 1U;
int16_t x554 = -1;
static int64_t x567 = INT64_MAX;
int64_t t91 = 1561515665LL;
int8_t x569 = 7;
int32_t x570 = INT32_MAX;
int64_t t92 = 376951752533LL;
volatile int16_t x574 = 52;
int8_t x575 = INT8_MIN;
static uint64_t x588 = 5235LLU;
volatile uint64_t t94 = 6729978224LLU;
volatile uint32_t t95 = 20213U;
volatile int64_t x609 = INT64_MAX;
volatile int64_t x610 = 1533021LL;
int8_t x612 = INT8_MIN;


void f0(void) {
	int8_t x10 = INT8_MAX;
	uint64_t x11 = 46055913424747LLU;
	static int32_t x12 = INT32_MAX;
	volatile uint64_t t0 = 369LLU;

	t0 = ((x9%x10)*(x11*x12));

	if (t0 != 14578218711474532165LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x18 = 13;
	volatile int16_t x20 = INT16_MAX;
	uint64_t t1 = 512344261355LLU;

	t1 = ((x17%x18)*(x19*x20));

	if (t1 != 4259710LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x25 = INT32_MIN;
	static int64_t x26 = -340061755602LL;
	int16_t x27 = -1;
	int8_t x28 = -1;
	volatile int64_t t2 = -15LL;

	t2 = ((x25%x26)*(x27*x28));

	if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x29 = INT16_MIN;
	static int32_t x31 = 2;
	int32_t t3 = -381;

	t3 = ((x29%x30)*(x31*x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = -1;
	volatile uint8_t x35 = 9U;
	uint16_t x36 = 553U;
	static volatile int32_t t4 = 5887;

	t4 = ((x33%x34)*(x35*x36));

	if (t4 != -4977) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int8_t x38 = -1;
	static volatile int8_t x40 = 39;
	int32_t t5 = 428978;

	t5 = ((x37%x38)*(x39*x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x42 = 3U;
	volatile int64_t x43 = -1LL;
	int16_t x44 = 3;
	int64_t t6 = -288LL;

	t6 = ((x41%x42)*(x43*x44));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x45 = 48717LLU;
	static int16_t x46 = INT16_MAX;
	uint8_t x48 = 30U;
	volatile uint64_t t7 = 37446479057LLU;

	t7 = ((x45%x46)*(x47*x48));

	if (t7 != 31358497500LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = 60055862;
	volatile uint8_t x50 = 4U;
	static volatile int16_t x51 = -95;

	t8 = ((x49%x50)*(x51*x52));

	if (t8 != -12451650) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x53 = 439LLU;
	int16_t x54 = INT16_MAX;
	static int16_t x55 = 28;
	uint64_t t9 = 4140494618126587585LLU;

	t9 = ((x53%x54)*(x55*x56));

	if (t9 != 18446744073709539324LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x57 = INT64_MAX;
	uint16_t x58 = 56U;
	uint16_t x59 = 0U;
	int16_t x60 = INT16_MIN;
	volatile int64_t t10 = 49LL;

	t10 = ((x57%x58)*(x59*x60));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = 2U;
	int8_t x62 = INT8_MAX;
	int8_t x63 = -1;
	int64_t x64 = 104510LL;
	static int64_t t11 = 1409011755LL;

	t11 = ((x61%x62)*(x63*x64));

	if (t11 != -209020LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x70 = -673;
	int16_t x71 = INT16_MAX;
	volatile int64_t t12 = 0LL;

	t12 = ((x69%x70)*(x71*x72));

	if (t12 != -3604370LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x73 = 1;
	int8_t x74 = 1;
	volatile int16_t x75 = INT16_MIN;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t13 = -10528759;

	t13 = ((x73%x74)*(x75*x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x81 = -8537;
	static int32_t x82 = INT32_MAX;
	uint8_t x83 = 1U;
	static int8_t x84 = -1;
	volatile int32_t t14 = 6690882;

	t14 = ((x81%x82)*(x83*x84));

	if (t14 != 8537) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x101 = 1LLU;
	static volatile int16_t x102 = INT16_MAX;
	static int8_t x103 = INT8_MAX;
	static volatile int64_t x104 = -1LL;

	t15 = ((x101%x102)*(x103*x104));

	if (t15 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x109 = 5U;
	uint8_t x110 = 4U;
	static uint64_t x111 = 9000302462231307221LLU;
	static volatile uint64_t x112 = 8183219376412065240LLU;
	uint64_t t16 = 1832LLU;

	t16 = ((x109%x110)*(x111*x112));

	if (t16 != 15776513341890575544LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x120 = 14114U;
	int64_t t17 = 849LL;

	t17 = ((x117%x118)*(x119*x120));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x122 = INT16_MAX;
	static int16_t x123 = -171;
	static volatile uint64_t t18 = 14373LLU;

	t18 = ((x121%x122)*(x123*x124));

	if (t18 != 15949632345071983456LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x125 = -3;
	int8_t x126 = INT8_MIN;
	uint16_t x127 = 1331U;
	volatile uint16_t x128 = 555U;

	t19 = ((x125%x126)*(x127*x128));

	if (t19 != -2216115) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x129 = 14897106U;
	int32_t x131 = -1;
	volatile int32_t x132 = INT32_MAX;
	volatile uint64_t t20 = 238051774787967LLU;

	t20 = ((x129%x130)*(x131*x132));

	if (t20 != 18414752782186926034LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x133 = -1;
	static int64_t x134 = -3107194390766952LL;
	uint8_t x135 = 10U;
	uint32_t x136 = UINT32_MAX;
	volatile int64_t t21 = 1LL;

	t21 = ((x133%x134)*(x135*x136));

	if (t21 != -4294967286LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x141 = INT8_MAX;
	static int16_t x142 = -1;
	int8_t x143 = INT8_MIN;
	static int8_t x144 = INT8_MIN;
	static volatile int32_t t22 = -1;

	t22 = ((x141%x142)*(x143*x144));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x149 = -1;
	int8_t x150 = -10;
	int32_t x151 = -1;
	static uint64_t x152 = 0LLU;
	volatile uint64_t t23 = 9984LLU;

	t23 = ((x149%x150)*(x151*x152));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x153 = UINT64_MAX;
	uint64_t x154 = 35LLU;
	static int32_t x155 = 105;
	int16_t x156 = INT16_MAX;
	static volatile uint64_t t24 = 7747422LLU;

	t24 = ((x153%x154)*(x155*x156));

	if (t24 != 51608025LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x157 = -1;
	volatile int32_t x158 = INT32_MIN;
	int32_t x159 = -1;
	static int8_t x160 = INT8_MAX;
	volatile int32_t t25 = 114;

	t25 = ((x157%x158)*(x159*x160));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x161 = INT64_MIN;
	static uint16_t x163 = 3311U;
	uint64_t x164 = UINT64_MAX;

	t26 = ((x161%x162)*(x163*x164));

	if (t26 != 9933LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x171 = UINT32_MAX;
	volatile int16_t x172 = -2895;
	static volatile int64_t t27 = 3415202914911118518LL;

	t27 = ((x169%x170)*(x171*x172));

	if (t27 != -94863360LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x173 = 111U;
	int32_t x174 = INT32_MIN;
	int16_t x175 = INT16_MIN;
	volatile uint32_t x176 = UINT32_MAX;
	volatile uint32_t t28 = 225U;

	t28 = ((x173%x174)*(x175*x176));

	if (t28 != 3637248U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x189 = 0LLU;
	int16_t x190 = INT16_MIN;
	uint32_t x191 = 784U;
	int8_t x192 = INT8_MIN;
	volatile uint64_t t29 = 134376807552673696LLU;

	t29 = ((x189%x190)*(x191*x192));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x197 = 91U;
	int64_t x198 = INT64_MIN;
	int32_t x199 = -9;
	volatile int16_t x200 = -2222;

	t30 = ((x197%x198)*(x199*x200));

	if (t30 != 1819818LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x205 = 7886004980513227300LLU;
	int16_t x206 = INT16_MAX;
	int64_t x207 = 31LL;
	int32_t x208 = INT32_MIN;

	t31 = ((x205%x206)*(x207*x208));

	if (t31 != 18444603850703765504LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x209 = 6;
	static int32_t x211 = 68849;
	int64_t t32 = -2166577945509LL;

	t32 = ((x209%x210)*(x211*x212));

	if (t32 != 30155862LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x213 = -1;
	volatile int16_t x215 = INT16_MIN;
	static int64_t t33 = -2LL;

	t33 = ((x213%x214)*(x215*x216));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x217 = 0U;
	uint16_t x218 = 25U;
	static uint16_t x219 = UINT16_MAX;
	uint8_t x220 = UINT8_MAX;
	int32_t t34 = 166338513;

	t34 = ((x217%x218)*(x219*x220));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x227 = 10873434375LLU;
	static uint64_t x228 = 3904287973LLU;
	uint64_t t35 = 4573LLU;

	t35 = ((x225%x226)*(x227*x228));

	if (t35 != 17762506539354356864LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x229 = 0U;
	static int16_t x231 = INT16_MIN;
	int32_t t36 = -3326419;

	t36 = ((x229%x230)*(x231*x232));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x233 = 1;
	uint8_t x235 = UINT8_MAX;

	t37 = ((x233%x234)*(x235*x236));

	if (t37 != -8355840LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x237 = 3536278LL;
	uint32_t x238 = UINT32_MAX;
	volatile int64_t t38 = 41175484LL;

	t38 = ((x237%x238)*(x239*x240));

	if (t38 != -3793841273385348LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x241 = 654508730471553765LL;
	int32_t x242 = 4;
	static int16_t x244 = INT16_MIN;
	volatile int64_t t39 = 112149305441LL;

	t39 = ((x241%x242)*(x243*x244));

	if (t39 != 32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x249 = INT8_MAX;
	uint8_t x251 = 5U;

	t40 = ((x249%x250)*(x251*x252));

	if (t40 != 395571618685LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x254 = INT64_MIN;
	int8_t x255 = -25;
	static uint32_t x256 = UINT32_MAX;
	int64_t t41 = -14028429960LL;

	t41 = ((x253%x254)*(x255*x256));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x257 = INT64_MIN;
	int8_t x259 = 1;

	t42 = ((x257%x258)*(x259*x260));

	if (t42 != 1024LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x261 = -1;
	uint32_t x262 = 2U;
	static int32_t x263 = INT32_MAX;
	int8_t x264 = -1;

	t43 = ((x261%x262)*(x263*x264));

	if (t43 != 2147483649U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x265 = INT8_MIN;
	uint64_t x266 = 166419277371973LLU;
	volatile uint8_t x268 = 0U;
	volatile uint64_t t44 = 23485096188LLU;

	t44 = ((x265%x266)*(x267*x268));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x269 = UINT8_MAX;
	volatile int16_t x270 = 22;

	t45 = ((x269%x270)*(x271*x272));

	if (t45 != 72644) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x273 = 1;
	int8_t x274 = 11;
	uint32_t x275 = 12360643U;
	int16_t x276 = INT16_MAX;
	uint32_t t46 = 7532708U;

	t46 = ((x273%x274)*(x275*x276));

	if (t46 != 1294263357U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x277 = 8817U;
	static uint8_t x278 = 14U;
	int32_t t47 = -19;

	t47 = ((x277%x278)*(x279*x280));

	if (t47 != -91552395) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x297 = -2001239981LL;
	static uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 15346201060663LLU;
	static int64_t x300 = -6LL;

	t48 = ((x297%x298)*(x299*x300));

	if (t48 != 4060162095700712194LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x301 = INT64_MAX;
	int64_t x302 = INT64_MIN;
	static uint64_t x303 = 33018LLU;
	volatile uint16_t x304 = 5774U;

	t49 = ((x301%x302)*(x303*x304));

	if (t49 != 18446744073518905684LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x305 = 8669LLU;
	uint64_t x306 = 3165LLU;
	uint32_t x308 = 8643901U;
	static uint64_t t50 = 12745LLU;

	t50 = ((x305%x306)*(x307*x308));

	if (t50 != 9500619965353LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x309 = UINT16_MAX;
	volatile int32_t x310 = 7272;
	int32_t x312 = -12202;
	volatile uint64_t t51 = 217231339LLU;

	t51 = ((x309%x310)*(x311*x312));

	if (t51 != 1061574LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x313 = 15181631LL;
	static int32_t x314 = INT32_MIN;
	volatile int32_t x316 = -151467;
	static int64_t t52 = -12790360981LL;

	t52 = ((x313%x314)*(x315*x316));

	if (t52 != 294338061142656LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x321 = 4538821773157803791LL;
	volatile uint8_t x322 = UINT8_MAX;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = -58627LL;
	int64_t t53 = 890069723355LL;

	t53 = ((x321%x322)*(x323*x324));

	if (t53 != -676213198320LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x325 = INT64_MAX;
	uint8_t x326 = 115U;
	volatile int8_t x327 = 13;
	static volatile int64_t t54 = 1206LL;

	t54 = ((x325%x326)*(x327*x328));

	if (t54 != -26LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x329 = -106683;
	static int64_t x331 = -1LL;
	uint64_t x332 = 26214067LLU;
	volatile uint64_t t55 = 16810LLU;

	t55 = ((x329%x330)*(x331*x332));

	if (t55 != 2796595309761LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x333 = 80366136800LL;
	int16_t x334 = INT16_MIN;
	int64_t x335 = -1LL;
	int16_t x336 = INT16_MIN;
	volatile int64_t t56 = 7835LL;

	t56 = ((x333%x334)*(x335*x336));

	if (t56 != 921698304LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x342 = INT32_MIN;
	int32_t x343 = -49;
	uint64_t x344 = 101961LLU;

	t57 = ((x341%x342)*(x343*x344));

	if (t57 != 8923195272154557472LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x361 = 3748432596LL;
	volatile int32_t x362 = INT32_MIN;
	uint16_t x363 = 14602U;
	static int8_t x364 = INT8_MIN;
	static int64_t t58 = -53237745LL;

	t58 = ((x361%x362)*(x363*x364));

	if (t58 != -2992263236953088LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MAX;

	t59 = ((x373%x374)*(x375*x376));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x377 = INT8_MIN;
	static int64_t x378 = 209937085352434LL;
	uint8_t x379 = 37U;
	static volatile uint32_t x380 = 1641118U;

	t60 = ((x377%x378)*(x379*x380));

	if (t60 != -7772334848LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x381 = -1024011470;
	static volatile int16_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	static uint8_t x384 = 125U;
	volatile uint32_t t61 = 16913U;

	t61 = ((x381%x382)*(x383*x384));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x385 = INT32_MAX;
	uint32_t x386 = 79839793U;
	int16_t x387 = INT16_MAX;

	t62 = ((x385%x386)*(x387*x388));

	if (t62 != 1117516497023668LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x389 = INT16_MIN;
	uint8_t x390 = 15U;
	static int32_t x392 = -1;
	volatile int64_t t63 = 374177133067528443LL;

	t63 = ((x389%x390)*(x391*x392));

	if (t63 != -8LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x393 = 65790621739993532LLU;
	int32_t x394 = -12192;
	uint32_t x396 = 32159U;
	volatile uint64_t t64 = 83337522349704267LLU;

	t64 = ((x393%x394)*(x395*x396));

	if (t64 != 17802183992461501224LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x399 = UINT8_MAX;
	static int16_t x400 = INT16_MIN;
	int64_t t65 = 4356341306788LL;

	t65 = ((x397%x398)*(x399*x400));

	if (t65 != 8355840LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x405 = 431U;
	static int16_t x406 = -1;
	uint8_t x407 = UINT8_MAX;
	uint64_t x408 = UINT64_MAX;
	uint64_t t66 = 15138412480LLU;

	t66 = ((x405%x406)*(x407*x408));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x409 = UINT32_MAX;
	static uint8_t x410 = 2U;
	static int64_t x411 = -462436307LL;
	int8_t x412 = INT8_MAX;
	volatile int64_t t67 = 209764446790LL;

	t67 = ((x409%x410)*(x411*x412));

	if (t67 != -58729410989LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x421 = 365868U;
	uint16_t x423 = UINT16_MAX;
	uint32_t t68 = 505U;

	t68 = ((x421%x422)*(x423*x424));

	if (t68 != 2688783660U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x425 = INT16_MIN;
	volatile uint8_t x426 = 51U;
	uint64_t x427 = 367963LLU;
	volatile uint64_t x428 = 42361208666937LLU;
	uint64_t t69 = 763013480LLU;

	t69 = ((x425%x426)*(x427*x428));

	if (t69 != 557076579094512946LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x429 = 1751U;
	int64_t x430 = INT64_MAX;
	int64_t t70 = 3776954486LL;

	t70 = ((x429%x430)*(x431*x432));

	if (t70 != -82297LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x437 = INT32_MIN;
	int8_t x438 = INT8_MIN;
	int16_t x439 = INT16_MIN;
	int8_t x440 = 5;
	int32_t t71 = -103587;

	t71 = ((x437%x438)*(x439*x440));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x441 = UINT64_MAX;
	int16_t x442 = INT16_MIN;
	int32_t x444 = -10114197;
	static uint64_t t72 = 46109147LLU;

	t72 = ((x441%x442)*(x443*x444));

	if (t72 != 331411893099LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x445 = -3;
	int64_t x446 = INT64_MIN;
	uint8_t x448 = 4U;
	int64_t t73 = -5LL;

	t73 = ((x445%x446)*(x447*x448));

	if (t73 != -415354836LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x454 = INT32_MAX;
	uint8_t x456 = UINT8_MAX;
	static volatile int32_t t74 = 47;

	t74 = ((x453%x454)*(x455*x456));

	if (t74 != 32640) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x457 = INT32_MIN;
	int64_t x459 = 2LL;
	static volatile int64_t t75 = 2380952529LL;

	t75 = ((x457%x458)*(x459*x460));

	if (t75 != -12884901888LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x461 = 1;
	volatile int32_t x462 = INT32_MIN;
	uint32_t x463 = 42347201U;
	volatile uint32_t t76 = 570U;

	t76 = ((x461%x462)*(x463*x464));

	if (t76 != 4252620095U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x473 = INT8_MIN;
	uint64_t x474 = UINT64_MAX;
	volatile int16_t x475 = INT16_MAX;
	uint16_t x476 = UINT16_MAX;

	t77 = ((x473%x474)*(x475*x476));

	if (t77 != 18446743798844227456LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x481 = UINT32_MAX;
	uint32_t x482 = UINT32_MAX;
	volatile uint32_t x483 = 6826118U;
	uint8_t x484 = 1U;
	volatile uint32_t t78 = 0U;

	t78 = ((x481%x482)*(x483*x484));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x485 = -438388;
	uint64_t x487 = 206121998LLU;
	volatile uint8_t x488 = 17U;
	uint64_t t79 = 871988765708LLU;

	t79 = ((x485%x486)*(x487*x488));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x489 = INT32_MAX;
	uint32_t x492 = 24334919U;
	uint32_t t80 = 0U;

	t80 = ((x489%x490)*(x491*x492));

	if (t80 != 864464174U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x502 = INT16_MIN;
	int16_t x503 = INT16_MIN;
	int8_t x504 = -1;
	volatile int64_t t81 = 5LL;

	t81 = ((x501%x502)*(x503*x504));

	if (t81 != 872382464LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x505 = 1498701966LL;
	uint16_t x508 = 1380U;
	int64_t t82 = -116LL;

	t82 = ((x505%x506)*(x507*x508));

	if (t82 != 38110580760LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x515 = 199056U;
	int8_t x516 = -5;
	volatile int64_t t83 = 1326LL;

	t83 = ((x513%x514)*(x515*x516));

	if (t83 != 545334446032LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x521 = INT64_MAX;
	uint16_t x523 = UINT16_MAX;
	uint16_t x524 = 17U;
	volatile int64_t t84 = -3622016287204473LL;

	t84 = ((x521%x522)*(x523*x524));

	if (t84 != 2392500793704465LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x529 = INT32_MIN;
	uint64_t x530 = UINT64_MAX;
	static uint64_t x531 = 242539137303747918LLU;
	volatile uint64_t t85 = 1445993320LLU;

	t85 = ((x529%x530)*(x531*x532));

	if (t85 != 5075751775856754688LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x541 = 37U;
	static int16_t x542 = -1;
	int8_t x543 = 32;
	int32_t x544 = 370;
	volatile int32_t t86 = 63087;

	t86 = ((x541%x542)*(x543*x544));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x545 = INT16_MIN;
	int16_t x546 = INT16_MIN;
	int8_t x548 = -1;
	uint64_t t87 = 114802913616675LLU;

	t87 = ((x545%x546)*(x547*x548));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x549 = INT64_MIN;
	volatile int8_t x550 = -1;
	static uint8_t x551 = 115U;
	int64_t t88 = 14426LL;

	t88 = ((x549%x550)*(x551*x552));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x553 = INT32_MIN;
	int16_t x555 = -10345;
	static volatile int8_t x556 = 17;
	int32_t t89 = 5984075;

	t89 = ((x553%x554)*(x555*x556));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x561 = INT8_MIN;
	uint16_t x562 = UINT16_MAX;
	int8_t x563 = 3;
	uint16_t x564 = UINT16_MAX;
	int32_t t90 = 2;

	t90 = ((x561%x562)*(x563*x564));

	if (t90 != -25165440) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x565 = UINT8_MAX;
	int8_t x566 = -1;
	uint8_t x568 = 0U;

	t91 = ((x565%x566)*(x567*x568));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x571 = UINT32_MAX;
	int64_t x572 = 754086LL;

	t92 = ((x569%x570)*(x571*x572));

	if (t92 != 22671422953321590LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x573 = INT64_MIN;
	int16_t x576 = -1;
	static int64_t t93 = 7276184LL;

	t93 = ((x573%x574)*(x575*x576));

	if (t93 != -1024LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x585 = 107U;
	uint8_t x586 = 78U;
	int64_t x587 = INT64_MAX;

	t94 = ((x585%x586)*(x587*x588));

	if (t94 != 9223372036854623993LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x589 = 100127U;
	int32_t x590 = INT32_MIN;
	static uint16_t x591 = 2028U;
	int16_t x592 = -1;

	t95 = ((x589%x590)*(x591*x592));

	if (t95 != 4091909740U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x597 = 27833285;
	static volatile int32_t x598 = INT32_MIN;
	int64_t x599 = -1LL;
	uint32_t x600 = 8254532U;
	volatile int64_t t96 = 35987080070647573LL;

	t96 = ((x597%x598)*(x599*x600));

	if (t96 != -229750741697620LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x601 = UINT8_MAX;
	int64_t x602 = -781850386820368LL;
	volatile int64_t x603 = -1LL;
	int8_t x604 = 15;
	static int64_t t97 = 0LL;

	t97 = ((x601%x602)*(x603*x604));

	if (t97 != -3825LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x605 = -452397421651756157LL;
	static int8_t x606 = INT8_MIN;
	uint8_t x607 = 0U;
	volatile uint16_t x608 = 15974U;
	volatile int64_t t98 = -205330LL;

	t98 = ((x605%x606)*(x607*x608));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x611 = -1870539;
	volatile int64_t t99 = -11405726795808LL;

	t99 = ((x609%x610)*(x611*x612));

	if (t99 != 88811396002560LL) { NG(); } else { ; }
	
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

