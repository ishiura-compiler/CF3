#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = -2;
uint8_t x6 = 1U;
volatile uint64_t t2 = 5302967LLU;
volatile uint32_t x20 = UINT32_MAX;
volatile uint16_t x21 = 8U;
volatile int64_t x24 = -17015234862LL;
int32_t x28 = INT32_MIN;
volatile uint64_t t6 = 978056865865124832LLU;
volatile int64_t x48 = -509028435114778LL;
uint64_t t12 = 103LLU;
int16_t x77 = INT16_MIN;
int8_t x78 = INT8_MAX;
volatile uint64_t t14 = 99647LLU;
int32_t x86 = 0;
uint8_t x92 = 3U;
volatile uint64_t t17 = 56LLU;
int64_t t18 = 996863904417LL;
int8_t x127 = INT8_MIN;
int16_t x133 = INT16_MAX;
volatile int8_t x134 = 19;
int16_t x139 = -1;
static volatile int32_t t25 = 1014466719;
int16_t x155 = -3;
int32_t x157 = -1;
static int64_t x158 = -1LL;
volatile uint8_t x172 = 58U;
uint64_t x185 = 1493654708LLU;
uint32_t x188 = 216419U;
static int16_t x190 = -1;
static int16_t x192 = 1;
volatile int32_t t35 = 18;
volatile uint64_t x193 = UINT64_MAX;
int8_t x194 = -1;
int64_t x196 = -1LL;
uint64_t t37 = 36711LLU;
static uint64_t x211 = UINT64_MAX;
int16_t x213 = 6;
int8_t x216 = -1;
int16_t x221 = -1;
int64_t t41 = 168458LL;
volatile uint32_t t43 = 20478U;
int8_t x245 = INT8_MIN;
static uint8_t x247 = 6U;
static uint32_t x249 = 1U;
int32_t x255 = INT32_MIN;
uint8_t x264 = 12U;
static uint32_t x266 = UINT32_MAX;
uint32_t t48 = 341U;
int16_t x275 = INT16_MIN;
volatile uint64_t t50 = 497724LLU;
int64_t x278 = INT64_MIN;
uint64_t t52 = 47LLU;
int32_t x314 = -1;
volatile int32_t t56 = 90;
static int16_t x328 = INT16_MAX;
int16_t x348 = INT16_MAX;
uint8_t x354 = 25U;
uint8_t x356 = UINT8_MAX;
static int8_t x361 = -53;
int64_t x362 = -1LL;
uint16_t x375 = 10889U;
volatile int8_t x383 = 0;
uint32_t x390 = 721918538U;
int64_t t69 = -5108229326298LL;
uint64_t x406 = 1198735489822LLU;
volatile uint32_t x415 = 5U;
int16_t x421 = -3883;
volatile int64_t t75 = -1541424235428106976LL;
int64_t x455 = -6168LL;
int64_t x456 = -1LL;
int64_t t79 = 127610117198LL;
volatile int64_t t81 = -106816894689159LL;
int16_t x478 = INT16_MIN;
static int16_t x479 = -1;
volatile int32_t x492 = -119586197;
uint16_t x511 = 125U;
static volatile int32_t t87 = -3518126;
int8_t x514 = -1;
int8_t x516 = INT8_MIN;
static volatile uint32_t x521 = 86699U;
int32_t x522 = -1;
volatile int8_t x525 = 4;
int32_t x536 = INT32_MAX;
static int8_t x540 = -1;
uint32_t t92 = 217826619U;
uint32_t x545 = 973908U;
static int64_t t95 = -758230078212581LL;
int64_t x559 = -1LL;
volatile int64_t t98 = -222017LL;


void f0(void) {
	static int64_t x1 = -1LL;
	volatile uint8_t x2 = 15U;
	int16_t x4 = INT16_MIN;
	static int64_t t0 = 7371283535510672LL;

	t0 = (x1*(x2-(x3|x4)));

	if (t0 != -17LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 2737773342LLU;
	int16_t x7 = INT16_MIN;
	int16_t x8 = 43;
	volatile uint64_t t1 = 27229LLU;

	t1 = (x5*(x6-(x7|x8)));

	if (t1 != 89596370390292LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	uint64_t x14 = UINT64_MAX;
	static volatile int16_t x15 = -1;
	uint8_t x16 = UINT8_MAX;

	t2 = (x13*(x14-(x15|x16)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = INT8_MIN;
	int32_t x18 = 390953;
	int8_t x19 = 1;
	uint32_t t3 = 115823U;

	t3 = (x17*(x18-(x19|x20)));

	if (t3 != 4244925184U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x22 = -1LL;
	uint64_t x23 = 0LLU;
	uint64_t t4 = 439946531175292107LLU;

	t4 = (x21*(x22-(x23|x24)));

	if (t4 != 136121878888LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static uint16_t x26 = 156U;
	static uint32_t x27 = 84055U;
	static uint32_t t5 = 493488U;

	t5 = (x25*(x26-(x27|x28)));

	if (t5 != 10739072U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 2344600865773888LLU;
	int32_t x34 = 0;
	uint8_t x35 = UINT8_MAX;
	uint16_t x36 = 459U;

	t6 = (x33*(x34-(x35|x36)));

	if (t6 != 17248653031299094848LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = -1;
	static int8_t x39 = -1;
	static int64_t x40 = -1LL;
	static volatile int64_t t7 = -27387862LL;

	t7 = (x37*(x38-(x39|x40)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x41 = 5U;
	uint32_t x42 = UINT32_MAX;
	uint8_t x43 = UINT8_MAX;
	int16_t x44 = 357;
	static volatile uint32_t t8 = 126160U;

	t8 = (x41*(x42-(x43|x44)));

	if (t8 != 4294964736U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x45 = UINT32_MAX;
	volatile uint64_t x46 = UINT64_MAX;
	uint64_t x47 = 33591195212070LLU;
	volatile uint64_t t9 = 69510LLU;

	t9 = (x45*(x46-(x47|x48)));

	if (t9 != 6920451154274147815LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int8_t x54 = INT8_MAX;
	volatile uint8_t x55 = 7U;
	uint8_t x56 = 1U;
	int32_t t10 = 11;

	t10 = (x53*(x54-(x55|x56)));

	if (t10 != 7864200) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = -13;
	int8_t x58 = -1;
	uint32_t x59 = 14012028U;
	uint8_t x60 = UINT8_MAX;
	volatile uint32_t t11 = 6776851U;

	t11 = (x57*(x58-(x59|x60)));

	if (t11 != 182158080U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = 1;
	int16_t x70 = 227;
	volatile uint64_t x71 = 689679020919LLU;
	volatile int8_t x72 = INT8_MIN;

	t12 = (x69*(x70-(x71|x72)));

	if (t12 != 236LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = 173563145LLU;
	int16_t x74 = -1046;
	int32_t x75 = INT32_MIN;
	static int32_t x76 = 83;
	volatile uint64_t t13 = 4515017039431LLU;

	t13 = (x73*(x74-(x75|x76)));

	if (t13 != 372723819830162255LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x79 = 2LLU;
	volatile int8_t x80 = INT8_MIN;

	t14 = (x77*(x78-(x79|x80)));

	if (t14 != 18446744073701261312LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MAX;
	static uint32_t x83 = 1787396U;
	int64_t x84 = 341659LL;
	static volatile int64_t t15 = -5251423397320LL;

	t15 = (x81*(x82-(x83|x84)));

	if (t15 != -67560835552LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x85 = 196239860U;
	static volatile int16_t x87 = INT16_MIN;
	static int64_t x88 = -15520LL;
	int64_t t16 = 51689480878186LL;

	t16 = (x85*(x86-(x87|x88)));

	if (t16 != 3045642627200LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 2U;
	uint64_t x90 = UINT64_MAX;
	volatile uint32_t x91 = 4U;

	t17 = (x89*(x90-(x91|x92)));

	if (t17 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = -1;
	int16_t x99 = -1;
	uint32_t x100 = UINT32_MAX;

	t18 = (x97*(x98-(x99|x100)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MAX;
	uint64_t x102 = 10325966035LLU;
	uint16_t x103 = 121U;
	uint32_t x104 = UINT32_MAX;
	volatile uint64_t t19 = 0LLU;

	t19 = (x101*(x102-(x103|x104)));

	if (t19 != 765936839980LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x105 = 265291146U;
	uint32_t x106 = 133186U;
	int16_t x107 = INT16_MAX;
	static uint64_t x108 = 0LLU;
	volatile uint64_t t20 = 4424LLU;

	t20 = (x105*(x106-(x107|x108)));

	if (t20 != 26640271590174LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x109 = 713LLU;
	static uint32_t x110 = UINT32_MAX;
	uint8_t x111 = 8U;
	volatile uint32_t x112 = 81U;
	volatile uint64_t t21 = 9646082LLU;

	t21 = (x109*(x110-(x111|x112)));

	if (t21 != 3062311617878LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = INT64_MIN;
	uint64_t x122 = 1LLU;
	int64_t x123 = INT64_MAX;
	volatile uint8_t x124 = UINT8_MAX;
	uint64_t t22 = 8501201172493LLU;

	t22 = (x121*(x122-(x123|x124)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x125 = INT8_MIN;
	static int32_t x126 = -1;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t23 = -33406297;

	t23 = (x125*(x126-(x127|x128)));

	if (t23 != -16256) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x135 = UINT8_MAX;
	uint8_t x136 = 3U;
	volatile int32_t t24 = 0;

	t24 = (x133*(x134-(x135|x136)));

	if (t24 != -7733012) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x137 = INT32_MIN;
	volatile int8_t x138 = -1;
	volatile int32_t x140 = -77789800;

	t25 = (x137*(x138-(x139|x140)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x141 = 306235U;
	volatile int64_t x142 = -1LL;
	static uint64_t x143 = 128998537744227LLU;
	static int8_t x144 = -1;
	static volatile uint64_t t26 = 124103140924810130LLU;

	t26 = (x141*(x142-(x143|x144)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = -51;
	volatile int64_t x146 = -1LL;
	int8_t x147 = INT8_MAX;
	static int8_t x148 = INT8_MIN;
	int64_t t27 = -1143081391296004756LL;

	t27 = (x145*(x146-(x147|x148)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x149 = -5;
	int64_t x150 = 844993610LL;
	int32_t x151 = 25;
	static volatile int32_t x152 = INT32_MIN;
	static int64_t t28 = -1584617725209883172LL;

	t28 = (x149*(x150-(x151|x152)));

	if (t28 != -14962386165LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x153 = 366U;
	uint8_t x154 = UINT8_MAX;
	uint32_t x156 = 11U;
	uint32_t t29 = 39614583U;

	t29 = (x153*(x154-(x155|x156)));

	if (t29 != 93696U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x159 = 0U;
	int8_t x160 = -26;
	static volatile int64_t t30 = -42660009LL;

	t30 = (x157*(x158-(x159|x160)));

	if (t30 != -25LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x165 = -1LL;
	volatile int16_t x166 = INT16_MAX;
	int8_t x167 = -1;
	volatile uint8_t x168 = 43U;
	int64_t t31 = -4483LL;

	t31 = (x165*(x166-(x167|x168)));

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = INT64_MIN;
	static uint64_t x170 = 32884026727653LLU;
	int32_t x171 = 26930356;
	static uint64_t t32 = 42LLU;

	t32 = (x169*(x170-(x171|x172)));

	if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = -14330;
	int16_t x178 = -99;
	int16_t x179 = -6284;
	int8_t x180 = INT8_MIN;
	int32_t t33 = -2;

	t33 = (x177*(x178-(x179|x180)));

	if (t33 != 1246710) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x186 = INT64_MIN;
	uint64_t x187 = 266LLU;
	uint64_t t34 = 3482825LLU;

	t34 = (x185*(x186-(x187|x188)));

	if (t34 != 18446420806502063300LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x189 = UINT16_MAX;
	uint8_t x191 = 3U;

	t35 = (x189*(x190-(x191|x192)));

	if (t35 != -262140) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x195 = UINT16_MAX;
	volatile uint64_t t36 = 164514595511LLU;

	t36 = (x193*(x194-(x195|x196)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x205 = 0U;
	volatile uint64_t x206 = 142163LLU;
	volatile uint16_t x207 = 4328U;
	int32_t x208 = -1;

	t37 = (x205*(x206-(x207|x208)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x209 = 893688906820938545LLU;
	uint8_t x210 = UINT8_MAX;
	static uint32_t x212 = UINT32_MAX;
	volatile uint64_t t38 = 312102181LLU;

	t38 = (x209*(x210-(x211|x212)));

	if (t38 != 7423431261645648128LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x214 = UINT32_MAX;
	uint16_t x215 = 0U;
	volatile uint32_t t39 = 1495333U;

	t39 = (x213*(x214-(x215|x216)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x217 = 0;
	static int8_t x218 = -1;
	uint16_t x219 = 368U;
	int32_t x220 = 34864696;
	static volatile int32_t t40 = 11;

	t40 = (x217*(x218-(x219|x220)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	int8_t x224 = -3;

	t41 = (x221*(x222-(x223|x224)));

	if (t41 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = 0;
	int16_t x234 = -1;
	int64_t x235 = INT64_MIN;
	int64_t x236 = -1LL;
	int64_t t42 = -3463307681208287383LL;

	t42 = (x233*(x234-(x235|x236)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x241 = UINT32_MAX;
	static uint32_t x242 = UINT32_MAX;
	static volatile int32_t x243 = -150;
	static uint32_t x244 = 4U;

	t43 = (x241*(x242-(x243|x244)));

	if (t43 != 4294967151U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x246 = 917094207U;
	int32_t x248 = -1;
	uint32_t t44 = 0U;

	t44 = (x245*(x246-(x247|x248)));

	if (t44 != 2871025664U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x250 = 625847310286413LLU;
	uint8_t x251 = UINT8_MAX;
	uint32_t x252 = UINT32_MAX;
	uint64_t t45 = 110LLU;

	t45 = (x249*(x250-(x251|x252)));

	if (t45 != 625843015319118LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x253 = INT16_MAX;
	int64_t x254 = -1LL;
	int16_t x256 = 15114;
	int64_t t46 = 24627607LL;

	t46 = (x253*(x254-(x255|x256)));

	if (t46 != 70366101420811LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x261 = -1;
	uint64_t x262 = 0LLU;
	int16_t x263 = INT16_MAX;
	static uint64_t t47 = 1455547616023LLU;

	t47 = (x261*(x262-(x263|x264)));

	if (t47 != 32767LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x265 = -1;
	int16_t x267 = 1;
	int16_t x268 = INT16_MAX;

	t48 = (x265*(x266-(x267|x268)));

	if (t48 != 32768U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x269 = 125U;
	uint8_t x270 = 6U;
	int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MAX;
	int32_t t49 = 30832;

	t49 = (x269*(x270-(x271|x272)));

	if (t49 != 875) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x273 = INT8_MAX;
	int64_t x274 = INT64_MAX;
	uint64_t x276 = UINT64_MAX;

	t50 = (x273*(x274-(x275|x276)));

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x277 = UINT32_MAX;
	uint64_t x279 = 6109038LLU;
	int8_t x280 = INT8_MAX;
	volatile uint64_t t51 = 3332835410677959LLU;

	t51 = (x277*(x278-(x279|x280)));

	if (t51 != 9197133845426419583LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = -1;
	int64_t x282 = INT64_MIN;
	uint64_t x283 = 31286020304LLU;
	int16_t x284 = INT16_MAX;

	t52 = (x281*(x282-(x283|x284)));

	if (t52 != 9223372068140810239LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = -15;
	volatile uint32_t x294 = 2334U;
	int16_t x295 = -134;
	static int32_t x296 = INT32_MIN;
	static volatile uint32_t t53 = 17229U;

	t53 = (x293*(x294-(x295|x296)));

	if (t53 != 4294930276U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x297 = INT8_MIN;
	volatile uint16_t x298 = 4U;
	volatile int32_t x299 = -54053;
	int64_t x300 = INT64_MAX;
	int64_t t54 = 47265829989972678LL;

	t54 = (x297*(x298-(x299|x300)));

	if (t54 != -640LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x301 = INT16_MIN;
	uint64_t x302 = 460967548LLU;
	uint16_t x303 = 54U;
	volatile uint16_t x304 = 15798U;
	volatile uint64_t t55 = 738472695LLU;

	t55 = (x301*(x302-(x303|x304)));

	if (t55 != 18446728969242607616LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x313 = 1387U;
	int32_t x315 = 17906;
	volatile int8_t x316 = -1;

	t56 = (x313*(x314-(x315|x316)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x317 = 8LL;
	uint32_t x318 = 108322U;
	int8_t x319 = 44;
	int32_t x320 = INT32_MIN;
	static volatile int64_t t57 = -7140042487795976LL;

	t57 = (x317*(x318-(x319|x320)));

	if (t57 != 17180735408LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x326 = INT64_MIN;
	int32_t x327 = -1;
	volatile uint64_t t58 = 4088105219011816LLU;

	t58 = (x325*(x326-(x327|x328)));

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x333 = INT64_MIN;
	volatile int16_t x334 = INT16_MIN;
	uint64_t x335 = 156402285960151562LLU;
	uint8_t x336 = 23U;
	volatile uint64_t t59 = 54LLU;

	t59 = (x333*(x334-(x335|x336)));

	if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x337 = -1;
	int8_t x338 = INT8_MIN;
	uint64_t x339 = UINT64_MAX;
	int32_t x340 = -1;
	static uint64_t t60 = 201987454053770787LLU;

	t60 = (x337*(x338-(x339|x340)));

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x345 = 0;
	volatile int8_t x346 = INT8_MIN;
	uint64_t x347 = 2LLU;
	uint64_t t61 = 12402429582LLU;

	t61 = (x345*(x346-(x347|x348)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x353 = -1LL;
	int16_t x355 = -1;
	int64_t t62 = -1240LL;

	t62 = (x353*(x354-(x355|x356)));

	if (t62 != -26LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x363 = UINT8_MAX;
	uint32_t x364 = UINT32_MAX;
	volatile int64_t t63 = -65799609571LL;

	t63 = (x361*(x362-(x363|x364)));

	if (t63 != 227633266688LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x365 = 11317U;
	uint64_t x366 = 0LLU;
	int64_t x367 = 25LL;
	uint8_t x368 = 77U;
	uint64_t t64 = 18391398227250LLU;

	t64 = (x365*(x366-(x367|x368)));

	if (t64 != 18446744073708499135LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x373 = INT32_MIN;
	volatile int64_t x374 = 2428LL;
	static volatile int16_t x376 = INT16_MIN;
	int64_t t65 = -9462948661LL;

	t65 = (x373*(x374-(x375|x376)));

	if (t65 != -52198885031936LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x381 = INT16_MIN;
	static uint16_t x382 = 190U;
	int16_t x384 = INT16_MIN;
	int32_t t66 = -5;

	t66 = (x381*(x382-(x383|x384)));

	if (t66 != -1079967744) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x385 = 8U;
	uint8_t x386 = 19U;
	uint64_t x387 = 130291503384135LLU;
	volatile uint64_t x388 = 14956698868613LLU;
	uint64_t t67 = 247155343291387780LLU;

	t67 = (x385*(x386-(x387|x388)));

	if (t67 != 18445618174473863776LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x389 = 197;
	int16_t x391 = INT16_MIN;
	uint32_t x392 = UINT32_MAX;
	uint32_t t68 = 65507803U;

	t68 = (x389*(x390-(x391|x392)));

	if (t68 != 484031415U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x393 = 60;
	int16_t x394 = INT16_MIN;
	int64_t x395 = -2960056049227LL;
	volatile uint8_t x396 = UINT8_MAX;

	t69 = (x393*(x394-(x395|x396)));

	if (t69 != 177603360983100LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x401 = 232U;
	int32_t x402 = -1;
	uint16_t x403 = UINT16_MAX;
	static uint16_t x404 = 227U;
	int32_t t70 = 33659836;

	t70 = (x401*(x402-(x403|x404)));

	if (t70 != -15204352) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x405 = 578LLU;
	volatile int32_t x407 = 3149;
	volatile int64_t x408 = INT64_MAX;
	static uint64_t t71 = 76752256786406300LLU;

	t71 = (x405*(x406-(x407|x408)));

	if (t71 != 692869113117694LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x413 = -1;
	static int16_t x414 = INT16_MIN;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t72 = 14591891249265LLU;

	t72 = (x413*(x414-(x415|x416)));

	if (t72 != 32767LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x422 = -1;
	uint64_t x423 = UINT64_MAX;
	int16_t x424 = -1;
	uint64_t t73 = 1590LLU;

	t73 = (x421*(x422-(x423|x424)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x425 = 337881002LLU;
	uint32_t x426 = 20U;
	uint64_t x427 = 9054889LLU;
	static volatile int8_t x428 = -12;
	uint64_t t74 = 54734824498460255LLU;

	t74 = (x425*(x426-(x427|x428)));

	if (t74 != 7771263046LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x433 = 61;
	static volatile uint32_t x434 = UINT32_MAX;
	uint16_t x435 = 492U;
	volatile int64_t x436 = 11020247466003028LL;

	t75 = (x433*(x434-(x435|x436)));

	if (t75 != -672234833433205577LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x437 = UINT8_MAX;
	int8_t x438 = -1;
	int8_t x439 = INT8_MIN;
	static uint16_t x440 = 88U;
	int32_t t76 = -1;

	t76 = (x437*(x438-(x439|x440)));

	if (t76 != 9945) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x445 = 1958;
	static uint8_t x446 = UINT8_MAX;
	static uint32_t x447 = 6922302U;
	static int8_t x448 = INT8_MIN;
	volatile uint32_t t77 = 3U;

	t77 = (x445*(x446-(x447|x448)));

	if (t77 != 628518U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x449 = INT32_MIN;
	uint64_t x450 = 71974095752356575LLU;
	static int8_t x451 = -1;
	int8_t x452 = -1;
	volatile uint64_t t78 = 26910LLU;

	t78 = (x449*(x450-(x451|x452)));

	if (t78 != 8850504073095413760LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x453 = INT16_MIN;
	uint16_t x454 = 55U;

	t79 = (x453*(x454-(x455|x456)));

	if (t79 != -1835008LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x457 = 2767;
	volatile int32_t x458 = -1;
	static int32_t x459 = -1;
	int8_t x460 = -1;
	volatile int32_t t80 = -242102;

	t80 = (x457*(x458-(x459|x460)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x473 = 9070U;
	volatile int64_t x474 = -1LL;
	volatile uint16_t x475 = UINT16_MAX;
	int8_t x476 = INT8_MIN;

	t81 = (x473*(x474-(x475|x476)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x477 = INT8_MIN;
	int16_t x480 = -15193;
	static int32_t t82 = 18870;

	t82 = (x477*(x478-(x479|x480)));

	if (t82 != 4194176) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x481 = 101134LL;
	uint64_t x482 = 3997077LLU;
	int32_t x483 = INT32_MAX;
	uint64_t x484 = 2273854930263LLU;
	uint64_t t83 = 1LLU;

	t83 = (x481*(x482-(x483|x484)));

	if (t83 != 18216747033629052980LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x485 = INT8_MAX;
	uint64_t x486 = 975686LLU;
	static int8_t x487 = -2;
	uint8_t x488 = 1U;
	volatile uint64_t t84 = 2124906802104500218LLU;

	t84 = (x485*(x486-(x487|x488)));

	if (t84 != 123912249LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x489 = 0;
	volatile int64_t x490 = INT64_MIN;
	volatile uint8_t x491 = 13U;
	int64_t t85 = -18872413822642789LL;

	t85 = (x489*(x490-(x491|x492)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x493 = -1LL;
	static int8_t x494 = 1;
	int16_t x495 = INT16_MIN;
	uint16_t x496 = 15U;
	volatile int64_t t86 = 1LL;

	t86 = (x493*(x494-(x495|x496)));

	if (t86 != -32754LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x509 = 60U;
	static int32_t x510 = -1;
	int16_t x512 = INT16_MIN;

	t87 = (x509*(x510-(x511|x512)));

	if (t87 != 1958520) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x513 = 50U;
	uint32_t x515 = UINT32_MAX;
	volatile uint32_t t88 = 7U;

	t88 = (x513*(x514-(x515|x516)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x523 = INT64_MIN;
	int64_t x524 = -1LL;
	volatile int64_t t89 = 1865147747512641LL;

	t89 = (x521*(x522-(x523|x524)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x526 = 61U;
	int32_t x527 = 1415;
	int64_t x528 = 15LL;
	static volatile int64_t t90 = 159943264LL;

	t90 = (x525*(x526-(x527|x528)));

	if (t90 != -5448LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x533 = 377902022831857LLU;
	volatile uint64_t x534 = 1064LLU;
	volatile uint16_t x535 = UINT16_MAX;
	uint64_t t91 = 37214831LLU;

	t91 = (x533*(x534-(x535|x536)));

	if (t91 != 8046666896768747673LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x537 = -18;
	static int8_t x538 = 0;
	uint32_t x539 = 122142U;

	t92 = (x537*(x538-(x539|x540)));

	if (t92 != 4294967278U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x541 = 1U;
	volatile int32_t x542 = INT32_MIN;
	uint16_t x543 = UINT16_MAX;
	uint64_t x544 = 126338991366659LLU;
	static volatile uint64_t t93 = 170039912LLU;

	t93 = (x541*(x542-(x543|x544)));

	if (t93 != 18446617732570677249LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x546 = 127U;
	int64_t x547 = 88406166647541008LL;
	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t94 = 111094532LLU;

	t94 = (x545*(x546-(x547|x548)));

	if (t94 != 124660224LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x553 = -1;
	volatile int16_t x554 = INT16_MIN;
	int64_t x555 = INT64_MIN;
	static int32_t x556 = -66161356;

	t95 = (x553*(x554-(x555|x556)));

	if (t95 != -66128588LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x557 = INT16_MAX;
	int8_t x558 = -1;
	static uint32_t x560 = UINT32_MAX;
	static volatile int64_t t96 = -131037689355802082LL;

	t96 = (x557*(x558-(x559|x560)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x561 = 212140549246LL;
	static int16_t x562 = INT16_MIN;
	int32_t x563 = INT32_MIN;
	static volatile int16_t x564 = INT16_MIN;
	volatile int64_t t97 = 3423201450394LL;

	t97 = (x561*(x562-(x563|x564)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x565 = INT64_MAX;
	static int8_t x566 = -1;
	int32_t x567 = INT32_MAX;
	int16_t x568 = INT16_MIN;

	t98 = (x565*(x566-(x567|x568)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x573 = -5;
	static volatile int16_t x574 = INT16_MAX;
	int64_t x575 = INT64_MIN;
	int64_t x576 = -1095616079004937LL;
	volatile int64_t t99 = 53877545206LL;

	t99 = (x573*(x574-(x575|x576)));

	if (t99 != -5478080395188520LL) { NG(); } else { ; }
	
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

