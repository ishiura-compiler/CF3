#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 95688126;
int32_t x16 = -1;
static volatile uint64_t x17 = 3LLU;
int8_t x31 = 29;
volatile int8_t x32 = -3;
uint16_t x41 = 198U;
static int32_t t8 = -20427912;
uint32_t t9 = 959U;
int8_t x62 = -28;
uint8_t x80 = UINT8_MAX;
uint16_t x81 = 0U;
int32_t x84 = INT32_MIN;
int64_t t15 = 6800847654LL;
static int32_t x92 = 65788665;
int16_t x94 = -1;
static volatile int64_t t20 = -26853LL;
uint8_t x111 = 30U;
uint32_t t22 = UINT32_MAX;
int16_t x117 = -1;
int8_t x118 = INT8_MIN;
volatile int32_t t23 = 7103;
volatile uint32_t t24 = 68U;
int8_t x126 = -2;
static uint64_t x128 = 3738LLU;
volatile int16_t x135 = INT16_MIN;
int8_t x153 = 0;
static int32_t x154 = -23;
volatile int16_t x155 = INT16_MIN;
static int32_t t29 = -363182173;
uint16_t x157 = 4U;
uint16_t x160 = UINT16_MAX;
volatile int64_t t31 = -225LL;
static uint32_t t32 = UINT32_MAX;
uint64_t x169 = 11126LLU;
int64_t x170 = INT64_MAX;
static uint64_t t34 = 2208756876LLU;
static int64_t x180 = INT64_MIN;
int16_t x186 = -1888;
uint8_t x188 = 35U;
uint64_t x206 = 4590337758640015869LLU;
int8_t x218 = INT8_MIN;
uint32_t t41 = 3013U;
int8_t x223 = -1;
int64_t x227 = INT64_MIN;
uint64_t t46 = 43635LLU;
uint32_t x254 = 12614642U;
int64_t x255 = -190800LL;
int16_t x256 = INT16_MAX;
int64_t x261 = -30910124756146LL;
int32_t x266 = -1;
static int64_t t50 = 716815591666LL;
int16_t x290 = -1;
int64_t x292 = INT64_MIN;
int64_t t55 = -85824123287LL;
uint32_t x295 = 502445865U;
volatile int16_t x301 = INT16_MIN;
int8_t x322 = 0;
uint16_t x326 = 18215U;
uint32_t x328 = 4U;
int16_t x333 = -1;
volatile int8_t x341 = -1;
static volatile uint64_t t62 = 4129220639652354682LLU;
volatile uint64_t x348 = 138154542729LLU;
static volatile uint16_t x349 = 0U;
static int64_t x350 = INT64_MIN;
int8_t x352 = -1;
int32_t x368 = INT32_MAX;
int32_t x376 = 227268965;
uint32_t x378 = 270161417U;
int8_t x380 = INT8_MAX;
static int8_t x382 = INT8_MIN;
int32_t t69 = -41570;
uint32_t x399 = 64515U;
uint32_t t70 = 255893U;
volatile uint32_t x403 = 47798445U;
static volatile uint32_t x409 = UINT32_MAX;
volatile int8_t x412 = -1;
int64_t t76 = -71862086407285880LL;
volatile int32_t x437 = 1;
uint64_t x444 = UINT64_MAX;
int8_t x461 = INT8_MIN;
int32_t x473 = 4851;
int16_t x474 = INT16_MIN;
uint32_t x477 = 257868976U;
uint64_t x478 = 383268129296LLU;
static volatile int8_t x482 = -1;
int64_t x492 = 124LL;
int64_t t89 = 129523LL;
int32_t x504 = INT32_MAX;
volatile uint64_t t91 = UINT64_MAX;
static volatile int32_t x525 = INT32_MIN;
static int64_t t93 = -5357986197321LL;
int64_t x532 = INT64_MIN;
uint16_t x533 = 676U;
uint64_t x541 = 8921LLU;
uint64_t x542 = 1LLU;
int8_t x546 = 0;
uint64_t x553 = 26LLU;
int16_t x560 = INT16_MIN;
static int64_t t99 = 552LL;


void f0(void) {
	int32_t x9 = -919;
	static volatile int16_t x10 = 1;
	uint8_t x11 = 7U;
	int32_t x12 = -193356;

	t0 = (((x9*x10)-x11)|x12);

	if (t0 != -778) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MIN;
	static uint8_t x14 = UINT8_MAX;
	uint16_t x15 = UINT16_MAX;
	int32_t t1 = 49;

	t1 = (((x13*x14)-x15)|x16);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x18 = -1;
	volatile int64_t x19 = INT64_MIN;
	static int8_t x20 = 4;
	static volatile uint64_t t2 = 1784958588215550LLU;

	t2 = (((x17*x18)-x19)|x20);

	if (t2 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x21 = UINT8_MAX;
	volatile int8_t x22 = INT8_MIN;
	uint64_t x23 = 252116515880616975LLU;
	static int16_t x24 = -1;
	uint64_t t3 = UINT64_MAX;

	t3 = (((x21*x22)-x23)|x24);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -198;
	int16_t x26 = -2;
	static uint64_t x27 = 1548LLU;
	volatile int16_t x28 = -1020;
	static volatile uint64_t t4 = 13626470041615LLU;

	t4 = (((x25*x26)-x27)|x28);

	if (t4 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x29 = 31936507;
	uint64_t x30 = UINT64_MAX;
	uint64_t t5 = 78775081376399LLU;

	t5 = (((x29*x30)-x31)|x32);

	if (t5 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -1LL;
	int8_t x34 = -1;
	int8_t x35 = INT8_MIN;
	static int8_t x36 = -1;
	int64_t t6 = 6089183586546671LL;

	t6 = (((x33*x34)-x35)|x36);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x42 = 113261777U;
	volatile uint64_t x43 = 96LLU;
	int8_t x44 = INT8_MIN;
	volatile uint64_t t7 = 441557LLU;

	t7 = (((x41*x42)-x43)|x44);

	if (t7 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	uint8_t x46 = 7U;
	int32_t x47 = 116726;
	uint16_t x48 = 1U;

	t8 = (((x45*x46)-x47)|x48);

	if (t8 != -115837) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x49 = -162739544;
	volatile uint16_t x50 = 10U;
	uint32_t x51 = 1U;
	static int8_t x52 = INT8_MAX;

	t9 = (((x49*x50)-x51)|x52);

	if (t9 != 2667571967U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = UINT64_MAX;
	static int64_t x63 = -1LL;
	int64_t x64 = -785322582560164810LL;
	uint64_t t10 = 8LLU;

	t10 = (((x61*x62)-x63)|x64);

	if (t10 != 17661421491149386815LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = -1342105386LL;
	int16_t x66 = INT16_MAX;
	uint64_t x67 = 1117989138707583147LLU;
	static int8_t x68 = 0;
	volatile uint64_t t11 = 14LLU;

	t11 = (((x65*x66)-x67)|x68);

	if (t11 != 17328710958234785407LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = 11;
	uint64_t x70 = UINT64_MAX;
	uint32_t x71 = 122U;
	int32_t x72 = 29785054;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (((x69*x70)-x71)|x72);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x73 = 3U;
	volatile uint64_t x74 = 269626512208327695LLU;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = INT8_MIN;
	volatile uint64_t t13 = 27581142738888758LLU;

	t13 = (((x73*x74)-x75)|x76);

	if (t13 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 217U;
	uint16_t x78 = UINT16_MAX;
	uint8_t x79 = UINT8_MAX;
	uint32_t t14 = 14028U;

	t14 = (((x77*x78)-x79)|x80);

	if (t14 != 14221055U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x82 = 64U;
	int64_t x83 = 17630020759LL;

	t15 = (((x81*x82)-x83)|x84);

	if (t15 != -450151575LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	uint32_t x87 = UINT32_MAX;
	static int8_t x88 = -1;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (((x85*x86)-x87)|x88);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = 78LL;
	static volatile int64_t x90 = -1LL;
	static uint8_t x91 = 9U;
	volatile int64_t t17 = -4441655368217LL;

	t17 = (((x89*x90)-x91)|x92);

	if (t17 != -7LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	volatile uint16_t x95 = 259U;
	uint8_t x96 = 102U;
	int64_t t18 = -6296563010LL;

	t18 = (((x93*x94)-x95)|x96);

	if (t18 != -258LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = -1;
	uint32_t x98 = 1U;
	uint16_t x99 = 17227U;
	static int32_t x100 = INT32_MAX;
	static uint32_t t19 = UINT32_MAX;

	t19 = (((x97*x98)-x99)|x100);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 25633U;
	int8_t x106 = INT8_MAX;
	static int64_t x107 = 652949476658930LL;
	static int8_t x108 = 15;

	t20 = (((x105*x106)-x107)|x108);

	if (t20 != -652949473403537LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = 18;
	volatile int32_t x110 = 2384;
	uint8_t x112 = 3U;
	volatile int32_t t21 = -4;

	t21 = (((x109*x110)-x111)|x112);

	if (t21 != 42883) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = UINT8_MAX;
	volatile uint32_t x114 = 423753278U;
	static int8_t x115 = INT8_MIN;
	int32_t x116 = -1;

	t22 = (((x113*x114)-x115)|x116);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x119 = INT16_MAX;
	int8_t x120 = 21;

	t23 = (((x117*x118)-x119)|x120);

	if (t23 != -32619) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	static volatile int8_t x122 = INT8_MAX;
	static int32_t x123 = INT32_MIN;
	uint32_t x124 = 4U;

	t24 = (((x121*x122)-x123)|x124);

	if (t24 != 2143322116U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x125 = INT8_MIN;
	static uint8_t x127 = 1U;
	volatile uint64_t t25 = 57LLU;

	t25 = (((x125*x126)-x127)|x128);

	if (t25 != 3839LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MIN;
	uint64_t x134 = 7267191980603586LLU;
	static uint32_t x136 = 167U;
	volatile uint64_t t26 = 1028257068911LLU;

	t26 = (((x133*x134)-x135)|x136);

	if (t26 != 1676326137805897895LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x141 = -1;
	uint32_t x142 = 56161U;
	uint8_t x143 = UINT8_MAX;
	volatile uint16_t x144 = UINT16_MAX;
	uint32_t t27 = UINT32_MAX;

	t27 = (((x141*x142)-x143)|x144);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = -1;
	volatile int16_t x150 = 103;
	int8_t x151 = -1;
	static volatile int32_t x152 = INT32_MIN;
	int32_t t28 = 60106158;

	t28 = (((x149*x150)-x151)|x152);

	if (t28 != -102) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x156 = INT16_MIN;

	t29 = (((x153*x154)-x155)|x156);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x158 = 99LLU;
	uint16_t x159 = 11U;
	uint64_t t30 = 23358910351384LLU;

	t30 = (((x157*x158)-x159)|x160);

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = -1;
	int8_t x162 = 1;
	uint32_t x163 = 85036U;
	int64_t x164 = -1LL;

	t31 = (((x161*x162)-x163)|x164);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x165 = 124U;
	static int8_t x166 = -1;
	static volatile int16_t x167 = INT16_MIN;
	static int16_t x168 = -1;

	t32 = (((x165*x166)-x167)|x168);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x171 = INT64_MAX;
	int64_t x172 = INT64_MIN;
	static uint64_t t33 = 30731797017110LLU;

	t33 = (((x169*x170)-x171)|x172);

	if (t33 != 18446744073709540491LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	uint16_t x175 = UINT16_MAX;
	volatile uint16_t x176 = 16144U;

	t34 = (((x173*x174)-x175)|x176);

	if (t34 != 9223372036854726417LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x177 = UINT32_MAX;
	int32_t x178 = 52;
	volatile uint32_t x179 = 3487U;
	int64_t t35 = -5LL;

	t35 = (((x177*x178)-x179)|x180);

	if (t35 != -9223372032559812051LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x185 = 9U;
	int16_t x187 = INT16_MAX;
	int32_t t36 = -20858;

	t36 = (((x185*x186)-x187)|x188);

	if (t36 != -49757) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x197 = UINT64_MAX;
	static int32_t x198 = INT32_MAX;
	int8_t x199 = -1;
	static uint16_t x200 = 494U;
	static uint64_t t37 = 10709051691849480LLU;

	t37 = (((x197*x198)-x199)|x200);

	if (t37 != 18446744071562068462LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = 197;
	static volatile int64_t x202 = -81888351094178LL;
	int8_t x203 = -1;
	uint16_t x204 = UINT16_MAX;
	int64_t t38 = 0LL;

	t38 = (((x201*x202)-x203)|x204);

	if (t38 != -16132005165531137LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = INT16_MIN;
	uint8_t x207 = UINT8_MAX;
	static int64_t x208 = -53LL;
	static volatile uint64_t t39 = 1927879LLU;

	t39 = (((x205*x206)-x207)|x208);

	if (t39 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x209 = 495U;
	uint8_t x210 = 0U;
	int32_t x211 = -414226;
	static int64_t x212 = -1LL;
	volatile int64_t t40 = -2539088165LL;

	t40 = (((x209*x210)-x211)|x212);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x217 = 25206646U;
	uint32_t x219 = 87056950U;
	static int16_t x220 = 192;

	t41 = (((x217*x218)-x219)|x220);

	if (t41 != 981459658U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = INT16_MIN;
	static volatile uint16_t x222 = UINT16_MAX;
	int64_t x224 = -1LL;
	volatile int64_t t42 = 3483931LL;

	t42 = (((x221*x222)-x223)|x224);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x225 = 1077532511LL;
	int32_t x226 = -1;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (((x225*x226)-x227)|x228);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = 164533LLU;
	int32_t x230 = INT32_MIN;
	volatile uint16_t x231 = UINT16_MAX;
	static int8_t x232 = INT8_MAX;
	volatile uint64_t t44 = 77839657LLU;

	t44 = (((x229*x230)-x231)|x232);

	if (t44 != 18446390741782429823LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x237 = INT8_MAX;
	static uint16_t x238 = 7U;
	uint16_t x239 = 3U;
	int64_t x240 = 172555LL;
	int64_t t45 = 5681682667824LL;

	t45 = (((x237*x238)-x239)|x240);

	if (t45 != 172927LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x245 = 6725309875347LLU;
	int16_t x246 = -1;
	static int8_t x247 = -3;
	int16_t x248 = 15489;

	t46 = (((x245*x246)-x247)|x248);

	if (t46 != 18446737348399677425LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x253 = -1;
	volatile int64_t t47 = 119LL;

	t47 = (((x253*x254)-x255)|x256);

	if (t47 != 4282548223LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x257 = 40U;
	int16_t x258 = INT16_MIN;
	volatile int8_t x259 = 55;
	int8_t x260 = -17;
	volatile int32_t t48 = 14;

	t48 = (((x257*x258)-x259)|x260);

	if (t48 != -17) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x262 = INT16_MIN;
	int32_t x263 = -2017;
	static uint32_t x264 = UINT32_MAX;
	int64_t t49 = -112560799293753LL;

	t49 = (((x261*x262)-x263)|x264);

	if (t49 != 1012862968976637951LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x265 = UINT16_MAX;
	static int64_t x267 = INT64_MIN;
	int16_t x268 = 856;

	t50 = (((x265*x266)-x267)|x268);

	if (t50 != 9223372036854711129LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x273 = 5157309359LL;
	int8_t x274 = -4;
	uint8_t x275 = 15U;
	volatile uint16_t x276 = 36U;
	volatile int64_t t51 = -651636878502342LL;

	t51 = (((x273*x274)-x275)|x276);

	if (t51 != -20629237451LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = -1;
	int32_t x278 = INT32_MAX;
	int16_t x279 = -1;
	volatile int16_t x280 = -59;
	int32_t t52 = -31162;

	t52 = (((x277*x278)-x279)|x280);

	if (t52 != -57) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int8_t x282 = 1;
	static int64_t x283 = INT64_MAX;
	volatile int8_t x284 = -1;
	int64_t t53 = -309112089205267LL;

	t53 = (((x281*x282)-x283)|x284);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x285 = INT16_MAX;
	static int8_t x286 = -51;
	static int32_t x287 = -144759043;
	static int32_t x288 = INT32_MIN;
	int32_t t54 = 3;

	t54 = (((x285*x286)-x287)|x288);

	if (t54 != -2004395722) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x289 = UINT16_MAX;
	static uint16_t x291 = 135U;

	t55 = (((x289*x290)-x291)|x292);

	if (t55 != -65670LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x294 = 111U;
	int32_t x296 = INT32_MIN;
	volatile uint32_t t56 = 454285750U;

	t56 = (((x293*x294)-x295)|x296);

	if (t56 != 3788884183U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x302 = -1LL;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MAX;
	int64_t t57 = 2336101256573671LL;

	t57 = (((x301*x302)-x303)|x304);

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x321 = INT64_MIN;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = 10;
	static volatile int64_t t58 = -55875655857LL;

	t58 = (((x321*x322)-x323)|x324);

	if (t58 != 138LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x325 = 0;
	int8_t x327 = INT8_MIN;
	uint32_t t59 = 126704U;

	t59 = (((x325*x326)-x327)|x328);

	if (t59 != 132U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x329 = -1LL;
	volatile int16_t x330 = -1;
	volatile int32_t x331 = INT32_MIN;
	uint32_t x332 = UINT32_MAX;
	int64_t t60 = 194327545544425LL;

	t60 = (((x329*x330)-x331)|x332);

	if (t60 != 4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x334 = -1LL;
	int16_t x335 = INT16_MIN;
	uint64_t x336 = 177LLU;
	static volatile uint64_t t61 = 303774LLU;

	t61 = (((x333*x334)-x335)|x336);

	if (t61 != 32945LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x342 = -1093639LL;
	int8_t x343 = 3;
	volatile uint64_t x344 = 290983225716369736LLU;

	t62 = (((x341*x342)-x343)|x344);

	if (t62 != 290983225717422412LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x345 = 127U;
	static int8_t x346 = -1;
	int16_t x347 = 23;
	uint64_t t63 = 523415034314736610LLU;

	t63 = (((x345*x346)-x347)|x348);

	if (t63 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x351 = 8U;
	int64_t t64 = 2841807607287214392LL;

	t64 = (((x349*x350)-x351)|x352);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x365 = 0U;
	volatile uint16_t x366 = 87U;
	int64_t x367 = -1LL;
	int64_t t65 = -8289941276LL;

	t65 = (((x365*x366)-x367)|x368);

	if (t65 != 2147483647LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x369 = -1;
	uint16_t x370 = UINT16_MAX;
	static volatile int64_t x371 = 6LL;
	uint32_t x372 = 72032676U;
	int64_t t66 = -17059330969110919LL;

	t66 = (((x369*x370)-x371)|x372);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x373 = 11U;
	int32_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	int32_t t67 = 18;

	t67 = (((x373*x374)-x375)|x376);

	if (t67 != -9) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x379 = INT8_MIN;
	uint32_t t68 = 11615U;

	t68 = (((x377*x378)-x379)|x380);

	if (t68 != 171684735U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x381 = -1;
	static uint16_t x383 = 410U;
	uint16_t x384 = 1U;

	t69 = (((x381*x382)-x383)|x384);

	if (t69 != -281) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x397 = -17386;
	uint16_t x398 = UINT16_MAX;
	int32_t x400 = INT32_MIN;

	t70 = (((x397*x398)-x399)|x400);

	if (t70 != 3155511271U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x401 = 87U;
	int8_t x402 = -1;
	int8_t x404 = -1;
	uint32_t t71 = UINT32_MAX;

	t71 = (((x401*x402)-x403)|x404);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x405 = -1307733;
	static int64_t x406 = -1LL;
	int8_t x407 = -1;
	static int8_t x408 = -1;
	static volatile int64_t t72 = -96584584410LL;

	t72 = (((x405*x406)-x407)|x408);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x410 = -1LL;
	uint32_t x411 = 170917U;
	int64_t t73 = 2410662LL;

	t73 = (((x409*x410)-x411)|x412);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x413 = 0U;
	int16_t x414 = INT16_MAX;
	int32_t x415 = INT32_MAX;
	int8_t x416 = INT8_MAX;
	static uint32_t t74 = 343U;

	t74 = (((x413*x414)-x415)|x416);

	if (t74 != 2147483775U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x421 = UINT8_MAX;
	uint64_t x422 = 39736531595213LLU;
	int32_t x423 = INT32_MIN;
	int16_t x424 = -1484;
	volatile uint64_t t75 = 61770717808LLU;

	t75 = (((x421*x422)-x423)|x424);

	if (t75 != 18446744073709551415LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x425 = INT16_MIN;
	int16_t x426 = INT16_MIN;
	volatile uint8_t x427 = 2U;
	volatile int64_t x428 = INT64_MIN;

	t76 = (((x425*x426)-x427)|x428);

	if (t76 != -9223372035781033986LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x429 = UINT8_MAX;
	volatile uint32_t x430 = 399U;
	uint16_t x431 = UINT16_MAX;
	int8_t x432 = 0;
	volatile uint32_t t77 = 95758435U;

	t77 = (((x429*x430)-x431)|x432);

	if (t77 != 36210U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x433 = -583;
	static uint32_t x434 = 7137U;
	uint64_t x435 = 22LLU;
	int64_t x436 = INT64_MAX;
	volatile uint64_t t78 = 6143832817247LLU;

	t78 = (((x433*x434)-x435)|x436);

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x438 = UINT8_MAX;
	int16_t x439 = INT16_MIN;
	static uint8_t x440 = UINT8_MAX;
	int32_t t79 = 189;

	t79 = (((x437*x438)-x439)|x440);

	if (t79 != 33023) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x441 = INT16_MAX;
	int8_t x442 = 60;
	int16_t x443 = 8;
	static uint64_t t80 = UINT64_MAX;

	t80 = (((x441*x442)-x443)|x444);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x449 = -1;
	int8_t x450 = 0;
	int32_t x451 = INT32_MAX;
	int8_t x452 = -1;
	int32_t t81 = -10287126;

	t81 = (((x449*x450)-x451)|x452);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x453 = INT16_MIN;
	int16_t x454 = -1;
	uint32_t x455 = 103U;
	int64_t x456 = -1LL;
	int64_t t82 = 5061741815764568LL;

	t82 = (((x453*x454)-x455)|x456);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x457 = 1;
	volatile int64_t x458 = INT64_MAX;
	uint8_t x459 = UINT8_MAX;
	static int16_t x460 = INT16_MIN;
	volatile int64_t t83 = 327033722977134LL;

	t83 = (((x457*x458)-x459)|x460);

	if (t83 != -256LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x462 = INT8_MIN;
	uint64_t x463 = 796026898364667945LLU;
	volatile int32_t x464 = INT32_MAX;
	static volatile uint64_t t84 = 642661747923367146LLU;

	t84 = (((x461*x462)-x463)|x464);

	if (t84 != 17650717175826087935LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x469 = INT8_MIN;
	static uint64_t x470 = 112079424300105LLU;
	static int32_t x471 = INT32_MAX;
	uint32_t x472 = 104052367U;
	static uint64_t t85 = 20279284482560LLU;

	t85 = (((x469*x470)-x471)|x472);

	if (t85 != 18432397905286397839LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x475 = 195185733LLU;
	uint8_t x476 = UINT8_MAX;
	volatile uint64_t t86 = 3719016063639939780LLU;

	t86 = (((x473*x474)-x475)|x476);

	if (t86 != 18446744073355408383LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x479 = 1417225LL;
	volatile int16_t x480 = INT16_MAX;
	uint64_t t87 = 643940LLU;

	t87 = (((x477*x478)-x479)|x480);

	if (t87 != 6599239666445975551LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x481 = 110187693427006LL;
	static int32_t x483 = 8330005;
	uint16_t x484 = 6U;
	volatile int64_t t88 = -31163839LL;

	t88 = (((x481*x482)-x483)|x484);

	if (t88 != -110187701757009LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x489 = 0;
	int16_t x490 = INT16_MIN;
	static volatile int16_t x491 = INT16_MIN;

	t89 = (((x489*x490)-x491)|x492);

	if (t89 != 32892LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x497 = INT8_MAX;
	static int64_t x498 = -1LL;
	int16_t x499 = INT16_MIN;
	int64_t x500 = -1LL;
	volatile int64_t t90 = 4276884507638LL;

	t90 = (((x497*x498)-x499)|x500);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x501 = UINT8_MAX;
	uint64_t x502 = UINT64_MAX;
	volatile uint16_t x503 = 32682U;

	t91 = (((x501*x502)-x503)|x504);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x509 = 123U;
	uint32_t x510 = 4063U;
	static int16_t x511 = INT16_MIN;
	int32_t x512 = 1;
	uint32_t t92 = 8937604U;

	t92 = (((x509*x510)-x511)|x512);

	if (t92 != 532517U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x526 = UINT32_MAX;
	int64_t x527 = -1LL;
	int64_t x528 = 3080734591655265LL;

	t93 = (((x525*x526)-x527)|x528);

	if (t93 != 3080736739138913LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x529 = INT64_MAX;
	int64_t x530 = -1LL;
	uint64_t x531 = 8146956662606LLU;
	volatile uint64_t t94 = 8942377LLU;

	t94 = (((x529*x530)-x531)|x532);

	if (t94 != 18446735926752889011LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x534 = 4;
	int32_t x535 = 1;
	int32_t x536 = -47;
	int32_t t95 = -9;

	t95 = (((x533*x534)-x535)|x536);

	if (t95 != -33) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x543 = 70U;
	static uint32_t x544 = 1393642364U;
	static volatile uint64_t t96 = 1718523597147213LLU;

	t96 = (((x541*x542)-x543)|x544);

	if (t96 != 1393650687LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x545 = 1U;
	volatile int8_t x547 = INT8_MAX;
	int32_t x548 = 5589;
	uint32_t t97 = 1U;

	t97 = (((x545*x546)-x547)|x548);

	if (t97 != 4294967253U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x554 = 31;
	int32_t x555 = -963226916;
	int8_t x556 = -1;
	static volatile uint64_t t98 = UINT64_MAX;

	t98 = (((x553*x554)-x555)|x556);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x557 = -129490LL;
	volatile int64_t x558 = -98399011LL;
	int32_t x559 = INT32_MAX;

	t99 = (((x557*x558)-x559)|x560);

	if (t99 != -585LL) { NG(); } else { ; }
	
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

