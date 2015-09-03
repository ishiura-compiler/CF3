#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 4559984169587LL;
int16_t x2 = -1;
uint32_t x7 = 158856319U;
static int32_t t1 = -181861537;
int16_t x10 = 0;
int64_t x11 = 288221467595LL;
volatile int8_t x14 = INT8_MAX;
static uint8_t x16 = UINT8_MAX;
int32_t x18 = INT32_MIN;
static volatile int8_t x19 = INT8_MAX;
volatile int64_t t4 = 49710LL;
uint64_t x24 = 356LLU;
uint64_t x27 = UINT64_MAX;
volatile int64_t x30 = INT64_MIN;
uint8_t x35 = 44U;
uint8_t x36 = 10U;
volatile int64_t t10 = 0LL;
int64_t x68 = INT64_MIN;
volatile uint32_t x70 = 76U;
volatile uint32_t t14 = 719242U;
uint64_t x76 = UINT64_MAX;
int32_t t15 = -3;
uint32_t x78 = UINT32_MAX;
int8_t x81 = -1;
static uint8_t x83 = 4U;
volatile int8_t x84 = -1;
int8_t x85 = -1;
volatile int32_t t18 = 9424378;
int32_t x89 = INT32_MIN;
static volatile int8_t x95 = INT8_MIN;
volatile int16_t x98 = INT16_MAX;
uint64_t x100 = UINT64_MAX;
int8_t x101 = 1;
static int64_t x106 = 21791939LL;
static uint64_t x113 = UINT64_MAX;
int32_t x123 = -165080202;
uint64_t x124 = UINT64_MAX;
uint16_t x137 = 2U;
int16_t x138 = 37;
static int8_t x140 = -56;
int16_t x151 = -6740;
int8_t x153 = -1;
int16_t x155 = INT16_MAX;
int16_t x156 = INT16_MAX;
static volatile int32_t x157 = -1;
volatile uint32_t x164 = 2002U;
volatile int16_t x174 = INT16_MIN;
int64_t x176 = -1LL;
int16_t x184 = INT16_MIN;
volatile int32_t t39 = 24;
volatile int16_t x186 = INT16_MAX;
static int32_t x188 = -2;
int32_t t40 = 172;
static int32_t x212 = -24828;
static volatile uint64_t x224 = 4059233435388629636LLU;
uint32_t t45 = 1U;
static volatile uint8_t x232 = 14U;
int32_t x241 = INT32_MIN;
static int64_t x243 = INT64_MAX;
volatile int64_t x244 = INT64_MIN;
static int32_t x246 = 528159;
volatile int8_t x263 = -5;
int64_t t53 = -100483375LL;
int16_t x286 = INT16_MIN;
static int32_t x288 = -15031173;
volatile uint64_t x291 = UINT64_MAX;
int32_t x297 = -1;
static uint32_t x300 = 3U;
int16_t x303 = INT16_MIN;
static uint64_t x306 = 56961315642LLU;
static int8_t x308 = INT8_MAX;
int8_t x318 = 0;
uint16_t x323 = 715U;
int64_t x325 = 1LL;
int64_t x328 = INT64_MIN;
int16_t x329 = INT16_MAX;
static volatile int64_t x332 = -23LL;
uint64_t x338 = 1407LLU;
static int16_t x343 = 6287;
uint64_t x346 = UINT64_MAX;
static uint8_t x348 = UINT8_MAX;
uint64_t x350 = 1258441LLU;
uint8_t x354 = UINT8_MAX;
int32_t t74 = -317187646;
volatile uint32_t x363 = UINT32_MAX;
int8_t x372 = -1;
static uint64_t x373 = 3927291LLU;
int16_t x381 = INT16_MIN;
static uint32_t x385 = 2330U;
static volatile uint32_t x386 = 139559860U;
static uint16_t x387 = 2487U;
volatile int64_t x388 = INT64_MIN;
volatile int32_t t82 = 55807;
static uint32_t x393 = UINT32_MAX;
uint8_t x396 = 27U;
static uint64_t x398 = UINT64_MAX;
uint16_t x402 = 207U;
int32_t x406 = -1;
int32_t t86 = 1621412;
uint8_t x416 = 72U;
int8_t x428 = -1;
int32_t x434 = -104;
int16_t x441 = INT16_MIN;
int16_t x456 = INT16_MIN;
uint8_t x464 = 50U;


void f0(void) {
	uint16_t x3 = 145U;
	uint16_t x4 = 0U;
	static volatile int64_t t0 = 207911LL;

	t0 = (x1-(x2^(x3<=x4)));

	if (t0 != 4559984169588LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile int8_t x6 = INT8_MIN;
	static uint32_t x8 = UINT32_MAX;

	t1 = (x5-(x6^(x7<=x8)));

	if (t1 != 32894) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = -43592;

	t2 = (x9-(x10^(x11<=x12)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x15 = -1;
	static volatile int32_t t3 = 6299;

	t3 = (x13-(x14^(x15<=x16)));

	if (t3 != 129) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint32_t x20 = 59246U;

	t4 = (x17-(x18^(x19<=x20)));

	if (t4 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	uint16_t x22 = 1U;
	uint32_t x23 = 54607U;
	volatile int64_t t5 = -82763968239LL;

	t5 = (x21-(x22^(x23<=x24)));

	if (t5 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	volatile int32_t x26 = -428361;
	static uint8_t x28 = UINT8_MAX;
	int32_t t6 = 1313;

	t6 = (x25-(x26^(x27<=x28)));

	if (t6 != 493896) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint32_t x31 = 186440660U;
	static int8_t x32 = INT8_MIN;
	int64_t t7 = -27484LL;

	t7 = (x29-(x30^(x31<=x32)));

	if (t7 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2U;
	uint16_t x34 = 39U;
	static volatile int32_t t8 = 15807872;

	t8 = (x33-(x34^(x35<=x36)));

	if (t8 != -37) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = 57;
	int64_t x38 = 720230811450LL;
	uint32_t x39 = 152419408U;
	int8_t x40 = -1;
	volatile int64_t t9 = -112462LL;

	t9 = (x37-(x38^(x39<=x40)));

	if (t9 != -720230811394LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = -7761112LL;
	uint32_t x46 = 588U;
	int8_t x47 = -13;
	uint8_t x48 = UINT8_MAX;

	t10 = (x45-(x46^(x47<=x48)));

	if (t10 != -7761701LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -71349LL;
	int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 4U;
	volatile int64_t t11 = -961313LL;

	t11 = (x49-(x50^(x51<=x52)));

	if (t11 != -38582LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x61 = UINT16_MAX;
	int16_t x62 = -1;
	volatile int32_t x63 = -1;
	static int32_t x64 = 55543672;
	int32_t t12 = 7217;

	t12 = (x61-(x62^(x63<=x64)));

	if (t12 != 65537) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	static volatile int8_t x66 = -1;
	int64_t x67 = INT64_MIN;
	int32_t t13 = -1342383;

	t13 = (x65-(x66^(x67<=x68)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	static int16_t x71 = -6694;
	int64_t x72 = INT64_MIN;

	t14 = (x69-(x70^(x71<=x72)));

	if (t14 != 2147483572U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MAX;
	uint16_t x74 = UINT16_MAX;
	volatile int64_t x75 = -1LL;

	t15 = (x73-(x74^(x75<=x76)));

	if (t15 != 2147418113) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x77 = 44221;
	uint64_t x79 = UINT64_MAX;
	volatile int32_t x80 = INT32_MIN;
	uint32_t t16 = 0U;

	t16 = (x77-(x78^(x79<=x80)));

	if (t16 != 44222U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = -1LL;
	volatile int64_t t17 = -62845LL;

	t17 = (x81-(x82^(x83<=x84)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x86 = 3U;
	int32_t x87 = INT32_MAX;
	volatile int16_t x88 = INT16_MIN;

	t18 = (x85-(x86^(x87<=x88)));

	if (t18 != -4) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x90 = -24345461503671LL;
	int64_t x91 = -1LL;
	int16_t x92 = -1;
	int64_t t19 = -626765080212LL;

	t19 = (x89-(x90^(x91<=x92)));

	if (t19 != 24343314020024LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MIN;
	static uint64_t x96 = 143525123654553460LLU;
	static int64_t t20 = -24711705054058LL;

	t20 = (x93-(x94^(x95<=x96)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = 1;
	int64_t x99 = INT64_MIN;
	volatile int32_t t21 = -7787;

	t21 = (x97-(x98^(x99<=x100)));

	if (t21 != -32765) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x102 = INT16_MAX;
	volatile int16_t x103 = -1;
	int32_t x104 = INT32_MIN;
	static int32_t t22 = -67249;

	t22 = (x101-(x102^(x103<=x104)));

	if (t22 != -32766) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x107 = 1936U;
	static int16_t x108 = INT16_MAX;
	volatile int64_t t23 = 1912794886LL;

	t23 = (x105-(x106^(x107<=x108)));

	if (t23 != -21792066LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 37873U;
	volatile uint32_t x110 = 65800157U;
	int32_t x111 = INT32_MAX;
	uint8_t x112 = 83U;
	static volatile uint32_t t24 = 6570U;

	t24 = (x109-(x110^(x111<=x112)));

	if (t24 != 4229205012U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x114 = INT32_MAX;
	static volatile int16_t x115 = INT16_MIN;
	int32_t x116 = 107581801;
	uint64_t t25 = 104059140129509LLU;

	t25 = (x113-(x114^(x115<=x116)));

	if (t25 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 58U;
	int16_t x122 = INT16_MIN;
	volatile int32_t t26 = 30102456;

	t26 = (x121-(x122^(x123<=x124)));

	if (t26 != 32825) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = -2;
	int16_t x130 = -336;
	int64_t x131 = -28LL;
	int8_t x132 = INT8_MAX;
	int32_t t27 = 1053823;

	t27 = (x129-(x130^(x131<=x132)));

	if (t27 != 333) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x133 = -1;
	int16_t x134 = -1;
	static int16_t x135 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t28 = 58459;

	t28 = (x133-(x134^(x135<=x136)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x139 = 2579769LLU;
	int32_t t29 = -3511;

	t29 = (x137-(x138^(x139<=x140)));

	if (t29 != -34) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x145 = INT16_MIN;
	int32_t x146 = -418795;
	int8_t x147 = 5;
	static uint8_t x148 = 1U;
	int32_t t30 = 58828451;

	t30 = (x145-(x146^(x147<=x148)));

	if (t30 != 386027) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x149 = -1414054713443862185LL;
	static int32_t x150 = 3198298;
	uint16_t x152 = UINT16_MAX;
	static int64_t t31 = -13553775688813199LL;

	t31 = (x149-(x150^(x151<=x152)));

	if (t31 != -1414054713447060484LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x154 = 1648621363787LLU;
	uint64_t t32 = 6437054497134464062LLU;

	t32 = (x153-(x154^(x155<=x156)));

	if (t32 != 18446742425088187829LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x158 = 4U;
	uint8_t x159 = 16U;
	int8_t x160 = INT8_MAX;
	int32_t t33 = 2003;

	t33 = (x157-(x158^(x159<=x160)));

	if (t33 != -6) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x161 = 16443U;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -2;
	int32_t t34 = 38;

	t34 = (x161-(x162^(x163<=x164)));

	if (t34 != 16571) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = -544093495879LL;
	int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	int16_t x168 = 2158;
	int64_t t35 = -6088682766LL;

	t35 = (x165-(x166^(x167<=x168)));

	if (t35 != -544093495752LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MIN;
	static int16_t x170 = -1;
	int32_t x171 = INT32_MIN;
	int32_t x172 = -1871;
	volatile int32_t t36 = 13927;

	t36 = (x169-(x170^(x171<=x172)));

	if (t36 != -126) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x175 = 8;
	uint32_t t37 = 2821636U;

	t37 = (x173-(x174^(x175<=x176)));

	if (t37 != 32767U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x177 = 156412323U;
	int16_t x178 = -1;
	static volatile uint16_t x179 = UINT16_MAX;
	int8_t x180 = INT8_MIN;
	static volatile uint32_t t38 = 606116U;

	t38 = (x177-(x178^(x179<=x180)));

	if (t38 != 156412324U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	static int16_t x183 = INT16_MIN;

	t39 = (x181-(x182^(x183<=x184)));

	if (t39 != -65534) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = INT8_MIN;
	static int16_t x187 = 0;

	t40 = (x185-(x186^(x187<=x188)));

	if (t40 != -32895) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x189 = -26138388;
	int16_t x190 = -1;
	static uint8_t x191 = 1U;
	volatile int8_t x192 = INT8_MAX;
	static volatile int32_t t41 = 502111;

	t41 = (x189-(x190^(x191<=x192)));

	if (t41 != -26138386) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = -1;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = -314018;
	static volatile int32_t t42 = -878308152;

	t42 = (x193-(x194^(x195<=x196)));

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x205 = INT16_MAX;
	uint64_t x206 = 6LLU;
	static volatile int64_t x207 = -1LL;
	int16_t x208 = -1;
	uint64_t t43 = 274795127441164LLU;

	t43 = (x205-(x206^(x207<=x208)));

	if (t43 != 32760LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x209 = UINT32_MAX;
	static int8_t x210 = 2;
	int32_t x211 = -1;
	volatile uint32_t t44 = 39377U;

	t44 = (x209-(x210^(x211<=x212)));

	if (t44 != 4294967293U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x221 = 27U;
	static int32_t x222 = INT32_MAX;
	static volatile int32_t x223 = INT32_MIN;

	t45 = (x221-(x222^(x223<=x224)));

	if (t45 != 2147483676U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x225 = 232LLU;
	int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	static uint64_t x228 = 1084879LLU;
	static uint64_t t46 = 144140385213349406LLU;

	t46 = (x225-(x226^(x227<=x228)));

	if (t46 != 2147483880LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = -1996;
	int16_t x230 = 0;
	static int32_t x231 = -1;
	volatile int32_t t47 = 14;

	t47 = (x229-(x230^(x231<=x232)));

	if (t47 != -1997) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x237 = -1LL;
	int16_t x238 = INT16_MAX;
	volatile int64_t x239 = 41729107732797LL;
	int64_t x240 = -1LL;
	static volatile int64_t t48 = -1LL;

	t48 = (x237-(x238^(x239<=x240)));

	if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x242 = 9257LLU;
	uint64_t t49 = 12313176239LLU;

	t49 = (x241-(x242^(x243<=x244)));

	if (t49 != 18446744071562058711LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = -1;
	int8_t x247 = INT8_MIN;
	int16_t x248 = -1;
	int32_t t50 = 752962;

	t50 = (x245-(x246^(x247<=x248)));

	if (t50 != -528159) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x249 = 0U;
	static uint32_t x250 = 3423182U;
	int64_t x251 = INT64_MIN;
	int64_t x252 = -1LL;
	volatile uint32_t t51 = 962744625U;

	t51 = (x249-(x250^(x251<=x252)));

	if (t51 != 4291544113U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x257 = 0U;
	volatile int32_t x258 = -625;
	volatile uint16_t x259 = 6U;
	int8_t x260 = INT8_MAX;
	int32_t t52 = 0;

	t52 = (x257-(x258^(x259<=x260)));

	if (t52 != 626) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = -3193120465782283943LL;
	int32_t x262 = -1;
	int16_t x264 = -1;

	t53 = (x261-(x262^(x263<=x264)));

	if (t53 != -3193120465782283941LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x265 = INT64_MIN;
	static uint64_t x266 = 19694LLU;
	uint8_t x267 = 37U;
	static int16_t x268 = INT16_MIN;
	static volatile uint64_t t54 = 3089695520158473LLU;

	t54 = (x265-(x266^(x267<=x268)));

	if (t54 != 9223372036854756114LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x269 = 508U;
	int32_t x270 = INT32_MIN;
	int16_t x271 = -119;
	static volatile uint64_t x272 = 584491588LLU;
	volatile uint32_t t55 = 2500111U;

	t55 = (x269-(x270^(x271<=x272)));

	if (t55 != 2147484156U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	static uint8_t x275 = 73U;
	static int16_t x276 = INT16_MIN;
	int64_t t56 = 850185166723LL;

	t56 = (x273-(x274^(x275<=x276)));

	if (t56 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x281 = 55199992LL;
	static uint64_t x282 = 209357LLU;
	static uint32_t x283 = UINT32_MAX;
	uint32_t x284 = UINT32_MAX;
	uint64_t t57 = 652551877069LLU;

	t57 = (x281-(x282^(x283<=x284)));

	if (t57 != 54990636LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x285 = UINT16_MAX;
	uint16_t x287 = 692U;
	volatile int32_t t58 = 735902;

	t58 = (x285-(x286^(x287<=x288)));

	if (t58 != 98303) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x289 = 1111540180LLU;
	int8_t x290 = INT8_MAX;
	int16_t x292 = -4711;
	uint64_t t59 = 22194LLU;

	t59 = (x289-(x290^(x291<=x292)));

	if (t59 != 1111540053LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x298 = INT16_MAX;
	uint64_t x299 = 53855LLU;
	static int32_t t60 = 120179;

	t60 = (x297-(x298^(x299<=x300)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = INT32_MIN;
	static uint32_t x302 = UINT32_MAX;
	volatile int32_t x304 = 0;
	volatile uint32_t t61 = 39U;

	t61 = (x301-(x302^(x303<=x304)));

	if (t61 != 2147483650U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x305 = 737U;
	volatile int8_t x307 = 4;
	volatile uint64_t t62 = 262931048LLU;

	t62 = (x305-(x306^(x307<=x308)));

	if (t62 != 18446744016748236710LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x309 = 1;
	static int16_t x310 = 62;
	int16_t x311 = -6695;
	volatile uint8_t x312 = 0U;
	volatile int32_t t63 = -43493;

	t63 = (x309-(x310^(x311<=x312)));

	if (t63 != -62) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = -1;
	uint64_t x314 = 32LLU;
	uint8_t x315 = UINT8_MAX;
	int8_t x316 = INT8_MIN;
	static uint64_t t64 = 225237LLU;

	t64 = (x313-(x314^(x315<=x316)));

	if (t64 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x317 = INT16_MIN;
	static int8_t x319 = INT8_MIN;
	static uint64_t x320 = 343053681913874055LLU;
	volatile int32_t t65 = 13391970;

	t65 = (x317-(x318^(x319<=x320)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x321 = UINT32_MAX;
	volatile int64_t x322 = -1LL;
	int16_t x324 = INT16_MAX;
	int64_t t66 = 653945777609LL;

	t66 = (x321-(x322^(x323<=x324)));

	if (t66 != 4294967297LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x326 = 5U;
	int64_t x327 = INT64_MAX;
	int64_t t67 = 106026186311790LL;

	t67 = (x325-(x326^(x327<=x328)));

	if (t67 != -4LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x330 = 24625905;
	int16_t x331 = INT16_MIN;
	volatile int32_t t68 = 40615;

	t68 = (x329-(x330^(x331<=x332)));

	if (t68 != -24593137) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = -9;
	static volatile int32_t x339 = -1;
	int16_t x340 = -2;
	volatile uint64_t t69 = 1842071313007980LLU;

	t69 = (x337-(x338^(x339<=x340)));

	if (t69 != 18446744073709550200LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x341 = 14093U;
	int16_t x342 = -1;
	static volatile int8_t x344 = -1;
	int32_t t70 = 2643;

	t70 = (x341-(x342^(x343<=x344)));

	if (t70 != 14094) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x345 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	volatile uint64_t t71 = 71468449475992LLU;

	t71 = (x345-(x346^(x347<=x348)));

	if (t71 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x349 = -3170668083427LL;
	static int8_t x351 = -1;
	static int32_t x352 = -218242815;
	uint64_t t72 = 204194LLU;

	t72 = (x349-(x350^(x351<=x352)));

	if (t72 != 18446740903040209748LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x353 = 32885956580192LLU;
	int8_t x355 = 2;
	uint8_t x356 = 49U;
	static volatile uint64_t t73 = 32100512717LLU;

	t73 = (x353-(x354^(x355<=x356)));

	if (t73 != 32885956579938LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x357 = INT8_MAX;
	int32_t x358 = INT32_MAX;
	int16_t x359 = 2509;
	volatile uint32_t x360 = UINT32_MAX;

	t74 = (x357-(x358^(x359<=x360)));

	if (t74 != -2147483519) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x362 = -900056;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t75 = 860256929LLU;

	t75 = (x361-(x362^(x363<=x364)));

	if (t75 != 900055LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = -238015557839270LL;
	uint16_t x367 = UINT16_MAX;
	static uint32_t x368 = 425696283U;
	int64_t t76 = 4462396566390060698LL;

	t76 = (x365-(x366^(x367<=x368)));

	if (t76 != 238015557806501LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x369 = -15914;
	int64_t x370 = -1LL;
	int64_t x371 = INT64_MIN;
	int64_t t77 = -738821799499LL;

	t77 = (x369-(x370^(x371<=x372)));

	if (t77 != -15912LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x374 = 1U;
	uint8_t x375 = 27U;
	static uint16_t x376 = UINT16_MAX;
	static uint64_t t78 = 21213LLU;

	t78 = (x373-(x374^(x375<=x376)));

	if (t78 != 3927291LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = -1;
	uint16_t x378 = 41U;
	uint64_t x379 = 6633233805LLU;
	int64_t x380 = 337763LL;
	int32_t t79 = 87323;

	t79 = (x377-(x378^(x379<=x380)));

	if (t79 != -42) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x382 = -1217644LL;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = -1LL;
	int64_t t80 = 14882703254596244LL;

	t80 = (x381-(x382^(x383<=x384)));

	if (t80 != 1184876LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t t81 = 2U;

	t81 = (x385-(x386^(x387<=x388)));

	if (t81 != 4155409766U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x389 = INT8_MAX;
	uint8_t x390 = UINT8_MAX;
	int32_t x391 = INT32_MIN;
	int32_t x392 = -1;

	t82 = (x389-(x390^(x391<=x392)));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x394 = 509015916095LL;
	int64_t x395 = -1LL;
	volatile int64_t t83 = -2006LL;

	t83 = (x393-(x394^(x395<=x396)));

	if (t83 != -504720948799LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x397 = INT8_MAX;
	uint16_t x399 = 2973U;
	static uint16_t x400 = 24778U;
	static uint64_t t84 = 9960803LLU;

	t84 = (x397-(x398^(x399<=x400)));

	if (t84 != 129LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x401 = 1577115564608106413LL;
	int64_t x403 = INT64_MIN;
	uint8_t x404 = 4U;
	int64_t t85 = 95803685LL;

	t85 = (x401-(x402^(x403<=x404)));

	if (t85 != 1577115564608106207LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x405 = 2653;
	static uint16_t x407 = UINT16_MAX;
	uint32_t x408 = 70446U;

	t86 = (x405-(x406^(x407<=x408)));

	if (t86 != 2655) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x413 = -1;
	volatile int16_t x414 = INT16_MAX;
	volatile int32_t x415 = -1;
	volatile int32_t t87 = -3;

	t87 = (x413-(x414^(x415<=x416)));

	if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x417 = 2U;
	static uint32_t x418 = 78U;
	volatile int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	uint32_t t88 = 201597U;

	t88 = (x417-(x418^(x419<=x420)));

	if (t88 != 4294967219U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x421 = 1645963U;
	volatile int64_t x422 = -4160057569619000LL;
	uint8_t x423 = 6U;
	uint8_t x424 = 1U;
	volatile int64_t t89 = 2546814237377635461LL;

	t89 = (x421-(x422^(x423<=x424)));

	if (t89 != 4160057571264963LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x425 = 1940849919766LLU;
	uint64_t x426 = 4105049353LLU;
	volatile uint8_t x427 = UINT8_MAX;
	volatile uint64_t t90 = 13482810913540LLU;

	t90 = (x425-(x426^(x427<=x428)));

	if (t90 != 1936744870413LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x429 = 108U;
	uint32_t x430 = UINT32_MAX;
	volatile uint16_t x431 = 18014U;
	uint32_t x432 = 0U;
	uint32_t t91 = 31U;

	t91 = (x429-(x430^(x431<=x432)));

	if (t91 != 109U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x433 = 0U;
	volatile int8_t x435 = INT8_MAX;
	volatile int16_t x436 = INT16_MIN;
	static int32_t t92 = -13884;

	t92 = (x433-(x434^(x435<=x436)));

	if (t92 != 104) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = INT16_MAX;
	uint8_t x438 = 7U;
	volatile int16_t x439 = -1;
	volatile uint16_t x440 = 5U;
	int32_t t93 = -56;

	t93 = (x437-(x438^(x439<=x440)));

	if (t93 != 32761) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x442 = UINT32_MAX;
	static volatile int8_t x443 = INT8_MIN;
	int32_t x444 = -553479;
	volatile uint32_t t94 = 97U;

	t94 = (x441-(x442^(x443<=x444)));

	if (t94 != 4294934529U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x445 = UINT8_MAX;
	int16_t x446 = INT16_MAX;
	uint64_t x447 = 379LLU;
	int16_t x448 = 1453;
	volatile int32_t t95 = 0;

	t95 = (x445-(x446^(x447<=x448)));

	if (t95 != -32511) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = 3;
	uint32_t x450 = UINT32_MAX;
	volatile int16_t x451 = INT16_MIN;
	uint16_t x452 = 245U;
	volatile uint32_t t96 = 1062421334U;

	t96 = (x449-(x450^(x451<=x452)));

	if (t96 != 5U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = -1;
	static uint8_t x454 = 7U;
	int16_t x455 = INT16_MIN;
	static int32_t t97 = -12984238;

	t97 = (x453-(x454^(x455<=x456)));

	if (t97 != -7) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x457 = 12366;
	static uint32_t x458 = UINT32_MAX;
	int16_t x459 = INT16_MIN;
	static volatile int64_t x460 = INT64_MIN;
	volatile uint32_t t98 = 177557U;

	t98 = (x457-(x458^(x459<=x460)));

	if (t98 != 12367U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = 456848572LLU;
	int64_t x462 = -934LL;
	int64_t x463 = -239110589775562LL;
	volatile uint64_t t99 = 13318081LLU;

	t99 = (x461-(x462^(x463<=x464)));

	if (t99 != 456849505LLU) { NG(); } else { ; }
	
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

