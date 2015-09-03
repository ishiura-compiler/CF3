#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x28 = 2371;
static int32_t t3 = 77395135;
uint8_t x44 = UINT8_MAX;
int64_t x55 = -1LL;
int8_t x59 = 0;
static int32_t t9 = -1698;
static uint16_t x65 = 0U;
static int16_t x68 = 1;
volatile int32_t t10 = -336;
volatile int32_t t11 = 226225;
static int8_t x82 = -1;
volatile int32_t x85 = INT32_MIN;
uint8_t x86 = 15U;
static volatile int32_t t13 = 568288443;
uint32_t x90 = 78495189U;
int64_t x91 = 1463806679LL;
int32_t x92 = INT32_MIN;
int32_t t14 = 3447;
uint32_t x96 = UINT32_MAX;
volatile int32_t t15 = 0;
volatile int32_t t24 = 354;
uint64_t x164 = 6431840LLU;
int32_t x172 = INT32_MAX;
uint16_t x175 = UINT16_MAX;
int32_t x182 = INT32_MAX;
int32_t x200 = -63;
uint32_t x202 = 1053552252U;
static int8_t x204 = -1;
int32_t t33 = 394;
uint64_t x220 = 778489194815544721LLU;
volatile int8_t x236 = -1;
static volatile int8_t x237 = INT8_MIN;
uint32_t x239 = UINT32_MAX;
volatile uint64_t x240 = 88531602221705863LLU;
static uint64_t x248 = 37203694801650990LLU;
uint16_t x251 = 37U;
int32_t x259 = INT32_MIN;
int32_t x275 = 3697;
volatile int8_t x282 = INT8_MAX;
static volatile int16_t x285 = INT16_MAX;
uint8_t x317 = UINT8_MAX;
int16_t x320 = INT16_MAX;
static uint32_t x321 = UINT32_MAX;
volatile int8_t x322 = 1;
int16_t x323 = INT16_MIN;
int32_t t53 = 126401;
static int8_t x335 = -2;
volatile uint32_t x337 = 587U;
int8_t x347 = INT8_MIN;
volatile int32_t t57 = -1;
int8_t x361 = INT8_MIN;
uint16_t x362 = 7648U;
static volatile int32_t t60 = -958812;
uint16_t x380 = 4U;
int32_t x385 = INT32_MIN;
int16_t x388 = -3;
static volatile int32_t t65 = -23810352;
static volatile int32_t t67 = -225666068;
int8_t x419 = INT8_MAX;
uint16_t x427 = UINT16_MAX;
uint8_t x441 = UINT8_MAX;
static volatile uint64_t x442 = 21922547549276LLU;
static volatile int16_t x444 = INT16_MIN;
int32_t t75 = 14;
int16_t x460 = INT16_MIN;
static volatile int16_t x463 = -35;
uint32_t x466 = UINT32_MAX;
uint64_t x468 = 3LLU;
volatile int32_t t78 = -2355;
int32_t t82 = -38232692;
volatile uint8_t x493 = 3U;
uint32_t x506 = UINT32_MAX;
static int16_t x519 = 66;
volatile int32_t x521 = -1;
int8_t x522 = INT8_MIN;
volatile uint8_t x547 = 45U;
uint32_t x559 = 42U;
static volatile int64_t x566 = INT64_MAX;
int64_t x567 = INT64_MIN;
int64_t x575 = 14LL;
int32_t t97 = 12421;
int32_t x577 = INT32_MIN;


void f0(void) {
	int8_t x1 = -3;
	int64_t x2 = -1LL;
	int16_t x3 = -1;
	volatile int64_t x4 = -1561LL;
	int32_t t0 = -55951;

	t0 = (x1==((x2^x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = -82884LL;
	int16_t x14 = -8;
	uint16_t x15 = UINT16_MAX;
	int64_t x16 = 1688LL;
	int32_t t1 = 496;

	t1 = (x13==((x14^x15)*x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = 214703640607576LL;
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = -27;
	int64_t x20 = INT64_MIN;
	int32_t t2 = 1490;

	t2 = (x17==((x18^x19)*x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	static int16_t x26 = -1;
	volatile int64_t x27 = -3384645445723LL;

	t3 = (x25==((x26^x27)*x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x29 = 2374591755472976LLU;
	volatile int64_t x30 = -993538LL;
	static uint8_t x31 = 0U;
	int8_t x32 = INT8_MIN;
	volatile int32_t t4 = 26333;

	t4 = (x29==((x30^x31)*x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x37 = 79631934LL;
	static volatile int8_t x38 = -1;
	static int16_t x39 = INT16_MAX;
	static int16_t x40 = INT16_MIN;
	static int32_t t5 = -57;

	t5 = (x37==((x38^x39)*x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = -1;
	static int32_t x42 = INT32_MIN;
	volatile int64_t x43 = -1LL;
	volatile int32_t t6 = -509088;

	t6 = (x41==((x42^x43)*x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int8_t x54 = 9;
	int32_t x56 = -1;
	volatile int32_t t7 = 76940609;

	t7 = (x53==((x54^x55)*x56));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x57 = UINT64_MAX;
	uint32_t x58 = UINT32_MAX;
	static uint16_t x60 = 130U;
	int32_t t8 = -6266941;

	t8 = (x57==((x58^x59)*x60));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x61 = -493LL;
	int32_t x62 = -1;
	static int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MAX;

	t9 = (x61==((x62^x63)*x64));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x66 = -1;
	int8_t x67 = INT8_MIN;

	t10 = (x65==((x66^x67)*x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x73 = UINT16_MAX;
	static uint32_t x74 = 2085628U;
	volatile uint8_t x75 = 10U;
	static int32_t x76 = -53771122;

	t11 = (x73==((x74^x75)*x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x81 = 0LLU;
	static volatile int64_t x83 = -1LL;
	uint64_t x84 = UINT64_MAX;
	static volatile int32_t t12 = 24694376;

	t12 = (x81==((x82^x83)*x84));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x87 = -1;
	volatile int16_t x88 = INT16_MAX;

	t13 = (x85==((x86^x87)*x88));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x89 = 0U;

	t14 = (x89==((x90^x91)*x92));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x93 = 95034844581LLU;
	uint32_t x94 = UINT32_MAX;
	static uint16_t x95 = UINT16_MAX;

	t15 = (x93==((x94^x95)*x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x97 = 1904U;
	static volatile int64_t x98 = INT64_MAX;
	uint64_t x99 = UINT64_MAX;
	static int64_t x100 = 215LL;
	int32_t t16 = -6;

	t16 = (x97==((x98^x99)*x100));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x101 = 1U;
	int32_t x102 = -308623;
	int32_t x103 = -1;
	int8_t x104 = -11;
	int32_t t17 = 129449169;

	t17 = (x101==((x102^x103)*x104));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = 634579U;
	volatile int32_t x107 = INT32_MAX;
	uint16_t x108 = 6682U;
	int32_t t18 = -193886293;

	t18 = (x105==((x106^x107)*x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x109 = 938781768900827964LLU;
	static volatile int64_t x110 = -1LL;
	volatile uint16_t x111 = UINT16_MAX;
	int16_t x112 = -1;
	int32_t t19 = 697343875;

	t19 = (x109==((x110^x111)*x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x117 = INT64_MIN;
	static uint64_t x118 = 130674354LLU;
	int16_t x119 = -1720;
	uint16_t x120 = 97U;
	int32_t t20 = -1599003;

	t20 = (x117==((x118^x119)*x120));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x129 = UINT64_MAX;
	uint64_t x130 = 4LLU;
	int32_t x131 = INT32_MAX;
	static int16_t x132 = 2;
	int32_t t21 = 937;

	t21 = (x129==((x130^x131)*x132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x133 = INT32_MAX;
	volatile int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	int8_t x136 = 1;
	int32_t t22 = 28;

	t22 = (x133==((x134^x135)*x136));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x141 = 3U;
	uint8_t x142 = 29U;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t23 = 0;

	t23 = (x141==((x142^x143)*x144));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x149 = INT8_MAX;
	uint8_t x150 = 1U;
	int64_t x151 = -1506192384332LL;
	static volatile int16_t x152 = INT16_MIN;

	t24 = (x149==((x150^x151)*x152));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x153 = 1U;
	static uint32_t x154 = UINT32_MAX;
	int16_t x155 = 754;
	uint64_t x156 = 2631435LLU;
	int32_t t25 = 1;

	t25 = (x153==((x154^x155)*x156));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x161 = -42;
	volatile uint8_t x162 = 0U;
	uint16_t x163 = 11636U;
	int32_t t26 = 793;

	t26 = (x161==((x162^x163)*x164));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x169 = 1;
	int64_t x170 = -76365617296LL;
	uint64_t x171 = 452081275099071361LLU;
	int32_t t27 = 16772094;

	t27 = (x169==((x170^x171)*x172));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x173 = INT32_MAX;
	int16_t x174 = -163;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t28 = 25026180;

	t28 = (x173==((x174^x175)*x176));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x181 = -2;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = INT32_MAX;
	int32_t t29 = -501057488;

	t29 = (x181==((x182^x183)*x184));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x185 = INT64_MAX;
	int8_t x186 = INT8_MAX;
	int8_t x187 = INT8_MAX;
	int8_t x188 = 13;
	int32_t t30 = -2703;

	t30 = (x185==((x186^x187)*x188));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = INT32_MIN;
	volatile uint16_t x191 = 27749U;
	int64_t x192 = -1LL;
	volatile int32_t t31 = 27459832;

	t31 = (x189==((x190^x191)*x192));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x197 = -1LL;
	int64_t x198 = -11454722296154LL;
	static int64_t x199 = 2313748805698746LL;
	int32_t t32 = 2808;

	t32 = (x197==((x198^x199)*x200));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x201 = 0U;
	static volatile int16_t x203 = INT16_MAX;

	t33 = (x201==((x202^x203)*x204));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x205 = -1;
	int8_t x206 = INT8_MIN;
	int8_t x207 = -48;
	int16_t x208 = INT16_MAX;
	volatile int32_t t34 = -410406;

	t34 = (x205==((x206^x207)*x208));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x209 = -396167;
	uint64_t x210 = 113629412267451LLU;
	int8_t x211 = INT8_MAX;
	static uint16_t x212 = 26759U;
	volatile int32_t t35 = -1;

	t35 = (x209==((x210^x211)*x212));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x217 = 4U;
	static int8_t x218 = 18;
	int16_t x219 = 731;
	volatile int32_t t36 = -4;

	t36 = (x217==((x218^x219)*x220));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x233 = INT64_MIN;
	static int16_t x234 = INT16_MIN;
	int32_t x235 = -14497123;
	int32_t t37 = -1666;

	t37 = (x233==((x234^x235)*x236));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x238 = 70857537838LL;
	volatile int32_t t38 = 0;

	t38 = (x237==((x238^x239)*x240));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x245 = INT8_MAX;
	uint64_t x246 = UINT64_MAX;
	static int16_t x247 = -42;
	volatile int32_t t39 = -155;

	t39 = (x245==((x246^x247)*x248));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x249 = 0;
	uint64_t x250 = 358681LLU;
	int64_t x252 = INT64_MIN;
	volatile int32_t t40 = -444;

	t40 = (x249==((x250^x251)*x252));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x257 = INT16_MIN;
	volatile int64_t x258 = INT64_MIN;
	static volatile int16_t x260 = -1;
	volatile int32_t t41 = -1477753;

	t41 = (x257==((x258^x259)*x260));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x261 = 0U;
	static int16_t x262 = 1357;
	int16_t x263 = 78;
	uint32_t x264 = UINT32_MAX;
	static int32_t t42 = -2118346;

	t42 = (x261==((x262^x263)*x264));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x269 = -1;
	static int16_t x270 = 912;
	int8_t x271 = INT8_MAX;
	int32_t x272 = -945873;
	static volatile int32_t t43 = 57563;

	t43 = (x269==((x270^x271)*x272));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x273 = UINT64_MAX;
	static uint8_t x274 = 15U;
	static int16_t x276 = INT16_MIN;
	int32_t t44 = -204476;

	t44 = (x273==((x274^x275)*x276));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x281 = -1;
	uint32_t x283 = 2250U;
	int32_t x284 = INT32_MIN;
	static volatile int32_t t45 = 6786;

	t45 = (x281==((x282^x283)*x284));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x286 = INT16_MIN;
	static uint32_t x287 = 2U;
	int32_t x288 = -71137;
	static int32_t t46 = 18527697;

	t46 = (x285==((x286^x287)*x288));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x289 = INT32_MIN;
	static int8_t x290 = INT8_MIN;
	static int8_t x291 = -1;
	int32_t x292 = 518220;
	int32_t t47 = -11;

	t47 = (x289==((x290^x291)*x292));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x301 = 75U;
	static int16_t x302 = -1;
	static int16_t x303 = INT16_MAX;
	int8_t x304 = INT8_MAX;
	int32_t t48 = -941;

	t48 = (x301==((x302^x303)*x304));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t49 = -467013;

	t49 = (x309==((x310^x311)*x312));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x313 = 37149614;
	uint8_t x314 = 0U;
	int16_t x315 = 0;
	int32_t x316 = INT32_MIN;
	volatile int32_t t50 = 19;

	t50 = (x313==((x314^x315)*x316));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x318 = UINT64_MAX;
	static int16_t x319 = INT16_MIN;
	static volatile int32_t t51 = -926;

	t51 = (x317==((x318^x319)*x320));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x324 = -1;
	static int32_t t52 = -781754;

	t52 = (x321==((x322^x323)*x324));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x325 = 19242U;
	static uint32_t x326 = UINT32_MAX;
	static uint32_t x327 = 960624U;
	uint32_t x328 = 142198U;

	t53 = (x325==((x326^x327)*x328));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x329 = UINT8_MAX;
	uint64_t x330 = UINT64_MAX;
	int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	volatile int32_t t54 = -709572039;

	t54 = (x329==((x330^x331)*x332));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x333 = 8U;
	uint32_t x334 = UINT32_MAX;
	static int64_t x336 = -1LL;
	int32_t t55 = -266671;

	t55 = (x333==((x334^x335)*x336));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x338 = -18;
	int16_t x339 = INT16_MIN;
	uint32_t x340 = UINT32_MAX;
	int32_t t56 = 64574751;

	t56 = (x337==((x338^x339)*x340));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x345 = INT16_MIN;
	static int64_t x346 = -101754568703523LL;
	int8_t x348 = INT8_MIN;

	t57 = (x345==((x346^x347)*x348));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x357 = INT8_MIN;
	volatile uint64_t x358 = 254167LLU;
	int8_t x359 = INT8_MIN;
	static int8_t x360 = INT8_MIN;
	static volatile int32_t t58 = -202396;

	t58 = (x357==((x358^x359)*x360));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x363 = INT8_MAX;
	static int16_t x364 = INT16_MIN;
	int32_t t59 = -58;

	t59 = (x361==((x362^x363)*x364));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x365 = -1;
	int8_t x366 = INT8_MIN;
	uint16_t x367 = UINT16_MAX;
	int8_t x368 = INT8_MAX;

	t60 = (x365==((x366^x367)*x368));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = 1;
	volatile int16_t x371 = INT16_MIN;
	uint64_t x372 = 0LLU;
	volatile int32_t t61 = 15038;

	t61 = (x369==((x370^x371)*x372));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x377 = 8120353U;
	volatile uint32_t x378 = 2154U;
	uint8_t x379 = UINT8_MAX;
	static volatile int32_t t62 = -8416;

	t62 = (x377==((x378^x379)*x380));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x381 = INT8_MIN;
	static int16_t x382 = INT16_MAX;
	static int16_t x383 = INT16_MAX;
	uint8_t x384 = 25U;
	volatile int32_t t63 = -19;

	t63 = (x381==((x382^x383)*x384));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x386 = UINT8_MAX;
	int64_t x387 = 23271912LL;
	volatile int32_t t64 = 5164663;

	t64 = (x385==((x386^x387)*x388));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x389 = UINT64_MAX;
	uint32_t x390 = 980U;
	int8_t x391 = -1;
	uint16_t x392 = 1487U;

	t65 = (x389==((x390^x391)*x392));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x397 = INT8_MIN;
	int32_t x398 = 450;
	static uint16_t x399 = 5U;
	volatile int16_t x400 = -1;
	static int32_t t66 = -235450611;

	t66 = (x397==((x398^x399)*x400));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x405 = -1;
	static uint64_t x406 = 1002353265190LLU;
	uint32_t x407 = UINT32_MAX;
	volatile int64_t x408 = INT64_MIN;

	t67 = (x405==((x406^x407)*x408));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x409 = 1053U;
	uint32_t x410 = UINT32_MAX;
	int16_t x411 = INT16_MIN;
	int16_t x412 = -934;
	int32_t t68 = 50;

	t68 = (x409==((x410^x411)*x412));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x413 = INT16_MAX;
	int8_t x414 = INT8_MAX;
	uint16_t x415 = UINT16_MAX;
	uint64_t x416 = 969686210075057793LLU;
	volatile int32_t t69 = 0;

	t69 = (x413==((x414^x415)*x416));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x417 = UINT32_MAX;
	int8_t x418 = -1;
	static int8_t x420 = -1;
	static int32_t t70 = 4;

	t70 = (x417==((x418^x419)*x420));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x425 = 8034U;
	int64_t x426 = -1LL;
	volatile int32_t x428 = INT32_MAX;
	volatile int32_t t71 = -100183;

	t71 = (x425==((x426^x427)*x428));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x433 = 24807509U;
	int16_t x434 = -115;
	int8_t x435 = INT8_MAX;
	static volatile int16_t x436 = INT16_MIN;
	int32_t t72 = 12299;

	t72 = (x433==((x434^x435)*x436));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x437 = -1;
	int32_t x438 = -1;
	int16_t x439 = INT16_MIN;
	uint32_t x440 = 852071211U;
	volatile int32_t t73 = -43985;

	t73 = (x437==((x438^x439)*x440));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x443 = INT32_MIN;
	volatile int32_t t74 = 36;

	t74 = (x441==((x442^x443)*x444));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x449 = UINT16_MAX;
	uint32_t x450 = 5U;
	uint32_t x451 = 4030U;
	static int16_t x452 = -1;

	t75 = (x449==((x450^x451)*x452));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x457 = INT16_MIN;
	volatile int32_t x458 = 878;
	uint16_t x459 = UINT16_MAX;
	static volatile int32_t t76 = 10696636;

	t76 = (x457==((x458^x459)*x460));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x461 = INT16_MIN;
	int32_t x462 = -1;
	uint32_t x464 = UINT32_MAX;
	int32_t t77 = -3509980;

	t77 = (x461==((x462^x463)*x464));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x465 = INT64_MAX;
	uint8_t x467 = UINT8_MAX;

	t78 = (x465==((x466^x467)*x468));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x469 = UINT64_MAX;
	int64_t x470 = INT64_MAX;
	int16_t x471 = INT16_MIN;
	int16_t x472 = -1;
	volatile int32_t t79 = 1180;

	t79 = (x469==((x470^x471)*x472));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x477 = INT32_MIN;
	uint64_t x478 = 7778090575LLU;
	int16_t x479 = INT16_MAX;
	uint8_t x480 = UINT8_MAX;
	volatile int32_t t80 = -471;

	t80 = (x477==((x478^x479)*x480));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x485 = INT16_MIN;
	static uint16_t x486 = 727U;
	int16_t x487 = INT16_MAX;
	int8_t x488 = -1;
	int32_t t81 = -22326;

	t81 = (x485==((x486^x487)*x488));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x489 = -1;
	volatile uint64_t x490 = 48725641288227436LLU;
	volatile uint16_t x491 = 3U;
	int16_t x492 = INT16_MIN;

	t82 = (x489==((x490^x491)*x492));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x494 = INT16_MIN;
	static uint64_t x495 = UINT64_MAX;
	int32_t x496 = INT32_MIN;
	int32_t t83 = 523551643;

	t83 = (x493==((x494^x495)*x496));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x501 = -1LL;
	uint64_t x502 = 47318046LLU;
	int8_t x503 = INT8_MIN;
	int64_t x504 = INT64_MIN;
	int32_t t84 = 2788;

	t84 = (x501==((x502^x503)*x504));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x505 = 1;
	volatile int8_t x507 = INT8_MIN;
	int8_t x508 = INT8_MAX;
	int32_t t85 = -6385658;

	t85 = (x505==((x506^x507)*x508));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x509 = INT16_MIN;
	static uint8_t x510 = UINT8_MAX;
	static uint16_t x511 = 365U;
	static uint64_t x512 = 8843331LLU;
	static volatile int32_t t86 = -60097057;

	t86 = (x509==((x510^x511)*x512));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x517 = INT16_MIN;
	volatile uint64_t x518 = 17459258634098LLU;
	static volatile int64_t x520 = -17521563421LL;
	volatile int32_t t87 = -7550559;

	t87 = (x517==((x518^x519)*x520));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x523 = 1356489897394627578LLU;
	int32_t x524 = -97;
	volatile int32_t t88 = 53305;

	t88 = (x521==((x522^x523)*x524));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x525 = INT32_MIN;
	int8_t x526 = 3;
	uint64_t x527 = 11555930LLU;
	static int32_t x528 = -92609;
	int32_t t89 = -1324784;

	t89 = (x525==((x526^x527)*x528));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x529 = 7;
	int16_t x530 = 10784;
	int16_t x531 = INT16_MAX;
	uint32_t x532 = UINT32_MAX;
	int32_t t90 = -584172737;

	t90 = (x529==((x530^x531)*x532));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x541 = INT8_MAX;
	int8_t x542 = -34;
	int32_t x543 = INT32_MAX;
	int64_t x544 = -1LL;
	int32_t t91 = 4;

	t91 = (x541==((x542^x543)*x544));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x545 = INT8_MIN;
	volatile int16_t x546 = 0;
	int16_t x548 = -6148;
	volatile int32_t t92 = 0;

	t92 = (x545==((x546^x547)*x548));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x549 = -1;
	int8_t x550 = 1;
	uint8_t x551 = UINT8_MAX;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t93 = 14365;

	t93 = (x549==((x550^x551)*x552));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x553 = 33U;
	uint8_t x554 = UINT8_MAX;
	uint8_t x555 = 1U;
	static int64_t x556 = -1LL;
	volatile int32_t t94 = 98;

	t94 = (x553==((x554^x555)*x556));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x557 = 0;
	uint16_t x558 = UINT16_MAX;
	uint8_t x560 = 4U;
	volatile int32_t t95 = -2;

	t95 = (x557==((x558^x559)*x560));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x565 = UINT64_MAX;
	int16_t x568 = INT16_MIN;
	volatile int32_t t96 = -796;

	t96 = (x565==((x566^x567)*x568));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x573 = -835;
	int16_t x574 = INT16_MIN;
	volatile int32_t x576 = INT32_MAX;

	t97 = (x573==((x574^x575)*x576));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x578 = INT16_MIN;
	uint64_t x579 = UINT64_MAX;
	static int32_t x580 = -3888666;
	int32_t t98 = 103;

	t98 = (x577==((x578^x579)*x580));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x585 = UINT32_MAX;
	static uint32_t x586 = 51U;
	volatile uint8_t x587 = 0U;
	int16_t x588 = INT16_MIN;
	volatile int32_t t99 = -11;

	t99 = (x585==((x586^x587)*x588));

	if (t99 != 0) { NG(); } else { ; }
	
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

