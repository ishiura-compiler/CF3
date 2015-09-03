#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x17 = 93581U;
static int16_t x22 = INT16_MAX;
uint32_t t2 = 317539329U;
int32_t x30 = INT32_MAX;
int32_t x36 = -1;
int32_t x39 = -29997482;
volatile int8_t x42 = -1;
volatile uint32_t x44 = 39986826U;
uint64_t t8 = 817114646862856LLU;
int16_t x50 = -1;
static volatile int64_t t9 = -4212784780946LL;
static int64_t x61 = INT64_MAX;
volatile int8_t x68 = INT8_MIN;
int16_t x73 = INT16_MAX;
uint64_t x81 = UINT64_MAX;
int16_t x85 = INT16_MIN;
int8_t x87 = -14;
uint32_t x88 = 294044625U;
uint8_t x95 = UINT8_MAX;
int8_t x96 = INT8_MIN;
volatile uint32_t t16 = 373U;
uint8_t x97 = 7U;
uint8_t x100 = 8U;
int16_t x101 = -1;
static uint32_t x107 = UINT32_MAX;
volatile int64_t x116 = INT64_MAX;
volatile int16_t x118 = -1;
uint64_t t23 = 111936622LLU;
int64_t x136 = -1LL;
int8_t x137 = -8;
volatile int32_t x139 = INT32_MIN;
int16_t x148 = INT16_MIN;
int64_t x155 = -1LL;
int32_t x159 = 38333;
int32_t x169 = INT32_MAX;
int16_t x173 = INT16_MIN;
uint8_t x176 = 0U;
volatile uint16_t x182 = 959U;
int8_t x189 = INT8_MIN;
volatile int64_t t39 = 3658323032628LL;
uint64_t x210 = UINT64_MAX;
int32_t x218 = INT32_MIN;
volatile int16_t x220 = INT16_MIN;
volatile uint64_t t42 = 10LLU;
int16_t x221 = INT16_MIN;
int32_t x230 = INT32_MIN;
int32_t t44 = -2973;
int8_t x237 = 28;
uint16_t x240 = UINT16_MAX;
int8_t x245 = INT8_MIN;
int32_t t47 = -35269516;
int64_t x259 = INT64_MIN;
int8_t x261 = INT8_MIN;
uint64_t x263 = UINT64_MAX;
volatile uint64_t t51 = 221187943991741LLU;
int32_t x268 = INT32_MIN;
uint16_t x269 = 52U;
int8_t x270 = 42;
int16_t x294 = INT16_MIN;
uint64_t t56 = 1LLU;
uint16_t x308 = 127U;
int64_t t58 = -113178956218LL;
static volatile int64_t t60 = -4381381LL;
int32_t x326 = INT32_MIN;
volatile int32_t t63 = -154;
static uint32_t t66 = 0U;
int8_t x346 = 1;
int32_t x347 = INT32_MIN;
int32_t x352 = INT32_MIN;
uint32_t x363 = 10693U;
uint16_t x367 = 5U;
static int8_t x372 = INT8_MIN;
int8_t x382 = INT8_MAX;
int64_t x383 = -1LL;
uint64_t x384 = 21580876415982473LLU;
volatile uint64_t t76 = 1725973LLU;
int16_t x405 = 169;
uint32_t x407 = UINT32_MAX;
uint64_t x417 = 20144795LLU;
volatile int32_t x418 = -2381;
uint64_t x425 = 1527332LLU;
int64_t x426 = INT64_MAX;
int64_t x430 = 296851LL;
int8_t x431 = 38;
uint64_t x432 = 116480108158532410LLU;
static volatile int32_t x437 = INT32_MAX;
int32_t x439 = 54067;
static uint64_t x441 = 10971726095321324LLU;
int32_t x452 = 0;
int32_t x466 = 172;
uint32_t x483 = 86444U;
int8_t x484 = -1;
int32_t x486 = 344;
volatile uint64_t x493 = 12667LLU;
static volatile uint32_t x519 = 1531889U;
uint64_t x521 = UINT64_MAX;
static volatile int8_t x526 = INT8_MAX;
uint16_t x537 = 54U;
uint8_t x540 = 5U;
volatile int64_t t98 = -1522736962888045LL;


void f0(void) {
	volatile int32_t x13 = -1;
	volatile uint64_t x14 = UINT64_MAX;
	uint16_t x15 = UINT16_MAX;
	int16_t x16 = INT16_MIN;
	uint64_t t0 = 1291624LLU;

	t0 = (x13+(x14-(x15+x16)));

	if (t0 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x18 = 62;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = 139932361194248564LL;
	volatile int64_t t1 = 1327289326822344732LL;

	t1 = (x17+(x18-(x19+x20)));

	if (t1 != -139932361194155176LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x21 = UINT32_MAX;
	uint16_t x23 = UINT16_MAX;
	uint8_t x24 = 1U;

	t2 = (x21+(x22-(x23+x24)));

	if (t2 != 4294934526U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x25 = 127U;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = 3500U;
	static int16_t x28 = INT16_MAX;
	uint32_t t3 = 0U;

	t3 = (x25+(x26-(x27+x28)));

	if (t3 != 4294898388U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x29 = 3U;
	uint32_t x31 = 253754U;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t4 = 241297065U;

	t4 = (x29+(x30-(x31+x32)));

	if (t4 != 2147229897U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = INT8_MAX;
	int16_t x35 = -1;
	int32_t t5 = 6;

	t5 = (x33+(x34-(x35+x36)));

	if (t5 != -2147483519) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 687624631U;
	uint16_t x38 = 806U;
	int32_t x40 = INT32_MAX;
	uint32_t t6 = 1U;

	t6 = (x37+(x38-(x39+x40)));

	if (t6 != 2865106568U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = INT16_MAX;
	int8_t x43 = 35;
	uint32_t t7 = 75519U;

	t7 = (x41+(x42-(x43+x44)));

	if (t7 != 4255013201U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = UINT32_MAX;
	volatile uint64_t x46 = UINT64_MAX;
	int32_t x47 = INT32_MIN;
	static uint64_t x48 = 302233765985LLU;

	t8 = (x45+(x46-(x47+x48)));

	if (t8 != 18446743777918236573LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x49 = -1;
	int32_t x51 = INT32_MAX;
	volatile int64_t x52 = -1LL;

	t9 = (x49+(x50-(x51+x52)));

	if (t9 != -2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x62 = INT8_MAX;
	uint64_t x63 = 4088343481255LLU;
	static volatile int16_t x64 = INT16_MIN;
	volatile uint64_t t10 = 63991444749LLU;

	t10 = (x61+(x62-(x63+x64)));

	if (t10 != 9223367948511327447LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MAX;
	volatile uint64_t x67 = 359421LLU;
	uint64_t t11 = 1LLU;

	t11 = (x65+(x66-(x67+x68)));

	if (t11 != 18446744073709159682LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x74 = -1967;
	uint8_t x75 = 19U;
	volatile uint32_t x76 = 1887709U;
	uint32_t t12 = 588466439U;

	t12 = (x73+(x74-(x75+x76)));

	if (t12 != 4293110368U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x82 = INT32_MIN;
	int32_t x83 = -1;
	volatile int16_t x84 = INT16_MIN;
	volatile uint64_t t13 = 14870032LLU;

	t13 = (x81+(x82-(x83+x84)));

	if (t13 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x86 = -1;
	volatile uint32_t t14 = 2369587U;

	t14 = (x85+(x86-(x87+x88)));

	if (t14 != 4000889916U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MAX;
	int32_t x91 = 25152224;
	volatile int32_t x92 = 6;
	int64_t t15 = 18549463LL;

	t15 = (x89+(x90-(x91+x92)));

	if (t15 != 9223372036829590809LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x93 = 1306565193U;
	int32_t x94 = INT32_MAX;

	t16 = (x93+(x94-(x95+x96)));

	if (t16 != 3454048713U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x98 = 2119297292U;
	uint8_t x99 = 3U;
	uint32_t t17 = 1508178U;

	t17 = (x97+(x98-(x99+x100)));

	if (t17 != 2119297288U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x102 = -1;
	int8_t x103 = -1;
	int16_t x104 = -1;
	volatile int32_t t18 = -28;

	t18 = (x101+(x102-(x103+x104)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = INT8_MIN;
	volatile int32_t x106 = -9851;
	int32_t x108 = INT32_MIN;
	volatile uint32_t t19 = 851636469U;

	t19 = (x105+(x106-(x107+x108)));

	if (t19 != 2147473670U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x109 = 25906243U;
	static volatile int64_t x110 = -1LL;
	static int32_t x111 = INT32_MAX;
	int16_t x112 = -3;
	int64_t t20 = -88492LL;

	t20 = (x109+(x110-(x111+x112)));

	if (t20 != -2121577402LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x113 = -1;
	int8_t x114 = INT8_MIN;
	uint64_t x115 = 168143374211622LLU;
	static uint64_t t21 = 13025LLU;

	t21 = (x113+(x114-(x115+x116)));

	if (t21 != 9223203893480564058LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MIN;
	uint32_t x119 = UINT32_MAX;
	static int8_t x120 = INT8_MIN;
	uint32_t t22 = 781827U;

	t22 = (x117+(x118-(x119+x120)));

	if (t22 != 2147483776U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = -2109;
	static volatile int64_t x122 = INT64_MIN;
	uint64_t x123 = 3780634453LLU;
	static uint8_t x124 = 112U;

	t23 = (x121+(x122-(x123+x124)));

	if (t23 != 9223372033074139134LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x125 = -1;
	static int16_t x126 = INT16_MIN;
	uint16_t x127 = 2464U;
	uint32_t x128 = UINT32_MAX;
	uint32_t t24 = 24U;

	t24 = (x125+(x126-(x127+x128)));

	if (t24 != 4294932064U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = 0;
	int64_t x134 = INT64_MIN;
	int16_t x135 = -1;
	int64_t t25 = 849LL;

	t25 = (x133+(x134-(x135+x136)));

	if (t25 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x138 = -1;
	uint8_t x140 = 7U;
	int32_t t26 = -13131;

	t26 = (x137+(x138-(x139+x140)));

	if (t26 != 2147483632) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x141 = 494195823U;
	volatile uint64_t x142 = UINT64_MAX;
	uint32_t x143 = 18268U;
	int32_t x144 = -1;
	volatile uint64_t t27 = 26057747LLU;

	t27 = (x141+(x142-(x143+x144)));

	if (t27 != 494177555LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = 12U;
	volatile int8_t x146 = INT8_MAX;
	uint32_t x147 = 62U;
	volatile uint32_t t28 = 764405U;

	t28 = (x145+(x146-(x147+x148)));

	if (t28 != 32845U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = INT64_MIN;
	static int8_t x150 = -19;
	uint32_t x151 = 247U;
	int16_t x152 = 1;
	int64_t t29 = -2511211935701897LL;

	t29 = (x149+(x150-(x151+x152)));

	if (t29 != -9223372032559808779LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = INT8_MIN;
	uint64_t x154 = UINT64_MAX;
	volatile int64_t x156 = -1LL;
	volatile uint64_t t30 = 942LLU;

	t30 = (x153+(x154-(x155+x156)));

	if (t30 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MAX;
	uint32_t x158 = UINT32_MAX;
	int8_t x160 = INT8_MIN;
	volatile uint32_t t31 = 963U;

	t31 = (x157+(x158-(x159+x160)));

	if (t31 != 4294961857U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x161 = INT16_MIN;
	static int64_t x162 = INT64_MIN;
	int16_t x163 = -12539;
	int16_t x164 = INT16_MIN;
	static int64_t t32 = 32481470438LL;

	t32 = (x161+(x162-(x163+x164)));

	if (t32 != -9223372036854763269LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = 55;
	int16_t x166 = INT16_MAX;
	uint64_t x167 = 1LLU;
	int8_t x168 = INT8_MIN;
	uint64_t t33 = 3857235222772LLU;

	t33 = (x165+(x166-(x167+x168)));

	if (t33 != 32949LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x170 = -681917202;
	volatile int32_t x171 = -1;
	uint32_t x172 = UINT32_MAX;
	uint32_t t34 = 12U;

	t34 = (x169+(x170-(x171+x172)));

	if (t34 != 1465566447U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x174 = 84U;
	volatile int8_t x175 = -1;
	int32_t t35 = -9329;

	t35 = (x173+(x174-(x175+x176)));

	if (t35 != -32683) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x181 = INT16_MIN;
	uint32_t x183 = 1883U;
	static int8_t x184 = INT8_MAX;
	volatile uint32_t t36 = 15198169U;

	t36 = (x181+(x182-(x183+x184)));

	if (t36 != 4294933477U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x190 = 406283LL;
	static uint16_t x191 = 11U;
	uint16_t x192 = 3U;
	volatile int64_t t37 = -1780018433808508182LL;

	t37 = (x189+(x190-(x191+x192)));

	if (t37 != 406141LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = UINT16_MAX;
	uint8_t x198 = 45U;
	volatile int8_t x199 = 0;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t38 = -1974021;

	t38 = (x197+(x198-(x199+x200)));

	if (t38 != 98348) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x201 = 14;
	int32_t x202 = INT32_MAX;
	volatile int64_t x203 = -1LL;
	int16_t x204 = 1;

	t39 = (x201+(x202-(x203+x204)));

	if (t39 != 2147483661LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x209 = 15350U;
	static volatile int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	uint64_t t40 = 125236LLU;

	t40 = (x209+(x210-(x211+x212)));

	if (t40 != 80885LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x213 = INT64_MAX;
	int16_t x214 = -2606;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = -1;
	volatile uint64_t t41 = 503726934LLU;

	t41 = (x213+(x214-(x215+x216)));

	if (t41 != 9223372036854773203LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x217 = -1LL;
	uint64_t x219 = UINT64_MAX;

	t42 = (x217+(x218-(x219+x220)));

	if (t42 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x222 = -33;
	int8_t x223 = INT8_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t43 = 6022240U;

	t43 = (x221+(x222-(x223+x224)));

	if (t43 != 4294934624U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = -510;
	int8_t x231 = 13;
	int32_t x232 = INT32_MIN;

	t44 = (x229+(x230-(x231+x232)));

	if (t44 != -523) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x238 = UINT32_MAX;
	volatile uint64_t x239 = UINT64_MAX;
	static volatile uint64_t t45 = 1368LLU;

	t45 = (x237+(x238-(x239+x240)));

	if (t45 != 4294901789LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x241 = 14LL;
	int64_t x242 = INT64_MIN;
	int16_t x243 = -14908;
	int8_t x244 = INT8_MIN;
	static int64_t t46 = -391750872469LL;

	t46 = (x241+(x242-(x243+x244)));

	if (t46 != -9223372036854760758LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x246 = UINT8_MAX;
	static uint8_t x247 = 13U;
	int8_t x248 = INT8_MIN;

	t47 = (x245+(x246-(x247+x248)));

	if (t47 != 242) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = -13;
	int8_t x250 = 0;
	int64_t x251 = -1LL;
	int64_t x252 = 33088658167LL;
	static volatile int64_t t48 = -17222596910LL;

	t48 = (x249+(x250-(x251+x252)));

	if (t48 != -33088658179LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x253 = INT8_MAX;
	uint32_t x254 = UINT32_MAX;
	int32_t x255 = -1;
	int64_t x256 = -4478318341361688LL;
	int64_t t49 = 12421403698046591LL;

	t49 = (x253+(x254-(x255+x256)));

	if (t49 != 4478322636329111LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = -4;
	volatile uint64_t x258 = 3567239963360320LLU;
	volatile int64_t x260 = INT64_MAX;
	uint64_t t50 = 186LLU;

	t50 = (x257+(x258-(x259+x260)));

	if (t50 != 3567239963360317LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x262 = INT32_MIN;
	uint16_t x264 = 1U;

	t51 = (x261+(x262-(x263+x264)));

	if (t51 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x265 = -2680;
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = INT64_MAX;
	uint64_t t52 = 109998758315LLU;

	t52 = (x265+(x266-(x267+x268)));

	if (t52 != 9223372039002256776LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x271 = 915;
	int8_t x272 = -1;
	int32_t t53 = -1;

	t53 = (x269+(x270-(x271+x272)));

	if (t53 != -820) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = 22;
	volatile int32_t t54 = -784915;

	t54 = (x285+(x286-(x287+x288)));

	if (t54 != -65813) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x289 = 327808145888986275LLU;
	int32_t x290 = INT32_MAX;
	static volatile int32_t x291 = -5;
	int32_t x292 = INT32_MAX;
	uint64_t t55 = 2LLU;

	t55 = (x289+(x290-(x291+x292)));

	if (t55 != 327808145888986280LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x293 = INT32_MIN;
	static uint32_t x295 = 1663889U;
	static uint64_t x296 = 381LLU;

	t56 = (x293+(x294-(x295+x296)));

	if (t56 != 18446744071560370930LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = -1LL;
	int8_t x300 = INT8_MAX;
	static volatile uint64_t t57 = 16625949714779323LLU;

	t57 = (x297+(x298-(x299+x300)));

	if (t57 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = 0U;
	volatile int64_t x307 = 0LL;

	t58 = (x305+(x306-(x307+x308)));

	if (t58 != -255LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x309 = 6916364322LLU;
	uint8_t x310 = 45U;
	int32_t x311 = 984;
	uint64_t x312 = UINT64_MAX;
	volatile uint64_t t59 = 323386425LLU;

	t59 = (x309+(x310-(x311+x312)));

	if (t59 != 6916363384LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MAX;
	static int32_t x315 = 7;
	int16_t x316 = 1;

	t60 = (x313+(x314-(x315+x316)));

	if (t60 != 9223372036854775671LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x317 = 640065357U;
	volatile int16_t x318 = -1;
	int8_t x319 = -7;
	uint32_t x320 = 358U;
	uint32_t t61 = 4544U;

	t61 = (x317+(x318-(x319+x320)));

	if (t61 != 640065005U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x321 = 3LLU;
	volatile int64_t x322 = -5093784920LL;
	volatile int16_t x323 = 70;
	int64_t x324 = INT64_MIN;
	uint64_t t62 = 846360709771653LLU;

	t62 = (x321+(x322-(x323+x324)));

	if (t62 != 9223372031760990821LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x325 = INT8_MIN;
	volatile int32_t x327 = 3576531;
	static int32_t x328 = INT32_MIN;

	t63 = (x325+(x326-(x327+x328)));

	if (t63 != -3576659) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = INT8_MAX;
	int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MIN;
	int32_t x336 = 0;
	volatile int64_t t64 = 289LL;

	t64 = (x333+(x334-(x335+x336)));

	if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = -1;
	static int8_t x338 = INT8_MAX;
	int8_t x339 = 1;
	volatile uint32_t x340 = 27U;
	uint32_t t65 = 150645157U;

	t65 = (x337+(x338-(x339+x340)));

	if (t65 != 98U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x341 = INT16_MIN;
	uint8_t x342 = 83U;
	uint32_t x343 = 451U;
	volatile int8_t x344 = -12;

	t66 = (x341+(x342-(x343+x344)));

	if (t66 != 4294934172U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x345 = INT16_MIN;
	uint32_t x348 = 26671965U;
	volatile uint32_t t67 = 1595U;

	t67 = (x345+(x346-(x347+x348)));

	if (t67 != 2120778916U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x349 = 20006124U;
	uint32_t x350 = 2297U;
	volatile uint32_t x351 = UINT32_MAX;
	uint32_t t68 = 801U;

	t68 = (x349+(x350-(x351+x352)));

	if (t68 != 2167492070U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x353 = INT64_MIN;
	static int8_t x354 = INT8_MAX;
	int8_t x355 = -1;
	uint64_t x356 = UINT64_MAX;
	static uint64_t t69 = 2133381876327159812LLU;

	t69 = (x353+(x354-(x355+x356)));

	if (t69 != 9223372036854775937LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x361 = -1;
	static int8_t x362 = -22;
	int32_t x364 = -1;
	volatile uint32_t t70 = 56085U;

	t70 = (x361+(x362-(x363+x364)));

	if (t70 != 4294956581U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x365 = INT64_MIN;
	uint32_t x366 = UINT32_MAX;
	static int8_t x368 = -1;
	int64_t t71 = 18974LL;

	t71 = (x365+(x366-(x367+x368)));

	if (t71 != -9223372032559808517LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x369 = INT32_MAX;
	int8_t x370 = INT8_MIN;
	uint32_t x371 = 9364067U;
	uint32_t t72 = 50U;

	t72 = (x369+(x370-(x371+x372)));

	if (t72 != 2138119580U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x373 = UINT16_MAX;
	int16_t x374 = -1;
	int32_t x375 = 1;
	uint32_t x376 = 9810U;
	volatile uint32_t t73 = 3390U;

	t73 = (x373+(x374-(x375+x376)));

	if (t73 != 55723U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x381 = UINT16_MAX;
	volatile uint64_t t74 = 180859LLU;

	t74 = (x381+(x382-(x383+x384)));

	if (t74 != 18425163197293634806LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x385 = 455230012143316140LLU;
	static int16_t x386 = INT16_MIN;
	uint8_t x387 = UINT8_MAX;
	uint8_t x388 = 0U;
	uint64_t t75 = 1083624585047519LLU;

	t75 = (x385+(x386-(x387+x388)));

	if (t75 != 455230012143283117LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x389 = 32165U;
	static uint64_t x390 = 19623711391LLU;
	int16_t x391 = -3;
	int8_t x392 = -1;

	t76 = (x389+(x390-(x391+x392)));

	if (t76 != 19623743560LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x406 = -1LL;
	int16_t x408 = INT16_MIN;
	volatile int64_t t77 = -24638041543LL;

	t77 = (x405+(x406-(x407+x408)));

	if (t77 != -4294934359LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x409 = INT64_MIN;
	int16_t x410 = -1;
	int8_t x411 = -1;
	int8_t x412 = INT8_MIN;
	int64_t t78 = -971LL;

	t78 = (x409+(x410-(x411+x412)));

	if (t78 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x413 = -1LL;
	int64_t x414 = -251864148737LL;
	int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MAX;
	volatile int64_t t79 = -308124489563LL;

	t79 = (x413+(x414-(x415+x416)));

	if (t79 != 9223371784990594303LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x419 = 25U;
	uint64_t x420 = 5417LLU;
	uint64_t t80 = 5714LLU;

	t80 = (x417+(x418-(x419+x420)));

	if (t80 != 20136972LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x427 = -1;
	volatile uint32_t x428 = 13325U;
	uint64_t t81 = 41703372724862293LLU;

	t81 = (x425+(x426-(x427+x428)));

	if (t81 != 9223372036856289815LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x429 = INT8_MAX;
	volatile uint64_t t82 = 486203710646441LLU;

	t82 = (x429+(x430-(x431+x432)));

	if (t82 != 18330263965551316146LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x438 = 289LLU;
	static int32_t x440 = -20;
	uint64_t t83 = 3788LLU;

	t83 = (x437+(x438-(x439+x440)));

	if (t83 != 2147429889LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x442 = 3U;
	uint32_t x443 = UINT32_MAX;
	volatile uint32_t x444 = 1628690U;
	uint64_t t84 = 12141442279749LLU;

	t84 = (x441+(x442-(x443+x444)));

	if (t84 != 10971730388659934LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x449 = 1336675U;
	int16_t x450 = INT16_MIN;
	volatile int32_t x451 = INT32_MIN;
	volatile uint32_t t85 = 7U;

	t85 = (x449+(x450-(x451+x452)));

	if (t85 != 2148787555U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x453 = INT64_MAX;
	uint64_t x454 = 204282382641LLU;
	int32_t x455 = 215;
	uint8_t x456 = 86U;
	uint64_t t86 = 8475086845655782032LLU;

	t86 = (x453+(x454-(x455+x456)));

	if (t86 != 9223372241137158147LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x465 = -26;
	int32_t x467 = -1;
	int16_t x468 = INT16_MAX;
	int32_t t87 = -170275216;

	t87 = (x465+(x466-(x467+x468)));

	if (t87 != -32620) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x477 = -57766;
	uint16_t x478 = 17U;
	uint64_t x479 = UINT64_MAX;
	static int64_t x480 = INT64_MAX;
	uint64_t t88 = 907LLU;

	t88 = (x477+(x478-(x479+x480)));

	if (t88 != 9223372036854718061LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x481 = -1;
	static int8_t x482 = INT8_MIN;
	volatile uint32_t t89 = 0U;

	t89 = (x481+(x482-(x483+x484)));

	if (t89 != 4294880724U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x485 = UINT32_MAX;
	int32_t x487 = -1;
	volatile int8_t x488 = INT8_MAX;
	static volatile uint32_t t90 = 3761U;

	t90 = (x485+(x486-(x487+x488)));

	if (t90 != 217U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x494 = INT16_MAX;
	int16_t x495 = INT16_MAX;
	int16_t x496 = INT16_MIN;
	uint64_t t91 = 55382615LLU;

	t91 = (x493+(x494-(x495+x496)));

	if (t91 != 45435LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x501 = 13487133LL;
	int32_t x502 = INT32_MAX;
	int32_t x503 = -1;
	uint64_t x504 = 2887926126092LLU;
	uint64_t t92 = 30077192674295LLU;

	t92 = (x501+(x502-(x503+x504)));

	if (t92 != 18446741187944396305LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x509 = 0U;
	static int32_t x510 = 0;
	int32_t x511 = INT32_MAX;
	volatile int8_t x512 = -3;
	int32_t t93 = 2;

	t93 = (x509+(x510-(x511+x512)));

	if (t93 != -2147483644) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x513 = 110007357055LLU;
	static int32_t x514 = -1;
	static int64_t x515 = -27156048692LL;
	uint16_t x516 = UINT16_MAX;
	uint64_t t94 = 1997125390LLU;

	t94 = (x513+(x514-(x515+x516)));

	if (t94 != 137163340211LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x517 = INT8_MAX;
	uint16_t x518 = 103U;
	int32_t x520 = 58141831;
	static uint32_t t95 = 198U;

	t95 = (x517+(x518-(x519+x520)));

	if (t95 != 4235293806U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x522 = INT16_MIN;
	uint16_t x523 = UINT16_MAX;
	int16_t x524 = INT16_MIN;
	uint64_t t96 = 6961212403296537943LLU;

	t96 = (x521+(x522-(x523+x524)));

	if (t96 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x525 = 6U;
	uint32_t x527 = 61U;
	uint32_t x528 = 2698U;
	volatile uint32_t t97 = 76239U;

	t97 = (x525+(x526-(x527+x528)));

	if (t97 != 4294964670U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x538 = INT64_MIN;
	volatile int16_t x539 = INT16_MIN;

	t98 = (x537+(x538-(x539+x540)));

	if (t98 != -9223372036854742991LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x553 = -940489411288144247LL;
	static uint16_t x554 = UINT16_MAX;
	static uint8_t x555 = 1U;
	uint8_t x556 = UINT8_MAX;
	int64_t t99 = -4382440472371064LL;

	t99 = (x553+(x554-(x555+x556)));

	if (t99 != -940489411288078968LL) { NG(); } else { ; }
	
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

