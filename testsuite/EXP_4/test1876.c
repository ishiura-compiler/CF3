#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 127U;
static volatile int32_t x8 = 40377087;
int64_t x12 = INT64_MIN;
uint16_t x13 = UINT16_MAX;
volatile int32_t x18 = 380391028;
int64_t t3 = 3567LL;
int64_t t4 = 0LL;
static int64_t x28 = -1LL;
int32_t x44 = 1;
static int32_t t9 = -75699075;
volatile uint32_t x45 = 374221514U;
int32_t x47 = 953;
volatile uint16_t x53 = 1U;
int64_t x55 = -1347LL;
volatile uint64_t t12 = 560LLU;
int8_t x62 = INT8_MAX;
static volatile uint64_t t14 = 3712324LLU;
volatile uint32_t x70 = 0U;
int64_t x72 = INT64_MAX;
int32_t x74 = 85;
static uint16_t x77 = 13U;
int64_t x80 = -1LL;
volatile uint64_t t17 = 17437562590536LLU;
int64_t t21 = -252453LL;
volatile uint32_t x118 = UINT32_MAX;
volatile int8_t x121 = 6;
int32_t x132 = -2357;
int16_t x133 = INT16_MIN;
volatile int64_t t28 = -1703498488343061829LL;
volatile uint32_t x140 = 128580187U;
uint32_t t30 = 7028067U;
int32_t x151 = -91;
uint8_t x153 = 18U;
uint16_t x164 = UINT16_MAX;
int64_t x177 = -1LL;
int8_t x187 = -1;
uint32_t x190 = 158010U;
uint64_t t39 = 1109LLU;
volatile uint32_t t41 = 51248U;
uint16_t x206 = 8464U;
int16_t x211 = INT16_MIN;
uint32_t t43 = 0U;
volatile int8_t x219 = -56;
int64_t x222 = INT64_MAX;
static int8_t x226 = -5;
int8_t x236 = INT8_MAX;
volatile int64_t t49 = 187LL;
int8_t x244 = INT8_MAX;
int16_t x254 = 938;
static int16_t x267 = -1;
int8_t x268 = INT8_MIN;
int64_t t55 = -17222376LL;
uint8_t x280 = UINT8_MAX;
volatile uint64_t t56 = 10255553629381826LLU;
uint64_t x288 = 1441168494622LLU;
volatile int64_t x290 = INT64_MIN;
static int64_t t58 = -61722447276LL;
static int16_t x296 = 41;
int32_t x300 = 63;
static volatile uint32_t x302 = 15U;
volatile uint16_t x306 = 369U;
int16_t x312 = -1;
int16_t x314 = 0;
int8_t x319 = -1;
int32_t x326 = -1;
uint8_t x327 = 81U;
int8_t x334 = INT8_MIN;
int16_t x336 = -1;
volatile int8_t x338 = INT8_MAX;
volatile int16_t x350 = -45;
volatile int16_t x357 = INT16_MIN;
int64_t x362 = -1LL;
volatile int64_t t73 = -5794963513482236LL;
volatile uint64_t x367 = 39489935910105LLU;
static uint64_t x371 = 0LLU;
volatile uint64_t t76 = 190869325381568449LLU;
static uint16_t x379 = 401U;
static int8_t x382 = 28;
static int16_t x383 = INT16_MIN;
uint32_t x384 = 1007502U;
uint32_t t78 = 7U;
static volatile int8_t x390 = -1;
int32_t x396 = -1;
int64_t t81 = -6116625LL;
static int64_t x397 = INT64_MIN;
volatile int8_t x405 = -62;
volatile int64_t x406 = 948155814341082654LL;
int32_t x409 = INT32_MIN;
static volatile uint64_t x410 = 7817950229302123LLU;
static volatile uint32_t x420 = 7U;
int8_t x426 = 0;
int64_t x428 = 649989LL;
int32_t t88 = -228;
int32_t x439 = 223041396;
volatile int8_t x443 = INT8_MIN;
volatile int8_t x445 = INT8_MAX;
int16_t x450 = INT16_MAX;
volatile int32_t t93 = -11643439;
volatile int16_t x453 = INT16_MIN;
uint8_t x455 = UINT8_MAX;
static int8_t x461 = INT8_MIN;
volatile uint64_t t96 = 121820465122809LLU;
int64_t t97 = -12639LL;
uint16_t x470 = UINT16_MAX;


void f0(void) {
	int16_t x5 = INT16_MAX;
	static uint16_t x6 = UINT16_MAX;
	static int32_t t0 = -1;

	t0 = (x5/(x6-(x7|x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MAX;
	int64_t t1 = -200282LL;

	t1 = (x9/(x10-(x11|x12)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MAX;
	static int8_t x16 = -1;
	int64_t t2 = 144LL;

	t2 = (x13/(x14-(x15|x16)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MAX;

	t3 = (x17/(x18-(x19|x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MIN;
	static int32_t x22 = 74796;
	static int64_t x23 = -1LL;
	volatile uint8_t x24 = 0U;

	t4 = (x21/(x22-(x23|x24)));

	if (t4 != -123312058462970LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	volatile uint64_t x26 = 6236039296511LLU;
	volatile int64_t x27 = -1LL;
	uint64_t t5 = 0LLU;

	t5 = (x25/(x26-(x27|x28)));

	if (t5 != 2958086LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1383;
	static uint32_t x30 = 9847314U;
	int32_t x31 = INT32_MIN;
	int32_t x32 = 132234052;
	volatile uint32_t t6 = 2U;

	t6 = (x29/(x30-(x31|x32)));

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = 6;
	static volatile uint32_t x34 = 1028246699U;
	static int16_t x35 = INT16_MAX;
	static int16_t x36 = 38;
	volatile uint32_t t7 = 23130839U;

	t7 = (x33/(x34-(x35|x36)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -3;
	static int16_t x38 = -1;
	int8_t x39 = INT8_MIN;
	volatile int16_t x40 = -16335;
	static int32_t t8 = -63909;

	t8 = (x37/(x38-(x39|x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	volatile int32_t x42 = -1;
	int32_t x43 = INT32_MIN;

	t9 = (x41/(x42-(x43|x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x46 = 597LLU;
	uint32_t x48 = UINT32_MAX;
	volatile uint64_t t10 = 5LLU;

	t10 = (x45/(x46-(x47|x48)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = 1LL;
	int16_t x50 = INT16_MIN;
	uint8_t x51 = 3U;
	static int8_t x52 = 1;
	volatile int64_t t11 = -3845137790228488LL;

	t11 = (x49/(x50-(x51|x52)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = UINT64_MAX;
	static volatile int8_t x56 = INT8_MIN;

	t12 = (x53/(x54-(x55|x56)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x57 = UINT8_MAX;
	int32_t x58 = INT32_MIN;
	static volatile int16_t x59 = -1;
	volatile uint16_t x60 = 1703U;
	volatile int32_t t13 = -5738;

	t13 = (x57/(x58-(x59|x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MAX;
	int16_t x63 = -1;
	uint64_t x64 = 17636016LLU;

	t14 = (x61/(x62-(x63|x64)));

	if (t14 != 255LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x69 = UINT64_MAX;
	static int16_t x71 = INT16_MAX;
	uint64_t t15 = 4502450660978988707LLU;

	t15 = (x69/(x70-(x71|x72)));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = INT32_MAX;
	volatile int16_t x75 = INT16_MIN;
	static int16_t x76 = INT16_MAX;
	static volatile int32_t t16 = 262;

	t16 = (x73/(x74-(x75|x76)));

	if (t16 != 24970740) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x78 = INT64_MIN;
	volatile uint64_t x79 = 452806664191LLU;

	t17 = (x77/(x78-(x79|x80)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = 3698U;
	static int32_t t18 = -185549;

	t18 = (x85/(x86-(x87|x88)));

	if (t18 != 287) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	int32_t x95 = 1;
	static int16_t x96 = -5;
	static volatile int32_t t19 = 22700;

	t19 = (x93/(x94-(x95|x96)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	int32_t x99 = 1;
	static int16_t x100 = INT16_MAX;
	volatile int32_t t20 = -846;

	t20 = (x97/(x98-(x99|x100)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = INT64_MIN;
	static uint16_t x103 = UINT16_MAX;
	int16_t x104 = -897;

	t21 = (x101/(x102-(x103|x104)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MIN;
	static int16_t x106 = -6194;
	int16_t x107 = -3398;
	int64_t x108 = -1LL;
	static int64_t t22 = 924609657088LL;

	t22 = (x105/(x106-(x107|x108)));

	if (t22 != 346759LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = UINT8_MAX;
	uint8_t x115 = 64U;
	volatile int32_t x116 = INT32_MAX;
	volatile uint32_t t23 = 3352U;

	t23 = (x113/(x114-(x115|x116)));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = 1549616085685928462LL;
	int64_t x119 = -1LL;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t24 = 925416970695621049LL;

	t24 = (x117/(x118-(x119|x120)));

	if (t24 != 360798110LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x122 = 4531U;
	int8_t x123 = 1;
	int64_t x124 = -1LL;
	int64_t t25 = 14820833402250549LL;

	t25 = (x121/(x122-(x123|x124)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = -1;
	static int8_t x126 = INT8_MIN;
	static int64_t x127 = -112384643604002LL;
	volatile int8_t x128 = INT8_MAX;
	volatile int64_t t26 = 1325727988317107LL;

	t26 = (x125/(x126-(x127|x128)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MAX;
	uint8_t x130 = 3U;
	volatile int8_t x131 = INT8_MIN;
	volatile int64_t t27 = -188LL;

	t27 = (x129/(x130-(x131|x132)));

	if (t27 != 164703072086692425LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x134 = UINT16_MAX;
	int32_t x135 = -4455523;
	int64_t x136 = INT64_MAX;

	t28 = (x133/(x134-(x135|x136)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x137 = UINT64_MAX;
	int64_t x138 = -1LL;
	uint8_t x139 = 15U;
	volatile uint64_t t29 = 310006207167738135LLU;

	t29 = (x137/(x138-(x139|x140)));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x145 = 1020500644U;
	int32_t x146 = -208555;
	int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MAX;

	t30 = (x145/(x146-(x147|x148)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MIN;
	int8_t x152 = 13;
	static int64_t t31 = 24649791380LL;

	t31 = (x149/(x150-(x151|x152)));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x154 = 17U;
	volatile uint8_t x155 = 47U;
	uint16_t x156 = 13U;
	int32_t t32 = -2322;

	t32 = (x153/(x154-(x155|x156)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = 14;
	static volatile uint32_t x162 = 2562409U;
	int32_t x163 = 67709;
	volatile uint32_t t33 = 40745U;

	t33 = (x161/(x162-(x163|x164)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MIN;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = 0LL;
	volatile int8_t x168 = INT8_MAX;
	uint64_t t34 = 16LLU;

	t34 = (x165/(x166-(x167|x168)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = -1;
	static int8_t x175 = -2;
	volatile int16_t x176 = INT16_MIN;
	static int32_t t35 = INT32_MIN;

	t35 = (x173/(x174-(x175|x176)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	static uint8_t x180 = 3U;
	int64_t t36 = -335349LL;

	t36 = (x177/(x178-(x179|x180)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x181 = INT64_MIN;
	uint32_t x182 = 12070U;
	int64_t x183 = -58769136076LL;
	int16_t x184 = INT16_MIN;
	int64_t t37 = 49392900486902443LL;

	t37 = (x181/(x182-(x183|x184)));

	if (t37 != -263088939382017LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x185 = 38U;
	int16_t x186 = INT16_MAX;
	uint64_t x188 = 124388348754488220LLU;
	uint64_t t38 = 117563878668LLU;

	t38 = (x185/(x186-(x187|x188)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x189 = INT8_MIN;
	uint64_t x191 = 55967LLU;
	int8_t x192 = INT8_MIN;

	t39 = (x189/(x190-(x191|x192)));

	if (t39 != 116672532359158LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = -1;
	volatile uint32_t x198 = 13416U;
	uint8_t x199 = 101U;
	int16_t x200 = 1;
	uint32_t t40 = 1U;

	t40 = (x197/(x198-(x199|x200)));

	if (t40 != 322566U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = 22;
	volatile uint8_t x202 = 7U;
	uint32_t x203 = 1U;
	uint16_t x204 = 1655U;

	t41 = (x201/(x202-(x203|x204)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = INT64_MIN;
	int64_t x207 = -1LL;
	int32_t x208 = -1;
	volatile int64_t t42 = 3925674125171284352LL;

	t42 = (x205/(x206-(x207|x208)));

	if (t42 != -1089589136072625LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 899136U;
	int32_t x210 = -1;
	static int8_t x212 = 4;

	t43 = (x209/(x210-(x211|x212)));

	if (t43 != 27U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = -21;
	volatile int16_t x214 = -1;
	int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t44 = -64415035089258199LL;

	t44 = (x213/(x214-(x215|x216)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x217 = 5110821243316LLU;
	int64_t x218 = -1LL;
	static int64_t x220 = INT64_MIN;
	uint64_t t45 = 0LLU;

	t45 = (x217/(x218-(x219|x220)));

	if (t45 != 92924022605LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x221 = 138;
	uint8_t x223 = 27U;
	uint8_t x224 = 1U;
	volatile int64_t t46 = 1877965LL;

	t46 = (x221/(x222-(x223|x224)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x225 = 24417462U;
	int16_t x227 = INT16_MAX;
	int16_t x228 = 0;
	uint32_t t47 = 28812311U;

	t47 = (x225/(x226-(x227|x228)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x233 = -388835434111902829LL;
	static volatile int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	static int64_t t48 = -5LL;

	t48 = (x233/(x234-(x235|x236)));

	if (t48 != -181068382LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x237 = -181966795LL;
	uint32_t x238 = 1949314U;
	volatile uint32_t x239 = 61U;
	int32_t x240 = 1;

	t49 = (x237/(x238-(x239|x240)));

	if (t49 != -93LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int32_t x242 = 16;
	uint32_t x243 = 49U;
	uint32_t t50 = 176820949U;

	t50 = (x241/(x242-(x243|x244)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = INT32_MIN;
	volatile uint16_t x250 = 17U;
	int16_t x251 = -717;
	static uint8_t x252 = 28U;
	volatile int32_t t51 = -112632322;

	t51 = (x249/(x250-(x251|x252)));

	if (t51 != -2974354) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x253 = -1;
	int32_t x255 = INT32_MAX;
	int32_t x256 = -505134;
	volatile int32_t t52 = 1;

	t52 = (x253/(x254-(x255|x256)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = 2;
	uint8_t x263 = 3U;
	int32_t x264 = -1;
	static volatile int32_t t53 = -157896807;

	t53 = (x261/(x262-(x263|x264)));

	if (t53 != -715827882) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 9339150164LLU;
	uint64_t t54 = 734LLU;

	t54 = (x265/(x266-(x267|x268)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = INT16_MAX;
	int8_t x274 = -1;
	int64_t x275 = INT64_MAX;
	static uint32_t x276 = 43924522U;

	t55 = (x273/(x274-(x275|x276)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x277 = 43522399390983202LLU;
	uint8_t x278 = 14U;
	static uint32_t x279 = 2842U;

	t56 = (x277/(x278-(x279|x280)));

	if (t56 != 10133355LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x285 = -1;
	uint8_t x286 = 0U;
	int32_t x287 = INT32_MIN;
	uint64_t t57 = 150877975487LLU;

	t57 = (x285/(x286-(x287|x288)));

	if (t57 != 9506098453LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x289 = -1LL;
	int64_t x291 = -329LL;
	int32_t x292 = -1;

	t58 = (x289/(x290-(x291|x292)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x293 = INT64_MIN;
	static uint16_t x294 = 5666U;
	uint32_t x295 = 18277U;
	int64_t t59 = -282LL;

	t59 = (x293/(x294-(x295|x296)));

	if (t59 != -2147489957LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = -2842LL;
	static int64_t x299 = -1LL;
	volatile int64_t t60 = 47993460794LL;

	t60 = (x297/(x298-(x299|x300)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x301 = -135;
	static uint16_t x303 = 0U;
	static uint32_t x304 = 5751U;
	uint32_t t61 = 130U;

	t61 = (x301/(x302-(x303|x304)));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x305 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MAX;
	volatile int64_t t62 = 989668534965168573LL;

	t62 = (x305/(x306-(x307|x308)));

	if (t62 != -88LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x309 = 5537084U;
	int8_t x310 = INT8_MIN;
	int64_t x311 = -1LL;
	static volatile int64_t t63 = -1434366LL;

	t63 = (x309/(x310-(x311|x312)));

	if (t63 != -43599LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x313 = -1;
	volatile int64_t x315 = 234911LL;
	static volatile int64_t x316 = 82682808641LL;
	volatile int64_t t64 = 5147515479980LL;

	t64 = (x313/(x314-(x315|x316)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x317 = -1;
	volatile int32_t x318 = INT32_MIN;
	static int32_t x320 = -63362034;
	static volatile int32_t t65 = 3;

	t65 = (x317/(x318-(x319|x320)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = -551562780771LL;
	uint16_t x328 = 121U;
	int64_t t66 = -475458888LL;

	t66 = (x325/(x326-(x327|x328)));

	if (t66 != 4521006399LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x333 = 1U;
	int8_t x335 = INT8_MAX;
	int32_t t67 = -861832801;

	t67 = (x333/(x334-(x335|x336)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x337 = 14667U;
	volatile int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MAX;
	volatile uint32_t t68 = 155U;

	t68 = (x337/(x338-(x339|x340)));

	if (t68 != 114U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x345 = INT8_MIN;
	int32_t x346 = -1;
	int8_t x347 = 8;
	int16_t x348 = -10121;
	volatile int32_t t69 = -2;

	t69 = (x345/(x346-(x347|x348)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x349 = 161143612768061484LLU;
	volatile int32_t x351 = -1;
	int8_t x352 = INT8_MIN;
	uint64_t t70 = 533204212657627LLU;

	t70 = (x349/(x350-(x351|x352)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x353 = INT16_MAX;
	int32_t x354 = INT32_MAX;
	volatile int32_t x355 = INT32_MIN;
	static uint64_t x356 = UINT64_MAX;
	volatile uint64_t t71 = 643733998649LLU;

	t71 = (x353/(x354-(x355|x356)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x358 = 3;
	uint16_t x359 = 36U;
	volatile int32_t x360 = 1;
	volatile int32_t t72 = -677533;

	t72 = (x357/(x358-(x359|x360)));

	if (t72 != 963) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = -4;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;

	t73 = (x361/(x362-(x363|x364)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x365 = UINT16_MAX;
	int64_t x366 = INT64_MIN;
	volatile uint16_t x368 = 3U;
	static uint64_t t74 = 12172912LLU;

	t74 = (x365/(x366-(x367|x368)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x369 = INT64_MIN;
	uint32_t x370 = 33405325U;
	int8_t x372 = INT8_MIN;
	static volatile uint64_t t75 = 29827114723859LLU;

	t75 = (x369/(x370-(x371|x372)));

	if (t75 != 276103785715LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x373 = INT32_MIN;
	uint32_t x374 = 1541419865U;
	static int32_t x375 = -6014;
	static uint64_t x376 = 1LLU;

	t76 = (x373/(x374-(x375|x376)));

	if (t76 != 11967324757LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x377 = UINT32_MAX;
	volatile int64_t x378 = -1LL;
	uint8_t x380 = UINT8_MAX;
	int64_t t77 = -573161293957LL;

	t77 = (x377/(x378-(x379|x380)));

	if (t77 != -8388607LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x381 = 0U;

	t78 = (x381/(x382-(x383|x384)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x385 = 4258495530LL;
	int32_t x386 = INT32_MIN;
	static int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	volatile int64_t t79 = -1188LL;

	t79 = (x385/(x386-(x387|x388)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x389 = 19329U;
	volatile uint8_t x391 = 0U;
	uint8_t x392 = 6U;
	int32_t t80 = 127;

	t80 = (x389/(x390-(x391|x392)));

	if (t80 != -2761) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x393 = 0;
	int64_t x394 = -6LL;
	int16_t x395 = INT16_MAX;

	t81 = (x393/(x394-(x395|x396)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x398 = -1;
	volatile int32_t x399 = INT32_MIN;
	uint32_t x400 = 0U;
	volatile int64_t t82 = 38652887954LL;

	t82 = (x397/(x398-(x399|x400)));

	if (t82 != -4294967298LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x407 = 1779610685203060399LL;
	static int16_t x408 = -1;
	volatile int64_t t83 = -49543874LL;

	t83 = (x405/(x406-(x407|x408)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x411 = 2160U;
	volatile int8_t x412 = INT8_MIN;
	uint64_t t84 = 177555457964523LLU;

	t84 = (x409/(x410-(x411|x412)));

	if (t84 != 2359LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x413 = INT8_MIN;
	static int16_t x414 = INT16_MIN;
	uint8_t x415 = 1U;
	uint16_t x416 = 709U;
	static int32_t t85 = 942;

	t85 = (x413/(x414-(x415|x416)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = INT16_MIN;
	volatile uint64_t x418 = 7516LLU;
	int32_t x419 = -1;
	volatile uint64_t t86 = 128795384349738830LLU;

	t86 = (x417/(x418-(x419|x420)));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x425 = -1LL;
	int16_t x427 = -1;
	static volatile int64_t t87 = -66921423617LL;

	t87 = (x425/(x426-(x427|x428)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = INT8_MIN;
	static int16_t x430 = INT16_MAX;
	int8_t x431 = INT8_MIN;
	int16_t x432 = -1;

	t88 = (x429/(x430-(x431|x432)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = -62858;
	int8_t x434 = INT8_MAX;
	int8_t x435 = 3;
	int64_t x436 = 504544746986LL;
	int64_t t89 = 418915906292902LL;

	t89 = (x433/(x434-(x435|x436)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x437 = 0;
	static volatile int16_t x438 = INT16_MAX;
	uint16_t x440 = 807U;
	int32_t t90 = -121385236;

	t90 = (x437/(x438-(x439|x440)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x441 = -47;
	uint8_t x442 = 8U;
	uint8_t x444 = UINT8_MAX;
	volatile int32_t t91 = -6051045;

	t91 = (x441/(x442-(x443|x444)));

	if (t91 != -5) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x446 = 5U;
	volatile int8_t x447 = -1;
	int32_t x448 = -32176;
	int32_t t92 = 116678676;

	t92 = (x445/(x446-(x447|x448)));

	if (t92 != 21) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x449 = INT8_MAX;
	int16_t x451 = -1;
	int32_t x452 = INT32_MIN;

	t93 = (x449/(x450-(x451|x452)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x454 = INT8_MIN;
	int64_t x456 = 72245086675064LL;
	int64_t t94 = 0LL;

	t94 = (x453/(x454-(x455|x456)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x457 = -147216;
	static uint32_t x458 = 662569940U;
	uint32_t x459 = UINT32_MAX;
	int64_t x460 = INT64_MIN;
	volatile int64_t t95 = -15LL;

	t95 = (x457/(x458-(x459|x460)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x462 = 917699607LLU;
	int8_t x463 = -62;
	volatile int64_t x464 = 2LL;

	t96 = (x461/(x462-(x463|x464)));

	if (t96 != 20101068679LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x465 = INT32_MAX;
	int8_t x466 = INT8_MIN;
	int64_t x467 = INT64_MAX;
	int8_t x468 = INT8_MIN;

	t97 = (x465/(x466-(x467|x468)));

	if (t97 != -16909320LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x469 = INT16_MAX;
	int16_t x471 = -1;
	static uint16_t x472 = 147U;
	volatile int32_t t98 = 211;

	t98 = (x469/(x470-(x471|x472)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = INT32_MIN;
	int8_t x474 = -1;
	int16_t x475 = INT16_MAX;
	volatile int32_t x476 = -78998;
	int32_t t99 = -51051434;

	t99 = (x473/(x474-(x475|x476)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

