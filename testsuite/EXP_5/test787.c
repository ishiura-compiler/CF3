#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x1 = 346105490026LLU;
volatile int16_t x4 = INT16_MAX;
int32_t x17 = 5;
int64_t x18 = INT64_MIN;
int64_t x43 = INT64_MAX;
volatile uint64_t x50 = 5971606002LLU;
static volatile int32_t t6 = 6112;
volatile uint32_t x64 = 199278674U;
volatile int64_t x70 = -7LL;
static volatile int64_t t10 = INT64_MAX;
volatile int64_t x73 = INT64_MAX;
int16_t x74 = INT16_MAX;
volatile int64_t t11 = INT64_MAX;
static uint64_t x82 = UINT64_MAX;
int16_t x83 = -1;
uint32_t x97 = 5374U;
static int64_t x99 = INT64_MIN;
static int8_t x104 = INT8_MIN;
int32_t t17 = -1;
volatile int32_t t18 = 243913;
uint64_t x146 = 22LLU;
int32_t x149 = INT32_MAX;
static int32_t x170 = -1;
int32_t t23 = 582572;
uint8_t x177 = 2U;
static int32_t x179 = INT32_MAX;
volatile int32_t t24 = -2482003;
static uint32_t x186 = 13U;
int32_t t25 = -22348792;
int64_t x193 = INT64_MAX;
static int64_t t26 = 93LL;
static uint64_t x200 = 1LLU;
static int64_t x201 = 393355514985726LL;
int32_t x203 = -1074;
int64_t x204 = INT64_MIN;
static volatile int32_t x207 = INT32_MAX;
int64_t t29 = -8508653614772891LL;
int64_t x216 = -1LL;
uint16_t x220 = UINT16_MAX;
volatile int32_t t33 = -25039485;
int16_t x243 = -1;
int64_t x244 = -276LL;
static uint32_t x265 = UINT32_MAX;
int32_t x286 = 76;
int64_t x296 = INT64_MAX;
int16_t x314 = -1;
int16_t x315 = INT16_MIN;
int64_t x316 = INT64_MIN;
volatile int32_t t41 = INT32_MAX;
static volatile int8_t x318 = INT8_MIN;
int16_t x321 = INT16_MAX;
uint64_t x323 = UINT64_MAX;
uint16_t x326 = 3U;
int64_t x333 = 516LL;
volatile uint16_t x336 = 145U;
int32_t x339 = INT32_MIN;
int8_t x348 = INT8_MIN;
volatile int32_t t47 = 97;
volatile int64_t x352 = -1LL;
static uint32_t t48 = 1615U;
int32_t x373 = 1020;
uint32_t x382 = 3346921U;
int16_t x391 = INT16_MAX;
int64_t x392 = -12966018720LL;
static int32_t t51 = 6965;
int32_t x398 = -1;
int32_t x409 = 37;
uint8_t x410 = 12U;
static int64_t x427 = 1LL;
uint16_t x441 = 16252U;
uint64_t x443 = UINT64_MAX;
int32_t x451 = INT32_MIN;
volatile uint8_t x466 = 27U;
uint32_t x467 = 23896U;
int32_t x469 = INT32_MAX;
int64_t x471 = INT64_MAX;
int32_t t61 = INT32_MAX;
int8_t x473 = 0;
uint8_t x474 = UINT8_MAX;
uint32_t x476 = 5U;
uint64_t x484 = 9561034LLU;
int64_t x486 = 1999LL;
uint64_t t65 = 30287887942925LLU;
volatile int16_t x510 = -1;
volatile int32_t x518 = INT32_MIN;
static volatile int64_t x528 = INT64_MIN;
volatile uint32_t t68 = 50071U;
static int8_t x531 = INT8_MIN;
uint8_t x540 = 1U;
int32_t x545 = INT32_MAX;
int8_t x548 = 0;
volatile int16_t x558 = -1;
int16_t x559 = -1;
volatile uint16_t x560 = UINT16_MAX;
static volatile int64_t t74 = -85LL;
uint16_t x565 = 14U;
int64_t x568 = INT64_MIN;
uint8_t x580 = UINT8_MAX;
uint32_t x588 = 106919U;
uint32_t x597 = UINT32_MAX;
int16_t x600 = -1;
int8_t x606 = INT8_MIN;
int32_t x607 = INT32_MIN;
int8_t x619 = INT8_MAX;
static int8_t x620 = -1;
static int32_t t83 = 184073263;
int16_t x658 = -1;
uint64_t x666 = 57810787LLU;
static volatile uint32_t t87 = 30085U;
uint16_t x672 = 3664U;
uint8_t x681 = 1U;
static uint16_t x684 = 30U;
static volatile int32_t t89 = -3537;
uint16_t x685 = 3970U;
static int64_t x688 = 187412822748481LL;
volatile uint16_t x691 = 405U;
volatile uint16_t x729 = 11U;
static volatile int64_t x730 = -1966LL;
int32_t x738 = INT32_MIN;
static int32_t x739 = INT32_MAX;
volatile int8_t x743 = -12;
int16_t x744 = 33;
int64_t x746 = -1LL;
static volatile int16_t x748 = -281;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	static int8_t x3 = INT8_MIN;
	volatile uint64_t t0 = 210012764932037LLU;

	t0 = (x1>>((x2%x3)<x4));

	if (t0 != 173052745013LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = UINT32_MAX;
	uint16_t x14 = UINT16_MAX;
	int64_t x15 = -1LL;
	static uint8_t x16 = 8U;
	static uint32_t t1 = 2097893823U;

	t1 = (x13>>((x14%x15)<x16));

	if (t1 != 2147483647U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x19 = -1;
	int32_t x20 = INT32_MAX;
	static volatile int32_t t2 = -158879;

	t2 = (x17>>((x18%x19)<x20));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x29 = INT8_MAX;
	int16_t x30 = INT16_MIN;
	int8_t x31 = 3;
	volatile int64_t x32 = 0LL;
	volatile int32_t t3 = -1032409;

	t3 = (x29>>((x30%x31)<x32));

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x37 = 7U;
	uint16_t x38 = 15U;
	int32_t x39 = INT32_MAX;
	int8_t x40 = INT8_MAX;
	int32_t t4 = 121;

	t4 = (x37>>((x38%x39)<x40));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = 60063U;
	int32_t x42 = -1;
	static int32_t x44 = -221554604;
	volatile uint32_t t5 = 6604808U;

	t5 = (x41>>((x42%x43)<x44));

	if (t5 != 60063U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = UINT8_MAX;
	int8_t x51 = -1;
	int8_t x52 = INT8_MIN;

	t6 = (x49>>((x50%x51)<x52));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x57 = 23674LLU;
	int16_t x58 = -2;
	volatile int64_t x59 = INT64_MIN;
	static int16_t x60 = -451;
	uint64_t t7 = 1871009645LLU;

	t7 = (x57>>((x58%x59)<x60));

	if (t7 != 23674LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x62 = -1;
	uint32_t x63 = 1480U;
	int32_t t8 = 3581;

	t8 = (x61>>((x62%x63)<x64));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x65 = UINT32_MAX;
	static int32_t x66 = -4467;
	uint8_t x67 = 6U;
	uint8_t x68 = UINT8_MAX;
	uint32_t t9 = 73U;

	t9 = (x65>>((x66%x67)<x68));

	if (t9 != 2147483647U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x69 = INT64_MAX;
	uint32_t x71 = 27U;
	int32_t x72 = INT32_MIN;

	t10 = (x69>>((x70%x71)<x72));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x75 = 30U;
	int32_t x76 = -1;

	t11 = (x73>>((x74%x75)<x76));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x81 = 5487U;
	int32_t x84 = 5;
	int32_t t12 = 11953;

	t12 = (x81>>((x82%x83)<x84));

	if (t12 != 2743) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x98 = INT16_MAX;
	uint16_t x100 = 276U;
	uint32_t t13 = 155U;

	t13 = (x97>>((x98%x99)<x100));

	if (t13 != 5374U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x101 = 14512151;
	uint16_t x102 = UINT16_MAX;
	uint16_t x103 = 7200U;
	int32_t t14 = 1099904;

	t14 = (x101>>((x102%x103)<x104));

	if (t14 != 14512151) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x105 = 15586397405065LLU;
	int64_t x106 = INT64_MAX;
	int64_t x107 = -13925819314959LL;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t15 = 170853419723570LLU;

	t15 = (x105>>((x106%x107)<x108));

	if (t15 != 15586397405065LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x109 = 57387U;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	uint32_t t16 = 5179U;

	t16 = (x109>>((x110%x111)<x112));

	if (t16 != 57387U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x121 = 1;
	int8_t x122 = INT8_MAX;
	int16_t x123 = -1;
	int64_t x124 = INT64_MAX;

	t17 = (x121>>((x122%x123)<x124));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x133 = 1;
	int8_t x134 = 1;
	volatile uint8_t x135 = 56U;
	volatile uint16_t x136 = 197U;

	t18 = (x133>>((x134%x135)<x136));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x145 = INT64_MAX;
	int8_t x147 = -22;
	int8_t x148 = INT8_MIN;
	volatile int64_t t19 = 112820LL;

	t19 = (x145>>((x146%x147)<x148));

	if (t19 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x150 = 4123U;
	volatile int64_t x151 = -739404LL;
	int16_t x152 = -1;
	static volatile int32_t t20 = INT32_MAX;

	t20 = (x149>>((x150%x151)<x152));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x157 = 15U;
	int16_t x158 = INT16_MAX;
	uint64_t x159 = 226053290963775LLU;
	static int8_t x160 = -16;
	int32_t t21 = -456945;

	t21 = (x157>>((x158%x159)<x160));

	if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x166 = 1;
	uint64_t x167 = UINT64_MAX;
	volatile int16_t x168 = 31;
	uint32_t t22 = 190U;

	t22 = (x165>>((x166%x167)<x168));

	if (t22 != 2147483647U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x169 = 3U;
	static uint8_t x171 = 11U;
	int32_t x172 = INT32_MAX;

	t23 = (x169>>((x170%x171)<x172));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x178 = INT32_MIN;
	uint32_t x180 = 14U;

	t24 = (x177>>((x178%x179)<x180));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x185 = 3U;
	int64_t x187 = INT64_MAX;
	static int8_t x188 = -1;

	t25 = (x185>>((x186%x187)<x188));

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x194 = -5754587;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = INT8_MIN;

	t26 = (x193>>((x194%x195)<x196));

	if (t26 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x197 = 1U;
	int64_t x198 = INT64_MAX;
	int64_t x199 = 366209966LL;
	static int32_t t27 = 95250793;

	t27 = (x197>>((x198%x199)<x200));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x202 = -1484;
	int64_t t28 = 1LL;

	t28 = (x201>>((x202%x203)<x204));

	if (t28 != 393355514985726LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x205 = 7102810453843501LL;
	uint64_t x206 = UINT64_MAX;
	int64_t x208 = INT64_MIN;

	t29 = (x205>>((x206%x207)<x208));

	if (t29 != 3551405226921750LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x213 = 12;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = UINT64_MAX;
	int32_t t30 = -189051829;

	t30 = (x213>>((x214%x215)<x216));

	if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x217 = INT8_MAX;
	int16_t x218 = 157;
	int32_t x219 = 476110215;
	volatile int32_t t31 = -2363;

	t31 = (x217>>((x218%x219)<x220));

	if (t31 != 63) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x225 = 66U;
	uint64_t x226 = UINT64_MAX;
	static volatile int16_t x227 = 2;
	volatile int16_t x228 = -49;
	int32_t t32 = -10960175;

	t32 = (x225>>((x226%x227)<x228));

	if (t32 != 33) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x233 = 4U;
	volatile int16_t x234 = -8099;
	int16_t x235 = 50;
	int16_t x236 = INT16_MIN;

	t33 = (x233>>((x234%x235)<x236));

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x241 = UINT8_MAX;
	int16_t x242 = -1;
	int32_t t34 = 112;

	t34 = (x241>>((x242%x243)<x244));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x245 = INT32_MAX;
	static volatile int32_t x246 = INT32_MIN;
	static int8_t x247 = -11;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x245>>((x246%x247)<x248));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x266 = -1;
	uint16_t x267 = 14865U;
	static int16_t x268 = -1;
	uint32_t t36 = UINT32_MAX;

	t36 = (x265>>((x266%x267)<x268));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x273 = INT64_MAX;
	static int32_t x274 = INT32_MAX;
	int16_t x275 = 3889;
	int64_t x276 = INT64_MAX;
	int64_t t37 = -382892LL;

	t37 = (x273>>((x274%x275)<x276));

	if (t37 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x285 = UINT8_MAX;
	uint64_t x287 = 15483LLU;
	volatile int64_t x288 = -42LL;
	volatile int32_t t38 = -3276;

	t38 = (x285>>((x286%x287)<x288));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x293 = 3U;
	static uint64_t x294 = 1316365953556009263LLU;
	static volatile int16_t x295 = 232;
	int32_t t39 = -88128305;

	t39 = (x293>>((x294%x295)<x296));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x309 = 0;
	int32_t x310 = INT32_MIN;
	int32_t x311 = -179;
	int64_t x312 = INT64_MIN;
	int32_t t40 = -325797;

	t40 = (x309>>((x310%x311)<x312));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x313 = INT32_MAX;

	t41 = (x313>>((x314%x315)<x316));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x317 = INT8_MAX;
	uint64_t x319 = UINT64_MAX;
	volatile int8_t x320 = INT8_MIN;
	int32_t t42 = 229937662;

	t42 = (x317>>((x318%x319)<x320));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x322 = INT8_MAX;
	uint32_t x324 = 15U;
	volatile int32_t t43 = 4;

	t43 = (x321>>((x322%x323)<x324));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x325 = INT8_MAX;
	static uint8_t x327 = UINT8_MAX;
	int64_t x328 = -1LL;
	volatile int32_t t44 = 2;

	t44 = (x325>>((x326%x327)<x328));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x334 = INT32_MIN;
	static uint8_t x335 = 4U;
	int64_t t45 = -13LL;

	t45 = (x333>>((x334%x335)<x336));

	if (t45 != 258LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x337 = UINT16_MAX;
	uint16_t x338 = 2868U;
	int16_t x340 = 1;
	int32_t t46 = -126;

	t46 = (x337>>((x338%x339)<x340));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x345 = 0U;
	uint16_t x346 = 22308U;
	int8_t x347 = INT8_MIN;

	t47 = (x345>>((x346%x347)<x348));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x349 = 203661U;
	int16_t x350 = -2733;
	int8_t x351 = INT8_MAX;

	t48 = (x349>>((x350%x351)<x352));

	if (t48 != 101830U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x374 = 16U;
	int32_t x375 = INT32_MAX;
	volatile uint32_t x376 = UINT32_MAX;
	volatile int32_t t49 = -1469;

	t49 = (x373>>((x374%x375)<x376));

	if (t49 != 510) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x381 = INT16_MAX;
	static int32_t x383 = 896708;
	volatile int64_t x384 = -1LL;
	volatile int32_t t50 = 517252844;

	t50 = (x381>>((x382%x383)<x384));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x389 = 677;
	int16_t x390 = -1;

	t51 = (x389>>((x390%x391)<x392));

	if (t51 != 677) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x397 = UINT8_MAX;
	uint32_t x399 = 5U;
	static volatile uint64_t x400 = UINT64_MAX;
	int32_t t52 = -187980935;

	t52 = (x397>>((x398%x399)<x400));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x411 = INT32_MAX;
	int64_t x412 = INT64_MIN;
	volatile int32_t t53 = 5;

	t53 = (x409>>((x410%x411)<x412));

	if (t53 != 37) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x413 = 324358LL;
	static int32_t x414 = INT32_MIN;
	uint64_t x415 = 1LLU;
	int16_t x416 = INT16_MIN;
	static int64_t t54 = -1LL;

	t54 = (x413>>((x414%x415)<x416));

	if (t54 != 162179LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x425 = UINT64_MAX;
	uint16_t x426 = 3637U;
	int32_t x428 = -1;
	uint64_t t55 = UINT64_MAX;

	t55 = (x425>>((x426%x427)<x428));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x433 = UINT8_MAX;
	uint8_t x434 = 0U;
	int8_t x435 = 20;
	int64_t x436 = -1LL;
	int32_t t56 = -507;

	t56 = (x433>>((x434%x435)<x436));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x442 = -1;
	static uint64_t x444 = UINT64_MAX;
	int32_t t57 = 67;

	t57 = (x441>>((x442%x443)<x444));

	if (t57 != 8126) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x449 = 459U;
	uint32_t x450 = 149270537U;
	volatile int32_t x452 = 2;
	int32_t t58 = -3;

	t58 = (x449>>((x450%x451)<x452));

	if (t58 != 459) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x461 = UINT32_MAX;
	volatile int32_t x462 = INT32_MIN;
	int64_t x463 = 2LL;
	static uint32_t x464 = UINT32_MAX;
	volatile uint32_t t59 = 29U;

	t59 = (x461>>((x462%x463)<x464));

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x465 = INT8_MAX;
	int32_t x468 = 10502601;
	volatile int32_t t60 = 1;

	t60 = (x465>>((x466%x467)<x468));

	if (t60 != 63) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x470 = 347577;
	uint32_t x472 = 29U;

	t61 = (x469>>((x470%x471)<x472));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x475 = UINT32_MAX;
	volatile int32_t t62 = 239;

	t62 = (x473>>((x474%x475)<x476));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x481 = 1830LL;
	volatile int32_t x482 = INT32_MIN;
	volatile int16_t x483 = -5;
	int64_t t63 = -29793196055LL;

	t63 = (x481>>((x482%x483)<x484));

	if (t63 != 1830LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x485 = 12438589LLU;
	int16_t x487 = INT16_MAX;
	int8_t x488 = -1;
	uint64_t t64 = 680442711970099766LLU;

	t64 = (x485>>((x486%x487)<x488));

	if (t64 != 12438589LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x501 = 2LLU;
	static int8_t x502 = INT8_MIN;
	volatile int64_t x503 = -5LL;
	static int16_t x504 = -1;

	t65 = (x501>>((x502%x503)<x504));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x509 = UINT32_MAX;
	int8_t x511 = INT8_MIN;
	static int64_t x512 = 705922063107047LL;
	volatile uint32_t t66 = 10U;

	t66 = (x509>>((x510%x511)<x512));

	if (t66 != 2147483647U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x517 = 1094116156578852734LLU;
	int16_t x519 = -967;
	int32_t x520 = -3273027;
	static uint64_t t67 = 8236LLU;

	t67 = (x517>>((x518%x519)<x520));

	if (t67 != 1094116156578852734LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x525 = 780273U;
	int32_t x526 = INT32_MIN;
	int8_t x527 = INT8_MIN;

	t68 = (x525>>((x526%x527)<x528));

	if (t68 != 780273U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x529 = 3;
	static int64_t x530 = -1LL;
	volatile int64_t x532 = INT64_MIN;
	int32_t t69 = -107004;

	t69 = (x529>>((x530%x531)<x532));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x533 = INT8_MAX;
	int16_t x534 = 3;
	uint32_t x535 = UINT32_MAX;
	static volatile int32_t x536 = 1;
	static volatile int32_t t70 = -51;

	t70 = (x533>>((x534%x535)<x536));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x537 = 3U;
	int32_t x538 = -484043625;
	int32_t x539 = -183306;
	static int32_t t71 = -13;

	t71 = (x537>>((x538%x539)<x540));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x546 = 28899122U;
	int32_t x547 = INT32_MIN;
	int32_t t72 = INT32_MAX;

	t72 = (x545>>((x546%x547)<x548));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x549 = 50258915894884LLU;
	uint16_t x550 = 319U;
	static volatile int32_t x551 = INT32_MAX;
	uint64_t x552 = 231475490369LLU;
	uint64_t t73 = 4065285084804LLU;

	t73 = (x549>>((x550%x551)<x552));

	if (t73 != 25129457947442LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x557 = INT64_MAX;

	t74 = (x557>>((x558%x559)<x560));

	if (t74 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x561 = 39U;
	static volatile uint8_t x562 = UINT8_MAX;
	static uint64_t x563 = UINT64_MAX;
	int64_t x564 = -1LL;
	int32_t t75 = -146;

	t75 = (x561>>((x562%x563)<x564));

	if (t75 != 19) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x566 = 0;
	static int8_t x567 = 1;
	static int32_t t76 = 32602970;

	t76 = (x565>>((x566%x567)<x568));

	if (t76 != 14) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x569 = UINT32_MAX;
	static volatile int8_t x570 = INT8_MAX;
	uint16_t x571 = 20U;
	int64_t x572 = INT64_MIN;
	volatile uint32_t t77 = UINT32_MAX;

	t77 = (x569>>((x570%x571)<x572));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x577 = 1;
	int16_t x578 = INT16_MIN;
	int8_t x579 = INT8_MAX;
	volatile int32_t t78 = -49082;

	t78 = (x577>>((x578%x579)<x580));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x585 = UINT16_MAX;
	uint8_t x586 = 1U;
	volatile int64_t x587 = -1LL;
	int32_t t79 = 0;

	t79 = (x585>>((x586%x587)<x588));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x593 = 194LL;
	static int32_t x594 = INT32_MIN;
	int8_t x595 = -55;
	volatile uint32_t x596 = UINT32_MAX;
	int64_t t80 = -12429LL;

	t80 = (x593>>((x594%x595)<x596));

	if (t80 != 97LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x598 = UINT32_MAX;
	volatile int8_t x599 = INT8_MIN;
	volatile uint32_t t81 = 1517U;

	t81 = (x597>>((x598%x599)<x600));

	if (t81 != 2147483647U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x605 = 12U;
	int32_t x608 = 0;
	uint32_t t82 = 1584U;

	t82 = (x605>>((x606%x607)<x608));

	if (t82 != 6U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x617 = 3493U;
	uint8_t x618 = UINT8_MAX;

	t83 = (x617>>((x618%x619)<x620));

	if (t83 != 3493) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x629 = UINT32_MAX;
	int16_t x630 = INT16_MIN;
	volatile uint8_t x631 = UINT8_MAX;
	uint8_t x632 = 9U;
	volatile uint32_t t84 = 241220868U;

	t84 = (x629>>((x630%x631)<x632));

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x645 = UINT8_MAX;
	uint16_t x646 = 23898U;
	static int16_t x647 = -184;
	int32_t x648 = -17803249;
	int32_t t85 = -647;

	t85 = (x645>>((x646%x647)<x648));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x657 = 3638;
	int64_t x659 = 13569860374925115LL;
	int8_t x660 = -31;
	int32_t t86 = 82538640;

	t86 = (x657>>((x658%x659)<x660));

	if (t86 != 3638) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x665 = UINT32_MAX;
	int16_t x667 = -1;
	int32_t x668 = INT32_MAX;

	t87 = (x665>>((x666%x667)<x668));

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x669 = 11773U;
	static uint16_t x670 = UINT16_MAX;
	int16_t x671 = INT16_MIN;
	volatile uint32_t t88 = 5100U;

	t88 = (x669>>((x670%x671)<x672));

	if (t88 != 11773U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x682 = 2;
	static int8_t x683 = INT8_MIN;

	t89 = (x681>>((x682%x683)<x684));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x686 = UINT64_MAX;
	int64_t x687 = INT64_MIN;
	int32_t t90 = 0;

	t90 = (x685>>((x686%x687)<x688));

	if (t90 != 3970) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x689 = UINT64_MAX;
	uint16_t x690 = 1U;
	uint16_t x692 = UINT16_MAX;
	uint64_t t91 = 6459525706670LLU;

	t91 = (x689>>((x690%x691)<x692));

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x705 = 37;
	uint8_t x706 = 2U;
	static volatile int64_t x707 = INT64_MIN;
	uint32_t x708 = 14115131U;
	static volatile int32_t t92 = 474760;

	t92 = (x705>>((x706%x707)<x708));

	if (t92 != 18) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x709 = 114U;
	int32_t x710 = -1;
	int8_t x711 = -1;
	uint64_t x712 = 8325270225050008014LLU;
	volatile int32_t t93 = 32300908;

	t93 = (x709>>((x710%x711)<x712));

	if (t93 != 57) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x717 = 1U;
	int16_t x718 = INT16_MIN;
	int16_t x719 = INT16_MIN;
	volatile int32_t x720 = INT32_MIN;
	uint32_t t94 = 31U;

	t94 = (x717>>((x718%x719)<x720));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x725 = UINT32_MAX;
	int8_t x726 = -1;
	int16_t x727 = -13;
	uint8_t x728 = 96U;
	static uint32_t t95 = 6U;

	t95 = (x725>>((x726%x727)<x728));

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x731 = INT64_MIN;
	int16_t x732 = 1684;
	int32_t t96 = -3;

	t96 = (x729>>((x730%x731)<x732));

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x737 = INT16_MAX;
	volatile uint32_t x740 = 396157U;
	int32_t t97 = -17448;

	t97 = (x737>>((x738%x739)<x740));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x741 = 10U;
	static int64_t x742 = INT64_MAX;
	int32_t t98 = -4058421;

	t98 = (x741>>((x742%x743)<x744));

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x745 = INT32_MAX;
	volatile int32_t x747 = -15019779;
	static int32_t t99 = INT32_MAX;

	t99 = (x745>>((x746%x747)<x748));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

