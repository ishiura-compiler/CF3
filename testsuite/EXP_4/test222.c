#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
int64_t t0 = 9LL;
volatile int64_t t1 = 68442590732LL;
static volatile uint16_t x14 = 8701U;
uint64_t x17 = 616523183862084319LLU;
static volatile int32_t t5 = -24167302;
static uint8_t x27 = 92U;
int8_t x28 = INT8_MIN;
volatile int16_t x31 = INT16_MIN;
static uint64_t x39 = 97855308873409992LLU;
volatile int8_t x48 = 4;
int64_t x54 = INT64_MIN;
volatile int32_t x58 = 130974496;
uint64_t t14 = 12004857LLU;
volatile int32_t t16 = 10306;
volatile int32_t x71 = 1022;
int32_t x72 = 905;
int8_t x74 = -1;
uint32_t x81 = 428U;
volatile int64_t x88 = 814638123880705LL;
volatile int16_t x90 = -5279;
volatile int64_t t22 = -21486598979804LL;
volatile uint64_t t23 = 2497LLU;
int64_t x100 = 1486199LL;
static uint16_t x107 = UINT16_MAX;
int64_t t25 = -5350949999682LL;
uint32_t x136 = 434087746U;
static int32_t x137 = INT32_MIN;
volatile uint64_t x139 = 86107522440676079LLU;
volatile uint64_t t30 = 14914641796613LLU;
uint64_t x149 = 41LLU;
int64_t x169 = INT64_MIN;
static volatile uint64_t t35 = 316281851LLU;
volatile int8_t x173 = INT8_MAX;
int8_t x177 = -9;
volatile int16_t x179 = 11049;
int16_t x186 = -1;
volatile uint64_t t39 = 11LLU;
volatile int16_t x192 = INT16_MIN;
int32_t x209 = 212;
volatile uint16_t x234 = 10U;
volatile int32_t t49 = -27;
uint8_t x263 = UINT8_MAX;
static int32_t t52 = -474;
static uint32_t x269 = 120662657U;
volatile uint8_t x270 = 1U;
volatile int32_t x275 = INT32_MIN;
uint8_t x283 = UINT8_MAX;
volatile uint64_t t57 = 0LLU;
static int32_t x297 = INT32_MAX;
int64_t t60 = -1LL;
int8_t x309 = INT8_MIN;
int64_t x310 = INT64_MIN;
int8_t x326 = INT8_MAX;
volatile int32_t x353 = INT32_MIN;
static int32_t t71 = 2418;
int64_t x367 = -1LL;
int16_t x376 = INT16_MIN;
uint32_t t75 = 51U;
static uint16_t x379 = UINT16_MAX;
uint8_t x380 = 12U;
volatile int32_t t76 = 0;
static volatile int8_t x381 = INT8_MIN;
int8_t x382 = INT8_MAX;
int32_t t77 = -227;
int32_t t78 = -218;
int32_t x391 = INT32_MAX;
static volatile int64_t x392 = -1LL;
static uint8_t x404 = 1U;
int64_t x406 = INT64_MIN;
uint32_t x408 = UINT32_MAX;
uint16_t x411 = UINT16_MAX;
int64_t x423 = -18LL;
int16_t x424 = INT16_MIN;
int8_t x426 = 55;
int64_t x427 = -69122201803235LL;
int16_t x430 = INT16_MIN;
int32_t x442 = -1;
volatile int64_t x446 = INT64_MIN;
volatile int8_t x448 = INT8_MIN;
int32_t x450 = INT32_MIN;
uint64_t x454 = 622159211897400LLU;
static uint64_t t92 = 6084243537LLU;
int16_t x459 = INT16_MIN;
volatile int32_t t93 = 13490;
volatile int64_t t99 = -2911859LL;


void f0(void) {
	static volatile int8_t x1 = 1;
	int8_t x2 = INT8_MIN;
	static int8_t x3 = INT8_MAX;

	t0 = (x1+(x2%(x3-x4)));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 69U;
	static int64_t x6 = -1LL;
	volatile int32_t x7 = INT32_MIN;
	uint32_t x8 = UINT32_MAX;

	t1 = (x5+(x6%(x7-x8)));

	if (t1 != 68LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int32_t x10 = -1;
	static volatile int16_t x11 = INT16_MIN;
	static uint32_t x12 = UINT32_MAX;
	volatile int64_t t2 = 2074922569730883LL;

	t2 = (x9+(x10%(x11-x12)));

	if (t2 != 32765LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 5;
	uint16_t x15 = 481U;
	uint32_t x16 = 170739U;
	uint32_t t3 = 0U;

	t3 = (x13+(x14%(x15-x16)));

	if (t3 != 8706U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = INT32_MIN;
	volatile int32_t x19 = -1;
	int16_t x20 = INT16_MIN;
	volatile uint64_t t4 = 72783LLU;

	t4 = (x17+(x18%(x19-x20)));

	if (t4 != 616523183862084317LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	volatile uint16_t x22 = UINT16_MAX;
	int16_t x23 = -1;
	volatile uint16_t x24 = 4516U;

	t5 = (x21+(x22%(x23-x24)));

	if (t5 != 35064) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 1334;
	uint64_t x26 = UINT64_MAX;
	volatile uint64_t t6 = 876658798076LLU;

	t6 = (x25+(x26%(x27-x28)));

	if (t6 != 1349LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	volatile int32_t x30 = INT32_MIN;
	int8_t x32 = INT8_MAX;
	int32_t t7 = -311248;

	t7 = (x29+(x30%(x31-x32)));

	if (t7 != 33277) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 9402954150461LL;
	volatile int32_t x34 = INT32_MAX;
	static int32_t x35 = -1;
	int8_t x36 = INT8_MIN;
	volatile int64_t t8 = -23763765LL;

	t8 = (x33+(x34%(x35-x36)));

	if (t8 != 9402954150468LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 72150U;
	int32_t x38 = -1;
	volatile uint8_t x40 = UINT8_MAX;
	uint64_t t9 = 998036799437367432LLU;

	t9 = (x37+(x38%(x39-x40)));

	if (t9 != 49946005508593209LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 35988439U;
	int16_t x42 = INT16_MAX;
	volatile int64_t x43 = -7552331949LL;
	int16_t x44 = INT16_MIN;
	volatile int64_t t10 = 144031336236278912LL;

	t10 = (x41+(x42%(x43-x44)));

	if (t10 != 36021206LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 3U;
	int16_t x46 = INT16_MIN;
	volatile int16_t x47 = INT16_MIN;
	int32_t t11 = -254676;

	t11 = (x45+(x46%(x47-x48)));

	if (t11 != -32765) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint16_t x50 = UINT16_MAX;
	uint8_t x51 = 79U;
	uint8_t x52 = UINT8_MAX;
	volatile int64_t t12 = -90188LL;

	t12 = (x49+(x50%(x51-x52)));

	if (t12 != -9223372036854775745LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 48U;
	uint64_t x55 = UINT64_MAX;
	int8_t x56 = INT8_MAX;
	static uint64_t t13 = 142740135LLU;

	t13 = (x53+(x54%(x55-x56)));

	if (t13 != 9223372036854775856LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 15277030775LLU;
	uint16_t x59 = 13438U;
	int64_t x60 = INT64_MAX;

	t14 = (x57+(x58%(x59-x60)));

	if (t14 != 15408005271LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	uint16_t x62 = 45U;
	uint32_t x63 = UINT32_MAX;
	uint8_t x64 = 21U;
	volatile uint32_t t15 = 81U;

	t15 = (x61+(x62%(x63-x64)));

	if (t15 != 44U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	uint16_t x66 = UINT16_MAX;
	static int8_t x67 = INT8_MIN;
	uint16_t x68 = 183U;

	t16 = (x65+(x66%(x67-x68)));

	if (t16 != 65760) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 0U;
	int64_t x70 = INT64_MAX;
	volatile int64_t t17 = -185175003768403680LL;

	t17 = (x69+(x70%(x71-x72)));

	if (t17 != 7LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -6750LL;
	static int32_t x75 = 1;
	uint8_t x76 = UINT8_MAX;
	int64_t t18 = 17LL;

	t18 = (x73+(x74%(x75-x76)));

	if (t18 != -6751LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int8_t x78 = -1;
	int8_t x79 = 1;
	static volatile int64_t x80 = 670219350LL;
	int64_t t19 = -18815883586910835LL;

	t19 = (x77+(x78%(x79-x80)));

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = 0U;
	uint32_t x83 = 7613U;
	static int8_t x84 = INT8_MAX;
	static uint32_t t20 = 6131U;

	t20 = (x81+(x82%(x83-x84)));

	if (t20 != 428U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 36601223222LLU;
	static int16_t x86 = INT16_MAX;
	static int16_t x87 = INT16_MIN;
	static uint64_t t21 = 8330LLU;

	t21 = (x85+(x86%(x87-x88)));

	if (t21 != 36601255989LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -16914038403569341LL;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = 90164U;

	t22 = (x89+(x90%(x91-x92)));

	if (t22 != -16914038403451688LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = UINT64_MAX;
	int16_t x94 = -3018;
	int8_t x95 = INT8_MAX;
	static int16_t x96 = -1;

	t23 = (x93+(x94%(x95-x96)));

	if (t23 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 0;
	static uint32_t x98 = UINT32_MAX;
	static int8_t x99 = 0;
	static int64_t t24 = -1825998437228071508LL;

	t24 = (x97+(x98%(x99-x100)));

	if (t24 != 1338384LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	int64_t x106 = 563541LL;
	int64_t x108 = 70185361012LL;

	t25 = (x105+(x106%(x107-x108)));

	if (t25 != 563540LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MAX;
	uint8_t x110 = 109U;
	volatile uint32_t x111 = 72919848U;
	volatile uint16_t x112 = 35U;
	volatile uint32_t t26 = 5U;

	t26 = (x109+(x110%(x111-x112)));

	if (t26 != 32876U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 2U;
	volatile int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	int32_t x116 = -63469;
	int32_t t27 = 332;

	t27 = (x113+(x114%(x115-x116)));

	if (t27 != -63467) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x121 = UINT8_MAX;
	volatile uint64_t x122 = 426266069600LLU;
	static int64_t x123 = 2307270148LL;
	int32_t x124 = -1;
	static uint64_t t28 = 9252640LLU;

	t28 = (x121+(x122%(x123-x124)));

	if (t28 != 1728362439LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = INT8_MIN;
	int8_t x135 = 40;
	volatile uint32_t t29 = 2U;

	t29 = (x133+(x134%(x135-x136)));

	if (t29 != 434087577U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x138 = -1LL;
	int64_t x140 = -1LL;

	t30 = (x137+(x138%(x139-x140)));

	if (t30 != 19734269257386847LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x150 = INT64_MIN;
	int64_t x151 = -1LL;
	static int16_t x152 = INT16_MAX;
	uint64_t t31 = 122LLU;

	t31 = (x149+(x150%(x151-x152)));

	if (t31 != 41LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = INT8_MAX;
	int64_t x154 = 11LL;
	uint64_t x155 = 167360LLU;
	uint64_t x156 = 1214017332759046891LLU;
	uint64_t t32 = 3LLU;

	t32 = (x153+(x154%(x155-x156)));

	if (t32 != 138LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MAX;
	uint32_t x160 = 13426U;
	volatile int64_t t33 = -41167314046616LL;

	t33 = (x157+(x158%(x159-x160)));

	if (t33 != -9223372036854762381LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x165 = 0U;
	static uint16_t x166 = 143U;
	uint8_t x167 = 2U;
	static int8_t x168 = -1;
	static volatile int32_t t34 = 0;

	t34 = (x165+(x166%(x167-x168)));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x170 = 2U;
	int32_t x171 = INT32_MIN;
	uint64_t x172 = UINT64_MAX;

	t35 = (x169+(x170%(x171-x172)));

	if (t35 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x174 = 3;
	int8_t x175 = -2;
	static int32_t x176 = 839531156;
	int32_t t36 = -214998;

	t36 = (x173+(x174%(x175-x176)));

	if (t36 != 130) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x178 = 0;
	volatile uint64_t x180 = 8292666167LLU;
	uint64_t t37 = 2558356680LLU;

	t37 = (x177+(x178%(x179-x180)));

	if (t37 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x181 = 15806U;
	int8_t x182 = 11;
	int16_t x183 = INT16_MIN;
	volatile int64_t x184 = -1LL;
	static volatile int64_t t38 = -29685LL;

	t38 = (x181+(x182%(x183-x184)));

	if (t38 != 15817LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MIN;
	uint64_t x187 = 420268435971LLU;
	uint32_t x188 = UINT32_MAX;

	t39 = (x185+(x186%(x187-x188)));

	if (t39 != 22821963859LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = -494;
	uint16_t x190 = UINT16_MAX;
	static uint64_t x191 = UINT64_MAX;
	static uint64_t t40 = 697LLU;

	t40 = (x189+(x190%(x191-x192)));

	if (t40 != 18446744073709551123LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = -6;
	static int32_t x194 = -92096;
	static volatile int32_t x195 = INT32_MIN;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t41 = 7716U;

	t41 = (x193+(x194%(x195-x196)));

	if (t41 != 2147391545U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x210 = -29131898505048LL;
	uint32_t x211 = 1462009641U;
	int64_t x212 = -71147576383LL;
	int64_t t42 = -510659LL;

	t42 = (x209+(x210%(x211-x212)));

	if (t42 != -15454509212LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x213 = 5U;
	int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MAX;
	volatile int32_t x216 = 13559;
	int32_t t43 = -2450402;

	t43 = (x213+(x214%(x215-x216)));

	if (t43 != -13555) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = INT8_MAX;
	static int8_t x218 = 13;
	int8_t x219 = 15;
	static uint64_t x220 = UINT64_MAX;
	volatile uint64_t t44 = 1503564196645114277LLU;

	t44 = (x217+(x218%(x219-x220)));

	if (t44 != 140LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x221 = UINT16_MAX;
	uint32_t x222 = UINT32_MAX;
	static uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MAX;
	uint32_t t45 = 15130130U;

	t45 = (x221+(x222%(x223-x224)));

	if (t45 != 65662U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = -114;
	volatile uint16_t x226 = UINT16_MAX;
	static uint16_t x227 = 1142U;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t46 = 1871;

	t46 = (x225+(x226%(x227-x228)));

	if (t46 != 670) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x229 = INT8_MIN;
	volatile int32_t x230 = 253;
	volatile int64_t x231 = -622639334470971LL;
	volatile int32_t x232 = INT32_MIN;
	volatile int64_t t47 = 330LL;

	t47 = (x229+(x230%(x231-x232)));

	if (t47 != 125LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = -94;
	int16_t x235 = INT16_MIN;
	uint32_t x236 = 8U;
	volatile uint32_t t48 = 365442U;

	t48 = (x233+(x234%(x235-x236)));

	if (t48 != 4294967212U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = INT8_MAX;
	volatile uint8_t x248 = 94U;

	t49 = (x245+(x246%(x247-x248)));

	if (t49 != -160) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = INT8_MIN;
	static uint16_t x250 = UINT16_MAX;
	static int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	int32_t t50 = -826483862;

	t50 = (x249+(x250%(x251-x252)));

	if (t50 != 65407) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MAX;
	int64_t x259 = -1LL;
	volatile int16_t x260 = INT16_MIN;
	int64_t t51 = 32091181953732LL;

	t51 = (x257+(x258%(x259-x260)));

	if (t51 != 32894LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = 1;
	int8_t x264 = 14;

	t52 = (x261+(x262%(x263-x264)));

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x271 = INT16_MIN;
	int8_t x272 = -2;
	uint32_t t53 = 318U;

	t53 = (x269+(x270%(x271-x272)));

	if (t53 != 120662658U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x273 = UINT16_MAX;
	static int16_t x274 = INT16_MIN;
	int64_t x276 = -1089371928274LL;
	static int64_t t54 = 1716559479426LL;

	t54 = (x273+(x274%(x275-x276)));

	if (t54 != 32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x281 = 1U;
	uint16_t x282 = 16U;
	int64_t x284 = 3118056LL;
	static volatile int64_t t55 = 3LL;

	t55 = (x281+(x282%(x283-x284)));

	if (t55 != 17LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x285 = 8826559616448478574LLU;
	int64_t x286 = -1LL;
	int8_t x287 = -1;
	static uint16_t x288 = 0U;
	volatile uint64_t t56 = 1947LLU;

	t56 = (x285+(x286%(x287-x288)));

	if (t56 != 8826559616448478574LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x289 = -1LL;
	uint16_t x290 = UINT16_MAX;
	static volatile uint64_t x291 = UINT64_MAX;
	static uint16_t x292 = UINT16_MAX;

	t57 = (x289+(x290%(x291-x292)));

	if (t57 != 65534LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x293 = 2020LLU;
	int16_t x294 = 606;
	uint8_t x295 = 28U;
	volatile uint32_t x296 = 10U;
	static uint64_t t58 = 4717LLU;

	t58 = (x293+(x294%(x295-x296)));

	if (t58 != 2032LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x298 = UINT64_MAX;
	volatile int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile uint64_t t59 = 1LLU;

	t59 = (x297+(x298%(x299-x300)));

	if (t59 != 2147484029LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x301 = -10;
	int64_t x302 = INT64_MIN;
	int8_t x303 = -1;
	uint32_t x304 = 56781585U;

	t60 = (x301+(x302%(x303-x304)));

	if (t60 != -4032196428LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x305 = 1U;
	volatile uint8_t x306 = 2U;
	uint32_t x307 = 802U;
	int8_t x308 = INT8_MIN;
	uint32_t t61 = 461U;

	t61 = (x305+(x306%(x307-x308)));

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x311 = 28LL;
	uint16_t x312 = UINT16_MAX;
	int64_t t62 = 271761343282425LL;

	t62 = (x309+(x310%(x311-x312)));

	if (t62 != -58987LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x313 = INT64_MIN;
	int32_t x314 = 1692;
	static int64_t x315 = -4091400LL;
	uint8_t x316 = 1U;
	int64_t t63 = -2832732524LL;

	t63 = (x313+(x314%(x315-x316)));

	if (t63 != -9223372036854774116LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x317 = UINT16_MAX;
	static uint16_t x318 = 2883U;
	uint32_t x319 = 89U;
	int16_t x320 = 2625;
	volatile uint32_t t64 = 199850661U;

	t64 = (x317+(x318%(x319-x320)));

	if (t64 != 68418U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x321 = 482271956661063LL;
	static uint64_t x322 = 1284LLU;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = 3476U;
	volatile uint64_t t65 = 1LLU;

	t65 = (x321+(x322%(x323-x324)));

	if (t65 != 482271956662347LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = INT64_MIN;
	uint16_t x327 = UINT16_MAX;
	static uint64_t x328 = UINT64_MAX;
	uint64_t t66 = 15292840LLU;

	t66 = (x325+(x326%(x327-x328)));

	if (t66 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x337 = INT8_MIN;
	volatile int32_t x338 = INT32_MAX;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = INT16_MIN;
	uint64_t t67 = 0LLU;

	t67 = (x337+(x338%(x339-x340)));

	if (t67 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x346 = 825691U;
	uint64_t x347 = UINT64_MAX;
	static uint16_t x348 = 235U;
	uint64_t t68 = 2043006LLU;

	t68 = (x345+(x346%(x347-x348)));

	if (t68 != 18446744071562893659LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = -1;
	volatile int64_t x350 = INT64_MIN;
	volatile int64_t x351 = -3LL;
	int64_t x352 = INT64_MIN;
	static int64_t t69 = 43035647975997311LL;

	t69 = (x349+(x350%(x351-x352)));

	if (t69 != -4LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x354 = 2780887162LL;
	uint8_t x355 = 15U;
	int64_t x356 = 1543LL;
	int64_t t70 = 51861765501LL;

	t70 = (x353+(x354%(x355-x356)));

	if (t70 != -2147483142LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x357 = INT8_MAX;
	static uint16_t x358 = 1U;
	static int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;

	t71 = (x357+(x358%(x359-x360)));

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x361 = 1906;
	uint8_t x362 = 3U;
	static int8_t x363 = -1;
	uint16_t x364 = UINT16_MAX;
	static int32_t t72 = 4626;

	t72 = (x361+(x362%(x363-x364)));

	if (t72 != 1909) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x365 = -1;
	int8_t x366 = 15;
	uint64_t x368 = 324497944LLU;
	uint64_t t73 = 885156933906740LLU;

	t73 = (x365+(x366%(x367-x368)));

	if (t73 != 14LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = 23953LL;
	int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile int64_t t74 = -4343765917255601LL;

	t74 = (x369+(x370%(x371-x372)));

	if (t74 != 23825LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x373 = 7;
	int16_t x374 = -3389;
	volatile uint32_t x375 = 9136443U;

	t75 = (x373+(x374%(x375-x376)));

	if (t75 != 3773166U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x377 = -7921;
	int16_t x378 = -1;

	t76 = (x377+(x378%(x379-x380)));

	if (t76 != -7922) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x383 = -11455;
	int32_t x384 = -1;

	t77 = (x381+(x382%(x383-x384)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x385 = 60;
	int32_t x386 = 165151;
	static int16_t x387 = INT16_MAX;
	int8_t x388 = -1;

	t78 = (x385+(x386%(x387-x388)));

	if (t78 != 1371) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x389 = 0LL;
	uint16_t x390 = 9U;
	static volatile int64_t t79 = 487490388LL;

	t79 = (x389+(x390%(x391-x392)));

	if (t79 != 9LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x393 = 2679343975064552LLU;
	int32_t x394 = -22;
	int8_t x395 = INT8_MIN;
	uint8_t x396 = UINT8_MAX;
	static volatile uint64_t t80 = 32291361793483826LLU;

	t80 = (x393+(x394%(x395-x396)));

	if (t80 != 2679343975064530LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x401 = INT8_MIN;
	uint16_t x402 = 125U;
	static uint32_t x403 = 6723U;
	static volatile uint32_t t81 = 61952615U;

	t81 = (x401+(x402%(x403-x404)));

	if (t81 != 4294967293U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x405 = INT64_MAX;
	uint64_t x407 = 32LLU;
	uint64_t t82 = UINT64_MAX;

	t82 = (x405+(x406%(x407-x408)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x409 = -3;
	int32_t x410 = -51431789;
	int8_t x412 = INT8_MIN;
	static volatile int32_t t83 = 121120580;

	t83 = (x409+(x410%(x411-x412)));

	if (t83 != -17663) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x417 = INT32_MAX;
	uint32_t x418 = 27U;
	static uint64_t x419 = UINT64_MAX;
	static uint16_t x420 = UINT16_MAX;
	static uint64_t t84 = 530619289419252302LLU;

	t84 = (x417+(x418%(x419-x420)));

	if (t84 != 2147483674LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x421 = INT8_MAX;
	uint8_t x422 = UINT8_MAX;
	volatile int64_t t85 = -2810168326075531831LL;

	t85 = (x421+(x422%(x423-x424)));

	if (t85 != 382LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x425 = INT32_MIN;
	uint64_t x428 = 1910LLU;
	uint64_t t86 = 526199594LLU;

	t86 = (x425+(x426%(x427-x428)));

	if (t86 != 18446744071562068023LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x429 = 16408740356866LLU;
	uint8_t x431 = 16U;
	int64_t x432 = -1LL;
	uint64_t t87 = 255LLU;

	t87 = (x429+(x430%(x431-x432)));

	if (t87 != 16408740356857LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x437 = UINT16_MAX;
	static uint64_t x438 = 4647LLU;
	int8_t x439 = 51;
	int32_t x440 = -5;
	static uint64_t t88 = 19132LLU;

	t88 = (x437+(x438%(x439-x440)));

	if (t88 != 65590LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x441 = UINT64_MAX;
	static int16_t x443 = INT16_MIN;
	volatile uint16_t x444 = UINT16_MAX;
	uint64_t t89 = 19818061349LLU;

	t89 = (x441+(x442%(x443-x444)));

	if (t89 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x445 = 1U;
	int16_t x447 = 1;
	static int64_t t90 = 289400735LL;

	t90 = (x445+(x446%(x447-x448)));

	if (t90 != -127LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x449 = -1;
	int64_t x451 = -13331570695243850LL;
	int16_t x452 = -1;
	int64_t t91 = -2LL;

	t91 = (x449+(x450%(x451-x452)));

	if (t91 != -2147483649LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x453 = INT64_MIN;
	int8_t x455 = INT8_MIN;
	int64_t x456 = 222504659770235LL;

	t92 = (x453+(x454%(x455-x456)));

	if (t92 != 9223994196066673208LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x457 = 3837;
	int8_t x458 = INT8_MIN;
	static volatile int8_t x460 = 1;

	t93 = (x457+(x458%(x459-x460)));

	if (t93 != 3709) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x461 = -93267846LL;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	int16_t x464 = -115;
	volatile int64_t t94 = -19219883271040088LL;

	t94 = (x461+(x462%(x463-x464)));

	if (t94 != -93267974LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x469 = INT16_MIN;
	static volatile int16_t x470 = 10;
	static uint8_t x471 = 19U;
	static int16_t x472 = -1;
	volatile int32_t t95 = -7393075;

	t95 = (x469+(x470%(x471-x472)));

	if (t95 != -32758) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x473 = INT32_MIN;
	static uint64_t x474 = 175LLU;
	int32_t x475 = INT32_MIN;
	volatile uint32_t x476 = 0U;
	uint64_t t96 = 515865362881452597LLU;

	t96 = (x473+(x474%(x475-x476)));

	if (t96 != 18446744071562068143LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x481 = 3744958;
	int32_t x482 = -1;
	int8_t x483 = -1;
	int8_t x484 = INT8_MIN;
	int32_t t97 = 34827;

	t97 = (x481+(x482%(x483-x484)));

	if (t97 != 3744957) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x489 = INT16_MIN;
	int16_t x490 = INT16_MIN;
	int64_t x491 = INT64_MAX;
	uint32_t x492 = UINT32_MAX;
	static int64_t t98 = -43815295980769LL;

	t98 = (x489+(x490%(x491-x492)));

	if (t98 != -65536LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x493 = -3LL;
	int16_t x494 = 4179;
	volatile int32_t x495 = INT32_MAX;
	static int32_t x496 = 211;

	t99 = (x493+(x494%(x495-x496)));

	if (t99 != 4176LL) { NG(); } else { ; }
	
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

