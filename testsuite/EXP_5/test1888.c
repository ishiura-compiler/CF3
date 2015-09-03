#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x11 = INT16_MIN;
volatile uint32_t x16 = 44U;
int64_t x23 = INT64_MIN;
int16_t x31 = -1;
int64_t x32 = -2005LL;
volatile int64_t t5 = -2080237638137422746LL;
volatile int32_t x38 = INT32_MIN;
uint32_t x43 = 121206137U;
uint64_t x45 = UINT64_MAX;
int16_t x46 = INT16_MIN;
volatile uint8_t x47 = 68U;
static volatile uint64_t t9 = 2261236750130567499LLU;
int64_t x51 = 2657LL;
int64_t x63 = 1521408LL;
volatile int8_t x79 = INT8_MAX;
int16_t x84 = -5834;
static volatile int32_t t16 = -675;
volatile int64_t x91 = 135955163299189166LL;
volatile int8_t x96 = INT8_MAX;
static uint32_t x98 = 151572U;
static volatile uint32_t t20 = 36192U;
volatile int16_t x114 = -1;
int64_t x120 = -1LL;
static int32_t x123 = -1;
int16_t x124 = 6;
volatile uint64_t t23 = 2LLU;
uint8_t x133 = UINT8_MAX;
uint64_t x138 = 86544LLU;
uint8_t x151 = 10U;
volatile uint64_t t26 = 56353989LLU;
uint8_t x159 = 6U;
int32_t x165 = -1;
volatile uint64_t t29 = 26930964630LLU;
int32_t x170 = INT32_MAX;
uint64_t t30 = 93266000297LLU;
int64_t x189 = INT64_MIN;
uint64_t x194 = 370178577424LLU;
volatile uint32_t t35 = 57339290U;
uint8_t x202 = UINT8_MAX;
int16_t x225 = INT16_MIN;
int16_t x226 = -724;
uint16_t x233 = 7308U;
int8_t x243 = 8;
int32_t x246 = INT32_MIN;
static int8_t x249 = INT8_MIN;
volatile uint32_t x252 = 13432U;
volatile int64_t x253 = 7200LL;
int8_t x254 = 0;
volatile uint64_t x255 = 1296220LLU;
int16_t x266 = -809;
int32_t x267 = -6738496;
volatile uint8_t x275 = 1U;
int16_t x278 = INT16_MIN;
uint64_t x287 = 164299450495978LLU;
volatile uint64_t t47 = 1031732837LLU;
static int64_t t48 = -47137295944LL;
int8_t x298 = -1;
int64_t x308 = -1LL;
int32_t x314 = INT32_MIN;
int8_t x319 = INT8_MIN;
uint64_t t53 = 72917328LLU;
static volatile uint64_t t55 = 7765552456741687LLU;
static int64_t x332 = -3553877322LL;
int8_t x357 = INT8_MIN;
static int8_t x359 = INT8_MIN;
volatile int8_t x363 = INT8_MIN;
volatile uint64_t x373 = UINT64_MAX;
int16_t x378 = 109;
uint32_t t63 = 1U;
static uint16_t x384 = 2U;
int32_t t64 = 10501004;
uint64_t t65 = 4447364LLU;
static volatile uint64_t t66 = 834LLU;
volatile uint64_t x406 = 1882510672411400LLU;
uint64_t x418 = UINT64_MAX;
int64_t x438 = INT64_MAX;
uint64_t x439 = UINT64_MAX;
int64_t x447 = INT64_MIN;
int8_t x451 = -17;
int32_t x453 = -1;
int64_t x462 = 414303552266LL;
uint32_t x472 = 8153U;
int8_t x474 = INT8_MAX;
int64_t x475 = 67975516316LL;
int64_t t77 = -114738266862LL;
static uint64_t x487 = 4429792LLU;
static volatile uint64_t x488 = 5001391844722LLU;
uint64_t t79 = 2729774294201989LLU;
uint64_t x492 = 0LLU;
volatile int16_t x501 = INT16_MAX;
uint16_t x510 = 5U;
static volatile int16_t x511 = INT16_MIN;
uint16_t x512 = 1U;
int64_t x528 = -1LL;
uint64_t t88 = 69LLU;
uint32_t x532 = 6U;
static volatile int16_t x534 = INT16_MIN;
volatile int64_t x535 = -1LL;
static int16_t x545 = 7;
volatile uint16_t x549 = UINT16_MAX;
volatile int8_t x551 = INT8_MIN;
int8_t x555 = INT8_MAX;
uint32_t x557 = 3840U;
static volatile int8_t x560 = -56;
volatile int64_t t95 = -4191785907LL;
static volatile int32_t t96 = -55611457;
int32_t x570 = -1;
int16_t x572 = -1;
int8_t x580 = 1;
uint16_t x582 = 4U;


void f0(void) {
	uint16_t x5 = 15835U;
	volatile int16_t x6 = 1;
	static uint32_t x7 = UINT32_MAX;
	int8_t x8 = INT8_MIN;
	volatile uint32_t t0 = 41659780U;

	t0 = (x5*((x6|x7)*x8));

	if (t0 != 2026880U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	uint8_t x10 = 12U;
	uint8_t x12 = 2U;
	volatile int32_t t1 = -488;

	t1 = (x9*((x10|x11)*x12));

	if (t1 != 65512) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 181800593843678535LL;
	int8_t x14 = 3;
	volatile uint64_t x15 = 258326054LLU;
	volatile uint64_t t2 = 737446LLU;

	t2 = (x13*((x14|x15)*x16));

	if (t2 != 15100888630706903020LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 10406182751634LLU;
	static int32_t x22 = -580315312;
	uint32_t x24 = 31200U;
	static volatile uint64_t t3 = 50564200LLU;

	t3 = (x21*((x22|x23)*x24));

	if (t3 != 8003286551215655936LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 8U;
	static int32_t x26 = -30814;
	uint16_t x27 = UINT16_MAX;
	static uint32_t x28 = UINT32_MAX;
	uint32_t t4 = 322U;

	t4 = (x25*((x26|x27)*x28));

	if (t4 != 8U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	static int8_t x30 = 2;

	t5 = (x29*((x30|x31)*x32));

	if (t5 != 8611409426475LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = -1;
	uint8_t x36 = 25U;
	volatile uint32_t t6 = 181834340U;

	t6 = (x33*((x34|x35)*x36));

	if (t6 != 25U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = -1;
	int16_t x39 = -583;
	volatile uint32_t x40 = UINT32_MAX;
	volatile uint32_t t7 = 1546991977U;

	t7 = (x37*((x38|x39)*x40));

	if (t7 != 4294966713U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 1;
	int8_t x42 = 5;
	uint64_t x44 = UINT64_MAX;
	uint64_t t8 = 5879045486210965LLU;

	t8 = (x41*((x42|x43)*x44));

	if (t8 != 18446744073588345475LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x48 = 254U;

	t9 = (x45*((x46|x47)*x48));

	if (t9 != 8305800LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = 1414LL;
	static volatile int32_t x50 = -1;
	int8_t x52 = INT8_MIN;
	static volatile int64_t t10 = -12325042205688032LL;

	t10 = (x49*((x50|x51)*x52));

	if (t10 != 180992LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MIN;
	static uint16_t x62 = UINT16_MAX;
	static int8_t x64 = -1;
	int64_t t11 = 9789762538LL;

	t11 = (x61*((x62|x63)*x64));

	if (t11 != 3377697573044224LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MIN;
	static volatile int8_t x70 = -1;
	int32_t x71 = INT32_MIN;
	static int8_t x72 = 12;
	int32_t t12 = 43852;

	t12 = (x69*((x70|x71)*x72));

	if (t12 != 393216) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x73 = 2U;
	int32_t x74 = INT32_MAX;
	int64_t x75 = -1LL;
	int16_t x76 = INT16_MAX;
	static volatile int64_t t13 = 912349418998377LL;

	t13 = (x73*((x74|x75)*x76));

	if (t13 != -65534LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = 0U;
	int16_t x78 = INT16_MIN;
	volatile int16_t x80 = INT16_MIN;
	int32_t t14 = -1345;

	t14 = (x77*((x78|x79)*x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -1;
	int32_t x82 = -1;
	static int32_t x83 = 5;
	int32_t t15 = -728;

	t15 = (x81*((x82|x83)*x84));

	if (t15 != -5834) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = 0;
	static uint8_t x86 = 26U;
	uint16_t x87 = 2133U;
	int32_t x88 = -1;

	t16 = (x85*((x86|x87)*x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = 523887150232150LLU;
	int16_t x90 = -113;
	int64_t x92 = -1LL;
	volatile uint64_t t17 = 1264058826887737LLU;

	t17 = (x89*((x90|x91)*x92));

	if (t17 != 42434859168804150LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -34;
	int16_t x94 = 1;
	int8_t x95 = -1;
	int32_t t18 = 48039865;

	t18 = (x93*((x94|x95)*x96));

	if (t18 != 4318) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x97 = 223U;
	static volatile int32_t x99 = INT32_MIN;
	int32_t x100 = -1;
	uint32_t t19 = 9785121U;

	t19 = (x97*((x98|x99)*x100));

	if (t19 != 2113683092U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 42U;
	int16_t x102 = INT16_MIN;
	uint16_t x103 = 465U;
	uint8_t x104 = 12U;

	t20 = (x101*((x102|x103)*x104));

	if (t20 != 4278686584U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = -1;
	int32_t x115 = 4;
	int8_t x116 = INT8_MIN;
	volatile int32_t t21 = 64922;

	t21 = (x113*((x114|x115)*x116));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = -1;
	uint8_t x118 = 0U;
	int16_t x119 = INT16_MAX;
	volatile int64_t t22 = 2387807450496789794LL;

	t22 = (x117*((x118|x119)*x120));

	if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x121 = INT64_MIN;
	uint64_t x122 = UINT64_MAX;

	t23 = (x121*((x122|x123)*x124));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x134 = 1831LL;
	int8_t x135 = -28;
	int32_t x136 = -103017;
	int64_t t24 = -2648263391041271LL;

	t24 = (x133*((x134|x135)*x136));

	if (t24 != 656733375LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = INT16_MIN;
	volatile int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	static volatile uint64_t t25 = 377651693718LLU;

	t25 = (x137*((x138|x139)*x140));

	if (t25 != 18446743953450467328LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x149 = 50U;
	volatile uint64_t x150 = 559393461533928927LLU;
	volatile int64_t x152 = INT64_MAX;

	t26 = (x149*((x150|x151)*x152));

	if (t26 != 8923815070722656882LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x153 = 13736;
	int8_t x154 = INT8_MIN;
	int8_t x155 = 28;
	volatile uint8_t x156 = 22U;
	int32_t t27 = -73822129;

	t27 = (x153*((x154|x155)*x156));

	if (t27 != -30219200) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x157 = INT8_MIN;
	uint32_t x158 = 1149587021U;
	static volatile int32_t x160 = INT32_MIN;
	volatile uint32_t t28 = 495435179U;

	t28 = (x157*((x158|x159)*x160));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x166 = 104LLU;
	static int32_t x167 = INT32_MIN;
	static int8_t x168 = INT8_MIN;

	t29 = (x165*((x166|x167)*x168));

	if (t29 != 18446743798831657984LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x169 = 787610166U;
	volatile int16_t x171 = 1;
	uint64_t x172 = UINT64_MAX;

	t30 = (x169*((x170|x171)*x172));

	if (t30 != 16755364122013596214LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x173 = INT64_MAX;
	static volatile int64_t x174 = -1LL;
	uint64_t x175 = 377LLU;
	int8_t x176 = INT8_MIN;
	uint64_t t31 = 135140684828433LLU;

	t31 = (x173*((x174|x175)*x176));

	if (t31 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = -1;
	int16_t x182 = INT16_MIN;
	int64_t x183 = 779498LL;
	int32_t x184 = -1;
	static int64_t t32 = -1LL;

	t32 = (x181*((x182|x183)*x184));

	if (t32 != -6934LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x190 = -1LL;
	static volatile int8_t x191 = INT8_MIN;
	int64_t x192 = -1LL;
	int64_t t33 = INT64_MIN;

	t33 = (x189*((x190|x191)*x192));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x193 = INT16_MIN;
	int32_t x195 = INT32_MAX;
	volatile int32_t x196 = -495;
	volatile uint64_t t34 = 48780367112LLU;

	t34 = (x193*((x194|x195)*x196));

	if (t34 != 6026027407638036480LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x197 = 328U;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = 31U;
	uint8_t x200 = UINT8_MAX;

	t35 = (x197*((x198|x199)*x200));

	if (t35 != 1556844616U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x201 = UINT8_MAX;
	static uint8_t x203 = 51U;
	uint16_t x204 = 5300U;
	int32_t t36 = -14359449;

	t36 = (x201*((x202|x203)*x204));

	if (t36 != 344632500) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = -50;
	static int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MAX;
	int64_t t37 = 228106209485LL;

	t37 = (x217*((x218|x219)*x220));

	if (t37 != -208070450LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x227 = INT8_MIN;
	int64_t x228 = -18408202522LL;
	volatile int64_t t38 = 252875LL;

	t38 = (x225*((x226|x227)*x228));

	if (t38 != -50668798340235264LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x234 = UINT64_MAX;
	uint32_t x235 = 30838872U;
	volatile int64_t x236 = -1LL;
	static volatile uint64_t t39 = 258399LLU;

	t39 = (x233*((x234|x235)*x236));

	if (t39 != 7308LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x241 = 1;
	uint64_t x242 = 237LLU;
	int16_t x244 = -1;
	volatile uint64_t t40 = 118490566LLU;

	t40 = (x241*((x242|x243)*x244));

	if (t40 != 18446744073709551379LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x245 = -1LL;
	int64_t x247 = INT64_MIN;
	int8_t x248 = -4;
	int64_t t41 = 3349697LL;

	t41 = (x245*((x246|x247)*x248));

	if (t41 != -8589934592LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x250 = 0;
	int32_t x251 = INT32_MAX;
	volatile uint32_t t42 = 8U;

	t42 = (x249*((x250|x251)*x252));

	if (t42 != 1719296U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x256 = INT8_MAX;
	static uint64_t t43 = 914596790079208LLU;

	t43 = (x253*((x254|x255)*x256));

	if (t43 != 1185263568000LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x265 = 2329U;
	uint8_t x268 = 1U;
	volatile int32_t t44 = 673;

	t44 = (x265*((x266|x267)*x268));

	if (t44 != -1287937) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x273 = -1;
	int8_t x274 = INT8_MAX;
	uint32_t x276 = UINT32_MAX;
	static volatile uint32_t t45 = 1399121U;

	t45 = (x273*((x274|x275)*x276));

	if (t45 != 127U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x277 = INT16_MAX;
	uint32_t x279 = 2067274U;
	uint8_t x280 = 17U;
	static volatile uint32_t t46 = 3U;

	t46 = (x277*((x278|x279)*x280));

	if (t46 != 536657942U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x285 = 3425U;
	int16_t x286 = -1;
	int16_t x288 = INT16_MIN;

	t47 = (x285*((x286|x287)*x288));

	if (t47 != 112230400LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x293 = 155U;
	static int64_t x294 = -49831LL;
	volatile int32_t x295 = INT32_MIN;
	volatile int16_t x296 = INT16_MIN;

	t48 = (x293*((x294|x295)*x296));

	if (t48 != 253093642240LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x297 = -1LL;
	static uint8_t x299 = UINT8_MAX;
	static int16_t x300 = INT16_MAX;
	int64_t t49 = 10671292465LL;

	t49 = (x297*((x298|x299)*x300));

	if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x305 = INT64_MIN;
	static int8_t x306 = INT8_MAX;
	volatile int8_t x307 = INT8_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = (x305*((x306|x307)*x308));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x309 = INT16_MIN;
	uint64_t x310 = 332672229479LLU;
	uint64_t x311 = 79990122783901LLU;
	int32_t x312 = INT32_MIN;
	static volatile uint64_t t51 = 0LLU;

	t51 = (x309*((x310|x311)*x312));

	if (t51 != 17960284945209360384LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x313 = -3;
	static int64_t x315 = INT64_MIN;
	volatile uint16_t x316 = UINT16_MAX;
	int64_t t52 = 3657564212273LL;

	t52 = (x313*((x314|x315)*x316));

	if (t52 != 422206022615040LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x317 = -1LL;
	static uint64_t x318 = UINT64_MAX;
	uint32_t x320 = 350301U;

	t53 = (x317*((x318|x319)*x320));

	if (t53 != 350301LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x321 = -1;
	static int8_t x322 = INT8_MIN;
	volatile int64_t x323 = -101279LL;
	uint32_t x324 = 0U;
	volatile int64_t t54 = 157637045254161LL;

	t54 = (x321*((x322|x323)*x324));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x325 = -1;
	uint64_t x326 = UINT64_MAX;
	volatile int8_t x327 = INT8_MAX;
	uint16_t x328 = UINT16_MAX;

	t55 = (x325*((x326|x327)*x328));

	if (t55 != 65535LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x329 = 15;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = -1LL;
	int64_t t56 = 6LL;

	t56 = (x329*((x330|x331)*x332));

	if (t56 != 53308159830LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x337 = 6U;
	static uint64_t x338 = 7LLU;
	uint16_t x339 = 16090U;
	int16_t x340 = 5;
	uint64_t t57 = 330617LLU;

	t57 = (x337*((x338|x339)*x340));

	if (t57 != 482850LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x353 = 1U;
	volatile int32_t x354 = -1;
	static volatile int64_t x355 = -866406277311LL;
	uint32_t x356 = 2548755U;
	volatile int64_t t58 = 247LL;

	t58 = (x353*((x354|x355)*x356));

	if (t58 != -2548755LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x358 = -1;
	uint32_t x360 = 1443U;
	volatile uint32_t t59 = 959U;

	t59 = (x357*((x358|x359)*x360));

	if (t59 != 184704U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	static uint64_t t60 = 6785LLU;

	t60 = (x361*((x362|x363)*x364));

	if (t60 != 16256LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x369 = 249499589LL;
	int8_t x370 = -1;
	int16_t x371 = -1;
	static int32_t x372 = -1;
	volatile int64_t t61 = -892835LL;

	t61 = (x369*((x370|x371)*x372));

	if (t61 != 249499589LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x374 = -1LL;
	int16_t x375 = INT16_MAX;
	uint16_t x376 = 17U;
	uint64_t t62 = 748214LLU;

	t62 = (x373*((x374|x375)*x376));

	if (t62 != 17LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x377 = -1;
	uint32_t x379 = 7076U;
	uint8_t x380 = 53U;

	t63 = (x377*((x378|x379)*x380));

	if (t63 != 4294588399U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x381 = 4U;
	int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MAX;

	t64 = (x381*((x382|x383)*x384));

	if (t64 != -8) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x385 = UINT16_MAX;
	volatile uint64_t x386 = UINT64_MAX;
	volatile int8_t x387 = 41;
	int32_t x388 = INT32_MAX;

	t65 = (x385*((x386|x387)*x388));

	if (t65 != 18446603338368745471LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x397 = 563089883LLU;
	static int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	int8_t x400 = -48;

	t66 = (x397*((x398|x399)*x400));

	if (t66 != 3459624241152LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x405 = -21;
	uint16_t x407 = 107U;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t67 = 28LLU;

	t67 = (x405*((x406|x407)*x408));

	if (t67 != 39532724120641479LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x417 = -1;
	volatile uint8_t x419 = UINT8_MAX;
	int64_t x420 = -1LL;
	uint64_t t68 = UINT64_MAX;

	t68 = (x417*((x418|x419)*x420));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x421 = -1;
	int16_t x422 = INT16_MIN;
	static int64_t x423 = INT64_MAX;
	int8_t x424 = -1;
	volatile int64_t t69 = -3072794046LL;

	t69 = (x421*((x422|x423)*x424));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x425 = UINT32_MAX;
	uint8_t x426 = 9U;
	uint64_t x427 = 403789484485LLU;
	int32_t x428 = INT32_MIN;
	uint64_t t70 = 267887128411280LLU;

	t70 = (x425*((x426|x427)*x428));

	if (t70 != 9357715755572920320LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x437 = UINT16_MAX;
	volatile int32_t x440 = -1;
	volatile uint64_t t71 = 17669939100829137LLU;

	t71 = (x437*((x438|x439)*x440));

	if (t71 != 65535LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x445 = INT32_MAX;
	uint64_t x446 = UINT64_MAX;
	int16_t x448 = -223;
	uint64_t t72 = 214LLU;

	t72 = (x445*((x446|x447)*x448));

	if (t72 != 478888853281LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x449 = 238LL;
	int8_t x450 = INT8_MAX;
	int16_t x452 = INT16_MAX;
	int64_t t73 = -2255766LL;

	t73 = (x449*((x450|x451)*x452));

	if (t73 != -7798546LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x454 = -1LL;
	int32_t x455 = INT32_MAX;
	volatile int32_t x456 = INT32_MAX;
	volatile int64_t t74 = 0LL;

	t74 = (x453*((x454|x455)*x456));

	if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x461 = UINT64_MAX;
	static int32_t x463 = INT32_MAX;
	int16_t x464 = -1288;
	uint64_t t75 = 1254496550LLU;

	t75 = (x461*((x462|x463)*x464));

	if (t75 != 533830075153144LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x469 = 5U;
	static uint32_t x470 = 7U;
	uint32_t x471 = UINT32_MAX;
	volatile uint32_t t76 = 1001U;

	t76 = (x469*((x470|x471)*x472));

	if (t76 != 4294926531U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x473 = 1240U;
	static int8_t x476 = -1;

	t77 = (x473*((x474|x475)*x476));

	if (t77 != -84289640354600LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x481 = -1;
	int64_t x482 = 3LL;
	volatile uint8_t x483 = 126U;
	static int32_t x484 = 1;
	static int64_t t78 = -2864582LL;

	t78 = (x481*((x482|x483)*x484));

	if (t78 != -127LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x485 = -185499174LL;
	uint8_t x486 = UINT8_MAX;

	t79 = (x485*((x486|x487)*x488));

	if (t79 != 11983091704402721516LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x489 = 1131438U;
	int8_t x490 = -47;
	volatile int16_t x491 = -2;
	uint64_t t80 = 455724133800484LLU;

	t80 = (x489*((x490|x491)*x492));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x497 = INT8_MAX;
	int64_t x498 = -1LL;
	static int32_t x499 = -21237977;
	static int16_t x500 = -573;
	int64_t t81 = -5137129LL;

	t81 = (x497*((x498|x499)*x500));

	if (t81 != 72771LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x502 = 376717071703LL;
	static uint16_t x503 = 10U;
	static uint8_t x504 = UINT8_MAX;
	int64_t t82 = -12109987LL;

	t82 = (x501*((x502|x503)*x504));

	if (t82 != 3147691513632355935LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x505 = -12;
	volatile uint8_t x506 = 7U;
	static int8_t x507 = INT8_MIN;
	static volatile uint64_t x508 = 16441972LLU;
	volatile uint64_t t83 = 139376200875LLU;

	t83 = (x505*((x506|x507)*x508));

	if (t83 != 23873743344LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x509 = -2;
	int32_t t84 = -7268466;

	t84 = (x509*((x510|x511)*x512));

	if (t84 != 65526) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x513 = UINT8_MAX;
	int8_t x514 = INT8_MIN;
	volatile uint64_t x515 = UINT64_MAX;
	uint8_t x516 = 18U;
	uint64_t t85 = 47LLU;

	t85 = (x513*((x514|x515)*x516));

	if (t85 != 18446744073709547026LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x517 = INT8_MAX;
	int32_t x518 = INT32_MAX;
	static int8_t x519 = INT8_MIN;
	int64_t x520 = 8599405231895731LL;
	volatile int64_t t86 = -1003611LL;

	t86 = (x517*((x518|x519)*x520));

	if (t86 != -1092124464450757837LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x521 = 12;
	static int8_t x522 = -1;
	uint32_t x523 = 145U;
	volatile uint32_t x524 = 66720190U;
	uint32_t t87 = 4188187U;

	t87 = (x521*((x522|x523)*x524));

	if (t87 != 3494325016U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x525 = 329U;
	int16_t x526 = 1;
	uint64_t x527 = 30260777847LLU;

	t88 = (x525*((x526|x527)*x528));

	if (t88 != 18446734117913639953LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x529 = 8123006LL;
	uint8_t x530 = UINT8_MAX;
	volatile int16_t x531 = -124;
	volatile int64_t t89 = -38549012765713156LL;

	t89 = (x529*((x530|x531)*x532));

	if (t89 != 34888045066473740LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x533 = INT8_MIN;
	static uint8_t x536 = UINT8_MAX;
	static int64_t t90 = -1833002353LL;

	t90 = (x533*((x534|x535)*x536));

	if (t90 != 32640LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x546 = -18809;
	volatile uint8_t x547 = 87U;
	int8_t x548 = INT8_MIN;
	int32_t t91 = -5644;

	t91 = (x545*((x546|x547)*x548));

	if (t91 != 16781184) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x550 = INT16_MAX;
	int64_t x552 = 76347004456526LL;
	int64_t t92 = 88LL;

	t92 = (x549*((x550|x551)*x552));

	if (t92 != -5003400937058431410LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x553 = INT8_MIN;
	volatile int64_t x554 = -32701552LL;
	static volatile int32_t x556 = INT32_MAX;
	volatile int64_t t93 = -24333269781722410LL;

	t93 = (x553*((x554|x555)*x556));

	if (t93 != 8988903651946921856LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x558 = -1;
	uint16_t x559 = 0U;
	static uint32_t t94 = 2310U;

	t94 = (x557*((x558|x559)*x560));

	if (t94 != 215040U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x561 = 0;
	int64_t x562 = -1LL;
	volatile uint32_t x563 = 2U;
	int64_t x564 = -1LL;

	t95 = (x561*((x562|x563)*x564));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x565 = INT16_MAX;
	uint8_t x566 = UINT8_MAX;
	volatile uint8_t x567 = UINT8_MAX;
	int16_t x568 = -1;

	t96 = (x565*((x566|x567)*x568));

	if (t96 != -8355585) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x569 = INT32_MAX;
	volatile int64_t x571 = 687198LL;
	static volatile int64_t t97 = -143537848LL;

	t97 = (x569*((x570|x571)*x572));

	if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x577 = INT8_MIN;
	int8_t x578 = INT8_MIN;
	static int32_t x579 = INT32_MIN;
	static volatile int32_t t98 = 2;

	t98 = (x577*((x578|x579)*x580));

	if (t98 != 16384) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x581 = INT16_MAX;
	volatile int64_t x583 = -1LL;
	int16_t x584 = -5;
	static int64_t t99 = 5566561368424LL;

	t99 = (x581*((x582|x583)*x584));

	if (t99 != 163835LL) { NG(); } else { ; }
	
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

