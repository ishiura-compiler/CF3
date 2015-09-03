#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x4 = 0U;
static volatile uint32_t x7 = UINT32_MAX;
int64_t x8 = -1LL;
volatile int16_t x9 = INT16_MIN;
int32_t x13 = 2;
uint16_t x16 = UINT16_MAX;
volatile int64_t x19 = 91756806139LL;
int32_t x44 = INT32_MIN;
static volatile int16_t x47 = INT16_MIN;
static volatile int32_t t8 = -25;
int64_t t10 = 342957LL;
uint64_t x63 = UINT64_MAX;
volatile int32_t t12 = INT32_MIN;
int32_t x69 = INT32_MIN;
int16_t x77 = -1;
int32_t x93 = INT32_MIN;
static volatile int32_t x97 = INT32_MIN;
static volatile int32_t t19 = -98357817;
uint16_t x102 = UINT16_MAX;
volatile int32_t x103 = 4080774;
volatile uint8_t x126 = 10U;
volatile int8_t x130 = INT8_MIN;
uint8_t x131 = UINT8_MAX;
volatile int32_t t25 = -1;
uint16_t x136 = 153U;
uint32_t x137 = 0U;
uint32_t t27 = 0U;
static volatile int8_t x147 = -1;
int8_t x150 = INT8_MIN;
int16_t x162 = -12194;
static int16_t x170 = 120;
int64_t x177 = INT64_MIN;
volatile uint32_t x178 = 7U;
volatile int64_t t35 = INT64_MIN;
int16_t x190 = -785;
int32_t t37 = -11;
int32_t x199 = INT32_MIN;
uint16_t x200 = 3U;
volatile uint64_t x208 = UINT64_MAX;
int16_t x216 = INT16_MAX;
static int16_t x221 = INT16_MIN;
uint8_t x222 = UINT8_MAX;
int64_t x230 = -135425816287193094LL;
int8_t x250 = INT8_MIN;
int64_t t48 = -571250407703197664LL;
int8_t x254 = -1;
int32_t x256 = -1;
volatile int16_t x266 = INT16_MAX;
volatile int64_t x267 = INT64_MAX;
volatile int32_t x274 = INT32_MIN;
int8_t x275 = -1;
int32_t t53 = 8060054;
int32_t x281 = -5180;
static uint16_t x288 = 1117U;
volatile int32_t t56 = 84307;
uint16_t x312 = 59U;
volatile int64_t t58 = 2131395LL;
static int64_t x317 = -16979296850232LL;
int64_t t59 = 32999173746LL;
static int64_t x322 = INT64_MIN;
volatile int32_t t62 = -254927;
int64_t t63 = 10768269161LL;
uint16_t x340 = 10U;
int16_t x341 = INT16_MAX;
volatile int32_t t66 = 13929;
int64_t t68 = 331460763865935LL;
volatile int64_t x369 = -10304003124790047LL;
uint32_t x374 = 54633009U;
uint16_t x375 = 1111U;
int32_t t74 = -27;
int16_t x389 = -440;
static volatile uint64_t x390 = 1095651024LLU;
int64_t x393 = -1LL;
int16_t x395 = INT16_MAX;
int64_t t76 = 83488724460579284LL;
static int32_t x398 = 244800668;
static int16_t x399 = INT16_MIN;
int8_t x400 = INT8_MIN;
int16_t x406 = INT16_MIN;
static int32_t x416 = INT32_MIN;
static int8_t x418 = 11;
static volatile int32_t t80 = -6;
int32_t x423 = INT32_MIN;
int64_t x427 = 919319LL;
int8_t x432 = 61;
int16_t x438 = INT16_MIN;
int8_t x439 = 1;
uint16_t x445 = 17U;
static int16_t x446 = -1;
volatile int8_t x449 = INT8_MAX;
int64_t x457 = INT64_MIN;
uint64_t x460 = 2459843LLU;
int8_t x464 = INT8_MIN;
int32_t t89 = -16449;
volatile int64_t x470 = -1LL;
volatile int32_t t93 = 234337446;
int64_t t96 = -130906174983LL;
int16_t x502 = 215;
uint32_t x508 = UINT32_MAX;


void f0(void) {
	int8_t x1 = -1;
	int8_t x2 = INT8_MIN;
	static uint16_t x3 = UINT16_MAX;
	volatile int32_t t0 = -1925;

	t0 = (x1+((x2-x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -23467;
	volatile uint16_t x6 = 444U;
	volatile int32_t t1 = -26272088;

	t1 = (x5+((x6-x7)<x8));

	if (t1 != -23467) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	int8_t x11 = -1;
	static volatile uint32_t x12 = 268328115U;
	volatile int32_t t2 = 20084854;

	t2 = (x9+((x10-x11)<x12));

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = -63;
	int16_t x15 = 578;
	static volatile int32_t t3 = -177;

	t3 = (x13+((x14-x15)<x16));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 2623U;
	volatile uint16_t x18 = 996U;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = -1924919;

	t4 = (x17+((x18-x19)<x20));

	if (t4 != 2624) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -41338856;
	volatile int8_t x26 = -44;
	int32_t x27 = 9601;
	int16_t x28 = -1;
	static int32_t t5 = 93912;

	t5 = (x25+((x26-x27)<x28));

	if (t5 != -41338855) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -33;
	int64_t x30 = -1036604LL;
	uint32_t x31 = 741305U;
	volatile int32_t x32 = 293870;
	int32_t t6 = 248059434;

	t6 = (x29+((x30-x31)<x32));

	if (t6 != -32) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = UINT8_MAX;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = 4620;
	static int32_t t7 = -10863;

	t7 = (x41+((x42-x43)<x44));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	uint32_t x46 = 1852U;
	uint64_t x48 = UINT64_MAX;

	t8 = (x45+((x46-x47)<x48));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = 12952;
	volatile int32_t x50 = 143;
	static uint16_t x51 = 2218U;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t9 = 437201049;

	t9 = (x49+((x50-x51)<x52));

	if (t9 != 12953) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -1LL;
	uint16_t x54 = 989U;
	static uint16_t x55 = 389U;
	volatile int32_t x56 = 2;

	t10 = (x53+((x54-x55)<x56));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x61 = 15102695LLU;
	static int16_t x62 = 6297;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t11 = 18LLU;

	t11 = (x61+((x62-x63)<x64));

	if (t11 != 15102696LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x65 = INT32_MIN;
	uint8_t x66 = 0U;
	uint32_t x67 = 1433U;
	int16_t x68 = INT16_MIN;

	t12 = (x65+((x66-x67)<x68));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x70 = -1;
	volatile uint16_t x71 = UINT16_MAX;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t13 = -4146010;

	t13 = (x69+((x70-x71)<x72));

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t14 = -45;

	t14 = (x77+((x78-x79)<x80));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 6U;
	uint16_t x82 = UINT16_MAX;
	static int64_t x83 = -1LL;
	uint64_t x84 = 713292694580055LLU;
	static uint32_t t15 = 713491U;

	t15 = (x81+((x82-x83)<x84));

	if (t15 != 7U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x85 = INT64_MIN;
	uint16_t x86 = 176U;
	static uint16_t x87 = 1720U;
	uint16_t x88 = 36U;
	int64_t t16 = -62287013731623LL;

	t16 = (x85+((x86-x87)<x88));

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = -1;
	static int32_t x91 = -1;
	static int32_t x92 = INT32_MIN;
	uint64_t t17 = UINT64_MAX;

	t17 = (x89+((x90-x91)<x92));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x94 = UINT64_MAX;
	uint16_t x95 = 106U;
	volatile uint8_t x96 = UINT8_MAX;
	static int32_t t18 = INT32_MIN;

	t18 = (x93+((x94-x95)<x96));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x98 = INT16_MIN;
	int8_t x99 = 0;
	int32_t x100 = -1;

	t19 = (x97+((x98-x99)<x100));

	if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = 0;
	volatile int64_t x104 = -1LL;
	volatile int32_t t20 = -13817597;

	t20 = (x101+((x102-x103)<x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x113 = INT8_MIN;
	uint64_t x114 = 113574607923943950LLU;
	int32_t x115 = -1;
	int64_t x116 = -1LL;
	int32_t t21 = 28925;

	t21 = (x113+((x114-x115)<x116));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x117 = UINT8_MAX;
	static uint64_t x118 = 7161677156301LLU;
	static volatile int16_t x119 = INT16_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile int32_t t22 = -49773154;

	t22 = (x117+((x118-x119)<x120));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x121 = INT16_MIN;
	static int64_t x122 = INT64_MAX;
	uint64_t x123 = 775807LLU;
	int32_t x124 = -1;
	volatile int32_t t23 = 260;

	t23 = (x121+((x122-x123)<x124));

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = 476;
	int8_t x127 = INT8_MIN;
	int16_t x128 = 7;
	int32_t t24 = 4212393;

	t24 = (x125+((x126-x127)<x128));

	if (t24 != 476) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x129 = INT16_MIN;
	uint8_t x132 = 0U;

	t25 = (x129+((x130-x131)<x132));

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x133 = -6;
	static int16_t x134 = INT16_MIN;
	volatile uint8_t x135 = 0U;
	int32_t t26 = -52525;

	t26 = (x133+((x134-x135)<x136));

	if (t26 != -5) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x138 = 9165187824846874LLU;
	int8_t x139 = 56;
	int8_t x140 = -1;

	t27 = (x137+((x138-x139)<x140));

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x145 = 2961U;
	uint8_t x146 = UINT8_MAX;
	int8_t x148 = 0;
	int32_t t28 = 235381;

	t28 = (x145+((x146-x147)<x148));

	if (t28 != 2961) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = -1;
	volatile int16_t x151 = -1;
	uint16_t x152 = 85U;
	int32_t t29 = -218639;

	t29 = (x149+((x150-x151)<x152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = -1;
	int16_t x154 = INT16_MAX;
	volatile uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MIN;
	volatile int32_t t30 = 3649;

	t30 = (x153+((x154-x155)<x156));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x157 = 213LLU;
	int32_t x158 = -1;
	uint8_t x159 = 28U;
	int64_t x160 = INT64_MIN;
	static volatile uint64_t t31 = 96574364960043LLU;

	t31 = (x157+((x158-x159)<x160));

	if (t31 != 213LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MIN;
	int16_t x163 = 2599;
	volatile int64_t x164 = 208LL;
	static volatile int32_t t32 = 0;

	t32 = (x161+((x162-x163)<x164));

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = -1;
	static int64_t x166 = -56498776187LL;
	int32_t x167 = -54393;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t33 = -10;

	t33 = (x165+((x166-x167)<x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int64_t x171 = -1LL;
	uint32_t x172 = 622257U;
	static volatile int32_t t34 = -17;

	t34 = (x169+((x170-x171)<x172));

	if (t34 != 65536) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x179 = 97877081;
	int32_t x180 = 483522430;

	t35 = (x177+((x178-x179)<x180));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x185 = INT16_MAX;
	uint32_t x186 = 459655U;
	static int32_t x187 = INT32_MIN;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t36 = -23320426;

	t36 = (x185+((x186-x187)<x188));

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MIN;
	int64_t x191 = -1LL;
	uint8_t x192 = 15U;

	t37 = (x189+((x190-x191)<x192));

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = -1;
	int8_t x198 = -3;
	int32_t t38 = -75;

	t38 = (x197+((x198-x199)<x200));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	volatile int8_t x203 = -1;
	int64_t x204 = -1LL;
	int32_t t39 = 21960;

	t39 = (x201+((x202-x203)<x204));

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x205 = INT16_MIN;
	static int64_t x206 = -7055702377LL;
	static volatile uint8_t x207 = 6U;
	volatile int32_t t40 = -22721;

	t40 = (x205+((x206-x207)<x208));

	if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x213 = UINT8_MAX;
	static int8_t x214 = INT8_MIN;
	int32_t x215 = 317704;
	volatile int32_t t41 = 238043978;

	t41 = (x213+((x214-x215)<x216));

	if (t41 != 256) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = 0;
	int16_t x219 = 4;
	int16_t x220 = INT16_MAX;
	static int32_t t42 = -2929342;

	t42 = (x217+((x218-x219)<x220));

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x223 = 1U;
	int64_t x224 = 110421920LL;
	volatile int32_t t43 = 0;

	t43 = (x221+((x222-x223)<x224));

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x229 = 3LL;
	int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	int64_t t44 = -319940563LL;

	t44 = (x229+((x230-x231)<x232));

	if (t44 != 3LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = -1;
	static uint8_t x234 = UINT8_MAX;
	uint32_t x235 = 5993948U;
	uint64_t x236 = 2805573614LLU;
	static int32_t t45 = 1;

	t45 = (x233+((x234-x235)<x236));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x237 = 314419256629673471LL;
	int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MAX;
	uint16_t x240 = 230U;
	int64_t t46 = 436977529005LL;

	t46 = (x237+((x238-x239)<x240));

	if (t46 != 314419256629673472LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x241 = -1;
	static int64_t x242 = INT64_MIN;
	int32_t x243 = -1;
	int16_t x244 = INT16_MIN;
	volatile int32_t t47 = -884305;

	t47 = (x241+((x242-x243)<x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = -1LL;
	volatile int64_t x251 = 2685887083329904LL;
	volatile uint32_t x252 = 1216948029U;

	t48 = (x249+((x250-x251)<x252));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x255 = INT64_MIN;
	static uint32_t t49 = UINT32_MAX;

	t49 = (x253+((x254-x255)<x256));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x258 = UINT8_MAX;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 8868249U;
	static int32_t t50 = -90749081;

	t50 = (x257+((x258-x259)<x260));

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = -1;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t51 = -1611;

	t51 = (x265+((x266-x267)<x268));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x273 = -1;
	uint64_t x276 = 44410252261094LLU;
	int32_t t52 = 16282160;

	t52 = (x273+((x274-x275)<x276));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x277 = 15U;
	int32_t x278 = -17195;
	int64_t x279 = 14504075LL;
	uint8_t x280 = 6U;

	t53 = (x277+((x278-x279)<x280));

	if (t53 != 16) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x282 = 9U;
	int16_t x283 = INT16_MIN;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t54 = 394;

	t54 = (x281+((x282-x283)<x284));

	if (t54 != -5179) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x285 = 83U;
	uint16_t x286 = UINT16_MAX;
	uint8_t x287 = 1U;
	static volatile int32_t t55 = 629955240;

	t55 = (x285+((x286-x287)<x288));

	if (t55 != 83) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MAX;
	static int32_t x295 = INT32_MAX;
	static int32_t x296 = INT32_MAX;

	t56 = (x293+((x294-x295)<x296));

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x297 = 32U;
	static int8_t x298 = INT8_MAX;
	static int32_t x299 = -1;
	static volatile int16_t x300 = -14;
	int32_t t57 = -1;

	t57 = (x297+((x298-x299)<x300));

	if (t57 != 32) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = -12470423302LL;
	int16_t x310 = 1;
	static volatile int8_t x311 = -1;

	t58 = (x309+((x310-x311)<x312));

	if (t58 != -12470423301LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x318 = INT8_MAX;
	volatile int16_t x319 = -1;
	static int64_t x320 = INT64_MIN;

	t59 = (x317+((x318-x319)<x320));

	if (t59 != -16979296850232LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x321 = UINT8_MAX;
	int32_t x323 = -7101;
	uint8_t x324 = 2U;
	volatile int32_t t60 = 681;

	t60 = (x321+((x322-x323)<x324));

	if (t60 != 256) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x325 = INT32_MIN;
	volatile int32_t x326 = 503207883;
	static int8_t x327 = INT8_MIN;
	int8_t x328 = -3;
	static int32_t t61 = INT32_MIN;

	t61 = (x325+((x326-x327)<x328));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x329 = 2061493;
	volatile uint32_t x330 = 451901334U;
	int16_t x331 = INT16_MIN;
	static uint16_t x332 = 1795U;

	t62 = (x329+((x330-x331)<x332));

	if (t62 != 2061493) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x333 = 48718687612095204LL;
	int64_t x334 = -1LL;
	static int64_t x335 = INT64_MIN;
	int64_t x336 = 26361264418LL;

	t63 = (x333+((x334-x335)<x336));

	if (t63 != 48718687612095204LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x337 = 15;
	volatile int64_t x338 = INT64_MAX;
	uint16_t x339 = UINT16_MAX;
	volatile int32_t t64 = 871;

	t64 = (x337+((x338-x339)<x340));

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x342 = -1LL;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = 1;
	int32_t t65 = 281544;

	t65 = (x341+((x342-x343)<x344));

	if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x345 = INT16_MIN;
	static volatile int16_t x346 = 10996;
	static int64_t x347 = -458297660LL;
	volatile int64_t x348 = -3228198517468910531LL;

	t66 = (x345+((x346-x347)<x348));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x349 = 218U;
	int16_t x350 = INT16_MAX;
	int16_t x351 = 14;
	volatile uint32_t x352 = 254249241U;
	uint32_t t67 = 9920U;

	t67 = (x349+((x350-x351)<x352));

	if (t67 != 219U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x353 = -7333559061389LL;
	int8_t x354 = -1;
	volatile int32_t x355 = -4;
	uint16_t x356 = 2U;

	t68 = (x353+((x354-x355)<x356));

	if (t68 != -7333559061389LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x361 = 90U;
	int8_t x362 = INT8_MIN;
	uint64_t x363 = UINT64_MAX;
	int16_t x364 = -1;
	static int32_t t69 = 5;

	t69 = (x361+((x362-x363)<x364));

	if (t69 != 91) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x370 = 17238U;
	int8_t x371 = INT8_MIN;
	volatile int64_t x372 = 5536710LL;
	volatile int64_t t70 = -412244188LL;

	t70 = (x369+((x370-x371)<x372));

	if (t70 != -10304003124790046LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x373 = -1;
	int8_t x376 = -1;
	volatile int32_t t71 = 2098;

	t71 = (x373+((x374-x375)<x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x377 = 3007594776425LL;
	int64_t x378 = -1LL;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = -1;
	int64_t t72 = -56339840LL;

	t72 = (x377+((x378-x379)<x380));

	if (t72 != 3007594776426LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x381 = -1;
	int32_t x382 = 0;
	uint32_t x383 = 9U;
	uint8_t x384 = 39U;
	static volatile int32_t t73 = 29;

	t73 = (x381+((x382-x383)<x384));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x385 = -1;
	static volatile int8_t x386 = INT8_MIN;
	int32_t x387 = 40;
	uint64_t x388 = UINT64_MAX;

	t74 = (x385+((x386-x387)<x388));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x391 = 3U;
	int64_t x392 = INT64_MAX;
	volatile int32_t t75 = -1;

	t75 = (x389+((x390-x391)<x392));

	if (t75 != -439) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x394 = -176;
	volatile int8_t x396 = -1;

	t76 = (x393+((x394-x395)<x396));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x397 = 7U;
	int32_t t77 = -804;

	t77 = (x397+((x398-x399)<x400));

	if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x405 = 63278190;
	int8_t x407 = INT8_MIN;
	uint16_t x408 = 720U;
	int32_t t78 = 109938429;

	t78 = (x405+((x406-x407)<x408));

	if (t78 != 63278191) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x413 = INT32_MAX;
	volatile int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x413+((x414-x415)<x416));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x417 = -12;
	int8_t x419 = 6;
	static int16_t x420 = INT16_MIN;

	t80 = (x417+((x418-x419)<x420));

	if (t80 != -12) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x421 = UINT16_MAX;
	uint32_t x422 = 6U;
	volatile int64_t x424 = INT64_MIN;
	static volatile int32_t t81 = -7562;

	t81 = (x421+((x422-x423)<x424));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x425 = 343868;
	volatile int32_t x426 = 39102;
	int8_t x428 = INT8_MAX;
	int32_t t82 = 23968;

	t82 = (x425+((x426-x427)<x428));

	if (t82 != 343869) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x429 = -1;
	static int8_t x430 = INT8_MIN;
	uint16_t x431 = 56U;
	static int32_t t83 = -14;

	t83 = (x429+((x430-x431)<x432));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x433 = 13665;
	static uint16_t x434 = 29U;
	int8_t x435 = INT8_MAX;
	uint16_t x436 = 33U;
	volatile int32_t t84 = 127847871;

	t84 = (x433+((x434-x435)<x436));

	if (t84 != 13666) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x437 = -5740;
	static volatile uint8_t x440 = 8U;
	volatile int32_t t85 = 192858;

	t85 = (x437+((x438-x439)<x440));

	if (t85 != -5739) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x447 = -1;
	volatile uint16_t x448 = 13199U;
	volatile int32_t t86 = 1523;

	t86 = (x445+((x446-x447)<x448));

	if (t86 != 18) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x450 = -46144057;
	uint32_t x451 = 928U;
	int64_t x452 = 217228610114342130LL;
	int32_t t87 = -8746879;

	t87 = (x449+((x450-x451)<x452));

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x458 = INT8_MAX;
	uint64_t x459 = 6436LLU;
	static int64_t t88 = INT64_MIN;

	t88 = (x457+((x458-x459)<x460));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x461 = INT16_MIN;
	static uint64_t x462 = 9LLU;
	volatile int8_t x463 = INT8_MIN;

	t89 = (x461+((x462-x463)<x464));

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x465 = UINT16_MAX;
	volatile int8_t x466 = -1;
	volatile int64_t x467 = -1LL;
	int64_t x468 = -86086514LL;
	int32_t t90 = -8466;

	t90 = (x465+((x466-x467)<x468));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x469 = 693100357LL;
	static int32_t x471 = 1449;
	int64_t x472 = -1LL;
	static volatile int64_t t91 = -31507LL;

	t91 = (x469+((x470-x471)<x472));

	if (t91 != 693100358LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x473 = -1;
	int16_t x474 = INT16_MIN;
	volatile int16_t x475 = -1;
	static uint32_t x476 = 827U;
	static int32_t t92 = 3300;

	t92 = (x473+((x474-x475)<x476));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x477 = 13;
	int16_t x478 = -50;
	volatile int64_t x479 = -2374743615731242699LL;
	int16_t x480 = -3;

	t93 = (x477+((x478-x479)<x480));

	if (t93 != 13) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x481 = INT32_MIN;
	int8_t x482 = -1;
	uint8_t x483 = 14U;
	volatile uint64_t x484 = 25682349780089438LLU;
	int32_t t94 = INT32_MIN;

	t94 = (x481+((x482-x483)<x484));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x485 = 270573166LLU;
	int8_t x486 = 2;
	static int16_t x487 = -868;
	static volatile int16_t x488 = -1;
	volatile uint64_t t95 = 41LLU;

	t95 = (x485+((x486-x487)<x488));

	if (t95 != 270573166LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x493 = -30075720LL;
	int8_t x494 = INT8_MIN;
	static volatile uint32_t x495 = UINT32_MAX;
	volatile int8_t x496 = -6;

	t96 = (x493+((x494-x495)<x496));

	if (t96 != -30075719LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = -1;
	int8_t x503 = -6;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t97 = 27628;

	t97 = (x501+((x502-x503)<x504));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x505 = -24852;
	uint16_t x506 = UINT16_MAX;
	static int16_t x507 = 5;
	int32_t t98 = 1;

	t98 = (x505+((x506-x507)<x508));

	if (t98 != -24851) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x509 = INT16_MIN;
	static uint8_t x510 = 1U;
	static int8_t x511 = INT8_MIN;
	volatile int16_t x512 = 111;
	int32_t t99 = 2573;

	t99 = (x509+((x510-x511)<x512));

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

