#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
uint8_t x22 = 1U;
static int16_t x24 = -1;
uint16_t x32 = 4735U;
volatile uint64_t t4 = 6130814430LLU;
uint64_t t5 = 37342154474725712LLU;
volatile uint16_t x52 = 1U;
int16_t x59 = -1;
int64_t x66 = -26541246592LL;
volatile int32_t t11 = -54;
volatile int8_t x74 = INT8_MIN;
uint64_t x78 = 741422LLU;
int64_t x81 = INT64_MIN;
int8_t x109 = -14;
static int32_t x126 = -1;
static volatile int64_t t22 = 618013LL;
int32_t x148 = -1;
volatile int32_t x149 = -594254635;
volatile uint16_t x160 = UINT16_MAX;
uint64_t t27 = 138200070167LLU;
int16_t x186 = -1;
volatile int16_t x212 = -451;
int8_t x213 = INT8_MIN;
int16_t x216 = INT16_MIN;
uint16_t x219 = 3U;
uint8_t x220 = 13U;
uint64_t t34 = 11883838LLU;
uint8_t x230 = 0U;
volatile int32_t t36 = -1;
uint32_t x236 = 1805U;
static int64_t t39 = 21820358LL;
uint64_t t40 = 939394LLU;
static volatile int16_t x249 = -1;
static uint64_t x252 = UINT64_MAX;
int16_t x257 = INT16_MIN;
uint8_t x277 = 21U;
uint16_t x283 = 6U;
uint64_t x284 = 237539040LLU;
uint8_t x299 = UINT8_MAX;
int16_t x308 = INT16_MIN;
volatile int8_t x312 = INT8_MIN;
int8_t x317 = INT8_MIN;
int16_t x321 = -1;
static volatile int8_t x322 = INT8_MIN;
uint32_t x326 = UINT32_MAX;
int16_t x327 = -1;
int16_t x331 = -1;
uint64_t t56 = 1966LLU;
static int8_t x338 = -1;
int8_t x346 = 14;
int64_t x349 = INT64_MIN;
int16_t x362 = 2;
static uint32_t x364 = 28519646U;
int8_t x367 = -1;
uint16_t x370 = UINT16_MAX;
int64_t t64 = -755LL;
static int32_t x377 = INT32_MAX;
int16_t x379 = INT16_MAX;
static int32_t x381 = INT32_MAX;
volatile uint8_t x382 = 112U;
int16_t x383 = 128;
static int32_t x387 = -1;
int64_t x389 = INT64_MAX;
static volatile uint64_t t68 = 1201973LLU;
uint8_t x406 = 11U;
static int64_t t70 = 14389533466LL;
static int8_t x409 = -1;
int16_t x410 = INT16_MIN;
static volatile uint32_t t71 = 4611730U;
static uint16_t x414 = UINT16_MAX;
uint32_t t72 = 5733U;
int64_t x417 = INT64_MIN;
volatile int16_t x420 = INT16_MIN;
volatile int64_t x422 = INT64_MIN;
uint8_t x425 = 2U;
static uint32_t x430 = 144879904U;
static int64_t x434 = -1LL;
int64_t x435 = 5216587544024LL;
int32_t x440 = -1;
int16_t x442 = INT16_MIN;
int32_t x445 = -1;
volatile uint64_t t80 = 555538967312292358LLU;
int8_t x453 = -1;
static int16_t x454 = INT16_MIN;
int8_t x455 = 3;
int64_t x468 = INT64_MIN;
static uint16_t x469 = UINT16_MAX;
uint16_t x472 = 298U;
int32_t t84 = -6747;
int32_t x484 = -1;
uint64_t x492 = UINT64_MAX;
volatile int32_t t89 = -97;
int8_t x509 = -1;
volatile int16_t x512 = INT16_MIN;
uint64_t x522 = UINT64_MAX;
static volatile uint16_t x525 = UINT16_MAX;
int32_t x535 = 223495101;
volatile int32_t x537 = -10054;
volatile int32_t x538 = INT32_MIN;
int8_t x548 = -15;
int16_t x551 = 11338;
static uint8_t x552 = UINT8_MAX;


void f0(void) {
	int16_t x1 = -1;
	volatile uint32_t x2 = UINT32_MAX;
	volatile uint64_t x3 = 15118629066597LLU;
	volatile uint64_t t0 = 139559LLU;

	t0 = ((x1^x2)&(x3*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 750860053;
	static int64_t x10 = -1LL;
	int8_t x11 = 1;
	static int32_t x12 = -1;
	int64_t t1 = 24500130465LL;

	t1 = ((x9^x10)&(x11*x12));

	if (t1 != -750860054LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = UINT64_MAX;
	int64_t x14 = -1153352842308LL;
	int32_t x15 = 210174;
	int16_t x16 = -1;
	uint64_t t2 = 2046164888LLU;

	t2 = ((x13^x14)&(x15*x16));

	if (t2 != 1153352632322LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x21 = 1309U;
	static int8_t x23 = INT8_MAX;
	volatile int32_t t3 = -171132;

	t3 = ((x21^x22)&(x23*x24));

	if (t3 != 1280) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = -1;
	int8_t x30 = 0;
	uint64_t x31 = 4678LLU;

	t4 = ((x29^x30)&(x31*x32));

	if (t4 != 22150330LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = 1423U;
	uint64_t x34 = 58765914LLU;
	static int16_t x35 = INT16_MIN;
	static int8_t x36 = -1;

	t5 = ((x33^x34)&(x35*x36));

	if (t5 != 32768LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x37 = -1LL;
	volatile uint32_t x38 = UINT32_MAX;
	int8_t x39 = -1;
	static volatile uint16_t x40 = UINT16_MAX;
	volatile int64_t t6 = 2679337003429680LL;

	t6 = ((x37^x38)&(x39*x40));

	if (t6 != -4294967296LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x49 = -1;
	int32_t x50 = INT32_MAX;
	static int16_t x51 = -1695;
	volatile int32_t t7 = INT32_MIN;

	t7 = ((x49^x50)&(x51*x52));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x57 = INT32_MIN;
	int8_t x58 = 12;
	int16_t x60 = -1;
	volatile int32_t t8 = 1;

	t8 = ((x57^x58)&(x59*x60));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MIN;
	static int32_t x62 = -1;
	volatile int16_t x63 = -1;
	int64_t x64 = -1LL;
	volatile int64_t t9 = 200362063011477200LL;

	t9 = ((x61^x62)&(x63*x64));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x65 = INT16_MAX;
	volatile int16_t x67 = -1;
	static int8_t x68 = -2;
	int64_t t10 = -238322112815199LL;

	t10 = ((x65^x66)&(x67*x68));

	if (t10 != 2LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MAX;
	int16_t x70 = INT16_MIN;
	volatile int16_t x71 = 10;
	int16_t x72 = INT16_MIN;

	t11 = ((x69^x70)&(x71*x72));

	if (t11 != -327680) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x73 = 13U;
	int16_t x75 = 15299;
	static uint16_t x76 = 1U;
	volatile int32_t t12 = -40220;

	t12 = ((x73^x74)&(x75*x76));

	if (t12 != 15233) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = 1043643LLU;
	static int8_t x79 = 2;
	static int64_t x80 = -150082128936632725LL;
	volatile uint64_t t13 = 3LLU;

	t13 = ((x77^x78)&(x79*x80));

	if (t13 != 48276LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x82 = UINT16_MAX;
	volatile int8_t x83 = INT8_MAX;
	static uint32_t x84 = 7U;
	volatile int64_t t14 = 45245031022LL;

	t14 = ((x81^x82)&(x83*x84));

	if (t14 != 889LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x89 = INT64_MIN;
	int64_t x90 = -13702795133425067LL;
	int16_t x91 = INT16_MIN;
	uint16_t x92 = UINT16_MAX;
	int64_t t15 = 199330773924274574LL;

	t15 = ((x89^x90)&(x91*x92));

	if (t15 != 9209669240049631232LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x93 = INT8_MIN;
	static volatile int8_t x94 = -51;
	int16_t x95 = INT16_MIN;
	int64_t x96 = 30LL;
	int64_t t16 = 0LL;

	t16 = ((x93^x94)&(x95*x96));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = -7;
	uint64_t x98 = UINT64_MAX;
	int64_t x99 = 13645929247062LL;
	int8_t x100 = 29;
	uint64_t t17 = 22001LLU;

	t17 = ((x97^x98)&(x99*x100));

	if (t17 != 6LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = INT8_MIN;
	volatile uint16_t x106 = 3966U;
	int16_t x107 = -74;
	int8_t x108 = INT8_MAX;
	volatile int32_t t18 = -50683;

	t18 = ((x105^x106)&(x107*x108));

	if (t18 != -12214) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x110 = INT32_MIN;
	uint8_t x111 = 0U;
	int8_t x112 = INT8_MIN;
	int32_t t19 = -1;

	t19 = ((x109^x110)&(x111*x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x125 = 117U;
	volatile int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MAX;
	int32_t t20 = -26;

	t20 = ((x125^x126)&(x127*x128));

	if (t20 != -16256) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x133 = UINT8_MAX;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = UINT64_MAX;
	static volatile int32_t x136 = 137;
	volatile uint64_t t21 = 469710500LLU;

	t21 = ((x133^x134)&(x135*x136));

	if (t21 != 18446744073709551479LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x137 = INT32_MIN;
	volatile int64_t x138 = 251417757LL;
	int16_t x139 = -1;
	uint16_t x140 = UINT16_MAX;

	t22 = ((x137^x138)&(x139*x140));

	if (t22 != -1896087551LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x145 = INT32_MIN;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MAX;
	static volatile int32_t t23 = 305;

	t23 = ((x145^x146)&(x147*x148));

	if (t23 != -2147418239) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x150 = 17U;
	volatile int32_t x151 = -1;
	int16_t x152 = 321;
	static uint32_t t24 = 5906U;

	t24 = ((x149^x150)&(x151*x152));

	if (t24 != 3700712580U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x157 = -1;
	int8_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int32_t t25 = 11614;

	t25 = ((x157^x158)&(x159*x160));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x161 = 503U;
	static int32_t x162 = INT32_MIN;
	static uint16_t x163 = 58U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = ((x161^x162)&(x163*x164));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x177 = 608815LLU;
	int8_t x178 = INT8_MAX;
	static volatile int16_t x179 = INT16_MAX;
	int8_t x180 = INT8_MIN;

	t27 = ((x177^x178)&(x179*x180));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x181 = 908518;
	volatile uint32_t x182 = 360746U;
	int16_t x183 = INT16_MAX;
	volatile uint8_t x184 = 20U;
	volatile uint32_t t28 = 157U;

	t28 = ((x181^x182)&(x183*x184));

	if (t28 != 548300U) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x185 = -1;
	int64_t x187 = -37981802LL;
	uint8_t x188 = UINT8_MAX;
	volatile int64_t t29 = 16LL;

	t29 = ((x185^x186)&(x187*x188));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = INT16_MIN;
	static uint8_t x190 = UINT8_MAX;
	uint16_t x191 = 18086U;
	int16_t x192 = INT16_MAX;
	static int32_t t30 = -277092;

	t30 = ((x189^x190)&(x191*x192));

	if (t30 != 592609370) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x193 = UINT32_MAX;
	uint32_t x194 = 8606854U;
	uint16_t x195 = UINT16_MAX;
	uint64_t x196 = 970LLU;
	static volatile uint64_t t31 = 980218456127LLU;

	t31 = ((x193^x194)&(x195*x196));

	if (t31 != 55093296LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x209 = 645385U;
	int16_t x210 = INT16_MAX;
	volatile int64_t x211 = -1LL;
	volatile int64_t t32 = -333088393303837LL;

	t32 = ((x209^x210)&(x211*x212));

	if (t32 != 194LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x214 = -8189;
	uint64_t x215 = UINT64_MAX;
	uint64_t t33 = 1669550488289275525LLU;

	t33 = ((x213^x214)&(x215*x216));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x217 = INT16_MIN;
	static uint64_t x218 = 0LLU;

	t34 = ((x217^x218)&(x219*x220));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = INT16_MIN;
	int64_t x223 = 297LL;
	int32_t x224 = 0;
	volatile int64_t t35 = 129434LL;

	t35 = ((x221^x222)&(x223*x224));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x229 = INT32_MAX;
	int32_t x231 = 28680;
	uint8_t x232 = UINT8_MAX;

	t36 = ((x229^x230)&(x231*x232));

	if (t36 != 7313400) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x233 = INT16_MAX;
	volatile int64_t x234 = INT64_MIN;
	int16_t x235 = -228;
	int64_t t37 = 51897128134029104LL;

	t37 = ((x233^x234)&(x235*x236));

	if (t37 != 14444LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	int8_t x240 = INT8_MAX;
	static int64_t t38 = -11528LL;

	t38 = ((x237^x238)&(x239*x240));

	if (t38 != 8322944LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x241 = 204068813038LL;
	volatile int16_t x242 = -2;
	uint16_t x243 = 338U;
	volatile int32_t x244 = -1;

	t39 = ((x241^x242)&(x243*x244));

	if (t39 != -204068813312LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x245 = -15LL;
	int64_t x246 = INT64_MIN;
	volatile uint64_t x247 = 197LLU;
	uint64_t x248 = UINT64_MAX;

	t40 = ((x245^x246)&(x247*x248));

	if (t40 != 9223372036854775601LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x250 = UINT64_MAX;
	static uint32_t x251 = 360788427U;
	volatile uint64_t t41 = 264LLU;

	t41 = ((x249^x250)&(x251*x252));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x253 = INT32_MAX;
	uint16_t x254 = 43U;
	uint16_t x255 = 257U;
	uint16_t x256 = 27284U;
	volatile int32_t t42 = 27158;

	t42 = ((x253^x254)&(x255*x256));

	if (t42 != 7011988) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x258 = UINT32_MAX;
	uint32_t x259 = 44708U;
	uint8_t x260 = UINT8_MAX;
	volatile uint32_t t43 = 206U;

	t43 = ((x257^x258)&(x259*x260));

	if (t43 != 30044U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x278 = -1;
	int32_t x279 = -1;
	static uint8_t x280 = 109U;
	volatile int32_t t44 = -170;

	t44 = ((x277^x278)&(x279*x280));

	if (t44 != -126) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x281 = INT64_MIN;
	int16_t x282 = INT16_MIN;
	uint64_t t45 = 57125LLU;

	t45 = ((x281^x282)&(x283*x284));

	if (t45 != 1425211392LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x285 = UINT16_MAX;
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 12179978U;
	static int8_t x288 = 0;
	uint32_t t46 = 3671987U;

	t46 = ((x285^x286)&(x287*x288));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x289 = 1;
	uint8_t x290 = 73U;
	volatile int32_t x291 = -1;
	int8_t x292 = INT8_MIN;
	volatile int32_t t47 = -709932;

	t47 = ((x289^x290)&(x291*x292));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x297 = INT64_MAX;
	uint8_t x298 = UINT8_MAX;
	int32_t x300 = 58;
	volatile int64_t t48 = -13999169140636173LL;

	t48 = ((x297^x298)&(x299*x300));

	if (t48 != 14592LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x301 = -66;
	volatile uint16_t x302 = 7U;
	volatile uint32_t x303 = UINT32_MAX;
	uint16_t x304 = 0U;
	volatile uint32_t t49 = 6U;

	t49 = ((x301^x302)&(x303*x304));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x305 = -1;
	uint32_t x306 = 2U;
	volatile uint8_t x307 = 5U;
	static uint32_t t50 = 868148U;

	t50 = ((x305^x306)&(x307*x308));

	if (t50 != 4294803456U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 25U;
	uint8_t x311 = 3U;
	volatile uint32_t t51 = 1831809780U;

	t51 = ((x309^x310)&(x311*x312));

	if (t51 != 4294966912U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x318 = INT32_MIN;
	static int16_t x319 = INT16_MIN;
	uint32_t x320 = UINT32_MAX;
	uint32_t t52 = 17368487U;

	t52 = ((x317^x318)&(x319*x320));

	if (t52 != 32768U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x323 = -6LL;
	int16_t x324 = -2227;
	int64_t t53 = 220106537377302LL;

	t53 = ((x321^x322)&(x323*x324));

	if (t53 != 50LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x325 = INT32_MAX;
	int64_t x328 = -1LL;
	static volatile int64_t t54 = 211105LL;

	t54 = ((x325^x326)&(x327*x328));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x329 = 43U;
	int16_t x330 = -3;
	int8_t x332 = INT8_MIN;
	int32_t t55 = 0;

	t55 = ((x329^x330)&(x331*x332));

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x333 = 5;
	uint64_t x334 = 2082294995086LLU;
	uint32_t x335 = UINT32_MAX;
	static uint32_t x336 = 126U;

	t56 = ((x333^x334)&(x335*x336));

	if (t56 != 3530823810LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x337 = INT8_MIN;
	int16_t x339 = 56;
	int8_t x340 = INT8_MAX;
	int32_t t57 = -1;

	t57 = ((x337^x338)&(x339*x340));

	if (t57 != 72) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x345 = INT64_MAX;
	int32_t x347 = -1;
	uint32_t x348 = 664431733U;
	volatile int64_t t58 = 72185LL;

	t58 = ((x345^x346)&(x347*x348));

	if (t58 != 3630535553LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x350 = 126;
	int32_t x351 = -32269272;
	int64_t x352 = 1LL;
	int64_t t59 = -55088LL;

	t59 = ((x349^x350)&(x351*x352));

	if (t59 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x353 = 22560LL;
	volatile int32_t x354 = INT32_MIN;
	static int16_t x355 = INT16_MAX;
	uint16_t x356 = 346U;
	int64_t t60 = 225283LL;

	t60 = ((x353^x354)&(x355*x356));

	if (t60 != 22560LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x361 = UINT16_MAX;
	uint32_t x363 = 55409U;
	volatile uint32_t t61 = 1U;

	t61 = ((x361^x362)&(x363*x364));

	if (t61 != 7676U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x365 = 715U;
	volatile int8_t x366 = -1;
	int64_t x368 = -188457935995006LL;
	static volatile int64_t t62 = 35LL;

	t62 = ((x365^x366)&(x367*x368));

	if (t62 != 3360981044LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x369 = 114979872LLU;
	int16_t x371 = INT16_MIN;
	static int16_t x372 = 10519;
	uint64_t t63 = 1065501075LLU;

	t63 = ((x369^x370)&(x371*x372));

	if (t63 != 38830080LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x373 = -1LL;
	int8_t x374 = INT8_MIN;
	uint32_t x375 = 27800U;
	int8_t x376 = -4;

	t64 = ((x373^x374)&(x375*x376));

	if (t64 != 32LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x378 = 126U;
	int64_t x380 = -346461925LL;
	static volatile int64_t t65 = 16797LL;

	t65 = ((x377^x378)&(x379*x380));

	if (t65 != 1228150401LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x384 = 137382002777838384LLU;
	static volatile uint64_t t66 = 624981765515135LLU;

	t66 = ((x381^x382)&(x383*x384));

	if (t66 != 225024000LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x385 = 3;
	int64_t x386 = -1LL;
	int8_t x388 = INT8_MIN;
	static int64_t t67 = 12996LL;

	t67 = ((x385^x386)&(x387*x388));

	if (t67 != 128LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x390 = INT32_MIN;
	static uint32_t x391 = 3579U;
	volatile uint64_t x392 = 3373614838696LLU;

	t68 = ((x389^x390)&(x391*x392));

	if (t68 != 826355128LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x401 = -1;
	int8_t x402 = -1;
	volatile int32_t x403 = -1;
	int64_t x404 = INT64_MAX;
	int64_t t69 = 13356LL;

	t69 = ((x401^x402)&(x403*x404));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x405 = INT64_MAX;
	volatile int8_t x407 = -1;
	int16_t x408 = -225;

	t70 = ((x405^x406)&(x407*x408));

	if (t70 != 224LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x411 = UINT32_MAX;
	uint16_t x412 = 6U;

	t71 = ((x409^x410)&(x411*x412));

	if (t71 != 32762U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x413 = INT32_MAX;
	static uint32_t x415 = UINT32_MAX;
	int16_t x416 = INT16_MIN;

	t72 = ((x413^x414)&(x415*x416));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x418 = INT32_MAX;
	int16_t x419 = -115;
	int64_t t73 = 1LL;

	t73 = ((x417^x418)&(x419*x420));

	if (t73 != 3768320LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x421 = UINT8_MAX;
	uint16_t x423 = 6940U;
	uint8_t x424 = UINT8_MAX;
	static int64_t t74 = -60LL;

	t74 = ((x421^x422)&(x423*x424));

	if (t74 != 228LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x426 = -1LL;
	int32_t x427 = -54996741;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t75 = 10513583097836091LLU;

	t75 = ((x425^x426)&(x427*x428));

	if (t75 != 54996741LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x429 = -1LL;
	volatile uint32_t x431 = 219U;
	static int16_t x432 = -3757;
	volatile int64_t t76 = -59683053LL;

	t76 = ((x429^x430)&(x431*x432));

	if (t76 != 4149297665LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x433 = 7112;
	static volatile int16_t x436 = INT16_MIN;
	int64_t t77 = 15065927LL;

	t77 = ((x433^x434)&(x435*x436));

	if (t77 != -170937140642578432LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x437 = -445241833695428031LL;
	static uint32_t x438 = 780U;
	int32_t x439 = INT32_MAX;
	int64_t t78 = 23142972156216LL;

	t78 = ((x437^x438)&(x439*x440));

	if (t78 != -445241834894000127LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x441 = INT16_MAX;
	volatile int16_t x443 = 509;
	volatile uint8_t x444 = UINT8_MAX;
	int32_t t79 = -38;

	t79 = ((x441^x442)&(x443*x444));

	if (t79 != 129795) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x446 = -144;
	int16_t x447 = INT16_MIN;
	static uint64_t x448 = UINT64_MAX;

	t80 = ((x445^x446)&(x447*x448));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x449 = UINT16_MAX;
	uint64_t x450 = 8823828053LLU;
	static volatile int16_t x451 = INT16_MIN;
	static volatile int16_t x452 = INT16_MIN;
	volatile uint64_t t81 = 55LLU;

	t81 = ((x449^x450)&(x451*x452));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x456 = -1;
	volatile int32_t t82 = 5648;

	t82 = ((x453^x454)&(x455*x456));

	if (t82 != 32765) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x465 = 49U;
	uint8_t x466 = 12U;
	int8_t x467 = 0;
	static int64_t t83 = -176LL;

	t83 = ((x465^x466)&(x467*x468));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x470 = UINT16_MAX;
	int16_t x471 = 4913;

	t84 = ((x469^x470)&(x471*x472));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x477 = UINT8_MAX;
	int64_t x478 = 45687263703310LL;
	int16_t x479 = -1;
	static int8_t x480 = -49;
	volatile int64_t t85 = -1410553076061469LL;

	t85 = ((x477^x478)&(x479*x480));

	if (t85 != 49LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x481 = 99U;
	int64_t x482 = 104826367417245LL;
	int64_t x483 = INT64_MAX;
	volatile int64_t t86 = 2004107008496730702LL;

	t86 = ((x481^x482)&(x483*x484));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x485 = INT64_MIN;
	int8_t x486 = INT8_MAX;
	int64_t x487 = -1LL;
	uint32_t x488 = UINT32_MAX;
	volatile int64_t t87 = 67952792689352LL;

	t87 = ((x485^x486)&(x487*x488));

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x489 = UINT32_MAX;
	volatile uint16_t x490 = 11U;
	int8_t x491 = 57;
	uint64_t t88 = 622943019893996LLU;

	t88 = ((x489^x490)&(x491*x492));

	if (t88 != 4294967236LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x493 = -446173160;
	volatile uint8_t x494 = 4U;
	int8_t x495 = -1;
	volatile int8_t x496 = INT8_MIN;

	t89 = ((x493^x494)&(x495*x496));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x510 = 131;
	volatile uint32_t x511 = 774120435U;
	uint32_t t90 = 2784U;

	t90 = ((x509^x510)&(x511*x512));

	if (t90 != 3993403392U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x513 = INT8_MIN;
	uint64_t x514 = UINT64_MAX;
	uint8_t x515 = 1U;
	uint8_t x516 = UINT8_MAX;
	static uint64_t t91 = 2227504043663585LLU;

	t91 = ((x513^x514)&(x515*x516));

	if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x517 = INT32_MIN;
	uint8_t x518 = 0U;
	int64_t x519 = INT64_MAX;
	volatile int64_t x520 = -1LL;
	static int64_t t92 = INT64_MIN;

	t92 = ((x517^x518)&(x519*x520));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x521 = 1;
	uint32_t x523 = 5103U;
	int16_t x524 = -1271;
	uint64_t t93 = 10362304453704276LLU;

	t93 = ((x521^x522)&(x523*x524));

	if (t93 != 4288481382LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x526 = 15221575534677591LLU;
	int16_t x527 = 1;
	static uint16_t x528 = UINT16_MAX;
	volatile uint64_t t94 = 116781506938LLU;

	t94 = ((x525^x526)&(x527*x528));

	if (t94 != 29096LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x529 = 178305323LLU;
	volatile uint32_t x530 = 7U;
	volatile int16_t x531 = 0;
	static volatile int8_t x532 = -7;
	uint64_t t95 = 136120593794790141LLU;

	t95 = ((x529^x530)&(x531*x532));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x533 = -1;
	int64_t x534 = -1LL;
	uint64_t x536 = 94147454219LLU;
	static volatile uint64_t t96 = 56519LLU;

	t96 = ((x533^x534)&(x535*x536));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x539 = UINT32_MAX;
	uint32_t x540 = UINT32_MAX;
	volatile uint32_t t97 = 45792U;

	t97 = ((x537^x538)&(x539*x540));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x545 = UINT16_MAX;
	uint64_t x546 = 2716LLU;
	int16_t x547 = 0;
	uint64_t t98 = 73415LLU;

	t98 = ((x545^x546)&(x547*x548));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x549 = 6U;
	static volatile uint64_t x550 = 16833404518887697LLU;
	volatile uint64_t t99 = 16886924238LLU;

	t99 = ((x549^x550)&(x551*x552));

	if (t99 != 2363670LLU) { NG(); } else { ; }
	
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

