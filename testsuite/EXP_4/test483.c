#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 3;
volatile uint16_t x6 = UINT16_MAX;
volatile int16_t x8 = INT16_MIN;
int64_t x30 = -1370LL;
int64_t t6 = -571015036078465124LL;
int16_t x44 = 3739;
volatile int64_t t8 = -3287575LL;
volatile int16_t x49 = 128;
int64_t x52 = -920005805079LL;
uint32_t x53 = UINT32_MAX;
volatile uint64_t t11 = 8832937LLU;
volatile int32_t x89 = INT32_MIN;
int8_t x93 = -1;
static int32_t x94 = INT32_MIN;
int16_t x96 = -1582;
static int32_t t15 = 1;
int64_t t16 = -26293553448LL;
volatile uint32_t x108 = 428U;
static volatile uint64_t t18 = 2518343808624945LLU;
uint64_t x120 = 6616536LLU;
volatile uint32_t t20 = 535947388U;
volatile uint64_t t21 = 2446454480550694695LLU;
static uint8_t x143 = 1U;
int64_t x150 = INT64_MIN;
uint64_t x154 = 64013960153LLU;
int8_t x165 = 0;
int32_t x167 = -1;
int32_t t27 = -85683223;
static int32_t x182 = -1;
uint64_t x193 = UINT64_MAX;
uint8_t x195 = 69U;
int8_t x197 = 1;
int64_t x203 = 31996LL;
int32_t x207 = -2270194;
uint64_t x209 = 13664580LLU;
volatile uint64_t t37 = 9511370494037LLU;
int16_t x221 = 0;
int32_t x223 = -1;
int64_t x230 = INT64_MIN;
volatile uint64_t x231 = UINT64_MAX;
volatile int64_t t40 = -41406687512874868LL;
uint32_t x245 = UINT32_MAX;
volatile uint64_t t42 = 15999151651635LLU;
int8_t x259 = INT8_MAX;
static uint64_t t44 = 1266356714LLU;
uint16_t x265 = UINT16_MAX;
volatile uint32_t x267 = 1736402U;
int32_t x269 = -1;
uint32_t x271 = 86251U;
uint64_t t46 = 37662109LLU;
uint64_t x273 = 133708078579654010LLU;
int16_t x275 = -1;
int32_t x279 = INT32_MIN;
uint32_t x282 = 27063U;
int8_t x292 = -1;
int32_t x295 = INT32_MIN;
int64_t x302 = -3537382118LL;
uint64_t x308 = UINT64_MAX;
volatile uint64_t x312 = 162LLU;
static uint64_t x319 = 263259329509LLU;
uint32_t x325 = UINT32_MAX;
static volatile int32_t x326 = INT32_MIN;
static uint32_t t57 = 19U;
volatile int32_t t58 = 139288;
int16_t x337 = -428;
uint8_t x341 = 3U;
int64_t x344 = INT64_MAX;
static int64_t t60 = -64980LL;
int8_t x350 = -1;
static volatile int16_t x353 = INT16_MIN;
int16_t x354 = -1;
static uint16_t x355 = 4U;
int64_t x356 = -4127LL;
uint64_t x358 = UINT64_MAX;
volatile int8_t x373 = 13;
int16_t x377 = INT16_MIN;
uint64_t x382 = 34489LLU;
static int8_t x388 = -1;
int8_t x395 = 0;
volatile uint32_t x410 = 3U;
static uint64_t t73 = 12LLU;
uint32_t x418 = 36249966U;
static volatile uint8_t x424 = 52U;
volatile int64_t t76 = 130787146433869513LL;
volatile int64_t t77 = -6181026440607LL;
volatile uint64_t x438 = UINT64_MAX;
static int8_t x448 = INT8_MAX;
int16_t x455 = INT16_MAX;
static uint32_t t82 = 73940882U;
int32_t x474 = 4186846;
static int8_t x477 = INT8_MIN;
uint32_t x483 = 4944965U;
uint16_t x486 = UINT16_MAX;
uint64_t t88 = 23097037LLU;
static volatile int64_t x509 = -1LL;
int16_t x517 = 4;
uint8_t x522 = 0U;
int8_t x524 = INT8_MIN;
int16_t x528 = -105;
volatile int32_t x529 = INT32_MIN;
uint32_t t97 = 604948U;
uint8_t x555 = 43U;
int32_t x556 = 18038175;
int32_t t99 = 996046;


void f0(void) {
	volatile int32_t x1 = -1;
	static int64_t x2 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	int64_t t0 = -801838940LL;

	t0 = (x1-(x2|(x3*x4)));

	if (t0 != 383LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	static uint8_t x7 = 90U;
	volatile int64_t t1 = 13003601275520220LL;

	t1 = (x5-(x6|(x7*x8)));

	if (t1 != 2883584LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -3;
	uint32_t x14 = 55U;
	uint16_t x15 = 1U;
	int8_t x16 = INT8_MIN;
	uint32_t t2 = 1672192997U;

	t2 = (x13-(x14|(x15*x16)));

	if (t2 != 70U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	int32_t x18 = 433;
	static int8_t x19 = INT8_MAX;
	uint16_t x20 = 150U;
	int64_t t3 = -20543578132884936LL;

	t3 = (x17-(x18|(x19*x20)));

	if (t3 != 9223372036854756356LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x22 = 22U;
	uint64_t x23 = 398027246LLU;
	uint16_t x24 = 2316U;
	uint64_t t4 = 3298001199LLU;

	t4 = (x21-(x22|(x23*x24)));

	if (t4 != 9223371115023674050LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 8349046100456925957LLU;
	static int32_t x26 = 1;
	int16_t x27 = INT16_MIN;
	static volatile int8_t x28 = INT8_MAX;
	uint64_t t5 = 17261LLU;

	t5 = (x25-(x26|(x27*x28)));

	if (t5 != 8349046100461087492LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	uint32_t x31 = 120749592U;
	static int8_t x32 = INT8_MIN;

	t6 = (x29-(x30|(x31*x32)));

	if (t6 != -9223372036854775462LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = 1;
	int8_t x42 = INT8_MIN;
	volatile int8_t x43 = INT8_MIN;
	int32_t t7 = 60344059;

	t7 = (x41-(x42|(x43*x44)));

	if (t7 != 129) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MIN;
	int64_t x46 = -1LL;
	static uint32_t x47 = 1570802213U;
	uint32_t x48 = 2237775U;

	t8 = (x45-(x46|(x47*x48)));

	if (t8 != -127LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x50 = 33LLU;
	volatile uint64_t x51 = UINT64_MAX;
	static volatile uint64_t t9 = 309120535LLU;

	t9 = (x49-(x50|(x51*x52)));

	if (t9 != 18446743153703746633LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x54 = INT64_MAX;
	int16_t x55 = INT16_MAX;
	int32_t x56 = -43130;
	int64_t t10 = 0LL;

	t10 = (x53-(x54|(x55*x56)));

	if (t10 != 4294967296LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x73 = 7271641U;
	int64_t x74 = INT64_MIN;
	static int8_t x75 = INT8_MAX;
	uint64_t x76 = 0LLU;

	t11 = (x73-(x74|(x75*x76)));

	if (t11 != 9223372036862047449LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x81 = 3U;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = INT8_MAX;
	static uint32_t x84 = UINT32_MAX;
	uint64_t t12 = 30206638692750LLU;

	t12 = (x81-(x82|(x83*x84)));

	if (t12 != 4LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x85 = 4LL;
	static uint64_t x86 = 6204114308469LLU;
	volatile int16_t x87 = INT16_MIN;
	int64_t x88 = -1LL;
	volatile uint64_t t13 = 374260177650756079LLU;

	t13 = (x85-(x86|(x87*x88)));

	if (t13 != 18446737869595243151LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x90 = -1;
	uint8_t x91 = UINT8_MAX;
	static uint64_t x92 = UINT64_MAX;
	volatile uint64_t t14 = 36163399232LLU;

	t14 = (x89-(x90|(x91*x92)));

	if (t14 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x95 = 4U;

	t15 = (x93-(x94|(x95*x96)));

	if (t15 != 6327) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = INT8_MAX;
	static int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	int64_t x104 = -1LL;

	t16 = (x101-(x102|(x103*x104)));

	if (t16 != 2147451007LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = 853652U;
	int8_t x107 = INT8_MAX;
	uint32_t t17 = 4048U;

	t17 = (x105-(x106|(x107*x108)));

	if (t17 != 4294027564U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x109 = UINT32_MAX;
	uint64_t x110 = 1224134085LLU;
	int32_t x111 = -1;
	uint16_t x112 = 242U;

	t18 = (x109-(x110|(x111*x112)));

	if (t18 != 4294967344LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x117 = 0;
	static uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MAX;
	uint64_t t19 = 1LLU;

	t19 = (x117-(x118|(x119*x120)));

	if (t19 != 18446744072869249025LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x121 = INT8_MAX;
	static uint32_t x122 = 63164022U;
	uint8_t x123 = 0U;
	int8_t x124 = -1;

	t20 = (x121-(x122|(x123*x124)));

	if (t20 != 4231803401U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x125 = 13;
	int16_t x126 = INT16_MAX;
	uint64_t x127 = 6887760LLU;
	int16_t x128 = INT16_MAX;

	t21 = (x125-(x126|(x127*x128)));

	if (t21 != 18446743848018313230LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x137 = UINT64_MAX;
	uint8_t x138 = UINT8_MAX;
	static int16_t x139 = INT16_MIN;
	static int16_t x140 = -2015;
	uint64_t t22 = 233LLU;

	t22 = (x137-(x138|(x139*x140)));

	if (t22 != 18446744073643523840LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x141 = -6;
	int64_t x142 = -1LL;
	uint8_t x144 = 25U;
	int64_t t23 = 776LL;

	t23 = (x141-(x142|(x143*x144)));

	if (t23 != -5LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x151 = 772;
	volatile int16_t x152 = INT16_MAX;
	uint64_t t24 = 797566439286396828LLU;

	t24 = (x149-(x150|(x151*x152)));

	if (t24 != 9223372036829479683LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x153 = -41;
	volatile int8_t x155 = 1;
	int8_t x156 = -2;
	volatile uint64_t t25 = 1707LLU;

	t25 = (x153-(x154|(x155*x156)));

	if (t25 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x161 = INT16_MIN;
	volatile int64_t x162 = 67534LL;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = INT8_MAX;
	static volatile uint64_t t26 = 4LLU;

	t26 = (x161-(x162|(x163*x164)));

	if (t26 != 18446744073709518897LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x166 = UINT8_MAX;
	static int8_t x168 = -1;

	t27 = (x165-(x166|(x167*x168)));

	if (t27 != -255) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x173 = -1;
	int32_t x174 = -1;
	int8_t x175 = INT8_MIN;
	static volatile uint8_t x176 = UINT8_MAX;
	static int32_t t28 = 901293;

	t28 = (x173-(x174|(x175*x176)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x177 = INT64_MIN;
	static int32_t x178 = -1;
	volatile uint64_t x179 = 10573727LLU;
	uint16_t x180 = 26807U;
	volatile uint64_t t29 = 10832536656LLU;

	t29 = (x177-(x178|(x179*x180)));

	if (t29 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x181 = INT64_MIN;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t x184 = -1;
	static volatile int64_t t30 = 1926212742442713LL;

	t30 = (x181-(x182|(x183*x184)));

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x189 = -1;
	uint32_t x190 = 1638091547U;
	uint32_t x191 = 49U;
	uint32_t x192 = 86U;
	uint32_t t31 = 723526771U;

	t31 = (x189-(x190|(x191*x192)));

	if (t31 != 2656871552U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x194 = 4569;
	volatile int8_t x196 = 11;
	static uint64_t t32 = 9549189LLU;

	t32 = (x193-(x194|(x195*x196)));

	if (t32 != 18446744073709546496LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x198 = 1;
	static uint64_t x199 = UINT64_MAX;
	int64_t x200 = 332157746522140LL;
	volatile uint64_t t33 = 80292312956LLU;

	t33 = (x197-(x198|(x199*x200)));

	if (t33 != 332157746522140LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x201 = -13LL;
	volatile int64_t x202 = -1LL;
	int16_t x204 = -2519;
	volatile int64_t t34 = -94954LL;

	t34 = (x201-(x202|(x203*x204)));

	if (t34 != -12LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x205 = -1623;
	int32_t x206 = INT32_MAX;
	static int32_t x208 = 1;
	static volatile int32_t t35 = -96472;

	t35 = (x205-(x206|(x207*x208)));

	if (t35 != -1622) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x210 = 85571421U;
	static volatile int8_t x211 = INT8_MIN;
	uint32_t x212 = 1279551201U;
	volatile uint64_t t36 = 848667LLU;

	t36 = (x209-(x210|(x211*x212)));

	if (t36 != 18446744070000918887LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x213 = -133;
	static uint64_t x214 = 1274LLU;
	int16_t x215 = INT16_MAX;
	int8_t x216 = INT8_MAX;

	t37 = (x213-(x214|(x215*x216)));

	if (t37 != 18446744073705389952LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x222 = INT64_MIN;
	volatile uint8_t x224 = 7U;
	static int64_t t38 = 1LL;

	t38 = (x221-(x222|(x223*x224)));

	if (t38 != 7LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x229 = INT32_MAX;
	int16_t x232 = INT16_MIN;
	uint64_t t39 = 809228621719556961LLU;

	t39 = (x229-(x230|(x231*x232)));

	if (t39 != 9223372039002226687LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x241 = 1994225465807LL;
	int16_t x242 = INT16_MAX;
	int32_t x243 = 156;
	uint32_t x244 = 13145632U;

	t40 = (x241-(x242|(x243*x244)));

	if (t40 != 1992174746064LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x246 = -1;
	int8_t x247 = -60;
	volatile uint64_t x248 = 0LLU;
	volatile uint64_t t41 = 12146281090089LLU;

	t41 = (x245-(x246|(x247*x248)));

	if (t41 != 4294967296LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x249 = 160;
	static int64_t x250 = INT64_MAX;
	int64_t x251 = -893723421LL;
	static uint64_t x252 = 91640LLU;

	t42 = (x249-(x250|(x251*x252)));

	if (t42 != 161LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x257 = 248946U;
	int16_t x258 = INT16_MIN;
	volatile int64_t x260 = 2315LL;
	int64_t t43 = 26871571LL;

	t43 = (x257-(x258|(x259*x260)));

	if (t43 != 249853LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x261 = INT16_MIN;
	uint64_t x262 = 169865159LLU;
	uint32_t x263 = 77U;
	uint8_t x264 = 1U;

	t44 = (x261-(x262|(x263*x264)));

	if (t44 != 18446744073539653681LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x266 = 0U;
	int64_t x268 = -1LL;
	static int64_t t45 = 1LL;

	t45 = (x265-(x266|(x267*x268)));

	if (t45 != 1801937LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x270 = -542851LL;
	uint64_t x272 = UINT64_MAX;

	t46 = (x269-(x270|(x271*x272)));

	if (t46 != 16514LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x274 = -1;
	static volatile int32_t x276 = 626530078;
	uint64_t t47 = 135645216727049LLU;

	t47 = (x273-(x274|(x275*x276)));

	if (t47 != 133708078579654011LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x277 = INT8_MIN;
	uint8_t x278 = 48U;
	static uint64_t x280 = UINT64_MAX;
	uint64_t t48 = 842LLU;

	t48 = (x277-(x278|(x279*x280)));

	if (t48 != 18446744071562067792LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x281 = -1;
	volatile uint64_t x283 = 4834163173LLU;
	int32_t x284 = INT32_MIN;
	uint64_t t49 = 97194393LLU;

	t49 = (x281-(x282|(x283*x284)));

	if (t49 != 10381286365781268040LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x289 = INT32_MAX;
	int64_t x290 = -487182469802LL;
	volatile uint32_t x291 = 120752U;
	volatile int64_t t50 = 31336841003LL;

	t50 = (x289-(x290|(x291*x292)));

	if (t50 != 487478821545LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x293 = 1450U;
	uint8_t x294 = 60U;
	int64_t x296 = -1LL;
	volatile int64_t t51 = 2751LL;

	t51 = (x293-(x294|(x295*x296)));

	if (t51 != -2147482258LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x301 = -1;
	uint32_t x303 = 435845U;
	static volatile int16_t x304 = INT16_MIN;
	int64_t t52 = -3738585198LL;

	t52 = (x301-(x302|(x303*x304)));

	if (t52 != 1379936997LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x305 = INT64_MIN;
	static int16_t x306 = 0;
	volatile int16_t x307 = INT16_MIN;
	volatile uint64_t t53 = 50720606005712825LLU;

	t53 = (x305-(x306|(x307*x308)));

	if (t53 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x309 = -15;
	int8_t x310 = -1;
	int16_t x311 = 963;
	volatile uint64_t t54 = 1697087094488568568LLU;

	t54 = (x309-(x310|(x311*x312)));

	if (t54 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x313 = UINT16_MAX;
	volatile int8_t x314 = INT8_MAX;
	int64_t x315 = -1LL;
	uint16_t x316 = UINT16_MAX;
	volatile int64_t t55 = -2105LL;

	t55 = (x313-(x314|(x315*x316)));

	if (t55 != 130944LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x317 = UINT8_MAX;
	static int64_t x318 = INT64_MIN;
	uint32_t x320 = 1U;
	volatile uint64_t t56 = 770426LLU;

	t56 = (x317-(x318|(x319*x320)));

	if (t56 != 9223371773595446554LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x327 = INT8_MIN;
	static volatile uint8_t x328 = 13U;

	t57 = (x325-(x326|(x327*x328)));

	if (t57 != 1663U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MAX;
	static int16_t x331 = 0;
	volatile int16_t x332 = -1;

	t58 = (x329-(x330|(x331*x332)));

	if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x338 = UINT16_MAX;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = INT32_MIN;
	uint32_t t59 = 1958U;

	t59 = (x337-(x338|(x339*x340)));

	if (t59 != 2147417685U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x342 = INT16_MAX;
	int32_t x343 = -1;

	t60 = (x341-(x342|(x343*x344)));

	if (t60 != 9223372036854743044LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x349 = INT32_MAX;
	int16_t x351 = -63;
	int64_t x352 = -1LL;
	int64_t t61 = 12264LL;

	t61 = (x349-(x350|(x351*x352)));

	if (t61 != 2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t t62 = 60057069571617863LL;

	t62 = (x353-(x354|(x355*x356)));

	if (t62 != -32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x357 = -834;
	uint64_t x359 = 1276823LLU;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t63 = 3004635646733LLU;

	t63 = (x357-(x358|(x359*x360)));

	if (t63 != 18446744073709550783LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x369 = 23U;
	static int64_t x370 = -1LL;
	uint16_t x371 = UINT16_MAX;
	int16_t x372 = -2;
	volatile int64_t t64 = -991LL;

	t64 = (x369-(x370|(x371*x372)));

	if (t64 != 24LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x374 = -1;
	int32_t x375 = -2555643;
	int16_t x376 = 1;
	int32_t t65 = 0;

	t65 = (x373-(x374|(x375*x376)));

	if (t65 != 14) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x378 = 116U;
	volatile uint32_t x379 = 1455715U;
	int64_t x380 = -1LL;
	int64_t t66 = 25629LL;

	t66 = (x377-(x378|(x379*x380)));

	if (t66 != 1422851LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x381 = 2620;
	volatile uint32_t x383 = 225349U;
	volatile int32_t x384 = INT32_MIN;
	static volatile uint64_t t67 = 18638432983610LLU;

	t67 = (x381-(x382|(x383*x384)));

	if (t67 != 18446744071562036099LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x385 = 15009U;
	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = 0U;
	static volatile uint32_t t68 = 6654473U;

	t68 = (x385-(x386|(x387*x388)));

	if (t68 != 15010U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x389 = 47U;
	int64_t x390 = 80811700557LL;
	int64_t x391 = 3LL;
	uint32_t x392 = 22228529U;
	volatile int64_t t69 = -1979163032890065971LL;

	t69 = (x389-(x390|(x391*x392)));

	if (t69 != -80865770416LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x393 = 3953U;
	static int32_t x394 = -3024;
	uint16_t x396 = UINT16_MAX;
	int32_t t70 = -43269;

	t70 = (x393-(x394|(x395*x396)));

	if (t70 != 6977) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x405 = 4210917074LL;
	static volatile int8_t x406 = 20;
	static uint16_t x407 = 3U;
	uint16_t x408 = 23U;
	volatile int64_t t71 = 1115817LL;

	t71 = (x405-(x406|(x407*x408)));

	if (t71 != 4210916989LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x409 = INT64_MAX;
	int32_t x411 = 0;
	uint16_t x412 = UINT16_MAX;
	int64_t t72 = -493LL;

	t72 = (x409-(x410|(x411*x412)));

	if (t72 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x413 = UINT64_MAX;
	int8_t x414 = INT8_MIN;
	uint64_t x415 = UINT64_MAX;
	int8_t x416 = INT8_MIN;

	t73 = (x413-(x414|(x415*x416)));

	if (t73 != 127LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x417 = INT16_MIN;
	static int8_t x419 = 1;
	uint32_t x420 = 213277U;
	volatile uint32_t t74 = 340753155U;

	t74 = (x417-(x418|(x419*x420)));

	if (t74 != 4258537089U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x421 = INT64_MAX;
	volatile uint64_t x422 = 3295923922325LLU;
	volatile int16_t x423 = -1;
	static volatile uint64_t t75 = 3186LLU;

	t75 = (x421-(x422|(x423*x424)));

	if (t75 != 9223372036854775842LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x425 = INT8_MIN;
	int64_t x426 = INT64_MIN;
	uint16_t x427 = 0U;
	uint16_t x428 = UINT16_MAX;

	t76 = (x425-(x426|(x427*x428)));

	if (t76 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x433 = INT16_MIN;
	int16_t x434 = INT16_MIN;
	int64_t x435 = -1LL;
	int32_t x436 = -1;

	t77 = (x433-(x434|(x435*x436)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x437 = 6U;
	uint16_t x439 = 10273U;
	volatile uint64_t x440 = 29049389LLU;
	volatile uint64_t t78 = 992272LLU;

	t78 = (x437-(x438|(x439*x440)));

	if (t78 != 7LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x445 = -1LL;
	uint8_t x446 = 0U;
	int8_t x447 = INT8_MAX;
	int64_t t79 = -129989882884LL;

	t79 = (x445-(x446|(x447*x448)));

	if (t79 != -16130LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x449 = INT32_MAX;
	static int16_t x450 = INT16_MAX;
	uint8_t x451 = UINT8_MAX;
	volatile uint8_t x452 = UINT8_MAX;
	int32_t t80 = 459351;

	t80 = (x449-(x450|(x451*x452)));

	if (t80 != 2147418112) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x453 = 21354LLU;
	uint64_t x454 = UINT64_MAX;
	int64_t x456 = 69109148013LL;
	volatile uint64_t t81 = 62548281257590LLU;

	t81 = (x453-(x454|(x455*x456)));

	if (t81 != 21355LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x457 = -3;
	int32_t x458 = 3;
	uint32_t x459 = 2751U;
	int16_t x460 = 0;

	t82 = (x457-(x458|(x459*x460)));

	if (t82 != 4294967290U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x469 = UINT32_MAX;
	uint32_t x470 = UINT32_MAX;
	uint16_t x471 = UINT16_MAX;
	int16_t x472 = 34;
	uint32_t t83 = 505914U;

	t83 = (x469-(x470|(x471*x472)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x473 = -2;
	int16_t x475 = -1;
	uint8_t x476 = 40U;
	volatile int32_t t84 = 110953917;

	t84 = (x473-(x474|(x475*x476)));

	if (t84 != 32) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x478 = 1906723U;
	int32_t x479 = -1;
	uint32_t x480 = UINT32_MAX;
	volatile uint32_t t85 = 1U;

	t85 = (x477-(x478|(x479*x480)));

	if (t85 != 4293060445U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x481 = -1LL;
	volatile uint8_t x482 = UINT8_MAX;
	static volatile uint16_t x484 = 1885U;
	volatile int64_t t86 = -20377LL;

	t86 = (x481-(x482|(x483*x484)));

	if (t86 != -731324672LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x485 = INT8_MAX;
	static int32_t x487 = 13;
	volatile uint32_t x488 = 1U;
	uint32_t t87 = 3215470U;

	t87 = (x485-(x486|(x487*x488)));

	if (t87 != 4294901888U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x489 = INT16_MIN;
	uint64_t x490 = UINT64_MAX;
	int8_t x491 = INT8_MIN;
	uint32_t x492 = 997361669U;

	t88 = (x489-(x490|(x491*x492)));

	if (t88 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x493 = 3U;
	volatile int16_t x494 = INT16_MIN;
	static volatile uint8_t x495 = UINT8_MAX;
	uint64_t x496 = 498LLU;
	static volatile uint64_t t89 = 1102452993235211161LLU;

	t89 = (x493-(x494|(x495*x496)));

	if (t89 != 4085LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x497 = INT64_MAX;
	uint64_t x498 = 3063356LLU;
	uint16_t x499 = 43U;
	uint8_t x500 = 1U;
	uint64_t t90 = 13162LLU;

	t90 = (x497-(x498|(x499*x500)));

	if (t90 != 9223372036851712448LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x501 = 5U;
	int32_t x502 = -1;
	uint64_t x503 = 0LLU;
	int16_t x504 = 8;
	volatile uint64_t t91 = 278191721958757LLU;

	t91 = (x501-(x502|(x503*x504)));

	if (t91 != 6LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x505 = UINT64_MAX;
	static volatile int32_t x506 = INT32_MIN;
	static int16_t x507 = 3;
	volatile uint32_t x508 = 43716U;
	volatile uint64_t t92 = 59113144297247LLU;

	t92 = (x505-(x506|(x507*x508)));

	if (t92 != 18446744071561936819LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x510 = 445587U;
	volatile int32_t x511 = -1;
	static int64_t x512 = -1LL;
	int64_t t93 = -277236996256LL;

	t93 = (x509-(x510|(x511*x512)));

	if (t93 != -445588LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x518 = -169;
	static uint64_t x519 = 15514950549LLU;
	int64_t x520 = INT64_MIN;
	static volatile uint64_t t94 = 8272713672646068830LLU;

	t94 = (x517-(x518|(x519*x520)));

	if (t94 != 173LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x521 = -6;
	int64_t x523 = 7LL;
	static volatile int64_t t95 = -24098903011LL;

	t95 = (x521-(x522|(x523*x524)));

	if (t95 != 890LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x525 = INT64_MIN;
	volatile int8_t x526 = INT8_MIN;
	int16_t x527 = 0;
	volatile int64_t t96 = -42909LL;

	t96 = (x525-(x526|(x527*x528)));

	if (t96 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x530 = 572467U;
	uint16_t x531 = 1U;
	int8_t x532 = INT8_MAX;

	t97 = (x529-(x530|(x531*x532)));

	if (t97 != 2146911105U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x549 = 13;
	int32_t x550 = 61;
	uint64_t x551 = 15951059671295140LLU;
	int8_t x552 = -3;
	static uint64_t t98 = 12LLU;

	t98 = (x549-(x550|(x551*x552)));

	if (t98 != 47853179013885392LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x553 = INT32_MAX;
	int32_t x554 = 52728;

	t99 = (x553-(x554|(x555*x556)));

	if (t99 != 1371808258) { NG(); } else { ; }
	
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

