#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = 2LLU;
int16_t x12 = INT16_MAX;
int32_t x27 = 490995666;
volatile int32_t t4 = -229945091;
uint64_t x37 = 225LLU;
uint64_t t5 = 14965LLU;
uint8_t x44 = 62U;
int32_t x46 = 54;
int8_t x47 = -5;
volatile int32_t x48 = -1;
int32_t x64 = INT32_MIN;
int32_t x74 = INT32_MAX;
volatile uint64_t x76 = 71793105036405148LLU;
static uint32_t t14 = 24810576U;
uint64_t x117 = UINT64_MAX;
volatile int64_t x136 = 0LL;
int8_t x149 = INT8_MAX;
int8_t x159 = 0;
uint64_t t20 = 3505098310LLU;
volatile int32_t x165 = 174220;
volatile int16_t x170 = 1;
uint32_t t22 = 2084781U;
int32_t x180 = -444302727;
static volatile int8_t x191 = INT8_MIN;
uint64_t x192 = 3603602920444003LLU;
volatile int32_t t26 = -19063619;
uint16_t x195 = 0U;
static uint32_t x197 = 1U;
uint64_t x198 = UINT64_MAX;
uint16_t x200 = 2892U;
uint32_t x201 = 308602U;
volatile uint32_t t29 = 1067265U;
static uint16_t x221 = UINT16_MAX;
volatile uint64_t x228 = 20963187373887LLU;
uint32_t t34 = 9440540U;
int32_t x273 = -1;
static int8_t x276 = INT8_MIN;
volatile uint64_t t40 = 20798289156733898LLU;
volatile int16_t x320 = -15077;
volatile int64_t t41 = -38872421037138LL;
uint32_t t43 = 16305U;
int8_t x342 = INT8_MAX;
volatile uint8_t x344 = 1U;
uint64_t x350 = 557184720809855743LLU;
int32_t x355 = -1;
int8_t x356 = -3;
uint16_t x365 = 11U;
uint32_t x390 = UINT32_MAX;
int32_t x391 = 3286427;
int16_t x397 = -1;
uint32_t t56 = 66756576U;
volatile int16_t x412 = INT16_MIN;
static int64_t x415 = 28004577LL;
int64_t x419 = INT64_MAX;
int8_t x432 = INT8_MAX;
static volatile uint16_t x455 = UINT16_MAX;
static volatile uint16_t x466 = 2659U;
volatile int8_t x467 = INT8_MAX;
uint32_t x486 = UINT32_MAX;
static int64_t x488 = 1LL;
uint8_t x493 = UINT8_MAX;
static uint16_t x505 = 1U;
volatile int16_t x508 = INT16_MAX;
static uint8_t x519 = 14U;
int64_t x522 = 70111930307338LL;
uint64_t x531 = 7869263208689009LLU;
int16_t x535 = 2;
int32_t x538 = 378;
uint64_t x539 = 6773915636106LLU;
static int8_t x559 = INT8_MAX;
uint64_t x562 = 484010596779LLU;
uint64_t t78 = 2251LLU;
static int64_t t79 = 93302LL;
volatile int8_t x585 = INT8_MIN;
static uint64_t x586 = UINT64_MAX;
volatile uint64_t x587 = 64148145897LLU;
static uint64_t t80 = 15642LLU;
uint64_t t81 = 4441956559410613349LLU;
volatile int8_t x601 = -1;
int64_t t82 = -24896LL;
uint64_t t83 = 371119LLU;
volatile int8_t x644 = -1;
int8_t x648 = INT8_MIN;
int64_t x655 = INT64_MIN;
uint16_t x661 = 0U;
static int64_t t89 = 0LL;
int8_t x671 = 1;
volatile int32_t t90 = 253;
int16_t x681 = INT16_MIN;
uint16_t x683 = UINT16_MAX;
volatile uint32_t x694 = 374U;
static uint64_t x696 = UINT64_MAX;
uint16_t x717 = 13U;
static volatile uint8_t x720 = 9U;
volatile int32_t t96 = 179122153;
int32_t x721 = INT32_MIN;
static uint32_t x722 = 216485U;
int16_t x729 = INT16_MAX;


void f0(void) {
	volatile uint64_t x1 = 46587363568960LLU;
	uint32_t x2 = 155U;
	static int64_t x3 = INT64_MAX;
	volatile int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 4248667919609LLU;

	t0 = (x1-(x2>>(x3<=x4)));

	if (t0 != 46587363568805LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int64_t x6 = 234405641634LL;
	int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	int64_t t1 = 528341LL;

	t1 = (x5-(x6>>(x7<=x8)));

	if (t1 != -112907853522LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -10255;
	static int16_t x11 = INT16_MIN;
	uint64_t t2 = 861LLU;

	t2 = (x9-(x10>>(x11<=x12)));

	if (t2 != 18446744073709541360LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x25 = 13U;
	int32_t x26 = 1;
	int64_t x28 = 3718312390741707LL;
	volatile int32_t t3 = 1072183;

	t3 = (x25-(x26>>(x27<=x28)));

	if (t3 != 13) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MAX;
	int8_t x34 = INT8_MAX;
	uint16_t x35 = UINT16_MAX;
	static uint16_t x36 = 23U;

	t4 = (x33-(x34>>(x35<=x36)));

	if (t4 != 2147483520) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x38 = INT32_MAX;
	uint32_t x39 = 6419U;
	int16_t x40 = INT16_MAX;

	t5 = (x37-(x38>>(x39<=x40)));

	if (t5 != 18446744072635810018LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x41 = 3123;
	volatile int32_t x42 = INT32_MAX;
	uint64_t x43 = 179LLU;
	static int32_t t6 = -3;

	t6 = (x41-(x42>>(x43<=x44)));

	if (t6 != -2147480524) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x45 = 3U;
	int32_t t7 = 59077991;

	t7 = (x45-(x46>>(x47<=x48)));

	if (t7 != -24) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x61 = UINT16_MAX;
	static uint8_t x62 = 58U;
	volatile int16_t x63 = -1;
	volatile int32_t t8 = 11468;

	t8 = (x61-(x62>>(x63<=x64)));

	if (t8 != 65477) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = 1;
	int16_t x70 = INT16_MAX;
	volatile uint64_t x71 = 467100822403378838LLU;
	static volatile int32_t x72 = 231547936;
	static int32_t t9 = 216835;

	t9 = (x69-(x70>>(x71<=x72)));

	if (t9 != -32766) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x73 = 16699015LLU;
	static volatile uint64_t x75 = UINT64_MAX;
	static uint64_t t10 = 187613183077092LLU;

	t10 = (x73-(x74>>(x75<=x76)));

	if (t10 != 18446744071578766984LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x77 = INT8_MIN;
	static volatile int32_t x78 = 0;
	int16_t x79 = -6124;
	int8_t x80 = -1;
	int32_t t11 = -121042853;

	t11 = (x77-(x78>>(x79<=x80)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x85 = 55U;
	volatile uint16_t x86 = 866U;
	int32_t x87 = INT32_MAX;
	uint16_t x88 = 11U;
	static int32_t t12 = 58731447;

	t12 = (x85-(x86>>(x87<=x88)));

	if (t12 != -811) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x89 = 0U;
	int32_t x90 = 1;
	static int16_t x91 = -1;
	int64_t x92 = -61664LL;
	volatile int32_t t13 = 325180866;

	t13 = (x89-(x90>>(x91<=x92)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x101 = 19208380U;
	volatile int8_t x102 = 8;
	static int8_t x103 = 6;
	volatile int32_t x104 = INT32_MIN;

	t14 = (x101-(x102>>(x103<=x104)));

	if (t14 != 19208372U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x118 = UINT64_MAX;
	static int8_t x119 = -6;
	int64_t x120 = -1LL;
	volatile uint64_t t15 = 15784252181638LLU;

	t15 = (x117-(x118>>(x119<=x120)));

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x133 = -7884;
	volatile uint16_t x134 = 18U;
	uint32_t x135 = UINT32_MAX;
	int32_t t16 = 65152206;

	t16 = (x133-(x134>>(x135<=x136)));

	if (t16 != -7902) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x137 = -1;
	volatile uint8_t x138 = UINT8_MAX;
	volatile uint64_t x139 = 15499503592LLU;
	uint16_t x140 = 30676U;
	volatile int32_t t17 = -12;

	t17 = (x137-(x138>>(x139<=x140)));

	if (t17 != -256) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x141 = -1;
	uint64_t x142 = 546290226379275LLU;
	uint32_t x143 = 2624U;
	int16_t x144 = INT16_MIN;
	uint64_t t18 = 119353197648612LLU;

	t18 = (x141-(x142>>(x143<=x144)));

	if (t18 != 18446470928596361978LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x150 = INT8_MAX;
	static int32_t x151 = -1949;
	static uint16_t x152 = UINT16_MAX;
	volatile int32_t t19 = 169826519;

	t19 = (x149-(x150>>(x151<=x152)));

	if (t19 != 64) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x157 = INT8_MIN;
	static uint64_t x158 = UINT64_MAX;
	volatile int32_t x160 = -1318;

	t20 = (x157-(x158>>(x159<=x160)));

	if (t20 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x166 = 4401482LL;
	uint16_t x167 = 8U;
	static uint8_t x168 = 0U;
	volatile int64_t t21 = -1627072LL;

	t21 = (x165-(x166>>(x167<=x168)));

	if (t21 != -4227262LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x171 = INT16_MAX;
	int16_t x172 = INT16_MIN;

	t22 = (x169-(x170>>(x171<=x172)));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x173 = -26;
	uint8_t x174 = UINT8_MAX;
	static uint16_t x175 = 8U;
	uint64_t x176 = 318070837020938754LLU;
	volatile int32_t t23 = 1;

	t23 = (x173-(x174>>(x175<=x176)));

	if (t23 != -153) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x177 = -1;
	volatile uint8_t x178 = 59U;
	static uint64_t x179 = 1969038LLU;
	static int32_t t24 = 319;

	t24 = (x177-(x178>>(x179<=x180)));

	if (t24 != -30) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x182 = 1648495LLU;
	volatile int16_t x183 = 512;
	int32_t x184 = -1;
	volatile uint64_t t25 = 24932425766657773LLU;

	t25 = (x181-(x182>>(x183<=x184)));

	if (t25 != 18446744073707870353LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x189 = -7;
	volatile int16_t x190 = 6;

	t26 = (x189-(x190>>(x191<=x192)));

	if (t26 != -13) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x193 = INT16_MIN;
	volatile int32_t x194 = INT32_MAX;
	volatile int8_t x196 = INT8_MAX;
	int32_t t27 = -54;

	t27 = (x193-(x194>>(x195<=x196)));

	if (t27 != -1073774591) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x199 = 2849U;
	uint64_t t28 = 52837514324684LLU;

	t28 = (x197-(x198>>(x199<=x200)));

	if (t28 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x202 = 3;
	uint8_t x203 = UINT8_MAX;
	int32_t x204 = -1;

	t29 = (x201-(x202>>(x203<=x204)));

	if (t29 != 308599U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x213 = UINT16_MAX;
	static int16_t x214 = 378;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = 15178U;
	int32_t t30 = -84;

	t30 = (x213-(x214>>(x215<=x216)));

	if (t30 != 65346) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x217 = -7651017;
	volatile uint16_t x218 = 6U;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;
	static int32_t t31 = -19238477;

	t31 = (x217-(x218>>(x219<=x220)));

	if (t31 != -7651020) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x222 = INT8_MAX;
	static int32_t x223 = -1;
	int8_t x224 = INT8_MAX;
	volatile int32_t t32 = 8;

	t32 = (x221-(x222>>(x223<=x224)));

	if (t32 != 65472) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x225 = 0;
	volatile uint8_t x226 = 2U;
	int64_t x227 = INT64_MIN;
	int32_t t33 = 21455824;

	t33 = (x225-(x226>>(x227<=x228)));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x249 = UINT8_MAX;
	static uint32_t x250 = UINT32_MAX;
	uint16_t x251 = 57U;
	int32_t x252 = INT32_MAX;

	t34 = (x249-(x250>>(x251<=x252)));

	if (t34 != 2147483904U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x265 = 0;
	int8_t x266 = 1;
	int16_t x267 = INT16_MIN;
	int16_t x268 = -27;
	static int32_t t35 = 25048972;

	t35 = (x265-(x266>>(x267<=x268)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x274 = 3842;
	int8_t x275 = INT8_MIN;
	volatile int32_t t36 = 95102191;

	t36 = (x273-(x274>>(x275<=x276)));

	if (t36 != -1922) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x277 = -1;
	int32_t x278 = INT32_MAX;
	int16_t x279 = INT16_MIN;
	int32_t x280 = -1;
	volatile int32_t t37 = -3;

	t37 = (x277-(x278>>(x279<=x280)));

	if (t37 != -1073741824) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x285 = INT8_MAX;
	static int8_t x286 = INT8_MAX;
	int32_t x287 = -610776;
	static int8_t x288 = -1;
	int32_t t38 = -271266680;

	t38 = (x285-(x286>>(x287<=x288)));

	if (t38 != 64) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x301 = -11;
	uint64_t x302 = 14527079403LLU;
	int16_t x303 = -1;
	uint64_t x304 = 25410295425071081LLU;
	volatile uint64_t t39 = 2356511LLU;

	t39 = (x301-(x302>>(x303<=x304)));

	if (t39 != 18446744059182472202LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = UINT64_MAX;
	volatile int32_t x315 = INT32_MIN;
	volatile int8_t x316 = -1;

	t40 = (x313-(x314>>(x315<=x316)));

	if (t40 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x317 = 112U;
	int64_t x318 = 106008LL;
	uint32_t x319 = UINT32_MAX;

	t41 = (x317-(x318>>(x319<=x320)));

	if (t41 != -105896LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x321 = -1;
	volatile uint64_t x322 = 4669131301183LLU;
	int8_t x323 = 48;
	static uint64_t x324 = 120035659203LLU;
	uint64_t t42 = 10350833028669535LLU;

	t42 = (x321-(x322>>(x323<=x324)));

	if (t42 != 18446741739143901024LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x333 = INT16_MIN;
	uint32_t x334 = UINT32_MAX;
	int64_t x335 = -912206634990537632LL;
	int64_t x336 = -1LL;

	t43 = (x333-(x334>>(x335<=x336)));

	if (t43 != 2147450881U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x337 = INT8_MIN;
	static uint32_t x338 = 2U;
	volatile int16_t x339 = -246;
	volatile int64_t x340 = -1LL;
	uint32_t t44 = 41225637U;

	t44 = (x337-(x338>>(x339<=x340)));

	if (t44 != 4294967167U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x341 = -1;
	int32_t x343 = -179;
	static volatile int32_t t45 = 7043805;

	t45 = (x341-(x342>>(x343<=x344)));

	if (t45 != -64) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x345 = -1;
	volatile int16_t x346 = 2890;
	volatile uint32_t x347 = 1153049U;
	int16_t x348 = -1;
	static volatile int32_t t46 = 9028;

	t46 = (x345-(x346>>(x347<=x348)));

	if (t46 != -1446) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x349 = 217U;
	uint8_t x351 = 0U;
	int64_t x352 = -1LL;
	uint64_t t47 = 940955LLU;

	t47 = (x349-(x350>>(x351<=x352)));

	if (t47 != 17889559352899696090LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x353 = UINT8_MAX;
	int16_t x354 = 1;
	volatile int32_t t48 = 137266411;

	t48 = (x353-(x354>>(x355<=x356)));

	if (t48 != 254) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x357 = 21358U;
	int8_t x358 = INT8_MAX;
	static int16_t x359 = INT16_MIN;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t49 = 1525;

	t49 = (x357-(x358>>(x359<=x360)));

	if (t49 != 21295) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x361 = -1LL;
	volatile int64_t x362 = INT64_MAX;
	static volatile int64_t x363 = -8080295347180LL;
	int64_t x364 = 20LL;
	volatile int64_t t50 = 44LL;

	t50 = (x361-(x362>>(x363<=x364)));

	if (t50 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x366 = INT16_MAX;
	int64_t x367 = -1LL;
	uint32_t x368 = 44684U;
	volatile int32_t t51 = 26723;

	t51 = (x365-(x366>>(x367<=x368)));

	if (t51 != -16372) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x377 = UINT64_MAX;
	uint16_t x378 = 0U;
	uint32_t x379 = 243789U;
	static int8_t x380 = INT8_MIN;
	uint64_t t52 = UINT64_MAX;

	t52 = (x377-(x378>>(x379<=x380)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x389 = -1;
	int8_t x392 = 9;
	volatile uint32_t t53 = 82431U;

	t53 = (x389-(x390>>(x391<=x392)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x398 = 19U;
	uint64_t x399 = 551LLU;
	volatile int64_t x400 = -1LL;
	int32_t t54 = 30;

	t54 = (x397-(x398>>(x399<=x400)));

	if (t54 != -10) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x401 = 2656311647307011LLU;
	uint8_t x402 = 3U;
	uint64_t x403 = UINT64_MAX;
	static volatile uint64_t x404 = 128207532785970021LLU;
	volatile uint64_t t55 = 13957999LLU;

	t55 = (x401-(x402>>(x403<=x404)));

	if (t55 != 2656311647307008LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x405 = 18;
	uint32_t x406 = 1135U;
	int32_t x407 = -1;
	uint16_t x408 = 136U;

	t56 = (x405-(x406>>(x407<=x408)));

	if (t56 != 4294966747U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x409 = 1864U;
	uint8_t x410 = 0U;
	int16_t x411 = -1;
	int32_t t57 = 365635295;

	t57 = (x409-(x410>>(x411<=x412)));

	if (t57 != 1864) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x413 = INT8_MIN;
	uint32_t x414 = UINT32_MAX;
	volatile int32_t x416 = INT32_MAX;
	uint32_t t58 = 3U;

	t58 = (x413-(x414>>(x415<=x416)));

	if (t58 != 2147483521U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x417 = 1;
	static int16_t x418 = INT16_MAX;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t59 = -7498;

	t59 = (x417-(x418>>(x419<=x420)));

	if (t59 != -32766) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x429 = INT16_MIN;
	uint16_t x430 = UINT16_MAX;
	int64_t x431 = INT64_MIN;
	static int32_t t60 = 64576;

	t60 = (x429-(x430>>(x431<=x432)));

	if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x437 = 6;
	uint64_t x438 = UINT64_MAX;
	int64_t x439 = 2LL;
	int16_t x440 = INT16_MAX;
	uint64_t t61 = 6144564943632LLU;

	t61 = (x437-(x438>>(x439<=x440)));

	if (t61 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x441 = 78957;
	int64_t x442 = INT64_MAX;
	static int64_t x443 = INT64_MAX;
	uint16_t x444 = 17242U;
	int64_t t62 = -1486090959526265LL;

	t62 = (x441-(x442>>(x443<=x444)));

	if (t62 != -9223372036854696850LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x445 = -2043;
	static uint64_t x446 = 19LLU;
	volatile int16_t x447 = -4970;
	int32_t x448 = -1;
	volatile uint64_t t63 = 15LLU;

	t63 = (x445-(x446>>(x447<=x448)));

	if (t63 != 18446744073709549564LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x453 = -1;
	volatile uint32_t x454 = 4468U;
	static uint16_t x456 = 8006U;
	volatile uint32_t t64 = 14U;

	t64 = (x453-(x454>>(x455<=x456)));

	if (t64 != 4294962827U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x465 = 5U;
	int16_t x468 = INT16_MAX;
	volatile uint32_t t65 = 3U;

	t65 = (x465-(x466>>(x467<=x468)));

	if (t65 != 4294965972U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x485 = 8203U;
	uint32_t x487 = 66U;
	volatile uint32_t t66 = 1279174U;

	t66 = (x485-(x486>>(x487<=x488)));

	if (t66 != 8204U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x494 = 7LLU;
	volatile int64_t x495 = -121303103920706401LL;
	uint16_t x496 = 47U;
	uint64_t t67 = 4292009LLU;

	t67 = (x493-(x494>>(x495<=x496)));

	if (t67 != 252LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x501 = INT16_MIN;
	uint16_t x502 = UINT16_MAX;
	static int64_t x503 = -1LL;
	static volatile int16_t x504 = -1;
	volatile int32_t t68 = -10289537;

	t68 = (x501-(x502>>(x503<=x504)));

	if (t68 != -65535) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x506 = 2087002U;
	int64_t x507 = INT64_MIN;
	uint32_t t69 = 69815U;

	t69 = (x505-(x506>>(x507<=x508)));

	if (t69 != 4293923796U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x517 = 56U;
	volatile int8_t x518 = 1;
	int16_t x520 = INT16_MIN;
	volatile uint32_t t70 = 2343U;

	t70 = (x517-(x518>>(x519<=x520)));

	if (t70 != 55U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x521 = 1;
	static volatile int64_t x523 = INT64_MIN;
	volatile int64_t x524 = INT64_MIN;
	static volatile int64_t t71 = -257LL;

	t71 = (x521-(x522>>(x523<=x524)));

	if (t71 != -35055965153668LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x529 = INT32_MAX;
	uint16_t x530 = 172U;
	int32_t x532 = INT32_MAX;
	int32_t t72 = 125755983;

	t72 = (x529-(x530>>(x531<=x532)));

	if (t72 != 2147483475) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x533 = UINT16_MAX;
	uint64_t x534 = UINT64_MAX;
	volatile int32_t x536 = -57669;
	uint64_t t73 = 1203792LLU;

	t73 = (x533-(x534>>(x535<=x536)));

	if (t73 != 65536LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x537 = 266360130291232878LL;
	int32_t x540 = -1;
	volatile int64_t t74 = 1671LL;

	t74 = (x537-(x538>>(x539<=x540)));

	if (t74 != 266360130291232689LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x545 = 2197410U;
	int64_t x546 = INT64_MAX;
	uint64_t x547 = 4070339LLU;
	int16_t x548 = INT16_MIN;
	int64_t t75 = -6741639327873108LL;

	t75 = (x545-(x546>>(x547<=x548)));

	if (t75 != -4611686018425190493LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x553 = UINT64_MAX;
	int32_t x554 = 10;
	int64_t x555 = 269585689LL;
	static int64_t x556 = -4843875982088LL;
	uint64_t t76 = 821596016099LLU;

	t76 = (x553-(x554>>(x555<=x556)));

	if (t76 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x557 = UINT8_MAX;
	int64_t x558 = 405202894474940362LL;
	int8_t x560 = -1;
	int64_t t77 = -6LL;

	t77 = (x557-(x558>>(x559<=x560)));

	if (t77 != -405202894474940107LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x561 = INT16_MIN;
	static int32_t x563 = 221848395;
	volatile uint16_t x564 = 285U;

	t78 = (x561-(x562>>(x563<=x564)));

	if (t78 != 18446743589698922069LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x581 = -1LL;
	static int8_t x582 = 1;
	int16_t x583 = INT16_MIN;
	int64_t x584 = INT64_MIN;

	t79 = (x581-(x582>>(x583<=x584)));

	if (t79 != -2LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x588 = 106662962399251LLU;

	t80 = (x585-(x586>>(x587<=x588)));

	if (t80 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x597 = UINT64_MAX;
	uint8_t x598 = UINT8_MAX;
	static uint32_t x599 = 143U;
	uint64_t x600 = 517616665354LLU;

	t81 = (x597-(x598>>(x599<=x600)));

	if (t81 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x602 = INT64_MAX;
	int8_t x603 = INT8_MIN;
	volatile int32_t x604 = 114;

	t82 = (x601-(x602>>(x603<=x604)));

	if (t82 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x605 = INT8_MIN;
	uint64_t x606 = 10LLU;
	uint64_t x607 = 109278515LLU;
	int64_t x608 = 19194LL;

	t83 = (x605-(x606>>(x607<=x608)));

	if (t83 != 18446744073709551478LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x609 = -1;
	uint16_t x610 = 7278U;
	uint32_t x611 = UINT32_MAX;
	int8_t x612 = -1;
	int32_t t84 = 8386;

	t84 = (x609-(x610>>(x611<=x612)));

	if (t84 != -3640) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x641 = -854893012511080LL;
	uint8_t x642 = 12U;
	static int8_t x643 = INT8_MIN;
	volatile int64_t t85 = 51397553454094LL;

	t85 = (x641-(x642>>(x643<=x644)));

	if (t85 != -854893012511086LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x645 = 0U;
	volatile int32_t x646 = INT32_MAX;
	static int16_t x647 = INT16_MIN;
	int32_t t86 = 1352;

	t86 = (x645-(x646>>(x647<=x648)));

	if (t86 != -1073741823) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x653 = INT8_MAX;
	int64_t x654 = 245633361929975LL;
	int32_t x656 = 2587;
	volatile int64_t t87 = -442122255687140701LL;

	t87 = (x653-(x654>>(x655<=x656)));

	if (t87 != -122816680964860LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x662 = INT8_MAX;
	static int16_t x663 = 204;
	int64_t x664 = -449713555LL;
	int32_t t88 = -510612247;

	t88 = (x661-(x662>>(x663<=x664)));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x665 = -1LL;
	volatile uint8_t x666 = 7U;
	int64_t x667 = INT64_MAX;
	int32_t x668 = 63;

	t89 = (x665-(x666>>(x667<=x668)));

	if (t89 != -8LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x669 = INT32_MAX;
	int8_t x670 = INT8_MAX;
	static int8_t x672 = -15;

	t90 = (x669-(x670>>(x671<=x672)));

	if (t90 != 2147483520) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x673 = INT16_MIN;
	uint32_t x674 = 2274274U;
	static int8_t x675 = -1;
	int16_t x676 = 10798;
	volatile uint32_t t91 = 11854627U;

	t91 = (x673-(x674>>(x675<=x676)));

	if (t91 != 4293797391U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x677 = -1;
	int64_t x678 = INT64_MAX;
	uint16_t x679 = UINT16_MAX;
	int64_t x680 = -499155647329LL;
	int64_t t92 = INT64_MIN;

	t92 = (x677-(x678>>(x679<=x680)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x682 = 315811LLU;
	uint32_t x684 = 35811685U;
	static uint64_t t93 = 117LLU;

	t93 = (x681-(x682>>(x683<=x684)));

	if (t93 != 18446744073709360943LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x685 = -1;
	static volatile uint8_t x686 = 49U;
	int8_t x687 = -3;
	volatile uint64_t x688 = 32587787459LLU;
	volatile int32_t t94 = -1;

	t94 = (x685-(x686>>(x687<=x688)));

	if (t94 != -50) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x693 = 18;
	int8_t x695 = 0;
	volatile uint32_t t95 = 61953U;

	t95 = (x693-(x694>>(x695<=x696)));

	if (t95 != 4294967127U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x718 = 1;
	uint64_t x719 = UINT64_MAX;

	t96 = (x717-(x718>>(x719<=x720)));

	if (t96 != 12) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x723 = 5485683U;
	int32_t x724 = INT32_MIN;
	static uint32_t t97 = 379U;

	t97 = (x721-(x722>>(x723<=x724)));

	if (t97 != 2147375406U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x730 = 625007890555LL;
	uint64_t x731 = 1793026LLU;
	int64_t x732 = 9993628835LL;
	volatile int64_t t98 = 43972599003580555LL;

	t98 = (x729-(x730>>(x731<=x732)));

	if (t98 != -312503912510LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x737 = INT8_MAX;
	volatile uint64_t x738 = 61115319LLU;
	uint64_t x739 = 323424217LLU;
	int64_t x740 = 31499850496503012LL;
	static volatile uint64_t t99 = 11LLU;

	t99 = (x737-(x738>>(x739<=x740)));

	if (t99 != 18446744073678994084LLU) { NG(); } else { ; }
	
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

