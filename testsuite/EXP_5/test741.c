#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = UINT64_MAX;
volatile int32_t x20 = INT32_MIN;
volatile uint64_t t6 = 4207483025025476543LLU;
int32_t x29 = -21340;
int16_t x32 = INT16_MAX;
int8_t x37 = -1;
int32_t x46 = INT32_MAX;
uint8_t x51 = 1U;
static uint64_t x59 = 1606462842689133783LLU;
int8_t x69 = INT8_MIN;
int32_t x70 = INT32_MIN;
static volatile int64_t x72 = INT64_MIN;
uint8_t x74 = 17U;
static volatile int64_t x75 = INT64_MIN;
volatile int64_t t17 = 335212LL;
int16_t x83 = -1;
int32_t x85 = -448543338;
volatile int64_t x86 = 3491544895LL;
int16_t x95 = INT16_MAX;
static int32_t x96 = -1;
static int16_t x97 = 4228;
uint16_t x108 = 1472U;
int64_t x109 = INT64_MAX;
int64_t x110 = -6538LL;
int16_t x111 = -1;
int8_t x116 = INT8_MIN;
int16_t x117 = INT16_MAX;
volatile uint16_t x118 = UINT16_MAX;
uint32_t x120 = 59290382U;
volatile int32_t x121 = INT32_MAX;
int8_t x129 = INT8_MAX;
int8_t x130 = INT8_MIN;
volatile uint64_t x132 = 25092047572LLU;
static uint64_t t30 = 17959790484LLU;
static uint64_t x134 = 0LLU;
static volatile uint64_t t31 = 3788702007121955766LLU;
static int64_t x140 = -1LL;
int16_t x143 = -1;
int16_t x152 = INT16_MIN;
volatile int8_t x155 = -1;
int16_t x157 = 4217;
int16_t x161 = INT16_MAX;
uint64_t x168 = UINT64_MAX;
uint64_t x174 = UINT64_MAX;
uint64_t x175 = 154592468480702LLU;
int8_t x178 = INT8_MIN;
volatile uint64_t t44 = 1851482294LLU;
int64_t x206 = -1LL;
static uint32_t x210 = UINT32_MAX;
static uint32_t t50 = 9151788U;
volatile int32_t x213 = INT32_MAX;
static uint8_t x216 = 15U;
volatile int64_t t51 = 42672205009LL;
uint64_t t52 = 457496686818LLU;
volatile int32_t x222 = INT32_MIN;
int64_t x225 = INT64_MIN;
volatile int64_t t54 = INT64_MAX;
uint64_t x233 = 201203754654361626LLU;
volatile uint32_t x241 = UINT32_MAX;
volatile uint64_t x242 = 37LLU;
uint16_t x254 = UINT16_MAX;
int32_t x261 = INT32_MIN;
uint8_t x263 = 7U;
volatile int32_t t62 = -120095;
static int32_t t63 = 1006;
volatile int8_t x270 = INT8_MIN;
uint16_t x271 = 344U;
static int32_t t64 = 241;
int64_t x276 = 18522279532LL;
volatile int64_t t65 = -116325789936403LL;
volatile int8_t x283 = INT8_MIN;
int16_t x284 = 1237;
int32_t t67 = 4;
int64_t t68 = 40886670914981235LL;
int64_t x290 = -84847893131LL;
int16_t x292 = INT16_MIN;
uint16_t x300 = UINT16_MAX;
static int16_t x302 = -1;
static volatile uint64_t x305 = UINT64_MAX;
uint64_t t73 = 134014915806501LLU;
static uint16_t x310 = 2U;
uint64_t x317 = UINT64_MAX;
uint64_t t76 = 173593322596320105LLU;
int8_t x326 = -1;
int32_t x327 = INT32_MIN;
volatile int32_t t78 = -12898;
uint64_t t79 = 38684563199LLU;
static int16_t x340 = INT16_MIN;
uint32_t t84 = 63122516U;
uint32_t x358 = 1221301U;
static uint8_t x366 = 90U;
int16_t x367 = INT16_MIN;
int8_t x369 = -30;
volatile int8_t x370 = 3;
volatile uint64_t t89 = 12LLU;
int32_t x378 = 290589102;
volatile int64_t t90 = 1234534726556LL;
int16_t x395 = INT16_MIN;
int64_t x397 = -1LL;
int32_t x399 = INT32_MIN;
volatile int32_t x403 = INT32_MAX;
int16_t x408 = -345;
static int16_t x411 = 56;
int64_t x412 = -16LL;
uint64_t x415 = 58LLU;
int16_t x416 = INT16_MIN;
uint64_t t99 = 164550079LLU;


void f0(void) {
	static volatile uint32_t x1 = 4U;
	int16_t x2 = INT16_MIN;
	int8_t x3 = -1;
	static int64_t x4 = -122688116979LL;
	static volatile int64_t t0 = 2046917553124LL;

	t0 = (x1^((x2%x3)%x4));

	if (t0 != 4LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 21422LLU;
	int8_t x6 = -1;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = -1;
	static volatile uint64_t t1 = 1093767682893LLU;

	t1 = (x5^((x6%x7)%x8));

	if (t1 != 21422LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 0;
	int16_t x11 = INT16_MIN;
	int32_t x12 = 1;
	static uint64_t t2 = 5478LLU;

	t2 = (x9^((x10%x11)%x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int8_t x14 = -58;
	int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -1;

	t3 = (x13^((x14%x15)%x16));

	if (t3 != 70) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint8_t x18 = 13U;
	uint32_t x19 = 4139041U;
	static volatile uint32_t t4 = 191091830U;

	t4 = (x17^((x18%x19)%x20));

	if (t4 != 32754U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	volatile uint32_t x22 = UINT32_MAX;
	int64_t x23 = 12429314232913LL;
	int8_t x24 = -1;
	volatile int64_t t5 = 492503LL;

	t5 = (x21^((x22%x23)%x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int8_t x26 = -42;
	static uint64_t x27 = 21051324179298LLU;
	int8_t x28 = INT8_MIN;

	t6 = (x25^((x26%x27)%x28));

	if (t6 != 16029819399885LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x30 = 33;
	volatile int8_t x31 = 1;
	int32_t t7 = 5;

	t7 = (x29^((x30%x31)%x32));

	if (t7 != -21340) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	int64_t x34 = -1LL;
	int16_t x35 = INT16_MAX;
	int64_t x36 = -69814626156134LL;
	volatile int64_t t8 = 4336859LL;

	t8 = (x33^((x34%x35)%x36));

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	int64_t x40 = -1LL;
	int64_t t9 = -12737725272011891LL;

	t9 = (x37^((x38%x39)%x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MAX;
	int32_t x43 = 31;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x41^((x42%x43)%x44));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	uint16_t x47 = 69U;
	volatile int64_t x48 = 3288LL;
	int64_t t11 = -3428787350939819472LL;

	t11 = (x45^((x46%x47)%x48));

	if (t11 != -29LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -7907;
	static volatile int64_t x50 = -1LL;
	volatile int8_t x52 = -1;
	static volatile int64_t t12 = 3766784862LL;

	t12 = (x49^((x50%x51)%x52));

	if (t12 != -7907LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 8306731055036LLU;
	int8_t x54 = INT8_MIN;
	uint8_t x55 = 49U;
	static int64_t x56 = 3329170748076LL;
	volatile uint64_t t13 = 1439469860554LLU;

	t13 = (x53^((x54%x55)%x56));

	if (t13 != 18446735766978496606LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 23;
	volatile int32_t x58 = INT32_MIN;
	int8_t x60 = INT8_MAX;
	uint64_t t14 = 878157LLU;

	t14 = (x57^((x58%x59)%x60));

	if (t14 != 63LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = 18U;
	int8_t x66 = INT8_MAX;
	static int64_t x67 = 3978LL;
	int32_t x68 = -1;
	volatile int64_t t15 = -1216521LL;

	t15 = (x65^((x66%x67)%x68));

	if (t15 != 18LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x71 = -1;
	int64_t t16 = -3LL;

	t16 = (x69^((x70%x71)%x72));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	int32_t x76 = 448124;

	t17 = (x73^((x74%x75)%x76));

	if (t17 != 32750LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = 1357;
	uint16_t x79 = 133U;
	volatile uint16_t x80 = 5U;
	static volatile int32_t t18 = -27050;

	t18 = (x77^((x78%x79)%x80));

	if (t18 != 125) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	int32_t x82 = INT32_MAX;
	static int64_t x84 = INT64_MIN;
	static volatile int64_t t19 = -11LL;

	t19 = (x81^((x82%x83)%x84));

	if (t19 != 4294967295LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x87 = 459226504LL;
	int8_t x88 = INT8_MIN;
	static volatile int64_t t20 = -4682838515163LL;

	t20 = (x85^((x86%x87)%x88));

	if (t20 != -448543343LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x93 = INT16_MAX;
	static uint64_t x94 = UINT64_MAX;
	uint64_t t21 = 69806801LLU;

	t21 = (x93^((x94%x95)%x96));

	if (t21 != 32752LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x98 = INT8_MIN;
	int64_t x99 = -8014230734LL;
	uint64_t x100 = 230214234813648LLU;
	static uint64_t t22 = 79124LLU;

	t22 = (x97^((x98%x99)%x100));

	if (t22 != 137866561568516LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x101 = 849U;
	int16_t x102 = -1;
	int16_t x103 = INT16_MIN;
	int64_t x104 = -5803301168418LL;
	int64_t t23 = -97LL;

	t23 = (x101^((x102%x103)%x104));

	if (t23 != -850LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = -1;
	uint64_t x106 = 346202LLU;
	uint16_t x107 = 1915U;
	static volatile uint64_t t24 = 5538103LLU;

	t24 = (x105^((x106%x107)%x108));

	if (t24 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x112 = UINT16_MAX;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x109^((x110%x111)%x112));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 52U;
	int64_t x114 = INT64_MIN;
	int16_t x115 = -1;
	int64_t t26 = -48136776LL;

	t26 = (x113^((x114%x115)%x116));

	if (t26 != 52LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x119 = 81096593U;
	volatile uint32_t t27 = 1198239U;

	t27 = (x117^((x118%x119)%x120));

	if (t27 != 32768U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x122 = INT64_MAX;
	uint8_t x123 = UINT8_MAX;
	static uint16_t x124 = 1216U;
	volatile int64_t t28 = 1502104320860LL;

	t28 = (x121^((x122%x123)%x124));

	if (t28 != 2147483520LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = UINT16_MAX;
	volatile int64_t x126 = -214431967012830LL;
	int64_t x127 = INT64_MIN;
	int64_t x128 = INT64_MAX;
	static volatile int64_t t29 = 380701LL;

	t29 = (x125^((x126%x127)%x128));

	if (t29 != -214431966959651LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x131 = 3U;

	t30 = (x129^((x130%x131)%x132));

	if (t30 != 7849028113LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x133 = INT64_MIN;
	static int8_t x135 = INT8_MIN;
	int8_t x136 = 15;

	t31 = (x133^((x134%x135)%x136));

	if (t31 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = 0;
	static int32_t x138 = -1;
	int8_t x139 = INT8_MIN;
	static volatile int64_t t32 = -2LL;

	t32 = (x137^((x138%x139)%x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MAX;
	int16_t x142 = INT16_MAX;
	int8_t x144 = -1;
	static volatile int64_t t33 = INT64_MAX;

	t33 = (x141^((x142%x143)%x144));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	uint16_t x147 = 64U;
	int8_t x148 = INT8_MIN;
	volatile int32_t t34 = 134;

	t34 = (x145^((x146%x147)%x148));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = UINT32_MAX;
	int64_t x150 = INT64_MAX;
	uint64_t x151 = UINT64_MAX;
	uint64_t t35 = 37705LLU;

	t35 = (x149^((x150%x151)%x152));

	if (t35 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x153 = -1;
	volatile uint64_t x154 = 43265LLU;
	int16_t x156 = -88;
	volatile uint64_t t36 = 9386LLU;

	t36 = (x153^((x154%x155)%x156));

	if (t36 != 18446744073709508350LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = -6;
	uint8_t x159 = UINT8_MAX;
	int64_t x160 = INT64_MIN;
	int64_t t37 = -13171765565LL;

	t37 = (x157^((x158%x159)%x160));

	if (t37 != -4221LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x162 = 5399U;
	volatile int16_t x163 = INT16_MAX;
	uint64_t x164 = UINT64_MAX;
	static uint64_t t38 = 122199LLU;

	t38 = (x161^((x162%x163)%x164));

	if (t38 != 27368LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -36937445249895LL;
	int16_t x166 = -11;
	static volatile uint8_t x167 = 19U;
	volatile uint64_t t39 = 17322311718LLU;

	t39 = (x165^((x166%x167)%x168));

	if (t39 != 36937445249900LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x170 = INT64_MIN;
	static int64_t x171 = 511477868073432LL;
	uint64_t x172 = 476400LLU;
	uint64_t t40 = 787LLU;

	t40 = (x169^((x170%x171)%x172));

	if (t40 != 437935LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = 6;
	uint64_t x176 = UINT64_MAX;
	uint64_t t41 = 85873781LLU;

	t41 = (x173^((x174%x175)%x176));

	if (t41 != 152364718266161LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x177^((x178%x179)%x180));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	static volatile int8_t x184 = INT8_MAX;
	int64_t t43 = 643LL;

	t43 = (x181^((x182%x183)%x184));

	if (t43 != 2147483646LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MAX;
	static uint8_t x186 = 44U;
	int8_t x187 = -1;
	static uint64_t x188 = 214066LLU;

	t44 = (x185^((x186%x187)%x188));

	if (t44 != 2147483647LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -7LL;
	int8_t x190 = 18;
	static int64_t x191 = INT64_MIN;
	volatile int32_t x192 = INT32_MIN;
	volatile int64_t t45 = -138347979654171753LL;

	t45 = (x189^((x190%x191)%x192));

	if (t45 != -21LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 39616572939LLU;
	int16_t x194 = INT16_MAX;
	uint64_t x195 = UINT64_MAX;
	static uint8_t x196 = UINT8_MAX;
	volatile uint64_t t46 = 62747933862524LLU;

	t46 = (x193^((x194%x195)%x196));

	if (t46 != 39616573044LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 2796U;
	volatile int32_t x198 = -1;
	uint8_t x199 = 53U;
	volatile int8_t x200 = INT8_MIN;
	int32_t t47 = -1;

	t47 = (x197^((x198%x199)%x200));

	if (t47 != -2797) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x202 = UINT32_MAX;
	volatile uint32_t x203 = 9310874U;
	int8_t x204 = INT8_MAX;
	uint32_t t48 = 2U;

	t48 = (x201^((x202%x203)%x204));

	if (t48 != 4294967214U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x205 = INT32_MAX;
	int32_t x207 = INT32_MAX;
	volatile int32_t x208 = -37457;
	volatile int64_t t49 = -3LL;

	t49 = (x205^((x206%x207)%x208));

	if (t49 != -2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = 125390;
	uint32_t x211 = UINT32_MAX;
	int16_t x212 = 293;

	t50 = (x209^((x210%x211)%x212));

	if (t50 != 125390U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x214 = INT64_MIN;
	uint32_t x215 = UINT32_MAX;

	t51 = (x213^((x214%x215)%x216));

	if (t51 != -2147483641LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x217 = 27LLU;
	uint8_t x218 = UINT8_MAX;
	uint8_t x219 = 21U;
	volatile int64_t x220 = -1LL;

	t52 = (x217^((x218%x219)%x220));

	if (t52 != 27LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = 2748869663LLU;
	static int32_t x223 = INT32_MIN;
	int16_t x224 = -7462;
	static volatile uint64_t t53 = 24156524611406LLU;

	t53 = (x221^((x222%x223)%x224));

	if (t53 != 2748869663LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x226 = -1LL;
	int32_t x227 = 56841;
	volatile int32_t x228 = INT32_MIN;

	t54 = (x225^((x226%x227)%x228));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 7778115LLU;
	volatile uint32_t x230 = 41U;
	static int16_t x231 = 1;
	int8_t x232 = INT8_MAX;
	static volatile uint64_t t55 = 10LLU;

	t55 = (x229^((x230%x231)%x232));

	if (t55 != 7778115LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x234 = 11U;
	uint16_t x235 = 79U;
	uint64_t x236 = 2625088037LLU;
	uint64_t t56 = 9536938848773LLU;

	t56 = (x233^((x234%x235)%x236));

	if (t56 != 201203754654361617LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MIN;
	volatile uint16_t x239 = 28U;
	static int64_t x240 = INT64_MIN;
	volatile int64_t t57 = -97965490638722LL;

	t57 = (x237^((x238%x239)%x240));

	if (t57 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x243 = -1;
	static uint64_t x244 = 819133276206LLU;
	static uint64_t t58 = 1775501631255340LLU;

	t58 = (x241^((x242%x243)%x244));

	if (t58 != 4294967258LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x249 = -14;
	int64_t x250 = INT64_MAX;
	volatile uint64_t x251 = 366307658379LLU;
	int32_t x252 = -1;
	uint64_t t59 = 10580504586LLU;

	t59 = (x249^((x250%x251)%x252));

	if (t59 != 18446743924707764021LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x253 = -371465LL;
	int16_t x255 = 12517;
	volatile int32_t x256 = INT32_MIN;
	volatile int64_t t60 = 53817808LL;

	t60 = (x253^((x254%x255)%x256));

	if (t60 != -368783LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x257 = INT16_MAX;
	static uint64_t x258 = UINT64_MAX;
	int16_t x259 = INT16_MIN;
	uint32_t x260 = 36918U;
	uint64_t t61 = 491224LLU;

	t61 = (x257^((x258%x259)%x260));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x262 = UINT16_MAX;
	static uint16_t x264 = 273U;

	t62 = (x261^((x262%x263)%x264));

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int32_t x266 = -188;
	uint8_t x267 = 1U;
	uint8_t x268 = 6U;

	t63 = (x265^((x266%x267)%x268));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x272 = 5;

	t64 = (x269^((x270%x271)%x272));

	if (t64 != -254) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x273 = UINT32_MAX;
	volatile int32_t x274 = INT32_MIN;
	uint16_t x275 = 124U;

	t65 = (x273^((x274%x275)%x276));

	if (t65 != -4294967233LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -1;
	int16_t x278 = -1;
	uint8_t x279 = 3U;
	uint32_t x280 = 15475U;
	uint32_t t66 = 96U;

	t66 = (x277^((x278%x279)%x280));

	if (t66 != 4294962450U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MAX;
	int16_t x282 = 491;

	t67 = (x281^((x282%x283)%x284));

	if (t67 != 32660) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = -100;
	uint8_t x286 = 4U;
	int64_t x287 = INT64_MAX;
	uint8_t x288 = 56U;

	t68 = (x285^((x286%x287)%x288));

	if (t68 != -104LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x289 = -1;
	int16_t x291 = 233;
	int64_t t69 = 6690479363LL;

	t69 = (x289^((x290%x291)%x292));

	if (t69 != 179LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = 275;
	uint64_t x294 = 2105310145441500554LLU;
	volatile uint32_t x295 = 20820U;
	volatile int64_t x296 = -1LL;
	uint64_t t70 = 58655LLU;

	t70 = (x293^((x294%x295)%x296));

	if (t70 != 12613LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = -1647;
	int32_t x298 = INT32_MIN;
	volatile int32_t x299 = -1;
	volatile int32_t t71 = 540;

	t71 = (x297^((x298%x299)%x300));

	if (t71 != -1647) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = INT8_MAX;
	int64_t x303 = -1LL;
	int32_t x304 = 1677;
	int64_t t72 = 15898LL;

	t72 = (x301^((x302%x303)%x304));

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MAX;
	int32_t x308 = INT32_MIN;

	t73 = (x305^((x306%x307)%x308));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	uint64_t x312 = UINT64_MAX;
	uint64_t t74 = 270933763917LLU;

	t74 = (x309^((x310%x311)%x312));

	if (t74 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x313 = 637U;
	uint16_t x314 = UINT16_MAX;
	static volatile uint32_t x315 = UINT32_MAX;
	int64_t x316 = INT64_MIN;
	int64_t t75 = -3850811012460359LL;

	t75 = (x313^((x314%x315)%x316));

	if (t75 != 64898LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x318 = 121175164149587709LLU;
	int32_t x319 = -1;
	int32_t x320 = INT32_MIN;

	t76 = (x317^((x318%x319)%x320));

	if (t76 != 18325568909559963906LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x321 = -1LL;
	int16_t x322 = INT16_MIN;
	int8_t x323 = -1;
	uint64_t x324 = 14595320LLU;
	static volatile uint64_t t77 = UINT64_MAX;

	t77 = (x321^((x322%x323)%x324));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x325 = INT8_MIN;
	int8_t x328 = -1;

	t78 = (x325^((x326%x327)%x328));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = -3278;
	volatile int8_t x330 = 0;
	volatile uint64_t x331 = 230LLU;
	uint32_t x332 = 11887U;

	t79 = (x329^((x330%x331)%x332));

	if (t79 != 18446744073709548338LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MIN;
	static int32_t x335 = -1;
	uint64_t x336 = 93080725LLU;
	volatile uint64_t t80 = 151585521756760LLU;

	t80 = (x333^((x334%x335)%x336));

	if (t80 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x337 = INT16_MIN;
	uint32_t x338 = 107837913U;
	int8_t x339 = INT8_MAX;
	volatile uint32_t t81 = 1792967551U;

	t81 = (x337^((x338%x339)%x340));

	if (t81 != 4294934582U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x341 = 1750U;
	uint64_t x342 = UINT64_MAX;
	int16_t x343 = -1;
	static int16_t x344 = INT16_MAX;
	volatile uint64_t t82 = 7868985777870LLU;

	t82 = (x341^((x342%x343)%x344));

	if (t82 != 1750LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = 1726153287321145213LLU;
	int32_t x346 = -13751;
	volatile int32_t x347 = INT32_MIN;
	static uint8_t x348 = 4U;
	static volatile uint64_t t83 = 6LLU;

	t83 = (x345^((x346%x347)%x348));

	if (t83 != 16720590786388406400LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = INT32_MAX;
	uint16_t x354 = UINT16_MAX;
	uint32_t x355 = 307U;
	int8_t x356 = -1;

	t84 = (x353^((x354%x355)%x356));

	if (t84 != 2147483503U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = INT8_MAX;
	volatile int64_t x359 = -13LL;
	static volatile int64_t x360 = INT64_MIN;
	volatile int64_t t85 = 588901584583595072LL;

	t85 = (x357^((x358%x359)%x360));

	if (t85 != 124LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 28984791108306850LLU;
	uint8_t x362 = UINT8_MAX;
	int64_t x363 = -8340028638LL;
	static int32_t x364 = 758;
	uint64_t t86 = 106089845727493LLU;

	t86 = (x361^((x362%x363)%x364));

	if (t86 != 28984791108306781LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 1U;
	int64_t x368 = 195729LL;
	int64_t t87 = -396LL;

	t87 = (x365^((x366%x367)%x368));

	if (t87 != 91LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x371 = -4;
	int64_t x372 = 3569811508845550LL;
	volatile int64_t t88 = 146LL;

	t88 = (x369^((x370%x371)%x372));

	if (t88 != -31LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x373 = 3634320LLU;
	int8_t x374 = 14;
	int8_t x375 = 1;
	int16_t x376 = 923;

	t89 = (x373^((x374%x375)%x376));

	if (t89 != 3634320LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = -1LL;
	int64_t x379 = 325464090675171122LL;
	static int32_t x380 = INT32_MIN;

	t90 = (x377^((x378%x379)%x380));

	if (t90 != -290589103LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x381 = 75U;
	static int16_t x382 = INT16_MAX;
	static volatile int64_t x383 = INT64_MAX;
	int64_t x384 = -1LL;
	volatile int64_t t91 = 0LL;

	t91 = (x381^((x382%x383)%x384));

	if (t91 != 75LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MAX;
	uint16_t x386 = UINT16_MAX;
	uint32_t x387 = 12226969U;
	uint8_t x388 = 1U;
	static volatile uint32_t t92 = 8192789U;

	t92 = (x385^((x386%x387)%x388));

	if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = -371351;
	uint64_t x391 = 6189194LLU;
	int32_t x392 = INT32_MAX;
	static uint64_t t93 = 14099596480742LLU;

	t93 = (x389^((x390%x391)%x392));

	if (t93 != 18446744073708989103LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x393 = UINT64_MAX;
	static int32_t x394 = INT32_MIN;
	volatile uint8_t x396 = UINT8_MAX;
	static uint64_t t94 = UINT64_MAX;

	t94 = (x393^((x394%x395)%x396));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x398 = 7;
	int32_t x400 = INT32_MAX;
	volatile int64_t t95 = 93763211532458800LL;

	t95 = (x397^((x398%x399)%x400));

	if (t95 != -8LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = 2296U;
	volatile int8_t x404 = -1;
	volatile int32_t t96 = -4;

	t96 = (x401^((x402%x403)%x404));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x405 = INT64_MAX;
	static uint32_t x406 = 1634413U;
	uint64_t x407 = 251071660316090LLU;
	volatile uint64_t t97 = 2800763522814879269LLU;

	t97 = (x405^((x406%x407)%x408));

	if (t97 != 9223372036853141394LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x409 = 2097U;
	int32_t x410 = INT32_MAX;
	volatile int64_t t98 = 725835485871926LL;

	t98 = (x409^((x410%x411)%x412));

	if (t98 != 2110LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x413 = -1;
	uint32_t x414 = 65138U;

	t99 = (x413^((x414%x415)%x416));

	if (t99 != 18446744073709551611LLU) { NG(); } else { ; }
	
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

