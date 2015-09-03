#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -248968;
volatile int64_t x13 = -11LL;
int64_t x15 = -1LL;
int32_t x28 = 478146;
int8_t x44 = INT8_MIN;
uint16_t x49 = 1U;
uint64_t x59 = 26251LLU;
volatile uint64_t t7 = 4135430537974LLU;
static uint64_t t9 = 2485494404LLU;
int16_t x83 = INT16_MAX;
uint16_t x87 = UINT16_MAX;
int32_t x89 = INT32_MAX;
static uint32_t x90 = UINT32_MAX;
uint64_t x91 = 103675502LLU;
uint32_t t15 = 15922U;
int8_t x106 = INT8_MIN;
static uint64_t x109 = 17069276373308511LLU;
volatile uint8_t x112 = 0U;
static volatile int8_t x122 = -36;
int16_t x130 = INT16_MIN;
static volatile uint64_t x132 = UINT64_MAX;
uint64_t x136 = 560145095774131320LLU;
uint16_t x142 = 0U;
static int8_t x157 = 3;
static int32_t x165 = -7191;
volatile uint64_t x169 = UINT64_MAX;
volatile int8_t x170 = -1;
int64_t x176 = 456LL;
volatile int8_t x183 = -1;
int32_t x187 = -2;
uint32_t x190 = UINT32_MAX;
int16_t x191 = INT16_MIN;
static volatile int16_t x192 = -1;
static int64_t x193 = -1LL;
int32_t x211 = -1;
uint8_t x235 = 0U;
uint64_t t39 = 396945288321749458LLU;
uint64_t x240 = 0LLU;
uint64_t x243 = 790223128LLU;
volatile int8_t x244 = INT8_MAX;
volatile uint64_t x257 = 1LLU;
int16_t x258 = -1;
static int64_t x269 = 14255LL;
uint64_t x270 = 2457556143864162681LLU;
static int8_t x273 = 6;
static uint32_t x276 = UINT32_MAX;
int8_t x289 = -26;
volatile int64_t x294 = -42532091887572464LL;
static volatile int32_t t49 = 54;
static volatile int32_t x305 = -1;
volatile uint64_t x306 = UINT64_MAX;
static uint64_t t50 = 6754765855519LLU;
int16_t x310 = 0;
uint32_t x312 = 7949121U;
static uint64_t x313 = 247639410914865LLU;
uint32_t x314 = 23U;
uint64_t x316 = 982LLU;
volatile uint64_t t52 = 109001LLU;
int8_t x325 = -59;
int64_t x342 = INT64_MIN;
static volatile uint64_t x360 = 148LLU;
volatile uint64_t t59 = 88LLU;
static int64_t x366 = 1368075734LL;
static uint32_t x371 = 30485U;
volatile uint32_t t62 = 961233142U;
static int32_t t65 = -5;
static int8_t x397 = 0;
int64_t x400 = 2163301704212875LL;
volatile int64_t t67 = 11899177268663389LL;
int32_t x401 = 238767991;
uint64_t x403 = UINT64_MAX;
int32_t x417 = 15612241;
volatile uint8_t x423 = UINT8_MAX;
uint64_t x424 = 38434LLU;
volatile uint64_t t71 = 275429416279895LLU;
int32_t x431 = -1;
volatile int16_t x432 = 0;
static int16_t x443 = -1;
int8_t x449 = INT8_MAX;
int8_t x460 = INT8_MAX;
uint32_t t78 = 1642315U;
int32_t x474 = INT32_MIN;
int32_t x476 = -288801709;
int8_t x477 = -1;
static uint32_t x485 = 6U;
volatile int16_t x489 = INT16_MIN;
int64_t x492 = 544330436161361216LL;
volatile int16_t x499 = INT16_MIN;
static volatile int64_t x510 = INT64_MIN;
int8_t x511 = INT8_MIN;
volatile int16_t x521 = INT16_MIN;
volatile int32_t t86 = -11;
static volatile uint64_t x527 = 1041129LLU;
int8_t x537 = 3;
volatile int32_t t88 = 37;
uint8_t x542 = 88U;
int8_t x544 = INT8_MAX;
int8_t x550 = INT8_MIN;
static volatile uint64_t x556 = 2101005521333LLU;
uint8_t x562 = 121U;
static int8_t x570 = 1;
int16_t x572 = 107;
volatile uint32_t t95 = 916U;
volatile uint64_t x583 = 31009146421602LLU;
int32_t x584 = -927;
volatile uint64_t t96 = 53552002367542969LLU;
uint8_t x603 = 0U;
int32_t x604 = -4907;


void f0(void) {
	static int16_t x5 = INT16_MIN;
	static uint16_t x6 = 1258U;
	int8_t x7 = -1;
	int8_t x8 = 5;

	t0 = (x5*(x6&(x7*x8)));

	if (t0 != -41222144) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x14 = 14U;
	static uint64_t x16 = 5281426516961244LLU;
	static volatile uint64_t t1 = 3331LLU;

	t1 = (x13*(x14&(x15*x16)));

	if (t1 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	volatile uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MAX;
	uint16_t x20 = 0U;
	uint64_t t2 = 735165740261444110LLU;

	t2 = (x17*(x18&(x19*x20)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x25 = 94U;
	uint32_t x26 = 255050834U;
	uint8_t x27 = UINT8_MAX;
	volatile uint32_t t3 = 780951066U;

	t3 = (x25*(x26&(x27*x28)));

	if (t3 != 2451111580U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x41 = 449848346845292724LLU;
	int16_t x42 = INT16_MAX;
	uint32_t x43 = 1U;
	static uint64_t t4 = 80350238LLU;

	t4 = (x41*(x42&(x43*x44)));

	if (t4 != 17888502431260976640LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x45 = INT64_MIN;
	uint64_t x46 = 503LLU;
	volatile int32_t x47 = -1;
	volatile uint8_t x48 = 0U;
	uint64_t t5 = 126883562383LLU;

	t5 = (x45*(x46&(x47*x48)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x50 = 14;
	int8_t x51 = 52;
	uint16_t x52 = UINT16_MAX;
	int32_t t6 = -31;

	t6 = (x49*(x50&(x51*x52)));

	if (t6 != 12) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = 61;
	uint64_t x58 = 6375707494162033451LLU;
	int16_t x60 = 229;

	t7 = (x57*(x58&(x59*x60)));

	if (t7 != 330465975LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x65 = 8U;
	int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	volatile uint32_t x68 = 68U;
	static volatile int64_t t8 = 42788321154895782LL;

	t8 = (x65*(x66&(x67*x68)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = INT8_MAX;
	int64_t x70 = -1LL;
	volatile int64_t x71 = 24518853770LL;
	uint64_t x72 = 3916274LLU;

	t9 = (x69*(x70&(x71*x72)));

	if (t9 != 12194863790215128460LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = -59;
	uint64_t x84 = 19335129LLU;
	volatile uint64_t t10 = 5LLU;

	t10 = (x81*(x82&(x83*x84)));

	if (t10 != 9223371403300603899LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x85 = INT16_MIN;
	volatile int16_t x86 = 135;
	volatile uint8_t x88 = 4U;
	static volatile int32_t t11 = -219;

	t11 = (x85*(x86&(x87*x88)));

	if (t11 != -4325376) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x92 = 1U;
	static uint64_t t12 = 261814888827525LLU;

	t12 = (x89*(x90&(x91*x92)));

	if (t12 != 222641445139515794LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = INT8_MIN;
	volatile int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MAX;
	volatile uint64_t x96 = 38360856574654589LLU;
	uint64_t t13 = 4172324222868LLU;

	t13 = (x93*(x94&(x95*x96)));

	if (t13 != 3595214028539756544LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x97 = -1;
	volatile int16_t x98 = -1;
	volatile uint16_t x99 = 0U;
	uint64_t x100 = UINT64_MAX;
	static volatile uint64_t t14 = 64413348LLU;

	t14 = (x97*(x98&(x99*x100)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = -424;
	uint32_t x103 = 17014711U;
	uint8_t x104 = 71U;

	t15 = (x101*(x102&(x103*x104)));

	if (t15 != 4284145664U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x105 = 7105630237LL;
	volatile uint64_t x107 = UINT64_MAX;
	volatile uint8_t x108 = 78U;
	volatile uint64_t t16 = 465LLU;

	t16 = (x105*(x106&(x107*x108)));

	if (t16 != 18446743164188881280LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x110 = INT16_MIN;
	int16_t x111 = 3;
	uint64_t t17 = 9099390334832561317LLU;

	t17 = (x109*(x110&(x111*x112)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = 139;
	int64_t x118 = -83888LL;
	static int8_t x119 = -1;
	int16_t x120 = 0;
	int64_t t18 = -102322LL;

	t18 = (x117*(x118&(x119*x120)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x121 = 40U;
	volatile uint64_t x123 = 8LLU;
	volatile uint32_t x124 = UINT32_MAX;
	uint64_t t19 = 183963073LLU;

	t19 = (x121*(x122&(x123*x124)));

	if (t19 != 1374389533120LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x125 = INT32_MIN;
	static int8_t x126 = INT8_MIN;
	uint16_t x127 = 9545U;
	uint32_t x128 = 30U;
	volatile uint32_t t20 = 1U;

	t20 = (x125*(x126&(x127*x128)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x129 = 193225U;
	volatile int16_t x131 = -106;
	uint64_t t21 = 14139709003LLU;

	t21 = (x129*(x130&(x131*x132)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x133 = INT32_MAX;
	static volatile int64_t x134 = INT64_MAX;
	volatile int8_t x135 = 0;
	static volatile uint64_t t22 = 7796389LLU;

	t22 = (x133*(x134&(x135*x136)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x141 = INT16_MAX;
	volatile int8_t x143 = -52;
	int64_t x144 = -230062835LL;
	static int64_t t23 = 3508259845712477515LL;

	t23 = (x141*(x142&(x143*x144)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = UINT32_MAX;
	static uint8_t x147 = UINT8_MAX;
	int64_t x148 = 12LL;
	int64_t t24 = 1337LL;

	t24 = (x145*(x146&(x147*x148)));

	if (t24 != -391680LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	static int8_t x151 = -1;
	int16_t x152 = INT16_MIN;
	volatile int32_t t25 = 2697;

	t25 = (x149*(x150&(x151*x152)));

	if (t25 != -1073741824) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x158 = INT64_MIN;
	volatile uint16_t x159 = UINT16_MAX;
	uint32_t x160 = 522U;
	int64_t t26 = -25833360809LL;

	t26 = (x157*(x158&(x159*x160)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x166 = INT32_MIN;
	uint8_t x167 = 1U;
	static int16_t x168 = 23;
	volatile int32_t t27 = -2;

	t27 = (x165*(x166&(x167*x168)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x171 = INT8_MIN;
	int32_t x172 = -1;
	static volatile uint64_t t28 = 0LLU;

	t28 = (x169*(x170&(x171*x172)));

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = INT8_MIN;
	static volatile int64_t x175 = -1232769LL;
	int64_t t29 = -5817LL;

	t29 = (x173*(x174&(x175*x176)));

	if (t29 != -1207192298480099840LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x181 = 1;
	int64_t x182 = -1LL;
	static int32_t x184 = 0;
	static int64_t t30 = -2218099241647LL;

	t30 = (x181*(x182&(x183*x184)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x185 = INT32_MAX;
	static int16_t x186 = -1;
	uint32_t x188 = 10U;
	static volatile uint32_t t31 = 2146U;

	t31 = (x185*(x186&(x187*x188)));

	if (t31 != 20U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = -13098;
	uint32_t t32 = 1U;

	t32 = (x189*(x190&(x191*x192)));

	if (t32 != 3865772032U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x194 = 5U;
	int32_t x195 = 201;
	uint16_t x196 = UINT16_MAX;
	int64_t t33 = 8232689692559542LL;

	t33 = (x193*(x194&(x195*x196)));

	if (t33 != -5LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x197 = UINT16_MAX;
	uint32_t x198 = 1U;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = UINT32_MAX;
	static uint32_t t34 = 244U;

	t34 = (x197*(x198&(x199*x200)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x209 = 0LL;
	int64_t x210 = -1LL;
	int8_t x212 = INT8_MAX;
	int64_t t35 = 10374LL;

	t35 = (x209*(x210&(x211*x212)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x213 = INT32_MAX;
	volatile int32_t x214 = -32477;
	int64_t x215 = -318276067LL;
	uint64_t x216 = 312289726387076122LLU;
	volatile uint64_t t36 = 650875142LLU;

	t36 = (x213*(x214&(x215*x216)));

	if (t36 != 7636823533369720798LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x221 = -1LL;
	volatile int16_t x222 = INT16_MIN;
	volatile int32_t x223 = INT32_MAX;
	int64_t x224 = -1LL;
	int64_t t37 = -96673115133LL;

	t37 = (x221*(x222&(x223*x224)));

	if (t37 != 2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x225 = 3;
	int32_t x226 = 10;
	uint8_t x227 = 6U;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t38 = 18893538240122578LLU;

	t38 = (x225*(x226&(x227*x228)));

	if (t38 != 30LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x233 = 2703LLU;
	volatile uint8_t x234 = UINT8_MAX;
	int64_t x236 = -14861298LL;

	t39 = (x233*(x234&(x235*x236)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x237 = 1207U;
	volatile uint64_t x238 = 6899034747189344399LLU;
	volatile int64_t x239 = INT64_MAX;
	uint64_t t40 = 474547493367LLU;

	t40 = (x237*(x238&(x239*x240)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x241 = INT32_MIN;
	int32_t x242 = -6;
	volatile uint64_t t41 = 7LLU;

	t41 = (x241*(x242&(x243*x244)));

	if (t41 != 5843040686785429504LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x259 = INT32_MAX;
	int8_t x260 = -1;
	volatile uint64_t t42 = 34LLU;

	t42 = (x257*(x258&(x259*x260)));

	if (t42 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = -19;
	static uint8_t x268 = 34U;
	volatile uint64_t t43 = 30636996664LLU;

	t43 = (x265*(x266&(x267*x268)));

	if (t43 != 1387274436608LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x271 = 5592048581987485LLU;
	int8_t x272 = -1;
	static volatile uint64_t t44 = 759LLU;

	t44 = (x269*(x270&(x271*x272)));

	if (t44 != 207034713858287695LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x274 = INT64_MIN;
	volatile int32_t x275 = -866624;
	static int64_t t45 = -30990713LL;

	t45 = (x273*(x274&(x275*x276)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x290 = 119U;
	int8_t x291 = 59;
	int8_t x292 = 0;
	volatile int32_t t46 = -3;

	t46 = (x289*(x290&(x291*x292)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x293 = INT8_MIN;
	uint8_t x295 = 27U;
	uint64_t x296 = UINT64_MAX;
	uint64_t t47 = 333818830523711148LLU;

	t47 = (x293*(x294&(x295*x296)));

	if (t47 != 5444107761609277440LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x297 = -1;
	int8_t x298 = -30;
	uint8_t x299 = UINT8_MAX;
	volatile uint8_t x300 = UINT8_MAX;
	int32_t t48 = -213297;

	t48 = (x297*(x298&(x299*x300)));

	if (t48 != -65024) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x301 = UINT16_MAX;
	volatile int16_t x302 = -1;
	static int8_t x303 = 1;
	int8_t x304 = INT8_MIN;

	t49 = (x301*(x302&(x303*x304)));

	if (t49 != -8388480) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x307 = INT64_MAX;
	int8_t x308 = -1;

	t50 = (x305*(x306&(x307*x308)));

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x309 = 2;
	int16_t x311 = -2;
	uint32_t t51 = 14227767U;

	t51 = (x309*(x310&(x311*x312)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x315 = INT8_MIN;

	t52 = (x313*(x314&(x315*x316)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x321 = 7845;
	static uint64_t x322 = 2080330405LLU;
	volatile int64_t x323 = -1LL;
	static int64_t x324 = 4465151987LL;
	volatile uint64_t t53 = 6LLU;

	t53 = (x321*(x322&(x323*x324)));

	if (t53 != 14985376950585LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x326 = 1;
	uint16_t x327 = 15829U;
	static int32_t x328 = 6606;
	volatile int32_t t54 = 48;

	t54 = (x325*(x326&(x327*x328)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x333 = -1LL;
	static uint32_t x334 = 4119432U;
	static int8_t x335 = INT8_MIN;
	volatile int8_t x336 = INT8_MAX;
	int64_t t55 = 4285LL;

	t55 = (x333*(x334&(x335*x336)));

	if (t55 != -4112512LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x337 = -1LL;
	int16_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -26;
	static volatile int64_t t56 = -2729023LL;

	t56 = (x337*(x338&(x339*x340)));

	if (t56 != -3328LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x341 = -1;
	static uint64_t x343 = 58046LLU;
	int16_t x344 = INT16_MAX;
	uint64_t t57 = 653509583301LLU;

	t57 = (x341*(x342&(x343*x344)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MAX;
	int64_t x347 = -1LL;
	int64_t x348 = -19LL;
	int64_t t58 = -291987908LL;

	t58 = (x345*(x346&(x347*x348)));

	if (t58 != -2432LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x357 = 3U;
	static int64_t x358 = -1LL;
	volatile int64_t x359 = 4630464077513862LL;

	t59 = (x357*(x358&(x359*x360)));

	if (t59 != 2055926050416154728LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x361 = 181958844U;
	uint64_t x362 = 1LLU;
	volatile uint32_t x363 = 387U;
	uint16_t x364 = 1763U;
	uint64_t t60 = 225558017153642LLU;

	t60 = (x361*(x362&(x363*x364)));

	if (t60 != 181958844LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x365 = -10725416;
	int16_t x367 = -1;
	static volatile int64_t x368 = -556650056LL;
	static volatile int64_t t61 = 199443677928589LL;

	t61 = (x365*(x366&(x367*x368)));

	if (t61 != -186302363593216LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x369 = -19;
	int16_t x370 = -1;
	int8_t x372 = INT8_MAX;

	t62 = (x369*(x370&(x371*x372)));

	if (t62 != 4221406991U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x373 = 1U;
	int16_t x374 = -57;
	uint64_t x375 = 135978402291LLU;
	int32_t x376 = 7;
	uint64_t t63 = 1902626791915860LLU;

	t63 = (x373*(x374&(x375*x376)));

	if (t63 != 951848816005LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x377 = -1;
	int32_t x378 = INT32_MIN;
	int32_t x379 = -1;
	static int64_t x380 = -1LL;
	int64_t t64 = -3947327709437LL;

	t64 = (x377*(x378&(x379*x380)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x381 = UINT16_MAX;
	uint8_t x382 = UINT8_MAX;
	static int16_t x383 = INT16_MAX;
	static int8_t x384 = -1;

	t65 = (x381*(x382&(x383*x384)));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x389 = UINT64_MAX;
	int8_t x390 = -13;
	uint32_t x391 = 152257U;
	int64_t x392 = 41690LL;
	static volatile uint64_t t66 = 8277459107063LLU;

	t66 = (x389*(x390&(x391*x392)));

	if (t66 != 18446744067361957294LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x398 = INT64_MIN;
	volatile int8_t x399 = -1;

	t67 = (x397*(x398&(x399*x400)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x402 = UINT16_MAX;
	int16_t x404 = INT16_MIN;
	static volatile uint64_t t68 = 430421772LLU;

	t68 = (x401*(x402&(x403*x404)));

	if (t68 != 7823949529088LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x409 = -4;
	int64_t x410 = -6937203LL;
	volatile uint64_t x411 = 158569829LLU;
	volatile int8_t x412 = INT8_MIN;
	volatile uint64_t t69 = 29437856816377902LLU;

	t69 = (x409*(x410&(x411*x412)));

	if (t69 != 81196476928LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x418 = 76U;
	uint64_t x419 = 14014LLU;
	uint32_t x420 = UINT32_MAX;
	volatile uint64_t t70 = 12923338509LLU;

	t70 = (x417*(x418&(x419*x420)));

	if (t70 != 999183424LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x421 = -1;
	volatile int16_t x422 = INT16_MIN;

	t71 = (x421*(x422&(x423*x424)));

	if (t71 != 18446744073699753984LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x425 = UINT8_MAX;
	int32_t x426 = INT32_MAX;
	uint64_t x427 = 24754782207LLU;
	volatile int16_t x428 = 3176;
	uint64_t t72 = 5222328247011103LLU;

	t72 = (x425*(x426&(x427*x428)));

	if (t72 != 462043718760LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x429 = -5;
	int64_t x430 = INT64_MIN;
	static volatile int64_t t73 = -40068130075611LL;

	t73 = (x429*(x430&(x431*x432)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x441 = INT8_MAX;
	static volatile uint8_t x442 = 10U;
	uint64_t x444 = 0LLU;
	volatile uint64_t t74 = 2894921330259LLU;

	t74 = (x441*(x442&(x443*x444)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x450 = -1;
	int16_t x451 = 0;
	int32_t x452 = INT32_MIN;
	volatile int32_t t75 = 2900;

	t75 = (x449*(x450&(x451*x452)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x453 = INT8_MIN;
	int64_t x454 = INT64_MIN;
	uint64_t x455 = UINT64_MAX;
	uint8_t x456 = 95U;
	static uint64_t t76 = 101LLU;

	t76 = (x453*(x454&(x455*x456)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x457 = INT16_MAX;
	int64_t x458 = -1LL;
	int8_t x459 = INT8_MAX;
	volatile int64_t t77 = 30457397032LL;

	t77 = (x457*(x458&(x459*x460)));

	if (t77 != 528498943LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x465 = INT16_MIN;
	static uint32_t x466 = 22191U;
	int8_t x467 = INT8_MIN;
	int8_t x468 = -1;

	t78 = (x465*(x466&(x467*x468)));

	if (t78 != 4290772992U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x473 = UINT64_MAX;
	static uint64_t x475 = UINT64_MAX;
	static uint64_t t79 = 897185826221LLU;

	t79 = (x473*(x474&(x475*x476)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x478 = 2143;
	int8_t x479 = 1;
	uint32_t x480 = UINT32_MAX;
	uint32_t t80 = 829654665U;

	t80 = (x477*(x478&(x479*x480)));

	if (t80 != 4294965153U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x486 = INT8_MAX;
	static uint8_t x487 = UINT8_MAX;
	static int8_t x488 = 7;
	volatile uint32_t t81 = 85814U;

	t81 = (x485*(x486&(x487*x488)));

	if (t81 != 726U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x490 = INT8_MIN;
	uint64_t x491 = UINT64_MAX;
	volatile uint64_t t82 = 1701322LLU;

	t82 = (x489*(x490&(x491*x492)));

	if (t82 != 17064956932059561984LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x493 = 411835618LL;
	int32_t x494 = INT32_MAX;
	int8_t x495 = -1;
	uint16_t x496 = 24U;
	volatile int64_t t83 = 89680227943LL;

	t83 = (x493*(x494&(x495*x496)));

	if (t83 != 884410245434919632LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x497 = UINT32_MAX;
	volatile int32_t x498 = INT32_MIN;
	uint16_t x500 = 468U;
	uint32_t t84 = 8648327U;

	t84 = (x497*(x498&(x499*x500)));

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x509 = INT8_MIN;
	uint64_t x512 = UINT64_MAX;
	volatile uint64_t t85 = 53297267205272040LLU;

	t85 = (x509*(x510&(x511*x512)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x522 = -1;
	int32_t x523 = -1;
	int16_t x524 = 1;

	t86 = (x521*(x522&(x523*x524)));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x525 = INT32_MIN;
	uint8_t x526 = 0U;
	int8_t x528 = -1;
	volatile uint64_t t87 = 4137906903LLU;

	t87 = (x525*(x526&(x527*x528)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x538 = 58;
	volatile uint16_t x539 = 11298U;
	uint8_t x540 = 81U;

	t88 = (x537*(x538&(x539*x540)));

	if (t88 != 6) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x541 = UINT64_MAX;
	int16_t x543 = -100;
	volatile uint64_t t89 = 35811249091555118LLU;

	t89 = (x541*(x542&(x543*x544)));

	if (t89 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x549 = 32727U;
	static int8_t x551 = INT8_MAX;
	volatile int8_t x552 = INT8_MIN;
	uint32_t t90 = 55U;

	t90 = (x549*(x550&(x551*x552)));

	if (t90 != 3762957184U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x553 = INT64_MIN;
	int32_t x554 = INT32_MAX;
	int32_t x555 = -1;
	static uint64_t t91 = 6751360927100560LLU;

	t91 = (x553*(x554&(x555*x556)));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x557 = 1U;
	volatile int16_t x558 = 2067;
	static int64_t x559 = -2372245797LL;
	int8_t x560 = -3;
	int64_t t92 = 179LL;

	t92 = (x557*(x558&(x559*x560)));

	if (t92 != 2051LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x561 = 4;
	volatile int16_t x563 = -1;
	volatile int8_t x564 = INT8_MAX;
	volatile int32_t t93 = -19781926;

	t93 = (x561*(x562&(x563*x564)));

	if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x569 = 10U;
	int32_t x571 = -34;
	int32_t t94 = 7;

	t94 = (x569*(x570&(x571*x572)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x577 = -1;
	uint8_t x578 = 6U;
	int32_t x579 = INT32_MAX;
	volatile uint32_t x580 = 26U;

	t95 = (x577*(x578&(x579*x580)));

	if (t95 != 4294967290U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x581 = 12U;
	int32_t x582 = 3762066;

	t96 = (x581*(x582&(x583*x584)));

	if (t96 != 44943384LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x597 = -1;
	int32_t x598 = INT32_MIN;
	int32_t x599 = 65375;
	static uint32_t x600 = 41U;
	uint32_t t97 = 186U;

	t97 = (x597*(x598&(x599*x600)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x601 = 9188573489004090LLU;
	static volatile int16_t x602 = 114;
	uint64_t t98 = 1961LLU;

	t98 = (x601*(x602&(x603*x604)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x609 = 991U;
	int64_t x610 = -106568637553LL;
	volatile uint64_t x611 = 101870730239548542LLU;
	int16_t x612 = INT16_MIN;
	volatile uint64_t t99 = 2247255798646LLU;

	t99 = (x609*(x610&(x611*x612)));

	if (t99 != 15873786065385881600LLU) { NG(); } else { ; }
	
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

