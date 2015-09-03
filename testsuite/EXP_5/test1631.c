#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
volatile int64_t x11 = 426212866177079602LL;
static int32_t x12 = -1;
int32_t t2 = 1483497;
int64_t x14 = INT64_MAX;
uint32_t x18 = UINT32_MAX;
int16_t x26 = INT16_MAX;
static volatile int32_t x27 = INT32_MAX;
volatile int32_t t5 = -9;
int64_t x50 = INT64_MIN;
volatile int32_t x51 = 6824629;
int32_t x59 = INT32_MIN;
static int32_t x68 = INT32_MIN;
static volatile uint32_t t10 = 14973U;
uint8_t x70 = UINT8_MAX;
uint64_t x72 = 333944972748LLU;
volatile int64_t x77 = INT64_MAX;
uint16_t x81 = 2U;
static int64_t x82 = -1732735943071080897LL;
uint8_t x92 = 27U;
uint64_t x113 = UINT64_MAX;
int16_t x122 = INT16_MIN;
static int32_t x126 = INT32_MIN;
int32_t x127 = -1;
volatile int16_t x140 = 1;
static int32_t t21 = 3;
int32_t x146 = -4427;
static uint32_t x148 = UINT32_MAX;
volatile int64_t x163 = -2212995952890756LL;
static int8_t x170 = INT8_MIN;
volatile uint16_t x181 = 2U;
uint16_t x187 = 5217U;
static volatile uint32_t t31 = UINT32_MAX;
static uint8_t x209 = UINT8_MAX;
int64_t x220 = 10738688797LL;
volatile int32_t t33 = 22003459;
static int16_t x227 = INT16_MAX;
volatile int8_t x233 = 1;
volatile int32_t t36 = -599111295;
uint8_t x260 = 14U;
int32_t t39 = 1059990;
static int8_t x278 = INT8_MIN;
uint8_t x280 = 16U;
uint16_t x287 = UINT16_MAX;
int32_t x291 = INT32_MIN;
static uint8_t x310 = UINT8_MAX;
int64_t x312 = 832819113709783921LL;
static int8_t x319 = INT8_MIN;
volatile int8_t x323 = 6;
int8_t x324 = INT8_MIN;
int16_t x328 = INT16_MIN;
int8_t x335 = 6;
uint32_t t49 = 1899695U;
int16_t x337 = INT16_MAX;
uint64_t x338 = 3574355096LLU;
int64_t x340 = INT64_MIN;
int32_t x342 = INT32_MAX;
static uint64_t x344 = 8434870585178994663LLU;
int8_t x361 = 0;
int64_t x363 = INT64_MIN;
volatile uint64_t t55 = 246337LLU;
volatile uint32_t x385 = 672641U;
int32_t t58 = -39771185;
uint8_t x403 = 12U;
volatile int32_t t60 = 969536;
uint64_t t61 = 1067300045LLU;
uint32_t x418 = UINT32_MAX;
uint8_t x420 = UINT8_MAX;
int8_t x421 = 0;
uint32_t x425 = 35178U;
int64_t x429 = 53372470289490175LL;
int64_t x450 = -62455836LL;
int8_t x463 = -1;
uint16_t x483 = 0U;
volatile int32_t t71 = 98280316;
int32_t x524 = 32991303;
static uint64_t t74 = 7462220LLU;
volatile uint64_t t77 = 1LLU;
volatile uint16_t x547 = UINT16_MAX;
volatile int64_t t79 = INT64_MAX;
int64_t x553 = INT64_MAX;
static volatile int64_t t80 = INT64_MAX;
int64_t x571 = -3372550737604213713LL;
static uint64_t x572 = 648LLU;
volatile int32_t t84 = -4174329;
int64_t x599 = -46046739985297432LL;
uint64_t x600 = 149715338522LLU;
volatile int32_t t85 = -1823;
static int32_t x601 = 24442;
volatile uint32_t x607 = UINT32_MAX;
volatile uint32_t t87 = 214558U;
uint64_t x609 = 17607055518941822LLU;
int16_t x611 = INT16_MIN;
volatile int8_t x623 = 0;
int64_t x631 = INT64_MIN;
int16_t x641 = 51;
int8_t x644 = INT8_MIN;
int32_t t92 = -855;
uint32_t x646 = 20U;
int8_t x658 = INT8_MAX;
int16_t x679 = 113;
uint32_t x680 = UINT32_MAX;
volatile int32_t t96 = 63;
static volatile uint8_t x697 = 0U;
static int32_t t97 = -213707025;


void f0(void) {
	uint16_t x1 = 9905U;
	int16_t x2 = -11832;
	uint16_t x4 = 441U;
	int32_t t0 = -542769;

	t0 = (x1<<((x2<=x3)<x4));

	if (t0 != 19810) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	static int8_t x6 = -1;
	static uint64_t x7 = UINT64_MAX;
	int8_t x8 = -3;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5<<((x6<=x7)<x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 198U;
	uint32_t x10 = 1U;

	t2 = (x9<<((x10<=x11)<x12));

	if (t2 != 198) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 9695;
	uint64_t x15 = 3397374LLU;
	volatile int64_t x16 = -1LL;
	int32_t t3 = 3;

	t3 = (x13<<((x14<=x15)<x16));

	if (t3 != 9695) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 131775002;

	t4 = (x17<<((x18<=x19)<x20));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x25 = INT8_MAX;
	volatile int64_t x28 = INT64_MAX;

	t5 = (x25<<((x26<=x27)<x28));

	if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x41 = INT16_MAX;
	int16_t x42 = -3;
	uint32_t x43 = UINT32_MAX;
	volatile uint64_t x44 = UINT64_MAX;
	static volatile int32_t t6 = 691493;

	t6 = (x41<<((x42<=x43)<x44));

	if (t6 != 65534) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = 204;
	volatile int64_t x52 = INT64_MAX;
	static int32_t t7 = 2;

	t7 = (x49<<((x50<=x51)<x52));

	if (t7 != 408) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	static uint64_t t8 = UINT64_MAX;

	t8 = (x57<<((x58<=x59)<x60));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x61 = UINT16_MAX;
	static int32_t x62 = -1;
	static volatile int32_t x63 = -6340392;
	uint16_t x64 = 1U;
	volatile int32_t t9 = 32;

	t9 = (x61<<((x62<=x63)<x64));

	if (t9 != 131070) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x65 = 1038164335U;
	volatile int64_t x66 = -119740817471619LL;
	static int16_t x67 = -1;

	t10 = (x65<<((x66<=x67)<x68));

	if (t10 != 1038164335U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x69 = 202552U;
	volatile int16_t x71 = INT16_MAX;
	volatile uint32_t t11 = 333757U;

	t11 = (x69<<((x70<=x71)<x72));

	if (t11 != 405104U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x78 = 99U;
	int64_t x79 = INT64_MIN;
	static int32_t x80 = -41059;
	static int64_t t12 = INT64_MAX;

	t12 = (x77<<((x78<=x79)<x80));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x83 = INT64_MIN;
	uint8_t x84 = 2U;
	static volatile int32_t t13 = -5;

	t13 = (x81<<((x82<=x83)<x84));

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x89 = INT8_MAX;
	static int8_t x90 = INT8_MAX;
	volatile int64_t x91 = -1LL;
	int32_t t14 = -17385154;

	t14 = (x89<<((x90<=x91)<x92));

	if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x101 = 2U;
	int64_t x102 = -1LL;
	int8_t x103 = INT8_MAX;
	int8_t x104 = 5;
	static volatile int32_t t15 = 6716;

	t15 = (x101<<((x102<=x103)<x104));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x109 = 46U;
	int16_t x110 = -1;
	int64_t x111 = -1LL;
	volatile uint8_t x112 = UINT8_MAX;
	uint32_t t16 = 153153U;

	t16 = (x109<<((x110<=x111)<x112));

	if (t16 != 92U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x114 = UINT8_MAX;
	int8_t x115 = INT8_MIN;
	volatile int16_t x116 = 127;
	uint64_t t17 = 145733LLU;

	t17 = (x113<<((x114<=x115)<x116));

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x121 = 431095LLU;
	int64_t x123 = -1LL;
	int8_t x124 = -1;
	static uint64_t t18 = 53634LLU;

	t18 = (x121<<((x122<=x123)<x124));

	if (t18 != 431095LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x125 = 11821U;
	int16_t x128 = -1;
	int32_t t19 = 3778;

	t19 = (x125<<((x126<=x127)<x128));

	if (t19 != 11821) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = 3;
	int32_t x138 = 287197155;
	static int16_t x139 = INT16_MIN;
	int32_t t20 = -63724222;

	t20 = (x137<<((x138<=x139)<x140));

	if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x141 = 12U;
	static int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MAX;
	volatile uint64_t x144 = 3078862735LLU;

	t21 = (x141<<((x142<=x143)<x144));

	if (t21 != 24) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x145 = UINT32_MAX;
	uint8_t x147 = 0U;
	uint32_t t22 = 56435U;

	t22 = (x145<<((x146<=x147)<x148));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x149 = 351811LL;
	static uint16_t x150 = UINT16_MAX;
	int8_t x151 = -1;
	int64_t x152 = INT64_MAX;
	int64_t t23 = -291972323898015836LL;

	t23 = (x149<<((x150<=x151)<x152));

	if (t23 != 703622LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x154 = INT16_MIN;
	volatile int16_t x155 = -2506;
	int32_t x156 = -1;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x153<<((x154<=x155)<x156));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x161 = 17;
	int8_t x162 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	volatile int32_t t25 = 990235440;

	t25 = (x161<<((x162<=x163)<x164));

	if (t25 != 17) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x169 = 309U;
	int64_t x171 = 237934261814038LL;
	volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t26 = 559470610;

	t26 = (x169<<((x170<=x171)<x172));

	if (t26 != 618) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x177 = 46457348081LL;
	static uint64_t x178 = 22LLU;
	volatile int32_t x179 = -1;
	uint16_t x180 = 25974U;
	int64_t t27 = 278294455661691387LL;

	t27 = (x177<<((x178<=x179)<x180));

	if (t27 != 92914696162LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x182 = INT16_MAX;
	int16_t x183 = 13753;
	int32_t x184 = INT32_MIN;
	volatile int32_t t28 = 481226452;

	t28 = (x181<<((x182<=x183)<x184));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x185 = 1851U;
	int64_t x186 = INT64_MAX;
	uint16_t x188 = 29840U;
	int32_t t29 = 3847109;

	t29 = (x185<<((x186<=x187)<x188));

	if (t29 != 3702) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x189 = INT8_MAX;
	int16_t x190 = -1;
	static uint8_t x191 = 1U;
	volatile int32_t x192 = INT32_MIN;
	int32_t t30 = -526369232;

	t30 = (x189<<((x190<=x191)<x192));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x193 = UINT32_MAX;
	int8_t x194 = INT8_MIN;
	static int8_t x195 = 4;
	volatile int64_t x196 = -1LL;

	t31 = (x193<<((x194<=x195)<x196));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x210 = INT32_MAX;
	int8_t x211 = -1;
	int64_t x212 = 463435201LL;
	int32_t t32 = -1;

	t32 = (x209<<((x210<=x211)<x212));

	if (t32 != 510) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x217 = INT16_MAX;
	volatile uint32_t x218 = 3890U;
	uint64_t x219 = 150LLU;

	t33 = (x217<<((x218<=x219)<x220));

	if (t33 != 65534) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	int8_t x222 = INT8_MIN;
	uint8_t x223 = 19U;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t34 = 1269;

	t34 = (x221<<((x222<=x223)<x224));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x225 = INT8_MAX;
	int64_t x226 = -2475893637947555187LL;
	uint32_t x228 = 50U;
	static int32_t t35 = -2;

	t35 = (x225<<((x226<=x227)<x228));

	if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x234 = 15021891619028LLU;
	int16_t x235 = INT16_MIN;
	static int8_t x236 = INT8_MAX;

	t36 = (x233<<((x234<=x235)<x236));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x241 = 0U;
	static volatile int32_t x242 = 19;
	int16_t x243 = INT16_MAX;
	volatile int32_t x244 = -1;
	uint32_t t37 = 38U;

	t37 = (x241<<((x242<=x243)<x244));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x249 = 2U;
	volatile int16_t x250 = -1;
	volatile int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t38 = 33916;

	t38 = (x249<<((x250<=x251)<x252));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x257 = 646889110;
	static uint32_t x258 = 1002U;
	uint8_t x259 = 114U;

	t39 = (x257<<((x258<=x259)<x260));

	if (t39 != 1293778220) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x269 = 12;
	uint16_t x270 = UINT16_MAX;
	int32_t x271 = INT32_MAX;
	uint64_t x272 = 367510623313121826LLU;
	volatile int32_t t40 = -60;

	t40 = (x269<<((x270<=x271)<x272));

	if (t40 != 24) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x273 = 28U;
	uint8_t x274 = 3U;
	static uint64_t x275 = 11755LLU;
	int64_t x276 = -1LL;
	int32_t t41 = -1178778;

	t41 = (x273<<((x274<=x275)<x276));

	if (t41 != 28) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x277 = 11337U;
	uint16_t x279 = 882U;
	int32_t t42 = 32356;

	t42 = (x277<<((x278<=x279)<x280));

	if (t42 != 22674) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x285 = INT16_MAX;
	int64_t x286 = 1498150326851006941LL;
	uint16_t x288 = 29U;
	int32_t t43 = -51173358;

	t43 = (x285<<((x286<=x287)<x288));

	if (t43 != 65534) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x289 = 6609U;
	int8_t x290 = 2;
	uint64_t x292 = 105402689128269686LLU;
	int32_t t44 = 239522598;

	t44 = (x289<<((x290<=x291)<x292));

	if (t44 != 13218) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x309 = 3U;
	uint64_t x311 = 1193867LLU;
	int32_t t45 = -1867;

	t45 = (x309<<((x310<=x311)<x312));

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x317 = INT16_MAX;
	int32_t x318 = -1093527;
	volatile int8_t x320 = INT8_MAX;
	int32_t t46 = 0;

	t46 = (x317<<((x318<=x319)<x320));

	if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x321 = 524U;
	volatile int32_t x322 = INT32_MIN;
	volatile int32_t t47 = -4;

	t47 = (x321<<((x322<=x323)<x324));

	if (t47 != 524) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MIN;
	uint8_t x327 = UINT8_MAX;
	int64_t t48 = INT64_MAX;

	t48 = (x325<<((x326<=x327)<x328));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x333 = 15872U;
	static int16_t x334 = 2;
	volatile int64_t x336 = INT64_MIN;

	t49 = (x333<<((x334<=x335)<x336));

	if (t49 != 15872U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x339 = INT8_MIN;
	volatile int32_t t50 = 30129;

	t50 = (x337<<((x338<=x339)<x340));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x341 = 1003;
	int8_t x343 = INT8_MAX;
	static volatile int32_t t51 = 6;

	t51 = (x341<<((x342<=x343)<x344));

	if (t51 != 2006) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x345 = INT16_MAX;
	int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MAX;
	static int16_t x348 = 14;
	volatile int32_t t52 = -65479398;

	t52 = (x345<<((x346<=x347)<x348));

	if (t52 != 65534) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x349 = 55U;
	volatile int16_t x350 = -3;
	volatile int32_t x351 = INT32_MIN;
	static int32_t x352 = -11247900;
	static int32_t t53 = 62167;

	t53 = (x349<<((x350<=x351)<x352));

	if (t53 != 55) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x362 = -1LL;
	int64_t x364 = INT64_MIN;
	static int32_t t54 = -4;

	t54 = (x361<<((x362<=x363)<x364));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x365 = 18334LLU;
	uint32_t x366 = 97U;
	int16_t x367 = INT16_MIN;
	int8_t x368 = -1;

	t55 = (x365<<((x366<=x367)<x368));

	if (t55 != 18334LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x377 = 404;
	static int64_t x378 = 4LL;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MAX;
	volatile int32_t t56 = -1;

	t56 = (x377<<((x378<=x379)<x380));

	if (t56 != 808) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x386 = 101216590;
	uint32_t x387 = 42U;
	int16_t x388 = 1;
	volatile uint32_t t57 = 13343U;

	t57 = (x385<<((x386<=x387)<x388));

	if (t57 != 1345282U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x397 = 5449U;
	int8_t x398 = INT8_MIN;
	volatile int16_t x399 = -1;
	volatile int8_t x400 = -1;

	t58 = (x397<<((x398<=x399)<x400));

	if (t58 != 5449) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x401 = 6;
	int8_t x402 = INT8_MAX;
	int16_t x404 = INT16_MIN;
	int32_t t59 = 997294746;

	t59 = (x401<<((x402<=x403)<x404));

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x405 = 128439;
	static uint16_t x406 = 625U;
	int16_t x407 = -302;
	int64_t x408 = -1LL;

	t60 = (x405<<((x406<=x407)<x408));

	if (t60 != 128439) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x409 = 259861LLU;
	uint64_t x410 = UINT64_MAX;
	volatile int64_t x411 = INT64_MIN;
	volatile int32_t x412 = -625797;

	t61 = (x409<<((x410<=x411)<x412));

	if (t61 != 259861LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x417 = 14U;
	volatile int64_t x419 = -14298337413579LL;
	int32_t t62 = 2;

	t62 = (x417<<((x418<=x419)<x420));

	if (t62 != 28) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x422 = 3;
	volatile int16_t x423 = INT16_MIN;
	volatile int32_t x424 = 166120;
	volatile int32_t t63 = -10564;

	t63 = (x421<<((x422<=x423)<x424));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x426 = INT8_MIN;
	uint8_t x427 = 6U;
	volatile int32_t x428 = INT32_MIN;
	uint32_t t64 = 13U;

	t64 = (x425<<((x426<=x427)<x428));

	if (t64 != 35178U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x430 = INT16_MIN;
	volatile uint64_t x431 = 23235439LLU;
	volatile int64_t x432 = INT64_MIN;
	int64_t t65 = 497062517690LL;

	t65 = (x429<<((x430<=x431)<x432));

	if (t65 != 53372470289490175LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x445 = INT32_MAX;
	int8_t x446 = INT8_MIN;
	static int8_t x447 = -1;
	uint8_t x448 = 0U;
	int32_t t66 = INT32_MAX;

	t66 = (x445<<((x446<=x447)<x448));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x449 = UINT64_MAX;
	volatile int64_t x451 = 1054917430273606LL;
	int16_t x452 = 9646;
	volatile uint64_t t67 = 94088388015LLU;

	t67 = (x449<<((x450<=x451)<x452));

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x461 = 3934468LLU;
	int32_t x462 = -4639822;
	uint32_t x464 = UINT32_MAX;
	static uint64_t t68 = 5LLU;

	t68 = (x461<<((x462<=x463)<x464));

	if (t68 != 7868936LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x465 = 1412766543LLU;
	static volatile int16_t x466 = INT16_MAX;
	static int8_t x467 = -1;
	static int64_t x468 = -1LL;
	static volatile uint64_t t69 = 1640259161LLU;

	t69 = (x465<<((x466<=x467)<x468));

	if (t69 != 1412766543LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x469 = 5472;
	static int16_t x470 = INT16_MIN;
	int64_t x471 = INT64_MIN;
	int64_t x472 = 1337LL;
	int32_t t70 = 1468738;

	t70 = (x469<<((x470<=x471)<x472));

	if (t70 != 10944) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x481 = 15U;
	int8_t x482 = INT8_MIN;
	static uint8_t x484 = UINT8_MAX;

	t71 = (x481<<((x482<=x483)<x484));

	if (t71 != 30) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x485 = UINT64_MAX;
	int16_t x486 = INT16_MIN;
	volatile int64_t x487 = 10312721499144LL;
	int64_t x488 = INT64_MIN;
	uint64_t t72 = UINT64_MAX;

	t72 = (x485<<((x486<=x487)<x488));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x505 = INT64_MAX;
	int32_t x506 = INT32_MIN;
	static uint16_t x507 = UINT16_MAX;
	int64_t x508 = INT64_MIN;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x505<<((x506<=x507)<x508));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x521 = 52951214LLU;
	static uint16_t x522 = 4032U;
	volatile uint16_t x523 = 0U;

	t74 = (x521<<((x522<=x523)<x524));

	if (t74 != 105902428LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x525 = 0;
	static int8_t x526 = INT8_MIN;
	int8_t x527 = -13;
	int8_t x528 = -1;
	int32_t t75 = 21;

	t75 = (x525<<((x526<=x527)<x528));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x529 = 28259897685278LLU;
	volatile int32_t x530 = 53309;
	static int64_t x531 = INT64_MIN;
	volatile int32_t x532 = INT32_MIN;
	static volatile uint64_t t76 = 293676LLU;

	t76 = (x529<<((x530<=x531)<x532));

	if (t76 != 28259897685278LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x533 = 2LLU;
	uint64_t x534 = UINT64_MAX;
	int32_t x535 = INT32_MAX;
	volatile int64_t x536 = -1LL;

	t77 = (x533<<((x534<=x535)<x536));

	if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x541 = 20442LLU;
	volatile int8_t x542 = -58;
	static volatile int8_t x543 = INT8_MIN;
	volatile int16_t x544 = 0;
	uint64_t t78 = 256753871633LLU;

	t78 = (x541<<((x542<=x543)<x544));

	if (t78 != 20442LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x545 = INT64_MAX;
	volatile int32_t x546 = 105;
	int32_t x548 = -1;

	t79 = (x545<<((x546<=x547)<x548));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x554 = INT32_MIN;
	int16_t x555 = -1;
	static int64_t x556 = INT64_MIN;

	t80 = (x553<<((x554<=x555)<x556));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x557 = UINT16_MAX;
	static int32_t x558 = 1005463894;
	static int8_t x559 = INT8_MIN;
	static uint8_t x560 = 1U;
	int32_t t81 = 914;

	t81 = (x557<<((x558<=x559)<x560));

	if (t81 != 131070) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x569 = 1U;
	int8_t x570 = -1;
	volatile uint32_t t82 = 2046981689U;

	t82 = (x569<<((x570<=x571)<x572));

	if (t82 != 2U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x581 = 1U;
	uint32_t x582 = UINT32_MAX;
	static int16_t x583 = 1;
	uint16_t x584 = 1565U;
	int32_t t83 = -27;

	t83 = (x581<<((x582<=x583)<x584));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x585 = UINT16_MAX;
	int32_t x586 = -1;
	volatile uint8_t x587 = 1U;
	uint64_t x588 = 865956668565LLU;

	t84 = (x585<<((x586<=x587)<x588));

	if (t84 != 131070) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x597 = 15U;
	volatile int64_t x598 = INT64_MIN;

	t85 = (x597<<((x598<=x599)<x600));

	if (t85 != 30) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x602 = INT16_MIN;
	volatile uint16_t x603 = 819U;
	int32_t x604 = 10;
	int32_t t86 = -388;

	t86 = (x601<<((x602<=x603)<x604));

	if (t86 != 48884) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x605 = 47U;
	static uint8_t x606 = 6U;
	int64_t x608 = INT64_MIN;

	t87 = (x605<<((x606<=x607)<x608));

	if (t87 != 47U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x610 = 77U;
	static uint32_t x612 = 946495711U;
	static uint64_t t88 = 1LLU;

	t88 = (x609<<((x610<=x611)<x612));

	if (t88 != 35214111037883644LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x613 = INT64_MAX;
	int32_t x614 = INT32_MIN;
	volatile uint8_t x615 = 49U;
	uint8_t x616 = 0U;
	volatile int64_t t89 = INT64_MAX;

	t89 = (x613<<((x614<=x615)<x616));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x621 = UINT16_MAX;
	int64_t x622 = INT64_MIN;
	int8_t x624 = INT8_MIN;
	volatile int32_t t90 = 462;

	t90 = (x621<<((x622<=x623)<x624));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x629 = 80141347912LL;
	int32_t x630 = INT32_MAX;
	int8_t x632 = INT8_MAX;
	volatile int64_t t91 = -105681609LL;

	t91 = (x629<<((x630<=x631)<x632));

	if (t91 != 160282695824LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x642 = INT64_MAX;
	int16_t x643 = -25;

	t92 = (x641<<((x642<=x643)<x644));

	if (t92 != 51) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x645 = 75U;
	volatile int64_t x647 = -392585LL;
	int8_t x648 = -4;
	volatile uint32_t t93 = 24922U;

	t93 = (x645<<((x646<=x647)<x648));

	if (t93 != 75U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x649 = 33U;
	static int8_t x650 = -1;
	static int32_t x651 = 712946853;
	int32_t x652 = -1;
	static volatile int32_t t94 = 84;

	t94 = (x649<<((x650<=x651)<x652));

	if (t94 != 33) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x657 = 1075323034LL;
	int32_t x659 = INT32_MIN;
	uint64_t x660 = 80305792948640589LLU;
	int64_t t95 = -496711723658LL;

	t95 = (x657<<((x658<=x659)<x660));

	if (t95 != 2150646068LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x677 = 2120;
	int16_t x678 = 6;

	t96 = (x677<<((x678<=x679)<x680));

	if (t96 != 4240) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x698 = 777353U;
	int32_t x699 = 257234;
	int8_t x700 = -24;

	t97 = (x697<<((x698<=x699)<x700));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x701 = 176U;
	int16_t x702 = INT16_MIN;
	static int16_t x703 = INT16_MIN;
	int64_t x704 = INT64_MIN;
	volatile uint32_t t98 = 170658984U;

	t98 = (x701<<((x702<=x703)<x704));

	if (t98 != 176U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x705 = 5941LLU;
	volatile int32_t x706 = INT32_MIN;
	int16_t x707 = -1;
	int16_t x708 = INT16_MAX;
	volatile uint64_t t99 = 636489405019952538LLU;

	t99 = (x705<<((x706<=x707)<x708));

	if (t99 != 11882LLU) { NG(); } else { ; }
	
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

